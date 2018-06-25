Author: Emad Bin Abid
Date: Monday, June 25, 2018
---------------------------

* This file contains depenencies' resolution as of Linux Ubuntu 17.10. *

===============
RCSSSERVER (2D)
===============

Procedure:
1. Make sure to change the "Server for Pakistan"/"Server for US" or any other server to "Main Server." by
navigating into Ubuntu Software > Software & Updates. In the Ubuntu Software tab, change the settings in
"Downloaded from" dropdown menu.

2. Run the following commands on linux terminal with "sudo apt-get install <command-name>".

build-essential
bison
flex
libboost-all-dev

3. Navigate to '/rcssserver-15.3.0' and type " sudo ./configure CXXFLAGS='-std=c++03' ".

4. If there were no errors, type " make " in the terminal.

5. If there were no errors, run the rcssserver by typing " ./rcssserver " in the terminal window.