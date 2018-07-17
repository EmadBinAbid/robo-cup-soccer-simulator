using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 17, 2018
    -------------------------------------------------------------------------------------------------------------------------------------
    InverseKinematics is a class that prepares the functionalities to solve the Inverse Kinematics (IK) problem of the Simspark NAO robot
    (Type_Zero). A geometric approach in solving the inverse kinematics is implemented to calculate the joints angle of feet. The pose of
    the feet will be given as a homogeneous matrix then feet joints angles are calculated. This class is mainly used by the walk engine.
    */
    class InverseKinematics
    {
        private float LENGTH_BETWEEN_LEGS;
        private float UPPER_LEG_LENGTH;
        private float LOWER_LEG_LENGTH;

        public InverseKinematics()
        {
            //The robot leg segments sizes in meter
            this.LENGTH_BETWEEN_LEGS = 0.11f;
            this.UPPER_LEG_LENGTH = 0.12f;
            this.LOWER_LEG_LENGTH = 0.10f;
        }

        public bool calculateLegJoints(HomogeneousMatrix position, List<float> joints, bool isLeft)
        {
            HomogeneousMatrix target = position;
            int sign = 1;
            if (isLeft)
                sign = -1;

            //Translate to the origin of Leg
            target.translate(0, (double)(this.LENGTH_BETWEEN_LEGS / 2) * sign, 0);

            //Rotate by 45° around origin for the SimSpark NAO
            double angOrt = Math.Sqrt(2.0) * 0.5;

            RotationMatrix rotationX_pi_4 = new RotationMatrix(new Point(1, 0, 0), new Point(0, angOrt, angOrt * (-sign)), 
                new Point(0, angOrt * sign, angOrt));
            target.setTranslation(rotationX_pi_4 * target.getTranslation());
            target.setRotation(rotationX_pi_4 * target.getRotation());

            //Solve the inverse kinematics problem based on Cosine Law
            target = target.getInverse();
            double length = (target.getTranslation()).getMagnitude();
            double sqrLength = Math.Pow(length, 2);
            float upperLegLength = this.UPPER_LEG_LENGTH;
            double sqrUpperLegLength = Math.Pow(upperLegLength, 2);
            float lowerLegLength = this.LOWER_LEG_LENGTH;
            double sqrLowerLegLength = Math.Pow(lowerLegLength, 2);
            double cosLowerLeg = (sqrLowerLegLength + sqrLength - sqrUpperLegLength) / (2 * lowerLegLength * length);
            double cosKnee = (sqrUpperLegLength + sqrLowerLegLength - sqrLength) / (2 * upperLegLength * lowerLegLength);

            bool isReachable = true;

            if (!(cosKnee >= -1 && cosKnee <= 1))
            {
                if (cosKnee < -1)
                    cosKnee = -1;
                if (cosKnee > 1)
                    cosKnee = 1;
                if (cosLowerLeg < -1)
                    cosLowerLeg = -1;
                if (cosLowerLeg > 1)
                    cosLowerLeg = 1;
                isReachable = false;
            }

            double angKnee = Geometry.PI - Math.Acos(cosKnee);

            double angFootPitch = -Math.Acos(cosLowerLeg);

            angFootPitch -= Math.Atan2(target.getTranslation().GetX(), new Point(0, target.getTranslation().GetY(), 
                target.getTranslation().GetZ()).getMagnitude());

            double angFootRoll = Math.Atan2(target.getTranslation().GetY(), target.getTranslation().GetZ()) * sign;

            RotationMatrix hipFromFoot = new RotationMatrix();
            hipFromFoot.rotateX(angFootRoll * -sign);
            hipFromFoot.rotateY(-angFootPitch - angKnee);

            RotationMatrix hip = hipFromFoot.getInverse() * target.getRotation();

            double angHipRoll = Math.Asin(-hip.line1.GetZ()) * -sign;
            angHipRoll -= Geometry.PI / 4;

            double angHipPitch = -Math.Atan2(hip.line0.GetZ(), hip.line2.GetZ());
            double angHipYaw = Math.Atan2(hip.line1.GetX(), hip.line1.GetY()) * -sign;

            //Set computed joints in joints list
            joints.Clear();

            joints.Add((float)Geometry.convertRadianToDegree(angHipYaw));
            joints.Add((float)Geometry.convertRadianToDegree(angHipRoll));
            joints.Add((float)Geometry.convertRadianToDegree(angHipPitch));
            joints.Add((float)Geometry.convertRadianToDegree(angKnee));
            joints.Add((float)Geometry.convertRadianToDegree(angFootPitch));
            joints.Add((float)Geometry.convertRadianToDegree(angFootRoll));

            return true;
        }
    }
}
