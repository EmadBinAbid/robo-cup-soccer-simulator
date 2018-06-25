RoboCup Soccer Simulator (RCSS)

This repository is for a research project. The aim is to design and develop a framework and locomotion
engine for the existing RCSS server 3D. 

Configuration:

1. RCSS server (2D) version 15.3.0.
	- To run rcssserver-2D, navigate to "rcssserver-15.3.0/src" and write "./rcssserver" in terminal.

2. RCSS monitor (2D) version 15.2.0.
	- To run rcssmonitor-2D, navigate to "rcssmonitor-15.2.0/src" and write "./rcssmonitor" in terminal.

3. RCSS server + monitor version 0.3 (SimSpark + rcssserver3d).
	- To run SimSpark + rcssserver3d:
		-- Navigate to "SimSpark/spark/build" and run "sudo make install" on the terminal.
		-- Now, navigate to SimSpark/rcssserver3d/build and type "sudo make install" on the terminal.
		-- Run "rcsoccersim" on the terminal window.

