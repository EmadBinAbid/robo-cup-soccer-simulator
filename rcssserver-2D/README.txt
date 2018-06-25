[15.3.0]
  * Fixed bison3 build problems. Supported Ubuntu 14.04.

[15.2.2]
  * Fixed a bug of the backpass detection. If kick and catch are taken
    simultaneously by same team players but the before kicker also
    belongs to the same team, the backpass violation is detected.

[15.2.1]
  * Fixed a bug of the backpass detection. Two or more players from
    different teams kick the ball in the same game cycle, the backpass
    violation is never detected.

[15.2.0]
  * Fixed an issue with the CatchRef which did not allow a goalie to
    catch the ball, after having intercepted it from an opponent,
    dribbled to its own area and catch it. Regardless of the
    interception position, this should never lead to a foul being
    called. Thanks go to Fernando Almeida for reporting the problem
    and providing the patch.

  * Changed the defalut value of server::log_date_format from
    "%Y%m%d%H%M-" to "%Y%m%d%H%M%S-".

  * Fixed a defect of boost detection.
