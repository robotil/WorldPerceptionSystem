Welcome to your first Connext DDS example! 

This example was generated for architecture x64Linux4gcc7.3.0, using the
data type DDS_GlobalPathReportMessage from DDSGeneralForWPS.idl.
This example builds two applications, named DDSGeneralForWPS_publisher and
DDSGeneralForWPS_subscriber.

To Build this example:
======================
 
From your command shell, type:
> make -f makefile_DDSGeneralForWPS_x64Linux4gcc7.3.0
This command will build a release executable.
 
To build a debug version instead:
> make -f makefile_DDSGeneralForWPS_x64Linux4gcc7.3.0 DEBUG=1

To Modify the Data:
===================
To modify the data being sent, edit the DDSGeneralForWPS_publisher.cxx
file where it says:
// Modify the data to be written here

To Run this Example:
====================
Make sure you are in the directory where the USER_QOS_PROFILES.xml file was
generated (the same directory this README file is in).
Run /home/user/rti_connext_dds-6.0.1/resource/scripts/rtisetenv_x64Linux4gcc7.3.0.bash
to make sure the Connext libraries are in the path, especially if you opened
a new command prompt window.
Run the publishing or subscribing application by typing:
> objs/x64Linux4gcc7.3.0/DDSGeneralForWPS_publisher <domain_id> <sample_count>
> objs/x64Linux4gcc7.3.0/DDSGeneralForWPS_subscriber <domain_id> <sample_count>
