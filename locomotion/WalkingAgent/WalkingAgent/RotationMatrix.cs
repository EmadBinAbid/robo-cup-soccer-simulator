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
    RotationMatrix is a class that presents the functionalities to use rotation matrix. The rotation matrix is mainly used to create 
    homogeneous matrix.
    */
    class RotationMatrix
    {
        //The vectors represent each line of rotation matrix
        private Point line0, line1, line2;

        //Calculates the rotation matrix for the rotation around X axis
        private RotationMatrix GetRotationMatrixX(double angle)
        {
            RotationMatrix result = new RotationMatrix();
            result.line0 = new Point(1, 0, 0);
            result.line1 = new Point(0, Math.Cos(angle), -Math.Sin(angle));
            result.line2 = new Point(0, Math.Sin(angle), Math.Cos(angle));
            return result;
        }

        //Calculates the rotation matrix for the rotation around Y axis
        private RotationMatrix GetRotationMatrixY(double angle)
        {
            RotationMatrix result = new RotationMatrix();
            result.line0 = new Point(Math.Cos(angle), 0, Math.Sin(angle));
            result.line1 = new Point(0, 1, 0);
            result.line2 = new Point(-Math.Sin(angle), 0, Math.Sin(angle));
            return result;
        }

        //Calculates the rotation matrix for the rotation around Z axis
        private RotationMatrix GetRotationMatrixZ(double angle)
        {
            RotationMatrix result = new RotationMatrix();
            result.line0 = new Point(Math.Cos(angle), -Math.Sin(angle), 0);
            result.line1 = new Point(Math.Sin(angle), Math.Cos(angle), 0);
            result.line2 = new  Point(0, 0, 1);
            return result;
        }

        //Default constructor
        public RotationMatrix()
        {
            this.line0 = new Point(1, 0, 0);
            this.line1 = new Point(0, 1, 0);
            this.line2 = new Point(0, 0, 1);
        }

        //Overloaded constructor
        public RotationMatrix(Point line0, Point line1, Point line2)
        {
            this.line0 = line0;
            this.line1 = line1;
            this.line2 = line2;
        }

        public RotationMatrix getInverse()
        {
            //The inverse of a rotation matrix is its transpose, which is also a rotation matrix
            return new RotationMatrix(
                new Point(this.line0.GetX(), this.line1.GetX(), this.line1.GetX()),
                new Point(this.line0.GetY(), this.line1.GetY(), this.line1.GetY()), 
                new Point(this.line0.GetZ(), this.line1.GetZ(), this.line1.GetZ())
                );
    }

        public RotationMatrix rotateX(double angle)
        {
            double COS = Math.Cos(angle);
            double SIN = Math.Sin(angle);

            this.line0.SetY(COS * this.line0.GetY() + SIN * this.line0.GetZ());
            this.line1.SetY(COS * this.line1.GetY() + SIN * this.line1.GetZ());
            this.line2.SetY(COS * this.line2.GetY() + SIN * this.line2.GetZ());

            this.line0.SetZ(-SIN * this.line0.GetY() + COS * this.line0.GetZ());
            this.line1.SetZ(-SIN * this.line1.GetY() + COS * this.line1.GetZ());
            this.line2.SetZ(-SIN * this.line2.GetY() + COS * this.line2.GetZ());

            return this;
        }

        public RotationMatrix rotateY(double angle)
        {
            double COS = Math.Cos(angle);
            double SIN = Math.Sin(angle);

            this.line0.SetX(COS * this.line0.GetX() - SIN * this.line0.GetZ());
            this.line1.SetX(COS * this.line1.GetX() - SIN * this.line1.GetZ());
            this.line2.SetX(COS * this.line2.GetX() - SIN * this.line2.GetZ());

            this.line0.SetZ(SIN * this.line0.GetX() + COS * this.line0.GetZ());
            this.line1.SetZ(SIN * this.line1.GetX() + COS * this.line1.GetZ());
            this.line2.SetZ(SIN * this.line2.GetX() + COS * this.line2.GetZ());

            return this;
        }

        public RotationMatrix rotateZ(double angle)
        {
            double COS = Math.Cos(angle);
            double SIN = Math.Sin(angle);

            this.line0.SetX(COS * this.line0.GetX() + SIN * this.line0.GetY());
            this.line1.SetX(COS * this.line1.GetX() + SIN * this.line1.GetY());
            this.line2.SetX(COS * this.line2.GetX() + SIN * this.line2.GetY());

            this.line0.SetY(-SIN * this.line0.GetX() + COS * this.line0.GetY());
            this.line1.SetY(-SIN * this.line1.GetX() + COS * this.line1.GetY());
            this.line2.SetY(-SIN * this.line2.GetX() + COS * this.line2.GetY());

            return this;
        }

        // -> Order of multiplication of matrices matter
        public static RotationMatrix operator *(RotationMatrix thisRotationMatrix, RotationMatrix rotationMatrix)
        {
            RotationMatrix result = new RotationMatrix();

            //Setting result.line0
            result.line0.SetX(thisRotationMatrix.line0.GetX() * rotationMatrix.line0.GetX() +
                thisRotationMatrix.line0.GetY() * rotationMatrix.line1.GetX() +
                thisRotationMatrix.line0.GetZ() * rotationMatrix.line2.GetX());
            result.line0.SetY(thisRotationMatrix.line0.GetX() * rotationMatrix.line0.GetY() +
                thisRotationMatrix.line0.GetY() * rotationMatrix.line1.GetY() +
                thisRotationMatrix.line0.GetZ() * rotationMatrix.line2.GetY());
            result.line0.SetZ(thisRotationMatrix.line0.GetX() * rotationMatrix.line0.GetZ() +
                thisRotationMatrix.line0.GetY() * rotationMatrix.line1.GetZ() +
                thisRotationMatrix.line0.GetZ() * rotationMatrix.line2.GetZ());

            //Setting result.line1
            result.line1.SetX(thisRotationMatrix.line1.GetX() * rotationMatrix.line0.GetX() +
                thisRotationMatrix.line1.GetY() * rotationMatrix.line1.GetX() +
                thisRotationMatrix.line1.GetZ() * rotationMatrix.line2.GetX());
            result.line1.SetY(thisRotationMatrix.line1.GetX() * rotationMatrix.line0.GetY() +
                thisRotationMatrix.line1.GetY() * rotationMatrix.line1.GetY() +
                thisRotationMatrix.line1.GetZ() * rotationMatrix.line2.GetY());
            result.line1.SetZ(thisRotationMatrix.line1.GetX() * rotationMatrix.line0.GetZ() +
                thisRotationMatrix.line1.GetY() * rotationMatrix.line1.GetZ() +
                thisRotationMatrix.line1.GetZ() * rotationMatrix.line2.GetZ());

            //Setting result.line2
            result.line2.SetX(thisRotationMatrix.line2.GetX() * rotationMatrix.line0.GetX() +
                thisRotationMatrix.line2.GetY() * rotationMatrix.line1.GetX() +
                thisRotationMatrix.line2.GetZ() * rotationMatrix.line2.GetX());
            result.line2.SetY(thisRotationMatrix.line2.GetX() * rotationMatrix.line0.GetY() +
                thisRotationMatrix.line2.GetY() * rotationMatrix.line1.GetY() +
                thisRotationMatrix.line2.GetZ() * rotationMatrix.line2.GetY());
            result.line2.SetZ(thisRotationMatrix.line2.GetX() * rotationMatrix.line0.GetZ() +
                thisRotationMatrix.line2.GetY() * rotationMatrix.line1.GetZ() +
                thisRotationMatrix.line2.GetZ() * rotationMatrix.line2.GetZ());

            return result;
        }

        public static Point operator *(RotationMatrix thisRotationMatrix, Point vector)
        {
            return new Point(
              thisRotationMatrix.line0.GetX() * vector.GetX() + 
              thisRotationMatrix.line0.GetY() * vector.GetY() + 
              thisRotationMatrix.line0.GetZ() * vector.GetZ(),

              thisRotationMatrix.line1.GetX() * vector.GetX() +
              thisRotationMatrix.line1.GetY() * vector.GetY() +
              thisRotationMatrix.line1.GetZ() * vector.GetZ(),

              thisRotationMatrix.line2.GetX() * vector.GetX() +
              thisRotationMatrix.line2.GetY() * vector.GetY() +
              thisRotationMatrix.line2.GetZ() * vector.GetZ()
              );
        }


    }
}
