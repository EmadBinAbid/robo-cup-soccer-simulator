Author: Emad Bin Abid
Date: Monday, June 25, 2018
---------------------------

* This file contains depenencies' resolution as of Linux Ubuntu 17.10. *

===========
RCSSMONITOR
===========

Procedure:
1. Make sure to change the "Server for Pakistan"/"Server for US" or any other server to "Main Server." by
navigating into Ubuntu Software > Software & Updates. In the Ubuntu Software tab, change the settings in
"Downloaded from" dropdown menu.

2. Run the following commands on linux terminal with "sudo apt-get install <command-name>".

build-essential
libqt4-dev
libboost-all-dev
libaudio-dev
libxt-dev
libxi-dev
libxrender-dev
libfreetype6-dev
libfontconfig1-dev
python-gobject-dev
libpng-dev

3. Navigate to '/rcssmonitor-15.2.0' and type " sudo ./configure CXXFLAGS='-std=c++11' ".

4. If there were no errors, type " sudo make " in the terminal.

5. If there were no errors, run the rcssmonitor by typing " ./rcssmonitor " in the terminal window.