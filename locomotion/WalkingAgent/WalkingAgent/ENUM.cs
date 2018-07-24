using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
        @author: Emad Bin Abid
        @date: July 14, 2018
        */
    enum ConnectionType
    {
        CONNECTION_TCP,
        CONNECTION_UDP,
        CONNECTION_ILLEGAL
    }

    enum Direction
    {
        BESIDE_LEFT,
        BESIDE_RIGHT
    }

    enum Bonedid
    {
        HEAD,
        RIGHT_LOWER_ARM,
        LEFT_LOWER_ARM,
        RIGHT_FOOT,
        LEFT_FOOT
    }

    enum PlayMode
    {
        PLAYMODE_UNKNOWN,
        PLAYMODE_BEFORE_KICK_OFF,
        PLAYMODE_PLAY_ON,
        PLAYMODE_KICKOFF_LEFT,
        PLAYMODE_KICKOFF_RIGHT,
        PLAYMODE_GOAL_KICK_LEFT,
        PLAYMODE_GOAL_KICK_RIGHT,
        PLAYMODE_KICKIN_LEFT,
        PLAYMODE_KICKIN_RIGHT,
        PLAYMODE_FREE_KICK_LEFT,
        PLAYMODE_FREE_KICK_RIGHT,
        PLAYMODE_GOAL_LEFT,
        PLAYMODE_GOAL_RIGHT,
        PLAYMODE_CORNER_KICK_LEFT,
        PLAYMODE_CORNER_KICK_RIGHT,
        PLAYMODE_GAME_OVER
    }

    enum Side
    {
        SIDE_UNKNOWN,
        SIDE_LEFT,
        SIDE_RIGHT,
        SIDE_CENTER,
        SIDE_SELF,
        SIDE_OPPONENT
    }

    enum DofId
    {
        //Head
        DOF_HEAD_PAN,
        DOF_HEAD_TILT,

        //Right Hand
        DOF_SHOULDER_RX,
        DOF_SHOULDER_RY,
        DOF_SHOULDER_RT,
        DOF_ELBOW_R,

        //Left Hand
        DOF_SHOULDER_LX,
        DOF_SHOULDER_LY,
        DOF_SHOULDER_LT,
        DOF_ELBOW_L,

        //Right Leg
        DOF_LEG_RT,
        DOF_LEG_RX,
        DOF_LEG_RY,
        DOF_KNEE_R,
        DOF_ANKLE_RX,
        DOF_ANKLE_RY,

        //Left Leg
        DOF_LEG_LT,
        DOF_LEG_LX,
        DOF_LEG_LY,
        DOF_KNEE_L,
        DOF_ANKLE_LX,
        DOF_ANKLE_LY,

        DOF_COUNT,
    }

    enum DofMap
    {
        hj1,
        hj2,
        raj1,
        raj2,
        raj3,
        raj4,
        laj1,
        laj2,
        laj3,
        laj4,
        rlj1,
        rlj2,
        rlj3,
        rlj4,
        rlj5,
        rlj6,
        llj1,
        llj2,
        llj3,
        llj4,
        llj5,
        llj6
    }

    /*Error codes used by the library are defined in this enumeration.They
    are either used as values for the error field within the continuation
    structures, or as return values for functions with a return type of
    sexp_errcode_t.*/
    enum SexpErrCode
    {
        /*No Error*/
        SEXP_ERR_OK,
        
        /*Memory Error.  malloc/realloc/calloc failures may result in this error
        code. This can either result from the system calls failing, or in the
        limited memory mode of the library, the memory limit being exceeded.
        In limited memory mode, if this error condition is present, one should
        check the memory limits that were in place during the erroneous call.*/
        SEXP_ERR_MEMORY,

        /*Badly Formed Expression. Missing, misplaced, or mismatched parenthesis will result in this error.*/
        SEXP_ERR_BADFORM,

        /*A sexp_t that is inconsistent will result in this error code. 
          An example is a SEXP_BASIC sexp_t with a null val field but a non-zero val_used value. 
          Similar cases exist for SEXP_DQUOTE, SQUOTE, and BINARY types.
          This value is also used in the parser to flag a case where an inlined binary block is given a negative length.*/
        SEXP_ERR_BADCONTENT,

        /*If a null string is passed into the parser, this error occurs.*/
        SEXP_ERR_NULLSTRING,

        /*General IO related errors, such as failure of fopen(). 
        These are basically non-starters with respect to getting the IO routines going.*/
        SEXP_ERR_IO,

        /*I/O routines that return NULL may simply have nothing to read. 
        This is sometimes an error condition if the io wrapper continuation contains a partially complete s-expression, 
        but nothing more is present (yet) on the file descriptor.*/
        SEXP_ERR_IO_EMPTY,

        /*When running the library under limited memory (ie, _SEXP_LIMIT_MEMORY_ defined at build time), 
        this error will be produced when the memory limit is exceeded.*/
        SEXP_ERR_MEM_LIMIT,

        /*Buffer for unparsing is full.*/
        SEXP_ERR_BUFFER_FULL,

        /*routines that take parameters such as memory limits, growth sizes, or default sizes, 
        can produce this error if a bad value has been passed in. This error usually will indicate that the parameters were bad and the
        default values were used instead (ie, it is non-fatal.).*/
        SEXP_ERR_BAD_PARAM,

        /*Bad stack state encountered.*/
        SEXP_ERR_BAD_STACK,

        /*Unknown parser state*/
        SEXP_ERR_UNKNOWN_STATE
    }

    class ENUM
    {
        
    }
}
