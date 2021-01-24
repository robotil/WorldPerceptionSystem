

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from buildmodel.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "buildmodelPlugin.hpp"

namespace WorldPerceptionModel {
    namespace BuildModel {

        /* ----------------------------------------------------------------------------
        *  Type Test_Data
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        Test_Data *
        Test_DataPluginSupport_create_data(void)
        {
            try {
                Test_Data *sample = new Test_Data;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        Test_DataPluginSupport_destroy_data(
            Test_Data *sample) 
        {
            delete sample;
        }

        RTIBool 
        Test_DataPluginSupport_copy_data(
            Test_Data *dst,
            const Test_Data *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        Test_DataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            Test_Data *dst,
            const Test_Data *src)
        {
            return WorldPerceptionModel::BuildModel::Test_DataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        Test_DataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        Test_DataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Test_Data *sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            using namespace ::dds::core::policy;

            try{
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Test_Data >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                Test_Data, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Test_DataPlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd, 
                    sample, 
                    &stream, 
                    RTI_TRUE, 
                    encapsulationId,
                    RTI_TRUE, 
                    NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool
        Test_DataPlugin_deserialize_from_cdr_buffer(
            Test_Data *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramConext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin;
            struct PRESTypePluginDefaultEndpointData epd;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            epd.programContext = defaultProgramConext;  
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Test_Data >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            Test_Data, 
            true, true, true>();

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            ::rti::topic::reset_sample(*sample);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd,
                sample,
                &stream, 
                RTI_TRUE, 
                RTI_TRUE, 
                NULL);
        }

        unsigned int 
        Test_DataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        Test_DataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool Test_DataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Test_Data **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey( 
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    
            } catch (...) {
                return RTI_FALSE;
            }     
        }

        unsigned int
        Test_DataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        unsigned int
        Test_DataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                endpoint_data,
                &overflow,
                encapsulation_id,
                current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type RegionOfInterest_type
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RegionOfInterest_type *
        RegionOfInterest_typePluginSupport_create_data(void)
        {
            try {
                RegionOfInterest_type *sample = new RegionOfInterest_type;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        RegionOfInterest_typePluginSupport_destroy_data(
            RegionOfInterest_type *sample) 
        {
            delete sample;
        }

        RTIBool 
        RegionOfInterest_typePluginSupport_copy_data(
            RegionOfInterest_type *dst,
            const RegionOfInterest_type *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        RegionOfInterest_typePlugin_copy_sample(
            PRESTypePluginEndpointData,
            RegionOfInterest_type *dst,
            const RegionOfInterest_type *src)
        {
            return WorldPerceptionModel::BuildModel::RegionOfInterest_typePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RegionOfInterest_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        RegionOfInterest_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        RegionOfInterest_typePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        RegionOfInterest_typePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        unsigned int
        RegionOfInterest_typePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                endpoint_data,
                &overflow,
                encapsulation_id,
                current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_BuildModelParameters
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_BuildModelParameters *
        WPS_BuildModelParametersPluginSupport_create_data(void)
        {
            try {
                WPS_BuildModelParameters *sample = new WPS_BuildModelParameters;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_BuildModelParametersPluginSupport_destroy_data(
            WPS_BuildModelParameters *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_BuildModelParametersPluginSupport_copy_data(
            WPS_BuildModelParameters *dst,
            const WPS_BuildModelParameters *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        WPS_BuildModelParametersPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_BuildModelParameters *dst,
            const WPS_BuildModelParameters *src)
        {
            return WorldPerceptionModel::BuildModel::WPS_BuildModelParametersPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_BuildModelParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_BuildModelParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelParameters *sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            using namespace ::dds::core::policy;

            try{
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelParameters >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_BuildModelParameters, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_BuildModelParametersPlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd, 
                    sample, 
                    &stream, 
                    RTI_TRUE, 
                    encapsulationId,
                    RTI_TRUE, 
                    NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool
        WPS_BuildModelParametersPlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelParameters *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramConext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin;
            struct PRESTypePluginDefaultEndpointData epd;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            epd.programContext = defaultProgramConext;  
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelParameters >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_BuildModelParameters, 
            true, true, true>();

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            ::rti::topic::reset_sample(*sample);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd,
                sample,
                &stream, 
                RTI_TRUE, 
                RTI_TRUE, 
                NULL);
        }

        unsigned int 
        WPS_BuildModelParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        WPS_BuildModelParametersPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_BuildModelParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelParameters **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey( 
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    
            } catch (...) {
                return RTI_FALSE;
            }     
        }

        unsigned int
        WPS_BuildModelParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        unsigned int
        WPS_BuildModelParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                endpoint_data,
                &overflow,
                encapsulation_id,
                current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        WPS_BuildModelOperation_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int initial_alignment = current_alignment;

                current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,
                    NULL,
                    include_encapsulation,
                    encapsulation_id, current_alignment);

                return current_alignment - initial_alignment;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        void WPS_BuildModelOperation_typePluginSupport_print_data(
            const WPS_BuildModelOperation_type *sample,
            const char *description, int indent_level)
        {
            if (description != NULL) {
                RTICdrType_printIndent(indent_level);
                RTILog_debug("%s:\n", description);
            }

            if (sample == NULL) {
                RTICdrType_printIndent(indent_level+1);
                RTILog_debug("NULL\n");
                return;
            }

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_BuildModelOperation_type", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_BuildModelData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_BuildModelData *
        WPS_BuildModelDataPluginSupport_create_data(void)
        {
            try {
                WPS_BuildModelData *sample = new WPS_BuildModelData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_BuildModelDataPluginSupport_destroy_data(
            WPS_BuildModelData *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_BuildModelDataPluginSupport_copy_data(
            WPS_BuildModelData *dst,
            const WPS_BuildModelData *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        WPS_BuildModelDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_BuildModelData *dst,
            const WPS_BuildModelData *src)
        {
            return WorldPerceptionModel::BuildModel::WPS_BuildModelDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_BuildModelDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_BuildModelDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelData *sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            using namespace ::dds::core::policy;

            try{
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_BuildModelData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_BuildModelDataPlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd, 
                    sample, 
                    &stream, 
                    RTI_TRUE, 
                    encapsulationId,
                    RTI_TRUE, 
                    NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool
        WPS_BuildModelDataPlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelData *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramConext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin;
            struct PRESTypePluginDefaultEndpointData epd;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            epd.programContext = defaultProgramConext;  
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_BuildModelData, 
            true, true, true>();

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            ::rti::topic::reset_sample(*sample);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd,
                sample,
                &stream, 
                RTI_TRUE, 
                RTI_TRUE, 
                NULL);
        }

        unsigned int 
        WPS_BuildModelDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        WPS_BuildModelDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_BuildModelDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey( 
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    
            } catch (...) {
                return RTI_FALSE;
            }     
        }

        unsigned int
        WPS_BuildModelDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        unsigned int
        WPS_BuildModelDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                endpoint_data,
                &overflow,
                encapsulation_id,
                current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type DDS_BuildModelMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_BuildModelMessage *
        DDS_BuildModelMessagePluginSupport_create_data(void)
        {
            try {
                DDS_BuildModelMessage *sample = new DDS_BuildModelMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BuildModelMessagePluginSupport_destroy_data(
            DDS_BuildModelMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_BuildModelMessagePluginSupport_copy_data(
            DDS_BuildModelMessage *dst,
            const DDS_BuildModelMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_BuildModelMessage *
        DDS_BuildModelMessagePluginSupport_create_key(void)
        {
            return DDS_BuildModelMessagePluginSupport_create_data();
        }

        void 
        DDS_BuildModelMessagePluginSupport_destroy_key(
            DDS_BuildModelMessageKeyHolder *key) 
        {
            DDS_BuildModelMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_BuildModelMessagePlugin_on_participant_attached(
            void *registration_data,
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration,
            void *container_plugin_context,
            RTICdrTypeCode *type_code)
        {
            struct RTIXCdrInterpreterPrograms *programs = NULL;
            struct PRESTypePluginDefaultParticipantData *pd = NULL;
            struct RTIXCdrInterpreterProgramsGenProperty programProperty =
            RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
            if (registration_data) {} /* To avoid warnings */
            if (participant_info) {} /* To avoid warnings */
            if (top_level_registration) {} /* To avoid warnings */
            if (container_plugin_context) {} /* To avoid warnings */
            if (type_code) {} /* To avoid warnings */
            pd = (struct PRESTypePluginDefaultParticipantData *)
            PRESTypePluginDefaultParticipantData_new(participant_info);

            programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
            programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
            programProperty.resolveAlias = RTI_XCDR_TRUE;
            programProperty.inlineStruct = RTI_XCDR_TRUE;
            programProperty.optimizeEnum = RTI_XCDR_TRUE;

            programProperty.externalReferenceSize = 
            (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
            programProperty.getExternalRefPointerFcn = 
            ::rti::topic::interpreter::get_external_value_pointer;

            programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                DDS_TypeCodeFactory_get_instance(),
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BuildModelMessage >::get().native()
                ,
                &programProperty,
                RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

            if (programs == NULL) {
                PRESTypePluginDefaultParticipantData_delete(
                    (PRESTypePluginParticipantData)pd);
                return NULL;
            }

            pd->programs = programs;
            return (PRESTypePluginParticipantData)pd;
        }

        void 
        DDS_BuildModelMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {
            if (participant_data != NULL) {
                struct PRESTypePluginDefaultParticipantData *pd = 
                (struct PRESTypePluginDefaultParticipantData *)participant_data;

                if (pd->programs != NULL) {
                    DDS_TypeCodeFactory_remove_programs_from_global_list(
                        DDS_TypeCodeFactory_get_instance(),
                        pd->programs);
                    pd->programs = NULL;
                }
                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }
        }

        PRESTypePluginEndpointData
        DDS_BuildModelMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            try {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                unsigned int serializedKeyMaxSize = 0;
                unsigned int serializedKeyMaxSizeV2 = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    DDS_BuildModelMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_BuildModelMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_BuildModelMessagePlugin_get_serialized_key_max_size_for_keyhash(
                    epd,
                    RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                    0);

                if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                    epd,
                    endpoint_info,
                    serializedKeyMaxSize,
                    serializedKeyMaxSizeV2))  
                {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BuildModelMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_BuildModelMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_BuildModelMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_BuildModelMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_BuildModelMessage *dst,
            const DDS_BuildModelMessage *src)
        {
            return WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_BuildModelMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BuildModelMessage *sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            using namespace ::dds::core::policy;

            try{
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BuildModelMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_BuildModelMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_BuildModelMessagePlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd, 
                    sample, 
                    &stream, 
                    RTI_TRUE, 
                    encapsulationId,
                    RTI_TRUE, 
                    NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool
        DDS_BuildModelMessagePlugin_deserialize_from_cdr_buffer(
            DDS_BuildModelMessage *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramConext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin;
            struct PRESTypePluginDefaultEndpointData epd;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            epd.programContext = defaultProgramConext;  
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BuildModelMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_BuildModelMessage, 
            true, true, true>();

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            ::rti::topic::reset_sample(*sample);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd,
                sample,
                &stream, 
                RTI_TRUE, 
                RTI_TRUE, 
                NULL);
        }

        unsigned int 
        DDS_BuildModelMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        DDS_BuildModelMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_BuildModelMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey( 
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    
            } catch (...) {
                return RTI_FALSE;
            }     
        }

        unsigned int
        DDS_BuildModelMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        unsigned int
        DDS_BuildModelMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                endpoint_data,
                &overflow,
                encapsulation_id,
                current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        DDS_BuildModelMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessageKeyHolder *dst, 
            const DDS_BuildModelMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_BuildModelMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage *dst, const
            DDS_BuildModelMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_BuildModelMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BuildModelMessage *instance,
            RTIEncapsulationId encapsulationId)
        {
            try {
                struct RTICdrStream * md5Stream = NULL;
                struct RTICdrStreamState cdrState;
                char * buffer = NULL;
                RTIXCdrBoolean iCdrv2;

                iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
                RTICdrStreamState_init(&cdrState);
                md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

                if (md5Stream == NULL) {
                    return RTI_FALSE;
                }

                RTICdrStream_resetPosition(md5Stream);
                RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

                if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                    endpoint_data,
                    instance,
                    md5Stream,
                    iCdrv2?
                    RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                    RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                    NULL)) 
                {
                    int size;

                    RTICdrStream_pushState(md5Stream, &cdrState, -1);

                    size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
                        endpoint_data,
                        RTI_FALSE,
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        0,
                        instance);

                    if (size <= RTICdrStream_getBufferLength(md5Stream)) {
                        RTICdrStream_popState(md5Stream, &cdrState);        
                        return RTI_FALSE;
                    }   

                    RTIOsapiHeap_allocateBuffer(&buffer,size,0);

                    if (buffer == NULL) {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        return RTI_FALSE;
                    }

                    RTICdrStream_set(md5Stream, buffer, size);
                    RTIOsapiMemory_zero(
                        RTICdrStream_getBuffer(md5Stream),
                        RTICdrStream_getBufferLength(md5Stream));
                    RTICdrStream_resetPosition(md5Stream);
                    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
                    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                        endpoint_data,
                        instance,
                        md5Stream, 
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        NULL)) 
                    {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        RTIOsapiHeap_freeBuffer(buffer);
                        return RTI_FALSE;
                    }        
                }   

                if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
                (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
                PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
                    RTICdrStream_computeMD5(md5Stream, keyhash->value);
                } else {
                    RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
                    RTIOsapiMemory_copy(
                        keyhash->value, 
                        RTICdrStream_getBuffer(md5Stream), 
                        RTICdrStream_getCurrentPositionOffset(md5Stream));
                }

                keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

                if (buffer != NULL) {
                    RTICdrStream_popState(md5Stream, &cdrState);
                    RTIOsapiHeap_freeBuffer(buffer);
                }

                return RTI_TRUE;

            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool 
        DDS_BuildModelMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_BuildModelMessage * sample = NULL;
            sample = (DDS_BuildModelMessage *)
            PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                endpoint_data,
                sample,
                stream, 
                deserialize_encapsulation, 
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
            if (!WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_instance_to_keyhash(
                endpoint_data,
                keyhash,
                sample,
                RTICdrStream_getEncapsulationKind(stream))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;   
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DDS_BuildModelMessagePlugin_new(void) 
        { 
            struct PRESTypePlugin *plugin = NULL;
            const struct PRESTypePluginVersion PLUGIN_VERSION = 
            PRES_TYPE_PLUGIN_VERSION_2_0;

            RTIOsapiHeap_allocateStructure(
                &plugin, struct PRESTypePlugin);
            if (plugin == NULL) {
                return NULL;
            }

            plugin->version = PLUGIN_VERSION;

            /* set up parent's function pointers */
            plugin->onParticipantAttached =
            (PRESTypePluginOnParticipantAttachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_BuildModelMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_BuildModelMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_BuildModelMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_BuildModelMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_BuildModelMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_BuildModelMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_BuildModelMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_BuildModelMessagePlugin_return_buffer;
            plugin->getBufferWithParams = NULL;
            plugin->returnBufferWithParams = NULL;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

            plugin->getWriterLoanedSampleFnc = NULL; 
            plugin->returnWriterLoanedSampleFnc = NULL;
            plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
            plugin->validateWriterLoanedSampleFnc = NULL;
            plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

            static const char * TYPE_NAME = "WorldPerceptionModel::BuildModel::DDS_BuildModelMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_BuildModelMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        WPS_BuildModelStatusEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int initial_alignment = current_alignment;

                current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,
                    NULL,
                    include_encapsulation,
                    encapsulation_id, current_alignment);

                return current_alignment - initial_alignment;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        void WPS_BuildModelStatusEnumPluginSupport_print_data(
            const WPS_BuildModelStatusEnum *sample,
            const char *description, int indent_level)
        {
            if (description != NULL) {
                RTICdrType_printIndent(indent_level);
                RTILog_debug("%s:\n", description);
            }

            if (sample == NULL) {
                RTICdrType_printIndent(indent_level+1);
                RTILog_debug("NULL\n");
                return;
            }

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_BuildModelStatusEnum", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type DDS_BuildModelReportMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_BuildModelReportMessage *
        DDS_BuildModelReportMessagePluginSupport_create_data(void)
        {
            try {
                DDS_BuildModelReportMessage *sample = new DDS_BuildModelReportMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BuildModelReportMessagePluginSupport_destroy_data(
            DDS_BuildModelReportMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_BuildModelReportMessagePluginSupport_copy_data(
            DDS_BuildModelReportMessage *dst,
            const DDS_BuildModelReportMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_BuildModelReportMessage *
        DDS_BuildModelReportMessagePluginSupport_create_key(void)
        {
            return DDS_BuildModelReportMessagePluginSupport_create_data();
        }

        void 
        DDS_BuildModelReportMessagePluginSupport_destroy_key(
            DDS_BuildModelReportMessageKeyHolder *key) 
        {
            DDS_BuildModelReportMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_BuildModelReportMessagePlugin_on_participant_attached(
            void *registration_data,
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration,
            void *container_plugin_context,
            RTICdrTypeCode *type_code)
        {
            struct RTIXCdrInterpreterPrograms *programs = NULL;
            struct PRESTypePluginDefaultParticipantData *pd = NULL;
            struct RTIXCdrInterpreterProgramsGenProperty programProperty =
            RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
            if (registration_data) {} /* To avoid warnings */
            if (participant_info) {} /* To avoid warnings */
            if (top_level_registration) {} /* To avoid warnings */
            if (container_plugin_context) {} /* To avoid warnings */
            if (type_code) {} /* To avoid warnings */
            pd = (struct PRESTypePluginDefaultParticipantData *)
            PRESTypePluginDefaultParticipantData_new(participant_info);

            programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
            programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
            programProperty.resolveAlias = RTI_XCDR_TRUE;
            programProperty.inlineStruct = RTI_XCDR_TRUE;
            programProperty.optimizeEnum = RTI_XCDR_TRUE;

            programProperty.externalReferenceSize = 
            (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
            programProperty.getExternalRefPointerFcn = 
            ::rti::topic::interpreter::get_external_value_pointer;

            programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                DDS_TypeCodeFactory_get_instance(),
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BuildModelReportMessage >::get().native()
                ,
                &programProperty,
                RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

            if (programs == NULL) {
                PRESTypePluginDefaultParticipantData_delete(
                    (PRESTypePluginParticipantData)pd);
                return NULL;
            }

            pd->programs = programs;
            return (PRESTypePluginParticipantData)pd;
        }

        void 
        DDS_BuildModelReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data)
        {
            if (participant_data != NULL) {
                struct PRESTypePluginDefaultParticipantData *pd = 
                (struct PRESTypePluginDefaultParticipantData *)participant_data;

                if (pd->programs != NULL) {
                    DDS_TypeCodeFactory_remove_programs_from_global_list(
                        DDS_TypeCodeFactory_get_instance(),
                        pd->programs);
                    pd->programs = NULL;
                }
                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }
        }

        PRESTypePluginEndpointData
        DDS_BuildModelReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            try {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                unsigned int serializedKeyMaxSize = 0;
                unsigned int serializedKeyMaxSizeV2 = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    DDS_BuildModelReportMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_BuildModelReportMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
                    epd,
                    RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                    0);

                if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                    epd,
                    endpoint_info,
                    serializedKeyMaxSize,
                    serializedKeyMaxSizeV2))  
                {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BuildModelReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_BuildModelReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_BuildModelReportMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_BuildModelReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_BuildModelReportMessage *dst,
            const DDS_BuildModelReportMessage *src)
        {
            return WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BuildModelReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            using namespace ::dds::core::policy;

            try{
                RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BuildModelReportMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_BuildModelReportMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
                    (PRESTypePluginEndpointData)&epd, 
                    RTI_TRUE, 
                    encapsulationId,
                    0);

                if (buffer == NULL) {
                    *length = 
                    PRESTypePlugin_interpretedGetSerializedSampleSize(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        encapsulationId,
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = PRESTypePlugin_interpretedSerialize(
                    (PRESTypePluginEndpointData)&epd, 
                    sample, 
                    &stream, 
                    RTI_TRUE, 
                    encapsulationId,
                    RTI_TRUE, 
                    NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool
        DDS_BuildModelReportMessagePlugin_deserialize_from_cdr_buffer(
            DDS_BuildModelReportMessage *sample,
            const char * buffer,
            unsigned int length)
        {
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramConext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin;
            struct PRESTypePluginDefaultEndpointData epd;

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, length);

            epd.programContext = defaultProgramConext;  
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BuildModelReportMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_BuildModelReportMessage, 
            true, true, true>();

            epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
            epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

            ::rti::topic::reset_sample(*sample);
            return PRESTypePlugin_interpretedDeserialize( 
                (PRESTypePluginEndpointData)&epd,
                sample,
                &stream, 
                RTI_TRUE, 
                RTI_TRUE, 
                NULL);
        }

        unsigned int 
        DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return 0;
            }    
        }

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        PRESTypePluginKeyKind 
        DDS_BuildModelReportMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_BuildModelReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos)
        {
            try {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= PRESTypePlugin_interpretedDeserializeKey( 
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                return result;    
            } catch (...) {
                return RTI_FALSE;
            }     
        }

        unsigned int
        DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            try {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        unsigned int
        DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment)
        {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                endpoint_data,
                &overflow,
                encapsulation_id,
                current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        }

        RTIBool 
        DDS_BuildModelReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessageKeyHolder *dst, 
            const DDS_BuildModelReportMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_BuildModelReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage *dst, const
            DDS_BuildModelReportMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_BuildModelReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BuildModelReportMessage *instance,
            RTIEncapsulationId encapsulationId)
        {
            try {
                struct RTICdrStream * md5Stream = NULL;
                struct RTICdrStreamState cdrState;
                char * buffer = NULL;
                RTIXCdrBoolean iCdrv2;

                iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
                RTICdrStreamState_init(&cdrState);
                md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

                if (md5Stream == NULL) {
                    return RTI_FALSE;
                }

                RTICdrStream_resetPosition(md5Stream);
                RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

                if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                    endpoint_data,
                    instance,
                    md5Stream,
                    iCdrv2?
                    RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                    RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                    NULL)) 
                {
                    int size;

                    RTICdrStream_pushState(md5Stream, &cdrState, -1);

                    size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
                        endpoint_data,
                        RTI_FALSE,
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        0,
                        instance);

                    if (size <= RTICdrStream_getBufferLength(md5Stream)) {
                        RTICdrStream_popState(md5Stream, &cdrState);        
                        return RTI_FALSE;
                    }   

                    RTIOsapiHeap_allocateBuffer(&buffer,size,0);

                    if (buffer == NULL) {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        return RTI_FALSE;
                    }

                    RTICdrStream_set(md5Stream, buffer, size);
                    RTIOsapiMemory_zero(
                        RTICdrStream_getBuffer(md5Stream),
                        RTICdrStream_getBufferLength(md5Stream));
                    RTICdrStream_resetPosition(md5Stream);
                    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
                    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                        endpoint_data,
                        instance,
                        md5Stream, 
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        NULL)) 
                    {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        RTIOsapiHeap_freeBuffer(buffer);
                        return RTI_FALSE;
                    }        
                }   

                if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
                (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
                PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
                    RTICdrStream_computeMD5(md5Stream, keyhash->value);
                } else {
                    RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
                    RTIOsapiMemory_copy(
                        keyhash->value, 
                        RTICdrStream_getBuffer(md5Stream), 
                        RTICdrStream_getCurrentPositionOffset(md5Stream));
                }

                keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

                if (buffer != NULL) {
                    RTICdrStream_popState(md5Stream, &cdrState);
                    RTIOsapiHeap_freeBuffer(buffer);
                }

                return RTI_TRUE;

            } catch (...) {
                return RTI_FALSE;
            }
        }

        RTIBool 
        DDS_BuildModelReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_BuildModelReportMessage * sample = NULL;
            sample = (DDS_BuildModelReportMessage *)
            PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
            if (sample == NULL) {
                return RTI_FALSE;
            }
            if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                endpoint_data,
                sample,
                stream, 
                deserialize_encapsulation, 
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
            if (!WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_instance_to_keyhash(
                endpoint_data,
                keyhash,
                sample,
                RTICdrStream_getEncapsulationKind(stream))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;   
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */
        struct PRESTypePlugin *DDS_BuildModelReportMessagePlugin_new(void) 
        { 
            struct PRESTypePlugin *plugin = NULL;
            const struct PRESTypePluginVersion PLUGIN_VERSION = 
            PRES_TYPE_PLUGIN_VERSION_2_0;

            RTIOsapiHeap_allocateStructure(
                &plugin, struct PRESTypePlugin);
            if (plugin == NULL) {
                return NULL;
            }

            plugin->version = PLUGIN_VERSION;

            /* set up parent's function pointers */
            plugin->onParticipantAttached =
            (PRESTypePluginOnParticipantAttachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_BuildModelReportMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_BuildModelReportMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_BuildModelReportMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_BuildModelReportMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_BuildModelReportMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_BuildModelReportMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_BuildModelReportMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_BuildModelReportMessagePlugin_return_buffer;
            plugin->getBufferWithParams = NULL;
            plugin->returnBufferWithParams = NULL;
            plugin->getSerializedSampleSizeFnc =
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

            plugin->getWriterLoanedSampleFnc = NULL; 
            plugin->returnWriterLoanedSampleFnc = NULL;
            plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
            plugin->validateWriterLoanedSampleFnc = NULL;
            plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

            static const char * TYPE_NAME = "WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_BuildModelReportMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace BuildModel  */
} /* namespace WorldPerceptionModel  */
#undef RTI_CDR_CURRENT_SUBMODULE 
