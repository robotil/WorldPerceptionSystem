# WorldPerceptionSystem

This repository includes the DDS interface between management and algorithm processes.
There are 5 functions:
1. Build model
2. Report drone localization
3. Report UTM coordinates of the center of the current video frame
4. Report the orientation of the vehicle identified on the current video frames.
5. Report differences between two models.

In order to use the interface:
1. Install RTI Connect
2. Clone the repository in the RTI workspace
3. Go to: WPS/wps_full
4. Check the values of NDDSHOME and NDDSWS at the beginning of the Makefile and adapt if needed.
5. make!
6. Note that the interface uses the shared library libDDSGeneral.so that is located in WPS/DDSGeneral/libs
7. When running, you have to export:     
    export LD_LIBRARY_PATH=$HOME/rti_workspace/6.0.1/WPS/dds_general_src/libs:$LD_LIBRARY_HOME:$LD_LIBRARY_HOME

