using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Timers;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 18, 2018
    ------------------------------------------------------------------------------------------------------------------------------------
    Foot is a structure that contains the foot useful information.
    \param position -> The foot position in CoM coordinates
    \param isSupport -> Defines if it is the support foot or swing foot
    \param isRight -> Defines if it is right foot or left foot
    \param theta -> Defines the Yaw of foot related in CoM frame
    */
    struct Foot
    {
        public Point position;
        public bool isSupport;
        public bool isRight;
        public double time;
        public double theta;
    }

    /*
    @author: Emad Bin Abid
    @date: July 18, 2018
    ------------------------------------------------------------------------------------------------------------------------------------
    ZMP is a structure that contains the Zero Momentum Point (ZMP) information for creating ZMP trajectory.
    \param position -> Contains the ZMP position in the ZMP trajectory
    \param time -> Contains the ZMP time in the ZMP trajectory
    */
    struct ZMP
    {
        public Point position;
        public double time;
    }

    /*
    @author: Emad Bin Abid
    @date: July 18, 2018
    ------------------------------------------------------------------------------------------------------------------------------------
    CoM is a structure that contains the Center of Mass (CoM) information for creating horizontal CoM trajectory.
    \param positionX -> The CoM position in X dimension in the trajectory
    \param positionY -> The CoM position in Y dimension in the trajectory
    \param time -> The CoM position time in the trajectory
    */
    struct CoM
    {
        public Point positionX;
        public Point positionY;
        public double time;
    }

    /*
    @author: Emad Bin Abid
    @date: July 18, 2018
    ------------------------------------------------------------------------------------------------------------------------------------
    HeightTrajectory is a structure that contains the Center of Mass (CoM) height for creating vertical CoM trajectory.
    \param positionZ -> The CoM position in Z dimensionin the trajectory
    \param time -> The CoM position in Z dimension in the trajectory
    */
    struct HeightTrajectory
    {
        public double positionZ;
        public double time;
    }

    /*
    @author: Emad Bin Abid
    @date: July 18, 2018
    ------------------------------------------------------------------------------------------------------------------------------------
    RunningZMP is a class that implements a ZMP based walking approach which has been presented in paper with the title of 
    "Learning to Walk Fast: Optimized Hip Height Movement for Simulated and Real Humanoid Robots". In this approach the stable 
    omnidirectional walking is modeled using inverted pendulum dynamics. To do that, first the ZMP trajectory is designed using the 
    desired foot positions and vertical CoM trajectory is generated using a fourier series. Then, using these two trajectories, the 
    differential equations of an inverted pendulum model has been solved to generate horizontal CoM trajectory. Finally, the CoM 
    trajectory and foot positions are used to generate an stable walking. Since this approach can generate a walking motion which has 
    the variable CoM height, it can be used to generate an stable running motion.
    */
    class RunningZMP
    {
        private int RIGHTFOOT = 0;
        private int LEFTFOOT = 1;

        /// \param The internal parameters to be used in the walk engine
        private CoM initCom;
        private Point transitionError;
        private CoM transitionCom;
        private Foot transitionLeftFoot;
        private Foot transitionRightFoot;
        private Foot previousLeftFoot;
        private Foot previousRightFoot;
        private double dp;
        private double dpY;
        private int oneStepSize;
        private double legSeperation;
        private Foot[] planedLeftFoot = new Foot[25];
        private Foot[] planedRightFoot = new Foot[25];
        private CoM[] planedCoM;
        private bool activeBalace;
        private int maxPrevIter;
        private double cl;
        private double initTime;
        private double deltaT;
        private Foot inicialLeftLeg;
        private Foot inicialRightLeg;
        private float[] pose = new float[22];
        private float[] lastAngle = new float[22];
        private float[] lastError = new float[22];
        private List<HeightTrajectory> comZTrajecotry;

        /// \param The internal needed objects
        private CommandCreater commandCreator;
        private WorldModel worldModel;
        private Bezier bzqdRotateSwing;
        private Bezier bzqdRotateSupport;
        private Bezier bzqdSwing;
        private InverseKinematics inverseKinematics;

        public double swingHeight;             //Swing foot trajectory height from the ground (meter)
        public double stepSizeX;               //The walk step size in forward direction (meter)
        public double stepSizeY;               //The walk step size in side direction (meter)
        public double stepTime;                //The duration of a walk step (seconds)
        public double legExtention;            //The maximum leg extention during walking (seconds)
        public double thetaStep;               //The duration of a walk step (seconds)

        /*The parameters of the active balance (see the paper)*/
        public double constantInclination;
        public double kpXActiveBalance;
        public double kpYActiveBalance;
        public double increasingDX;

        /*The internal walk parameters from the last step of the walk*/
        public double lastStepTime;
        public double lastDX;
        public double lastDY;
        public double lastTheta;

        /*The parameters of a fourier series used to generate the CoM height trajectory*/
        public double offset;
        public double amplitude;
        public double amplitude2;

        /*They true if the walk is in its first step*/
        public bool initPos;
        public bool initWalk;

        public bool isStepFinished;            //It is true if the current walk step is finalized
        public bool isStopped;                 //It is true if the walk is stopped

        //Default constructor
        public RunningZMP()
        {
            this.commandCreator = CommandCreater.getUniqueInstance();
            this.worldModel = WorldModel.getUniqueInstance();
            this.planedCoM = new CoM[2000];
            this.init();
        }

        /*
        \define The thomas algorithm to solve the inverted pendulum differential equations numerically. It also solve the issue of the 
        initial and lasting condition (see boundary condition presented in the paper).
        param[in] com0 and com0y initial horizontal CoM position in beginning of the step
        param[in] com1 and com1y the last horizontal CoM position with considering the preview time
        param[in] length the size of the CoM trajectory
        */
        public void thomasAlgorithm(double com0, double com1, double com0y, double com1y, int length)
        {

        }

        /*
        \define modeling an stable omnidirectional walking based on the dynamics of an inverted pendulum model. (see the paper)
        \param[in] zmpInit the initial ZMP position in walking
        \param[in] zmpInit the input ZMP trajectory
        \param[in] length the size of the ZMP and CoM trajectories
        \param[in] dt The resolution of the time in the trajecotry
        \param[in] comZ The input vertical trajecotry of the CoM
        */
        public CoM[] fastDynamicSolverWithSlideWindow(Point zmpInit, ZMP[] zmpTrajector, int length, double dt, List<HeightTrajectory> comZ)
        {
            CoM[] com = new CoM[length + 1000];
            double[] a = new double[length + 1000];
            double[] b = new double[length + 1000];
            double[] c = new double[length + 1000];
            double[] d = new double[length + 1000];
            double[] dy = new double[length + 1000];
            double[] x = new double[length];
            double[] y = new double[length];

            // Discretize the inverted pendulum differential equation
            for (int i = 0; i < length; ++i)
            {
                double g = 9.8;
                double aTemp = (-1 * comZ[i].positionZ) / ((dt * dt) * (comZ[i].time + g));
                double bTemp = 1 - (2 * aTemp);

                // Handle the boundary condition for the end of trajectory
                if (i == length - 1)
                    bTemp = bTemp + aTemp;

                a[i] = aTemp;
                b[i] = bTemp;
                c[i] = aTemp;
            }

            // Handle the boundary condition for the beginning of trajectory.
            for (int i = 0; i < length; i++)
            {

                double ZMP_X = zmpTrajector[i].position.GetX();
                double ZMP_Y = zmpTrajector[i].position.GetY();

                if (i == 0)
                {
                    ZMP_X = ZMP_X - (a[0] * zmpInit.GetX());
                    ZMP_Y = ZMP_Y - (a[0] * zmpInit.GetY());
                }

                d[i] = ZMP_X;
                dy[i] = ZMP_Y;

            }

            // TDMA solver explanation can be found in wikipedia
            // Here Thomas Algorithm is used to solve Inverted pendulum dynamics
            c[0] = c[0] / b[0];
            d[0] = d[0] / b[0];
            dy[0] = dy[0] / b[0];

            for (int i = 1; i < length - 1; i++)
            {
                double temp = b[i] - a[i] * c[i - 1];
                c[i] = c[i] / temp;
                d[i] = (d[i] - a[i] * d[i - 1]) / temp;
                dy[i] = (dy[i] - a[i] * dy[i - 1]) / temp;
            }

            d[length - 1] = (d[length - 1] - a[length - 1] * d[length - 2])
                / (b[length - 1] - a[length - 1] * c[length - 2]);
            dy[length - 1] = (dy[length - 1] - a[length - 1] * dy[length - 2])
                / (b[length - 1] - a[length - 1] * c[length - 2]);

            x[length - 1] = d[length - 1];
            y[length - 1] = dy[length - 1];
            for (int i = length - 2; i >= 0; i--)
            {
                x[i] = d[i] - c[i] * x[i + 1];
                y[i] = dy[i] - c[i] * y[i + 1];
            }

            // After generation of CoM on horizontal plane fill the CoM Container.
            for (int i = 0; i < length; ++i)
            {
                com[i].positionX.SetX(x[i]);
                com[i].positionY.SetX(y[i]);
            }

            comZ.Clear();

            return com;
        }

        /*\define Generate vertical CoM trajectory using a fourier series
        \param[in] size The size of the trajectory
        */
        public void createHeightTrajectory(double size)
        {
            this.comZTrajecotry.Clear();
            double period = stepTime;

            // Generate CoM on vertical plane or height trajectory
            for (int i = 0; i < size; i++)
            {
                HeightTrajectory comZ;
                double t = i * deltaT;

                if (this.isStopped || (planedLeftFoot[0].isSupport && planedRightFoot[0].isSupport))
                    t = 0;
                comZ.positionZ = offset + amplitude * Math.Cos((2 * Math.PI * t / period))
                    + amplitude2 * Math.Cos((4 * Math.PI * t / period));
                comZ.time = amplitude * (-4 * Math.PI * Math.PI / (period * period))
                    * Math.Cos((2 * Math.PI * t / period))
                    + amplitude2 * (-4 * 4 * Math.PI * Math.PI / (period * period))
                        * Math.Cos((4 * Math.PI * t / period));

                if (this.isStopped || (planedLeftFoot[0].isSupport && planedRightFoot[0].isSupport))
                    comZ.time = 0;
                comZTrajecotry.Add(comZ);
            }
        }

        /*\define Set the walk engine parameters to generate walking in increasing and decreasing manner for reducing the role of 
        inertia and have more stable walk
        \param[in] size The size of the trajectory
        */
        public void setWalkParameter(double period, double dX, double dY, double theta, bool presure = true)
        {
            double inputDX = this.lastDX + Math.Max(Math.Min(dX - this.lastDX, this.increasingDX), -this.increasingDX);
            double inputDY = this.lastDY + Math.Max(Math.Min(dY - this.lastDY, 0.02), -0.02);

            double thetaIncreasingStep = 12;
            double thetaRelationToSpeed = 21;

            if (!presure)
            {
                thetaIncreasingStep = 7;
                thetaRelationToSpeed = 17;
            }

            double inputTheta = this.lastTheta + Math.Max(Math.Min(theta - this.lastTheta, thetaIncreasingStep), -thetaIncreasingStep); //was 13

            double thetaBound = -50 * Math.Min(Math.Max(Math.Abs(inputDX), Math.Abs(inputDY)), 0.2) + thetaRelationToSpeed;    // was 22

            if (inputTheta > 0)
            {
                inputTheta = Math.Min(inputTheta, thetaBound);
            }
            else
            {
                inputTheta = Math.Max(inputTheta, -1 * thetaBound);
            }

            this.stepTime = period;
            this.stepSizeX = inputDX;
            this.stepSizeY = inputDY;
            this.thetaStep = inputTheta;
        }

        /*\define Get the CoM position of the walk
        */
        public Point getCoM(double time)
        {
            int comIter = (int)Math.Floor(time / this.deltaT);
            if (comIter > this.oneStepSize - 1)
            {
                Console.WriteLine("[-]ERROR:\t RunningZMP.getCoM(double): Bug On CoM Iter, CoM Iter is: " + comIter);
            }

            double height = comZTrajecotry[comIter].positionZ;    // hack must be CoM iter
            Point result = new Point(this.planedCoM[comIter].positionX.GetX(), this.planedCoM[comIter].positionY.GetX(), height);

            return result;
        }

        /*\define Set the foot pose and state
        */
        public Foot setFoot(Point position, bool isSupport, bool isRight, double time, double theta)
        {
            Foot foot;
            foot.position = position;
            foot.isSupport = isSupport;
            foot.isRight = isRight;
            foot.time = time;
            foot.theta = theta;
            return foot;
        }

        /*\define Implementation of the foot planner using the input walk parameters (see the foot planner section of the paper)
        */
        public void footGenerator(double stepX, double stepY, double stepTheta, int stepNumber, double timeStep, Foot inicialLeftLeg, Foot inicialRightLeg)
        {
            if (this.isStopped)
            {
                this.planedLeftFoot[0] = this.setFoot(inicialLeftLeg.position, true, inicialLeftLeg.isRight, inicialLeftLeg.time, inicialLeftLeg.theta);

                this.planedRightFoot[0] = this.setFoot(inicialRightLeg.position, true, inicialRightLeg.isRight, inicialRightLeg.time, inicialRightLeg.theta);

                for (int i = 1; i <= stepNumber; i++)
                {
                    this.planedRightFoot[i] = this.planedRightFoot[0];
                    this.planedLeftFoot[i] = this.planedLeftFoot[0];
                }
                return;
            }

            this.planedLeftFoot[0] = this.setFoot(inicialLeftLeg.position, inicialLeftLeg.isSupport, inicialLeftLeg.isRight, inicialLeftLeg.time, inicialLeftLeg.theta);

            this.planedRightFoot[0] = this.setFoot(inicialRightLeg.position, inicialRightLeg.isSupport, inicialRightLeg.isRight, 
                inicialRightLeg.time, inicialRightLeg.theta);

            Point hl = new Point(0, legSeperation / 2);
            Point hr = new Point(0, -legSeperation / 2);
            Point d = new Point(stepX, stepY);
            Point x = new Point(0, 0);

            Point com;
            hl.rotate(this.planedLeftFoot[0].theta);
            hr.rotate(this.planedRightFoot[0].theta);
            d.rotate(this.planedLeftFoot[0].theta);
            if (this.planedLeftFoot[0].isSupport && this.planedRightFoot[0].isSupport)
            {
                x = this.planedLeftFoot[0].position - hl;
                this.planedLeftFoot[0].isSupport = false;
            }
            if (!this.planedLeftFoot[0].isSupport)
            {
                x = this.planedLeftFoot[0].position - hl;

            }
            if (!this.planedRightFoot[0].isSupport)
            {
                x = this.planedRightFoot[0].position - hr;
            }

            for (int i = 1; i <= stepNumber; i++)
            {
                d.rotate(stepTheta);
                com = d + x;
                x = ((com - x) * 2) + x;
                hl.rotate(stepTheta);
                hr.rotate(stepTheta);

                if (this.planedLeftFoot[i - 1].isSupport)
                {
                    float newTheta = (float)(this.planedLeftFoot[i - 1].theta + stepTheta);
                    Point pos = x + hl;
                    this.planedLeftFoot[i] = this.setFoot(pos, false, this.planedLeftFoot[i - 1].isRight,
                        this.planedLeftFoot[i - 1].time + timeStep, newTheta);
                }
                else
                {
                    float newTheta = (float)(this.planedLeftFoot[i - 1].theta + stepTheta);
                    Point pos = new Point(this.planedLeftFoot[i - 1].position.GetX(), this.planedLeftFoot[i - 1].position.GetY());
                    this.planedLeftFoot[i] = this.setFoot(pos, true, this.planedLeftFoot[i - 1].isRight,
                        this.planedLeftFoot[i - 1].time + timeStep, newTheta);
                }

                if (this.planedRightFoot[i - 1].isSupport)
                {
                    float newTheta = (float)(this.planedRightFoot[i - 1].theta + stepTheta);
                    Point pos = x + hr;
                    this.planedRightFoot[i] = this.setFoot(pos, false, this.planedRightFoot[i - 1].isRight,
                        this.planedRightFoot[i - 1].time + timeStep, newTheta);
                }
                else
                {
                    float newTheta = (float)(this.planedRightFoot[i - 1].theta + stepTheta);
                    ;
                    Point pos = new Point(planedRightFoot[i - 1].position.GetX(),
                        this.planedRightFoot[i - 1].position.GetY());
                    this.planedRightFoot[i] = this.setFoot(pos, true, planedRightFoot[i - 1].isRight,
                        this.planedRightFoot[i - 1].time + timeStep, newTheta);
                }

                double minLegSperationY = 0.08;
                double maxLegSeperationX = 0.20;
                double maxLegSeperationY = 0.20;
                if (planedRightFoot[i].isSupport == false)
                {
                    Point leftToRight = planedRightFoot[i].position - planedLeftFoot[i].position;
                    double maxX = Math.Max(leftToRight.GetX(), -maxLegSeperationX);
                    leftToRight.SetX(Math.Min(maxX, maxLegSeperationX));
                    double maxY = Math.Max(leftToRight.GetY(), -maxLegSeperationY);
                    leftToRight.SetY(Math.Min(maxY, -minLegSperationY));

                    this.planedRightFoot[i].position = this.planedLeftFoot[i].position + leftToRight;

                }

                if (this.planedLeftFoot[i].isSupport == false)
                {
                    Point rightToLeft = this.planedLeftFoot[i].position - planedRightFoot[i].position;
                    double maxX = Math.Max(rightToLeft.GetX(), -maxLegSeperationX);
                    rightToLeft.SetX(Math.Min(maxX, maxLegSeperationX));
                    double maxY = Math.Max(rightToLeft.GetY(), minLegSperationY);
                    rightToLeft.SetY(Math.Min(maxY, maxLegSeperationY));

                    this.planedLeftFoot[i].position = this.planedRightFoot[i].position + rightToLeft;
                }
            }

            this.planedLeftFoot[0] = this.setFoot(inicialLeftLeg.position, inicialLeftLeg.isSupport,
                inicialLeftLeg.isRight, inicialLeftLeg.time, inicialLeftLeg.theta);

            this.planedRightFoot[0] = setFoot(inicialRightLeg.position,
                inicialRightLeg.isSupport, inicialRightLeg.isRight, inicialRightLeg.time, inicialRightLeg.theta);

            this.lastStepTime = timeStep;
            this.lastDX = stepX;
            this.lastDY = stepY;

            return;
        }

        /*\define Implementation of the ZMP trajectory generator using the support foot postion (see the paper)
        */
        public ZMP[] zmpGenerator(int stepNumber, double dt, double doubleSupportPercent, int size)
        {
            double timeStep = this.planedRightFoot[1].time - this.planedRightFoot[0].time;
            int initSize = (int)((stepNumber + 1) * (timeStep) / dt);
            ZMP[] zmp = new ZMP[initSize + 1000];
            size = 0;

            for (int j = 0; j < stepNumber; j++)
            {
                if (this.planedRightFoot[j].isSupport && this.planedLeftFoot[j].isSupport)
                {
                    int sizeStep = (int)(timeStep / dt);
                    for (int i = 0; i < sizeStep; i++)
                    {
                        zmp[(j * sizeStep) + i].position = new Point(
                            (this.planedRightFoot[j].position.GetX() + this.planedLeftFoot[j].position.GetX()) / 2, 0); //(planedRightFoot[j].Position.y_Phi+planedLeftFoot[j].Position.y_Phi)/2);
                        zmp[(j * sizeStep) + i].time = (j * timeStep) + (i * dt);
                        size++;
                    }
                }
                else if (this.planedRightFoot[j].isSupport)
                {
                    int sizeStep = (int)(timeStep / dt);
                    for (int i = 0; i < sizeStep; i++)
                    {
                        zmp[(j * sizeStep) + i].position = new Point(planedRightFoot[j].position.GetX(), planedRightFoot[j].position.GetY());
                        zmp[(j * sizeStep) + i].time = (j * timeStep) + (i * dt);
                        size++;
                    }

                }
                else if (this.planedLeftFoot[j].isSupport)
                {
                    int sizeStep = (int)(timeStep / dt);
                    for (int i = 0; i < sizeStep; i++)
                    {
                        zmp[(j * sizeStep) + i].position = new Point(
                            this.planedLeftFoot[j].position.GetX(), this.planedLeftFoot[j].position.GetY());
                        zmp[(j * sizeStep) + i].time = (j * timeStep) + (i * dt);
                        size++;
                    }

                }
                else
                {
                    int sizeStep = (int)(timeStep / dt);
                    for (int i = 0; i < sizeStep; i++)
                    {
                        zmp[(j * sizeStep) + i].position = new Point(
                            (this.planedRightFoot[j].position.GetX() + this.planedLeftFoot[j].position.GetX())/2,
                            (this.planedRightFoot[j].position.GetY() + planedLeftFoot[j].position.GetY()) / 2);
                        zmp[(j * sizeStep) + i].time = (j * timeStep) + (i * dt);
                    }
                }
            }
            return zmp;
        }

        /*\define The interface to call the Inverse Kinematics.
        */
        public List<float> legInvKin(int foot, Point targetPos, Point targetOri)
        {
            List<float> jLegDeg = new List<float>();
            jLegDeg.Clear();

            RotationMatrix targetRot, targetRotX, targetRotZ, targetRotY;

            Point targetTrans = targetPos;
            targetRotZ = new RotationMatrix(
                new Point(Geometry.Cos(targetOri.GetZ()), -Geometry.Sin(targetOri.GetZ()), 0),
                new Point(Geometry.Sin(targetOri.GetZ()), Geometry.Cos(targetOri.GetZ()), 0),
                new Point(0, 0, 1));

            targetRotY = new RotationMatrix(
                new Point(1, 0, 0),
                new Point(0, Geometry.Cos(targetOri.GetY()), -Geometry.Sin(targetOri.GetY())),
                new Point(0, Geometry.Sin(targetOri.GetY()), Geometry.Cos(targetOri.GetY())));

            targetRotX = new RotationMatrix(
                new Point(Geometry.Cos(targetOri.GetX()), 0, Geometry.Sin(targetOri.GetX())),
                new Point(0, 1, 0),
                new Point(-Geometry.Sin(targetOri.GetX()), 0, Geometry.Cos(targetOri.GetX())));

            targetRot = targetRotY * targetRotX * targetRotZ;

            HomogeneousMatrix target = new HomogeneousMatrix(targetRot, targetTrans);

            bool isLeft = false;
            if (foot == 0)
                isLeft = true;

            this.inverseKinematics.calculateLegJoints(target, jLegDeg, isLeft);

            if (foot == LEFTFOOT)
            {
                jLegDeg[1] *= -1;
                jLegDeg[5] *= -1;
            }

            jLegDeg[2] *= -1;
            jLegDeg[3] *= -1;
            jLegDeg[4] *= -1;

            return jLegDeg;
        }

        /*\define Computing the joints angles based on IK.
        */
        public void computePose(Point lFootPos, Point rFootPos, Point orientationRithFoot, Point orientationLeftFoot)
        {
            List<float> jLeftLegDeg = new List<float>();
            List<float> jRightLegDeg = new List<float>();    

            jLeftLegDeg.Clear();
            jRightLegDeg.Clear();

            jLeftLegDeg = this.legInvKin(LEFTFOOT, lFootPos, orientationLeftFoot);
            jRightLegDeg = this.legInvKin(RIGHTFOOT, rFootPos, orientationRithFoot);

            this.pose[(int)DofId.DOF_LEG_LT] = jLeftLegDeg[0];
            this.pose[(int)DofId.DOF_LEG_LY] = jLeftLegDeg[1];
            this.pose[(int)DofId.DOF_LEG_LX] = jLeftLegDeg[2];
            this.pose[(int)DofId.DOF_KNEE_L] = jLeftLegDeg[3];
            this.pose[(int)DofId.DOF_ANKLE_LX] = jLeftLegDeg[4];
            this.pose[(int)DofId.DOF_ANKLE_LY] = jLeftLegDeg[5];

            this.pose[(int)DofId.DOF_LEG_RT] = jRightLegDeg[0];
            this.pose[(int)DofId.DOF_LEG_RY] = jRightLegDeg[1];
            this.pose[(int)DofId.DOF_LEG_RX] = jRightLegDeg[2];
            this.pose[(int)DofId.DOF_KNEE_R] = jRightLegDeg[3];
            this.pose[(int)DofId.DOF_ANKLE_RX] = jRightLegDeg[4];
            this.pose[(int)DofId.DOF_ANKLE_RY] = jRightLegDeg[5];
        }

        /*\define Update the joints angles
        */
        public void updatePose()
        {
            // Control angular Position of Left Leg joints
            float lHipDegT = pose[(int)DofId.DOF_LEG_LT];
            float lHipEffT = (float)predictEffector((int)DofId.DOF_LEG_LT, this.worldModel.getHingeJoint((int)DofId.DOF_LEG_LT).getAxis(), lHipDegT);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_LEG_LT, lHipEffT);

            float lHipDegX = pose[(int)DofId.DOF_LEG_LX];
            float lHipEffX = (float)predictEffector((int)DofId.DOF_LEG_LX, this.worldModel.getHingeJoint((int)DofId.DOF_LEG_LX).getAxis(), lHipDegX);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_LEG_LX, lHipEffX);

            float lHipDegY = pose[(int)DofId.DOF_LEG_LY];
            float lHipEffY = (float)predictEffector((int)DofId.DOF_LEG_LY, this.worldModel.getHingeJoint((int)DofId.DOF_LEG_LY).getAxis(), lHipDegY);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_LEG_LY, lHipEffY);

            float lKneeDeg = pose[(int)DofId.DOF_KNEE_L];
            float lKneeEff = (float)predictEffector((int)DofId.DOF_KNEE_L, this.worldModel.getHingeJoint((int)DofId.DOF_KNEE_L).getAxis(), lKneeDeg);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_KNEE_L, lKneeEff);

            float lAnkleDegY = pose[(int)DofId.DOF_ANKLE_LY];
            float lAnkleEffY = (float)predictEffector((int)DofId.DOF_ANKLE_LY, this.worldModel.getHingeJoint((int)DofId.DOF_ANKLE_LY).getAxis(), lAnkleDegY);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_ANKLE_LY, lAnkleEffY);

            float lAnkleDegX = pose[(int)DofId.DOF_ANKLE_LX];
            float lAnkleEffX = (float)predictEffector((int)DofId.DOF_ANKLE_LX, this.worldModel.getHingeJoint((int)DofId.DOF_ANKLE_LX).getAxis(), lAnkleDegX);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_ANKLE_LX, lAnkleEffX);

            // Control angular Position of Right leg joints
            float rHipDegT = pose[(int)DofId.DOF_LEG_RT];
            float rHipEffT = (float)predictEffector((int)DofId.DOF_LEG_RT, this.worldModel.getHingeJoint((int)DofId.DOF_LEG_RT).getAxis(), rHipDegT);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_LEG_RT, rHipEffT);

            float rHipDegX = pose[(int)DofId.DOF_LEG_RX];
            float rHipEffX = (float)predictEffector((int)DofId.DOF_LEG_RX, this.worldModel.getHingeJoint((int)DofId.DOF_LEG_RX).getAxis(), rHipDegX);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_LEG_RX, rHipEffX);

            float rHipDegY = pose[(int)DofId.DOF_LEG_RY];
            float rHipEffY = (float)predictEffector((int)DofId.DOF_LEG_RY, this.worldModel.getHingeJoint((int)DofId.DOF_LEG_RY).getAxis(), rHipDegY);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_LEG_RY, rHipEffY);

            float rKneeDeg = pose[(int)DofId.DOF_KNEE_R];
            float rKneeEff = (float)predictEffector((int)DofId.DOF_KNEE_R, this.worldModel.getHingeJoint((int)DofId.DOF_KNEE_R).getAxis(), rKneeDeg);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_KNEE_R, rKneeEff);

            float rAnkleDegY = pose[(int)DofId.DOF_ANKLE_RY];
            float rAnkleEffY = (float)predictEffector((int)DofId.DOF_ANKLE_RY, this.worldModel.getHingeJoint((int)DofId.DOF_ANKLE_RY).getAxis(), rAnkleDegY);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_ANKLE_RY, rAnkleEffY);

            float rAnkleDegX = pose[(int)DofId.DOF_ANKLE_RX];
            float rAnkleEffX = (float)predictEffector((int)DofId.DOF_ANKLE_RX, this.worldModel.getHingeJoint((int)DofId.DOF_ANKLE_RX).getAxis(), rAnkleDegX);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_ANKLE_RX, rAnkleEffX);

            // Control angular Position of Left Arm
            float lShoulderDegY = -90;
            float lShoulderEffY = (float)predictEffector((int)DofId.DOF_SHOULDER_LX, this.worldModel.getHingeJoint((int)DofId.DOF_SHOULDER_LX).getAxis(), lShoulderDegY);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_SHOULDER_LX, lShoulderEffY);

            float lShoulderDegX = 15;
            float lShoulderEffX = (float)predictEffector((int)DofId.DOF_SHOULDER_LY, this.worldModel.getHingeJoint((int)DofId.DOF_SHOULDER_LY).getAxis(), lShoulderDegX);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_SHOULDER_LY, lShoulderEffX);

            float lElbowYaw = (float)predictEffector((int)DofId.DOF_SHOULDER_LT, this.worldModel.getHingeJoint((int)DofId.DOF_SHOULDER_LT).getAxis(), -90);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_SHOULDER_LT, lElbowYaw);

            float lElbowPitch = (float)predictEffector((int)DofId.DOF_ELBOW_L, this.worldModel.getHingeJoint((int)DofId.DOF_ELBOW_L).getAxis(), -30);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_ELBOW_L, lElbowPitch);

            // Control angular Position of Right Arm
            float rShoulderDegY = -90;
            float rShoulderEffY = (float)predictEffector((int)DofId.DOF_SHOULDER_RX, this.worldModel.getHingeJoint((int)DofId.DOF_SHOULDER_RX).getAxis(), rShoulderDegY);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_SHOULDER_RX, rShoulderEffY);

            float rShoulderDegX = -15;
            float rShoulderEffX = (float)predictEffector((int)DofId.DOF_SHOULDER_RY, this.worldModel.getHingeJoint((int)DofId.DOF_SHOULDER_RY).getAxis(), rShoulderDegX);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_SHOULDER_RY, rShoulderEffX);

            float rElbowYaw = (float)predictEffector((int)DofId.DOF_SHOULDER_RT, this.worldModel.getHingeJoint((int)DofId.DOF_SHOULDER_RT).getAxis(), 90);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_SHOULDER_RT, rElbowYaw);

            float rElbowPitch = (float)predictEffector((int)DofId.DOF_ELBOW_R, this.worldModel.getHingeJoint((int)DofId.DOF_ELBOW_R).getAxis(), 30);
            this.commandCreator.moveHingeJoint((int)DofId.DOF_ELBOW_R, rElbowPitch);
        }

        /*\define Control the joint effector using a PD controller, a Servo motor implementation.
        */
        public double predictEffector(int joint, double current, double setpoint)
        {
            double err = setpoint - current;

            // Initial the error
            if (lastError[joint] == -1000)
                lastError[joint] = 0;

            // Initial the angle
            if (lastAngle[joint] == -1000)
                lastAngle[joint] = (float)current;

            // P Controller
            double pCoeficient = 0.25;
            double eff = err * pCoeficient;

            // Simulator accepts the Effectors only in these range
            if (eff > 6.1395447)
                eff = 6.1395447;

            if (eff < -6.1395447)
                eff = -6.1395447;

            lastError[joint] = (float)eff;
            lastAngle[joint] = (float)current;
            return eff;
        }

        /*\define Execute the walk engine using all above methods*/
        public void execute()
        {
            Timer startTime = new Timer();
            startTime.Start();

            double timeCurrent = this.worldModel.getTime() - this.initTime;

            this.isStepFinished = false;

            if (timeCurrent > (this.stepTime - 0.00005))
            {
                this.transitionLeftFoot = this.inicialLeftLeg;
                this.transitionRightFoot = this.inicialRightLeg;
                this.transitionError = new Point(this.dp, this.dpY);
                this.isStepFinished = true;
            }

            // Initial the walk for beginning of each walk step or walk
            if (timeCurrent > (this.stepTime - 0.00005) || this.initWalk)
            {

                this.initWalk = false;
                this.initTime = this.worldModel.getTime();
                timeCurrent = this.worldModel.getTime() - this.initTime;

                // This is used when the foot is swing to know the previous position of the the foot
                this.previousLeftFoot = this.planedLeftFoot[0];
                this.previousRightFoot = this.planedRightFoot[0];

                // plan the next 6 foot with considering the next foot as the initial of the plan
                this.inicialLeftLeg = this.planedLeftFoot[1];
                this.inicialRightLeg = this.planedRightFoot[1];

                double previewTime = 2.5;
                int previewStep = (int)(previewTime / stepTime);
                this.footGenerator(this.stepSizeX, this.stepSizeY, 0, previewStep, this.stepTime, this.inicialLeftLeg, this.inicialRightLeg);

                int sizeZMP = 0;
                ZMP[] zmp = this.zmpGenerator(previewStep, deltaT, 0, sizeZMP);

                this.lastTheta = this.thetaStep;
                this.oneStepSize = (int)(this.stepTime / deltaT);

                this.createHeightTrajectory(Math.Max(sizeZMP, this.oneStepSize));

                CoM[] com = this.fastDynamicSolverWithSlideWindow(
                    new Point(this.initCom.positionX.GetX(), this.initCom.positionY.GetX()), zmp, sizeZMP,this.deltaT, this.comZTrajecotry);

                for (int i = 0; i < oneStepSize; i++)
                {

                    this.planedCoM[i].positionY = com[i].positionY;
                    this.planedCoM[i].positionX = com[i].positionX;
                    this.planedCoM[i].positionY = com[i].positionY;
                }
                this.initCom = this.planedCoM[this.oneStepSize - 1];

                zmp = null;
                com = null;
            }

            // After calculating the horizontal CoM from here is the execution of the walk
            Point comPos = this.getCoM(timeCurrent);

            Point leftFootPos, rightFootPos;

            // if you want to have double support phase, dsp_min and dsp_max should be changes
            float dsp_min = 0;
            float dsp_max = (float)this.stepTime;

            Point targLeftFPos;
            Point targRightFPos;

            // The active balance, here it is the constant not adaptive, in paper the paper it
            // it is adaptive using the current state of the robot.
            double degRotationTunk = -constantInclination;
            double degRotationTunkY = 0;

            if (this.planedLeftFoot[0].isSupport && this.planedRightFoot[0].isSupport)
            {
                leftFootPos = new Point(this.planedLeftFoot[0].position.GetX(), this.planedLeftFoot[0].position.GetY(), 0);
                rightFootPos = new Point(this.planedRightFoot[0].position.GetX(), this.planedRightFoot[0].position.GetY(), 0);
                targLeftFPos = leftFootPos - comPos;
                targRightFPos = rightFootPos - comPos;
                this.computePose(targLeftFPos, targRightFPos, new Point(0, 0, 0), new Point(0, 0, 0));
            }
            else if (this.planedLeftFoot[0].isSupport)
            {

                leftFootPos = new Point(this.planedLeftFoot[0].position.GetX(), this.planedLeftFoot[0].position.GetY(), 0);

                Point p0 = new Point(this.previousRightFoot.position.GetX(), this.previousRightFoot.position.GetY(), 0);
                Point p2 = new Point(this.planedRightFoot[0].position.GetX(), this.planedRightFoot[0].position.GetY(), 0);
                Point p1 = Geometry.determineMidPoint(p0, p2);
                p1.SetZ(swingHeight);

                if (this.thetaStep < 0)
                {
                    this.bzqdRotateSupport.setLinear(new Point(-this.thetaStep, 0, 0), new Point(0, 0, 0), dsp_max - dsp_min);
                    this.bzqdRotateSwing.setLinear(new Point(this.thetaStep, 0, 0), new Point(0, 0, 0), dsp_max - dsp_min);
                }
                else
                {
                    this.bzqdRotateSupport.setLinear(new Point(0, 0, 0), new Point(this.thetaStep, 0, 0), dsp_max - dsp_min);
                    this.bzqdRotateSwing.setLinear(new Point(0, 0, 0), new Point(-this.thetaStep, 0, 0), dsp_max - dsp_min);
                }
                this.bzqdSwing.setQuadric(p0, p1, p2, dsp_max - dsp_min);

                targLeftFPos = leftFootPos - comPos;
                targRightFPos = this.bzqdSwing.getQuadricPosition((float)timeCurrent) - comPos;

                Point rotateSwing = this.bzqdRotateSwing.getLinearPosition((float)timeCurrent);
                Point rotateSupport = this.bzqdRotateSupport.getLinearPosition((float)timeCurrent);

                // rotation around X axis of CoM can be used in Active Balance
                targLeftFPos.SetX(targLeftFPos.GetX()*Geometry.Cos(degRotationTunk) + targLeftFPos.GetZ()*Geometry.Sin(degRotationTunk));
                targLeftFPos.SetZ(-targLeftFPos.GetX()*Geometry.Sin(degRotationTunk) + targLeftFPos.GetZ()*Geometry.Cos(degRotationTunk));
                targRightFPos.SetX(targRightFPos.GetX()*Geometry.Cos(degRotationTunk) + targRightFPos.GetZ()*Geometry.Sin(degRotationTunk));
                targRightFPos.SetZ(-targRightFPos.GetX()*Geometry.Sin(degRotationTunk) + targRightFPos.GetZ()*Geometry.Cos(degRotationTunk));

                // rotation around Y axis of CoM can be used in Active Balance
                targLeftFPos.SetY(targLeftFPos.GetY()*Geometry.Cos(degRotationTunkY) - targLeftFPos.GetZ()*Geometry.Sin(degRotationTunkY));
                targLeftFPos.SetZ(targLeftFPos.GetY()*Geometry.Sin(degRotationTunkY) + targLeftFPos.GetZ()*Geometry.Cos(degRotationTunkY));
                targRightFPos.SetY(targRightFPos.GetY()*Geometry.Cos(degRotationTunkY) - targRightFPos.GetZ()*Geometry.Sin(degRotationTunkY));
                targRightFPos.SetZ(targRightFPos.GetY()*Geometry.Sin(degRotationTunkY) + targRightFPos.GetZ()*Geometry.Cos(degRotationTunkY));

                this.computePose(targLeftFPos, targRightFPos,
                    new Point(degRotationTunk, degRotationTunkY, rotateSwing.GetX()),
                    new Point(degRotationTunk, degRotationTunkY, rotateSupport.GetX()));

            }

            else if (this.planedRightFoot[0].isSupport)
            {
                rightFootPos = new Point(this.planedRightFoot[0].position.GetX(), this.planedRightFoot[0].position.GetY(), 0);
                Point p0 = new Point(this.previousLeftFoot.position.GetX(), this.previousLeftFoot.position.GetY(), 0);
                Point p2 = new Point(this.planedLeftFoot[0].position.GetX(), this.planedLeftFoot[0].position.GetY(), 0);
                Point p1 = Geometry.determineMidPoint(p0, p2);
                p1.SetZ(swingHeight);

                this.bzqdSwing.setQuadric(p0, p1, p2, dsp_max - dsp_min);
                if (this.thetaStep < 0)
                {
                    this.bzqdRotateSupport.setLinear(new Point(0, 0, 0), new Point(this.thetaStep, 0, 0), dsp_max - dsp_min);
                    this.bzqdRotateSwing.setLinear(new Point(0, 0, 0), new Point(-this.thetaStep, 0, 0), dsp_max - dsp_min);
                }
                else
                {
                    this.bzqdRotateSupport.setLinear(new Point(-this.thetaStep, 0, 0), new Point(0, 0, 0), dsp_max - dsp_min);
                    this.bzqdRotateSwing.setLinear(new Point(this.thetaStep, 0, 0), new Point(0, 0, 0), dsp_max - dsp_min);
                }

                targLeftFPos = this.bzqdSwing.getQuadricPosition((float)timeCurrent) - comPos;
                targRightFPos = rightFootPos - comPos;
                Point rotateSwing = this.bzqdRotateSwing.getLinearPosition((float)timeCurrent);
                Point rotateSupport = bzqdRotateSupport.getLinearPosition((float)timeCurrent);

                // The active balance rotation in sagittal plane
                targLeftFPos.SetX(targLeftFPos.GetX()*Geometry.Cos(degRotationTunk) + targLeftFPos.GetZ()*Geometry.Sin(degRotationTunk));
                targLeftFPos.SetZ(-targLeftFPos.GetX()*Geometry.Sin(degRotationTunk) + targLeftFPos.GetZ() * Geometry.Cos(degRotationTunk));

                targRightFPos.SetX(targRightFPos.GetX()*Geometry.Cos(degRotationTunk) + targRightFPos.GetZ()*Geometry.Sin(degRotationTunk));
                targRightFPos.SetZ(-targRightFPos.GetX()*Geometry.Sin(degRotationTunk) + targRightFPos.GetZ() * Geometry.Cos(degRotationTunk));

                // The active balance rotation in coronal plane
                targLeftFPos.SetY(targLeftFPos.GetY()*Geometry.Cos(degRotationTunkY) - targLeftFPos.GetZ()*Geometry.Sin(degRotationTunkY));
                targLeftFPos.SetZ(targLeftFPos.GetY()*Geometry.Sin(degRotationTunkY) + targLeftFPos.GetZ()*Geometry.Cos(degRotationTunkY));
                targRightFPos.SetY(targRightFPos.GetY()*Geometry.Cos(degRotationTunkY) - targRightFPos.GetZ()*Geometry.Sin(degRotationTunkY));
                targRightFPos.SetZ(targRightFPos.GetY()*Geometry.Sin(degRotationTunkY) + targRightFPos.GetZ()*Geometry.Cos(degRotationTunkY));

                // Call the inverse kinematics
                this.computePose(targLeftFPos, targRightFPos,
                    new Point(degRotationTunk, degRotationTunkY, rotateSupport.GetX()),
                    new Point(degRotationTunk, degRotationTunkY, rotateSwing.GetX()));
            }

            this.updatePose();

            // Update the time
            startTime.Stop();
        }

        /*\define Initializing the walk engine state and parameters
        */
        public void init()
        {
            this.initPos = true;
            this.offset = 0.195;
            this.amplitude = -0.02;
            this.amplitude2 = 0;

            this.initTime = this.worldModel.getTime();
            this.thetaStep = 0;
            this.deltaT = 0.002;
            this.initCom.positionX = new Point(0, 0, 0);
            this.initCom.positionY = new Point(0, 0, 0);
            this.legExtention = 0.20;

            this.swingHeight = 0.06;

            this.constantInclination = 3.5;
            this.kpXActiveBalance = 2;
            this.kpYActiveBalance = 2;
            this.increasingDX = 0.02;

            this.legSeperation = 0.11;
            this.inicialLeftLeg = this.setFoot(new Point(0, legSeperation / 2), true, false, 0, 0);
            this.inicialRightLeg = this.setFoot(new Point(0, -legSeperation / 2), true, true, 0, 0);

            this.planedLeftFoot[0] = this.inicialLeftLeg;
            this.planedRightFoot[0] = this.inicialRightLeg;
            this.planedLeftFoot[1] = this.inicialLeftLeg;
            this.planedRightFoot[1] = this.inicialRightLeg;

            this.stepTime = 0.8;
            this.stepSizeX = 0.0;
            this.stepSizeY = 0.0;
            this.initWalk = true;
            this.isStepFinished = false;
            this.isStopped = false;

            this.lastStepTime = 0;
            this.lastDX = 0;
            this.lastDY = 0;
            this.lastTheta = 0;
        }

    }
}
