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
    ------------------------------------------------------------------------------------------------------------------------------------
    HomogeneousMatrix is a class that 
    */
    class HomogeneousMatrix
    {
        private double[,] elements = new double[4, 4];

        //Default constructor
        public HomogeneousMatrix()
        {
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
                    this.elements[i, j] = 0;

            for (int i = 0; i < 4; i++)
                this.elements[i, i] = 1;
        }

        //Overloaded constructor
        public HomogeneousMatrix(RotationMatrix rotationMatrix, Point translationVector)
        {
            this.elements[0, 0] = rotationMatrix.line0.GetX();
            this.elements[0, 1] = rotationMatrix.line0.GetY();
            this.elements[0, 2] = rotationMatrix.line0.GetZ();
            this.elements[1, 0] = rotationMatrix.line1.GetX();
            this.elements[1, 1] = rotationMatrix.line1.GetY();
            this.elements[1, 2] = rotationMatrix.line1.GetZ();
            this.elements[2, 0] = rotationMatrix.line2.GetX();
            this.elements[2, 1] = rotationMatrix.line2.GetY();
            this.elements[2, 2] = rotationMatrix.line2.GetZ();

            this.elements[0, 3] = translationVector.GetX();
            this.elements[1, 3] = translationVector.GetY();
            this.elements[2, 3] = translationVector.GetZ();

            this.elements[3, 0] = this.elements[3, 1] = this.elements[3, 2] = 0;
            this.elements[3, 3] = 1;
        }

        //Overloaded constructor
        public HomogeneousMatrix(Point translationVector)
        {
            this.elements[0, 0] = 1;
            this.elements[0, 1] = 0;
            this.elements[0, 2] = 0;
            this.elements[1, 0] = 0;
            this.elements[1, 1] = 1;
            this.elements[1, 2] = 0;
            this.elements[2, 0] = 0;
            this.elements[2, 1] = 0;
            this.elements[2, 2] = 1;

            this.elements[0, 3] = translationVector.GetX();
            this.elements[1, 3] = translationVector.GetY();
            this.elements[2, 3] = translationVector.GetZ();

            this.elements[3, 0] = this.elements[3, 1] = this.elements[3, 2] = 0;
            this.elements[3, 3] = 1;
        }

        //Overloaded constructor
        public HomogeneousMatrix(RotationMatrix rotationMatrix)
        {
            this.elements[0, 0] = rotationMatrix.line0.GetX();
            this.elements[0, 1] = rotationMatrix.line0.GetY();
            this.elements[0, 2] = rotationMatrix.line0.GetZ();
            this.elements[1, 0] = rotationMatrix.line1.GetX();
            this.elements[1, 1] = rotationMatrix.line1.GetY();
            this.elements[1, 2] = rotationMatrix.line1.GetZ();
            this.elements[2, 0] = rotationMatrix.line2.GetX();
            this.elements[2, 1] = rotationMatrix.line2.GetY();
            this.elements[2, 2] = rotationMatrix.line2.GetZ();

            this.elements[0, 3] = 0;
            this.elements[1, 3] = 0;
            this.elements[2, 3] = 0;

            this.elements[3, 0] = this.elements[3, 1] = this.elements[3, 2] = 0;
            this.elements[3, 3] = 1;
    }

        public void setRotation(RotationMatrix rotationMatrix)
        {
            this.elements[0, 0] = rotationMatrix.line0.GetX();
            this.elements[0, 1] = rotationMatrix.line0.GetY();
            this.elements[0, 2] = rotationMatrix.line0.GetZ();
            this.elements[1, 0] = rotationMatrix.line1.GetX();
            this.elements[1, 1] = rotationMatrix.line1.GetY();
            this.elements[1, 2] = rotationMatrix.line1.GetZ();
            this.elements[2, 0] = rotationMatrix.line2.GetX();
            this.elements[2, 1] = rotationMatrix.line2.GetY();
            this.elements[2, 2] = rotationMatrix.line2.GetZ();
        }

        public RotationMatrix getRotation()
        {
            RotationMatrix result = new RotationMatrix();
            result.line0.SetX(this.elements[0, 0]);
            result.line0.SetY(this.elements[0, 1]);
            result.line0.SetZ(this.elements[0, 2]);
            result.line1.SetX(this.elements[1, 0]);
            result.line1.SetY(this.elements[1, 1]);
            result.line1.SetZ(this.elements[1, 2]);
            result.line2.SetX(this.elements[2, 0]);
            result.line2.SetY(this.elements[2, 1]);
            result.line2.SetZ(this.elements[2, 2]);

            return result;
        }

        public void setTranslation(Point translationVector)
        {
            this.elements[0, 3] = translationVector.GetX();
            this.elements[1, 3] = translationVector.GetY();
            this.elements[2, 3] = translationVector.GetZ();
        }

        public Point getTranslation()
        {
            return new Point(this.elements[0, 3], this.elements[1, 3], this.elements[2, 3]);
        }

        public void translate(double x, double y, double z)
        {
            this.elements[0, 3] += x;
            this.elements[1, 3] += y;
            this.elements[2, 3] += z;
        }

        public void translate(Point translationVector)
        {
            this.elements[0, 3] += translationVector.GetX();
            this.elements[1, 3] += translationVector.GetY();
            this.elements[2, 3] += translationVector.GetZ();
        }

        public HomogeneousMatrix getInverse()
        {
            HomogeneousMatrix result = new HomogeneousMatrix();

            RotationMatrix rotationMatrix = new RotationMatrix(this.getRotation().line0, this.getRotation().line1, this.getRotation().line2);

            Point translationVector = new Point(this.getTranslation().GetX(), this.getTranslation().GetY(), this.getTranslation().GetZ());

            result.setRotation(rotationMatrix.getInverse());
            result.setTranslation(
                result.getRotation() * new Point(-translationVector.GetX(), -translationVector.GetY(), -translationVector.GetZ()));

            return result;
        }

        public static HomogeneousMatrix operator *(HomogeneousMatrix thisHomogeneousMatrix, HomogeneousMatrix homogeneousMatrix)
        {
            HomogeneousMatrix result = new HomogeneousMatrix();

            result.elements[0, 0] = thisHomogeneousMatrix.elements[0, 0] * homogeneousMatrix.elements[0, 0] +
                thisHomogeneousMatrix.elements[0, 1] * homogeneousMatrix.elements[1, 0] +
                thisHomogeneousMatrix.elements[0, 2] * homogeneousMatrix.elements[2, 0] +
                thisHomogeneousMatrix.elements[0, 3] * homogeneousMatrix.elements[3, 0];
            result.elements[0, 1] = thisHomogeneousMatrix.elements[0, 0] * homogeneousMatrix.elements[0, 1] + 
                thisHomogeneousMatrix.elements[0, 1] * homogeneousMatrix.elements[1, 1] + 
                thisHomogeneousMatrix.elements[0, 2] * homogeneousMatrix.elements[2, 1] + 
                thisHomogeneousMatrix.elements[0, 3] * homogeneousMatrix.elements[3, 1];
            result.elements[0, 2] = thisHomogeneousMatrix.elements[0, 0] * homogeneousMatrix.elements[0, 2] +
                thisHomogeneousMatrix.elements[0, 1] * homogeneousMatrix.elements[1, 2] +
                thisHomogeneousMatrix.elements[0, 2] * homogeneousMatrix.elements[2, 2] +
                thisHomogeneousMatrix.elements[0, 3] * homogeneousMatrix.elements[3, 2];
            result.elements[0, 3] = thisHomogeneousMatrix.elements[0, 0] * homogeneousMatrix.elements[0, 3] +
                thisHomogeneousMatrix.elements[0, 1] * homogeneousMatrix.elements[1, 3] +
                thisHomogeneousMatrix.elements[0, 2] * homogeneousMatrix.elements[2, 3] +
                thisHomogeneousMatrix.elements[0, 3] * homogeneousMatrix.elements[3, 3];

            result.elements[1, 0] = thisHomogeneousMatrix.elements[1, 0] * homogeneousMatrix.elements[0, 0] +
                thisHomogeneousMatrix.elements[1, 1] * homogeneousMatrix.elements[1, 0] +
                thisHomogeneousMatrix.elements[1, 2] * homogeneousMatrix.elements[2, 0] +
                thisHomogeneousMatrix.elements[1, 3] * homogeneousMatrix.elements[3, 0];
            result.elements[1, 1] = thisHomogeneousMatrix.elements[1, 0] * homogeneousMatrix.elements[0, 1] +
                thisHomogeneousMatrix.elements[1, 1] * homogeneousMatrix.elements[1, 1] +
                thisHomogeneousMatrix.elements[1, 2] * homogeneousMatrix.elements[2, 1] +
                thisHomogeneousMatrix.elements[1, 3] * homogeneousMatrix.elements[3, 1];
            result.elements[1, 2] = thisHomogeneousMatrix.elements[1, 0] * homogeneousMatrix.elements[0, 2] +
                thisHomogeneousMatrix.elements[1, 1] * homogeneousMatrix.elements[1, 2] +
                thisHomogeneousMatrix.elements[1, 2] * homogeneousMatrix.elements[2, 2] +
                thisHomogeneousMatrix.elements[1, 3] * homogeneousMatrix.elements[3, 2];
            result.elements[1, 3] = thisHomogeneousMatrix.elements[1, 0] * homogeneousMatrix.elements[0, 3] +
                thisHomogeneousMatrix.elements[1, 1] * homogeneousMatrix.elements[1, 3] +
                thisHomogeneousMatrix.elements[1, 2] * homogeneousMatrix.elements[2, 3] +
                thisHomogeneousMatrix.elements[1, 3] * homogeneousMatrix.elements[3, 3];

            result.elements[2, 0] = thisHomogeneousMatrix.elements[2, 0] * homogeneousMatrix.elements[0, 0] +
                thisHomogeneousMatrix.elements[2, 1] * homogeneousMatrix.elements[1, 0] +
                thisHomogeneousMatrix.elements[2, 2] * homogeneousMatrix.elements[2, 0] +
                thisHomogeneousMatrix.elements[2, 3] * homogeneousMatrix.elements[3, 0];
            result.elements[2, 1] = thisHomogeneousMatrix.elements[2, 0] * homogeneousMatrix.elements[0, 1] +
                thisHomogeneousMatrix.elements[2, 1] * homogeneousMatrix.elements[1, 1] +
                thisHomogeneousMatrix.elements[2, 2] * homogeneousMatrix.elements[2, 1] +
                thisHomogeneousMatrix.elements[2, 3] * homogeneousMatrix.elements[3, 1];
            result.elements[2, 2] = thisHomogeneousMatrix.elements[2, 0] * homogeneousMatrix.elements[0, 2] +
                thisHomogeneousMatrix.elements[2, 1] * homogeneousMatrix.elements[1, 2] +
                thisHomogeneousMatrix.elements[2, 2] * homogeneousMatrix.elements[2, 2] +
                thisHomogeneousMatrix.elements[2, 3] * homogeneousMatrix.elements[3, 2];
            result.elements[2, 3] = thisHomogeneousMatrix.elements[2, 0] * homogeneousMatrix.elements[0, 3] +
                thisHomogeneousMatrix.elements[2, 1] * homogeneousMatrix.elements[1, 3] +
                thisHomogeneousMatrix.elements[2, 2] * homogeneousMatrix.elements[2, 3] +
                thisHomogeneousMatrix.elements[2, 3] * homogeneousMatrix.elements[3, 3];

            result.elements[3, 0] = thisHomogeneousMatrix.elements[3, 0] * homogeneousMatrix.elements[0, 0] +
                thisHomogeneousMatrix.elements[3, 1] * homogeneousMatrix.elements[1, 0] +
                thisHomogeneousMatrix.elements[3, 2] * homogeneousMatrix.elements[2, 0] +
                thisHomogeneousMatrix.elements[3, 3] * homogeneousMatrix.elements[3, 0];
            result.elements[3, 1] = thisHomogeneousMatrix.elements[3, 0] * homogeneousMatrix.elements[0, 1] +
                thisHomogeneousMatrix.elements[3, 1] * homogeneousMatrix.elements[1, 1] +
                thisHomogeneousMatrix.elements[3, 2] * homogeneousMatrix.elements[2, 1] +
                thisHomogeneousMatrix.elements[3, 3] * homogeneousMatrix.elements[3, 1];
            result.elements[3, 2] = thisHomogeneousMatrix.elements[3, 0] * homogeneousMatrix.elements[0, 2] +
                thisHomogeneousMatrix.elements[3, 1] * homogeneousMatrix.elements[1, 2] +
                thisHomogeneousMatrix.elements[3, 2] * homogeneousMatrix.elements[2, 2] +
                thisHomogeneousMatrix.elements[3, 3] * homogeneousMatrix.elements[3, 2];
            result.elements[3, 3] = thisHomogeneousMatrix.elements[3, 0] * homogeneousMatrix.elements[0, 3] +
                thisHomogeneousMatrix.elements[3, 1] * homogeneousMatrix.elements[1, 3] +
                thisHomogeneousMatrix.elements[3, 2] * homogeneousMatrix.elements[2, 3] +
                thisHomogeneousMatrix.elements[3, 3] * homogeneousMatrix.elements[3, 3];

            return result;
        }
    }
}
