using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
        Point position;
        bool isSupport;
        bool isRight;
        double time;
        double theta;
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
        Point position;
        double time;
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
        Point positionX;
        Point positionY;
        double time;
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
        double positionZ;
        double time;
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
        public bool stop;                      //It is true if the walk is stopped

        //Default constructor
        public RunningZMP()
        {

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
    }
}
