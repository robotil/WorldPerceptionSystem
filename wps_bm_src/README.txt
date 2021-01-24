Taking care of Makefile:

NDDSWS := "/home/user/rti_workspace/6.0.1"

INCLUDES = -I. -I$(NDDSHOME)/include -I$(NDDSHOME)/include/ndds \
 -I$(NDDSHOME)/include/ndds/hpp -I$(NDDSWS)/WPS/dds_general_src <<< HERE


LIBS = -L$(NDDSHOME)/lib/$(TARGET_ARCH) \
        -L$(NDDSWS)/WPS/dds_general_src/libs \  <<< HERE
        -lnddscpp2$(SHAREDLIB_SFX)$(DEBUG_SFX) -lnddsc$(SHAREDLIB_SFX)$(DEBUG_SFX) -lnddscore$(SHAREDLIB_SFX)$(DEBUG_SFX) \
        $(SYSLIBS) -lDDSGeneral  <<< HERE

Run:
    export LD_LIBRARY_PATH=$HOME/rti_workspace/6.0.1/WPS/dds_general_src/libs:$LD_LIBRARY_HOME
