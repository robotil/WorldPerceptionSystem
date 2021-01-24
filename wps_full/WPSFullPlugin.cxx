

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WPSFull.idl using "rtiddsgen".
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

#include "WPSFullPlugin.hpp"

namespace WorldPerceptionModel {

    /* ----------------------------------------------------------------------------
    *  Type WPS_TDPoint
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    WPS_TDPoint *
    WPS_TDPointPluginSupport_create_data(void)
    {
        try {
            WPS_TDPoint *sample = new WPS_TDPoint;    
            ::rti::topic::allocate_sample(*sample);
            return sample;
        } catch (...) {
            return NULL;
        }
    }

    void 
    WPS_TDPointPluginSupport_destroy_data(
        WPS_TDPoint *sample) 
    {
        delete sample;
    }

    RTIBool 
    WPS_TDPointPluginSupport_copy_data(
        WPS_TDPoint *dst,
        const WPS_TDPoint *src)
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
    WPS_TDPointPlugin_copy_sample(
        PRESTypePluginEndpointData,
        WPS_TDPoint *dst,
        const WPS_TDPoint *src)
    {
        return WorldPerceptionModel::WPS_TDPointPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    WPS_TDPointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    WPS_TDPointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const WPS_TDPoint *sample,
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
            (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_TDPoint >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_TDPoint, 
            true, true, true>();

            encapsulationId = DDS_TypeCode_get_native_encapsulation(
                (DDS_TypeCode *) plugin.typeCode,
                representation);

            if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            WPS_TDPointPlugin_get_serialized_sample_max_size(
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
    WPS_TDPointPlugin_deserialize_from_cdr_buffer(
        WPS_TDPoint *sample,
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
        (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_TDPoint >::get().native()
        ;
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        WPS_TDPoint, 
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
    WPS_TDPointPlugin_get_serialized_sample_max_size(
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
    WPS_TDPointPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool WPS_TDPointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        WPS_TDPoint **sample, 
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
    WPS_TDPointPlugin_get_serialized_key_max_size(
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
    WPS_TDPointPlugin_get_serialized_key_max_size_for_keyhash(
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
        return WorldPerceptionModel::RegionOfInterest_typePluginSupport_copy_data(dst,src);
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
    namespace WPS_BuildModel {

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
            return WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParametersPluginSupport_copy_data(dst,src);
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
            return WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelDataPluginSupport_copy_data(dst,src);
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
        *  Type WPS_BuildModelMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_BuildModelMessage *
        WPS_BuildModelMessagePluginSupport_create_data(void)
        {
            try {
                WPS_BuildModelMessage *sample = new WPS_BuildModelMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_BuildModelMessagePluginSupport_destroy_data(
            WPS_BuildModelMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_BuildModelMessagePluginSupport_copy_data(
            WPS_BuildModelMessage *dst,
            const WPS_BuildModelMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        WPS_BuildModelMessage *
        WPS_BuildModelMessagePluginSupport_create_key(void)
        {
            return WPS_BuildModelMessagePluginSupport_create_data();
        }

        void 
        WPS_BuildModelMessagePluginSupport_destroy_key(
            WPS_BuildModelMessageKeyHolder *key) 
        {
            WPS_BuildModelMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        WPS_BuildModelMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelMessage >::get().native()
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
        WPS_BuildModelMessagePlugin_on_participant_detached(
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
        WPS_BuildModelMessagePlugin_on_endpoint_attached(
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
                    WPS_BuildModelMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_BuildModelMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = WPS_BuildModelMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_BuildModelMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_BuildModelMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_BuildModelMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_BuildModelMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_BuildModelMessage *dst,
            const WPS_BuildModelMessage *src)
        {
            return WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_BuildModelMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_BuildModelMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_BuildModelMessagePlugin_get_serialized_sample_max_size(
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
        WPS_BuildModelMessagePlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_BuildModelMessage, 
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
        WPS_BuildModelMessagePlugin_get_serialized_sample_max_size(
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
        WPS_BuildModelMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool WPS_BuildModelMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage **sample, 
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
        WPS_BuildModelMessagePlugin_get_serialized_key_max_size(
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
        WPS_BuildModelMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_BuildModelMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessageKeyHolder *dst, 
            const WPS_BuildModelMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_BuildModelMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage *dst, const
            WPS_BuildModelMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_BuildModelMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_BuildModelMessage *instance,
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
        WPS_BuildModelMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            WPS_BuildModelMessage * sample = NULL;
            sample = (WPS_BuildModelMessage *)
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
            if (!WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *WPS_BuildModelMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_BuildModelMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_BuildModelMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_BuildModelMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_BuildModelMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            WPS_BuildModelMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            WPS_BuildModelMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_BuildModelMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_BuildModelMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_BuildModelMessagePlugin_delete(struct PRESTypePlugin *plugin)
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
        *  Type WPS_BuildModelReportMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_BuildModelReportMessage *
        WPS_BuildModelReportMessagePluginSupport_create_data(void)
        {
            try {
                WPS_BuildModelReportMessage *sample = new WPS_BuildModelReportMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_BuildModelReportMessagePluginSupport_destroy_data(
            WPS_BuildModelReportMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_BuildModelReportMessagePluginSupport_copy_data(
            WPS_BuildModelReportMessage *dst,
            const WPS_BuildModelReportMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        WPS_BuildModelReportMessage *
        WPS_BuildModelReportMessagePluginSupport_create_key(void)
        {
            return WPS_BuildModelReportMessagePluginSupport_create_data();
        }

        void 
        WPS_BuildModelReportMessagePluginSupport_destroy_key(
            WPS_BuildModelReportMessageKeyHolder *key) 
        {
            WPS_BuildModelReportMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        WPS_BuildModelReportMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelReportMessage >::get().native()
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
        WPS_BuildModelReportMessagePlugin_on_participant_detached(
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
        WPS_BuildModelReportMessagePlugin_on_endpoint_attached(
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
                    WPS_BuildModelReportMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_BuildModelReportMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_BuildModelReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_BuildModelReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_BuildModelReportMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_BuildModelReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_BuildModelReportMessage *dst,
            const WPS_BuildModelReportMessage *src)
        {
            return WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelReportMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelReportMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_BuildModelReportMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_BuildModelReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelReportMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_BuildModelReportMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_BuildModelReportMessage, 
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
        WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_BuildModelReportMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool WPS_BuildModelReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage **sample, 
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
        WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size(
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
        WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_BuildModelReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessageKeyHolder *dst, 
            const WPS_BuildModelReportMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_BuildModelReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage *dst, const
            WPS_BuildModelReportMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_BuildModelReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_BuildModelReportMessage *instance,
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
        WPS_BuildModelReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            WPS_BuildModelReportMessage * sample = NULL;
            sample = (WPS_BuildModelReportMessage *)
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
            if (!WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *WPS_BuildModelReportMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_BuildModelReportMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_BuildModelReportMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_BuildModelReportMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_BuildModelReportMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            WPS_BuildModelReportMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            WPS_BuildModelReportMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_BuildModelReportMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_BuildModelReportMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_BuildModelReportMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace WPS_BuildModel  */
    namespace WPS_DroneLocalizationReporting {

        /* ----------------------------------------------------------------------------
        *  Type WPS_DroneLocalizationParameters
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_DroneLocalizationParameters *
        WPS_DroneLocalizationParametersPluginSupport_create_data(void)
        {
            try {
                WPS_DroneLocalizationParameters *sample = new WPS_DroneLocalizationParameters;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_DroneLocalizationParametersPluginSupport_destroy_data(
            WPS_DroneLocalizationParameters *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_DroneLocalizationParametersPluginSupport_copy_data(
            WPS_DroneLocalizationParameters *dst,
            const WPS_DroneLocalizationParameters *src)
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
        WPS_DroneLocalizationParametersPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_DroneLocalizationParameters *dst,
            const WPS_DroneLocalizationParameters *src)
        {
            return WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParametersPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_DroneLocalizationParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_DroneLocalizationParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationParameters *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationParameters >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_DroneLocalizationParameters, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_DroneLocalizationParametersPlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationParametersPlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationParameters *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationParameters >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_DroneLocalizationParameters, 
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
        WPS_DroneLocalizationParametersPlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationParametersPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_DroneLocalizationParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationParameters **sample, 
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
        WPS_DroneLocalizationParametersPlugin_get_serialized_key_max_size(
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
        WPS_DroneLocalizationParametersPlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_DroneLocalizationOperation_typePlugin_get_serialized_sample_max_size(
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

        void WPS_DroneLocalizationOperation_typePluginSupport_print_data(
            const WPS_DroneLocalizationOperation_type *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_DroneLocalizationOperation_type", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_DroneLocalizationData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_DroneLocalizationData *
        WPS_DroneLocalizationDataPluginSupport_create_data(void)
        {
            try {
                WPS_DroneLocalizationData *sample = new WPS_DroneLocalizationData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_DroneLocalizationDataPluginSupport_destroy_data(
            WPS_DroneLocalizationData *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_DroneLocalizationDataPluginSupport_copy_data(
            WPS_DroneLocalizationData *dst,
            const WPS_DroneLocalizationData *src)
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
        WPS_DroneLocalizationDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_DroneLocalizationData *dst,
            const WPS_DroneLocalizationData *src)
        {
            return WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_DroneLocalizationDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_DroneLocalizationDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_DroneLocalizationData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_DroneLocalizationDataPlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationDataPlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_DroneLocalizationData, 
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
        WPS_DroneLocalizationDataPlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_DroneLocalizationDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationData **sample, 
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
        WPS_DroneLocalizationDataPlugin_get_serialized_key_max_size(
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
        WPS_DroneLocalizationDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WPS_DroneLocalizationMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_DroneLocalizationMessage *
        WPS_DroneLocalizationMessagePluginSupport_create_data(void)
        {
            try {
                WPS_DroneLocalizationMessage *sample = new WPS_DroneLocalizationMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_data(
            WPS_DroneLocalizationMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_DroneLocalizationMessagePluginSupport_copy_data(
            WPS_DroneLocalizationMessage *dst,
            const WPS_DroneLocalizationMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        WPS_DroneLocalizationMessage *
        WPS_DroneLocalizationMessagePluginSupport_create_key(void)
        {
            return WPS_DroneLocalizationMessagePluginSupport_create_data();
        }

        void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_key(
            WPS_DroneLocalizationMessageKeyHolder *key) 
        {
            WPS_DroneLocalizationMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        WPS_DroneLocalizationMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationMessage >::get().native()
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
        WPS_DroneLocalizationMessagePlugin_on_participant_detached(
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
        WPS_DroneLocalizationMessagePlugin_on_endpoint_attached(
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
                    WPS_DroneLocalizationMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_DroneLocalizationMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_DroneLocalizationMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_DroneLocalizationMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_DroneLocalizationMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_DroneLocalizationMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_DroneLocalizationMessage *dst,
            const WPS_DroneLocalizationMessage *src)
        {
            return WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_DroneLocalizationMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_DroneLocalizationMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationMessagePlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_DroneLocalizationMessage, 
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
        WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool WPS_DroneLocalizationMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage **sample, 
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
        WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size(
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
        WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_DroneLocalizationMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessageKeyHolder *dst, 
            const WPS_DroneLocalizationMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_DroneLocalizationMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage *dst, const
            WPS_DroneLocalizationMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_DroneLocalizationMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_DroneLocalizationMessage *instance,
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
        WPS_DroneLocalizationMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            WPS_DroneLocalizationMessage * sample = NULL;
            sample = (WPS_DroneLocalizationMessage *)
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
            if (!WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *WPS_DroneLocalizationMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_DroneLocalizationMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_DroneLocalizationMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_DroneLocalizationMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_DroneLocalizationMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            WPS_DroneLocalizationMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            WPS_DroneLocalizationMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_DroneLocalizationMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_DroneLocalizationMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_DroneLocalizationMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        WPS_DroneLocalizationStatusEnumPlugin_get_serialized_sample_max_size(
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

        void WPS_DroneLocalizationStatusEnumPluginSupport_print_data(
            const WPS_DroneLocalizationStatusEnum *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_DroneLocalizationStatusEnum", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_DroneLocalizationReportMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_DroneLocalizationReportMessage *
        WPS_DroneLocalizationReportMessagePluginSupport_create_data(void)
        {
            try {
                WPS_DroneLocalizationReportMessage *sample = new WPS_DroneLocalizationReportMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_DroneLocalizationReportMessagePluginSupport_destroy_data(
            WPS_DroneLocalizationReportMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_DroneLocalizationReportMessagePluginSupport_copy_data(
            WPS_DroneLocalizationReportMessage *dst,
            const WPS_DroneLocalizationReportMessage *src)
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

        PRESTypePluginParticipantData 
        WPS_DroneLocalizationReportMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationReportMessage >::get().native()
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
        WPS_DroneLocalizationReportMessagePlugin_on_participant_detached(
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
        WPS_DroneLocalizationReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            try {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    WPS_DroneLocalizationReportMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_DroneLocalizationReportMessagePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_DroneLocalizationReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_DroneLocalizationReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_DroneLocalizationReportMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_DroneLocalizationReportMessage *dst,
            const WPS_DroneLocalizationReportMessage *src)
        {
            return WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_DroneLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationReportMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationReportMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_DroneLocalizationReportMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationReportMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_DroneLocalizationReportMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_DroneLocalizationReportMessage, 
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
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_DroneLocalizationReportMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_DroneLocalizationReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage **sample, 
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
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_key_max_size(
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
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        struct PRESTypePlugin *WPS_DroneLocalizationReportMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_DroneLocalizationReportMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_DroneLocalizationReportMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_DroneLocalizationReportMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_DroneLocalizationReportMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_get_key_kind;

            /* These functions are only used for keyed types. As this is not a keyed
            type they are all set to NULL
            */
            plugin->serializeKeyFnc = NULL ;    
            plugin->deserializeKeyFnc = NULL;  
            plugin->getKeyFnc = NULL;
            plugin->returnKeyFnc = NULL;
            plugin->instanceToKeyFnc = NULL;
            plugin->keyToInstanceFnc = NULL;
            plugin->getSerializedKeyMaxSizeFnc = NULL;
            plugin->instanceToKeyHashFnc = NULL;
            plugin->serializedSampleToKeyHashFnc = NULL;
            plugin->serializedKeyToKeyHashFnc = NULL;    
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_DroneLocalizationReportMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_DroneLocalizationReportMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_DroneLocalizationReportMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace WPS_DroneLocalizationReporting  */
    namespace WPS_UTMVehicleLocalizationReporting {

        /* ----------------------------------------------------------------------------
        *  Type RelevantLinkedFrames_type
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        RelevantLinkedFrames_type *
        RelevantLinkedFrames_typePluginSupport_create_data(void)
        {
            try {
                RelevantLinkedFrames_type *sample = new RelevantLinkedFrames_type;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        RelevantLinkedFrames_typePluginSupport_destroy_data(
            RelevantLinkedFrames_type *sample) 
        {
            delete sample;
        }

        RTIBool 
        RelevantLinkedFrames_typePluginSupport_copy_data(
            RelevantLinkedFrames_type *dst,
            const RelevantLinkedFrames_type *src)
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
        RelevantLinkedFrames_typePlugin_copy_sample(
            PRESTypePluginEndpointData,
            RelevantLinkedFrames_type *dst,
            const RelevantLinkedFrames_type *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_typePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        RelevantLinkedFrames_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        RelevantLinkedFrames_typePlugin_get_serialized_sample_max_size(
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
        RelevantLinkedFrames_typePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        RelevantLinkedFrames_typePlugin_get_serialized_key_max_size(
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
        RelevantLinkedFrames_typePlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WPS_PositionOrientation
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_PositionOrientation *
        WPS_PositionOrientationPluginSupport_create_data(void)
        {
            try {
                WPS_PositionOrientation *sample = new WPS_PositionOrientation;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_PositionOrientationPluginSupport_destroy_data(
            WPS_PositionOrientation *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_PositionOrientationPluginSupport_copy_data(
            WPS_PositionOrientation *dst,
            const WPS_PositionOrientation *src)
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
        WPS_PositionOrientationPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_PositionOrientation *dst,
            const WPS_PositionOrientation *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientationPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_PositionOrientationPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_PositionOrientationPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_PositionOrientation *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_PositionOrientation >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_PositionOrientation, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_PositionOrientationPlugin_get_serialized_sample_max_size(
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
        WPS_PositionOrientationPlugin_deserialize_from_cdr_buffer(
            WPS_PositionOrientation *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_PositionOrientation >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_PositionOrientation, 
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
        WPS_PositionOrientationPlugin_get_serialized_sample_max_size(
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
        WPS_PositionOrientationPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_PositionOrientationPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_PositionOrientation **sample, 
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
        WPS_PositionOrientationPlugin_get_serialized_key_max_size(
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
        WPS_PositionOrientationPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WPS_UTMVehicleLocalizationParameters
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_UTMVehicleLocalizationParameters *
        WPS_UTMVehicleLocalizationParametersPluginSupport_create_data(void)
        {
            try {
                WPS_UTMVehicleLocalizationParameters *sample = new WPS_UTMVehicleLocalizationParameters;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_UTMVehicleLocalizationParametersPluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationParameters *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_UTMVehicleLocalizationParametersPluginSupport_copy_data(
            WPS_UTMVehicleLocalizationParameters *dst,
            const WPS_UTMVehicleLocalizationParameters *src)
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
        WPS_UTMVehicleLocalizationParametersPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_UTMVehicleLocalizationParameters *dst,
            const WPS_UTMVehicleLocalizationParameters *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParametersPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_UTMVehicleLocalizationParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationParameters *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationParameters >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_UTMVehicleLocalizationParameters, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationParametersPlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationParameters *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationParameters >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_UTMVehicleLocalizationParameters, 
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
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationParametersPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_UTMVehicleLocalizationParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationParameters **sample, 
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
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_key_max_size(
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
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_UTMVehicleLocalizationOperation_typePlugin_get_serialized_sample_max_size(
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

        void WPS_UTMVehicleLocalizationOperation_typePluginSupport_print_data(
            const WPS_UTMVehicleLocalizationOperation_type *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_UTMVehicleLocalizationOperation_type", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_UTMVehicleLocalizationData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_UTMVehicleLocalizationData *
        WPS_UTMVehicleLocalizationDataPluginSupport_create_data(void)
        {
            try {
                WPS_UTMVehicleLocalizationData *sample = new WPS_UTMVehicleLocalizationData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_UTMVehicleLocalizationDataPluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationData *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_UTMVehicleLocalizationDataPluginSupport_copy_data(
            WPS_UTMVehicleLocalizationData *dst,
            const WPS_UTMVehicleLocalizationData *src)
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
        WPS_UTMVehicleLocalizationDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_UTMVehicleLocalizationData *dst,
            const WPS_UTMVehicleLocalizationData *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_UTMVehicleLocalizationDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_UTMVehicleLocalizationData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_UTMVehicleLocalizationDataPlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationDataPlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_UTMVehicleLocalizationData, 
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
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_UTMVehicleLocalizationDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationData **sample, 
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
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_key_max_size(
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
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WPS_UTMVehicleLocalizationMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_UTMVehicleLocalizationMessage *
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_data(void)
        {
            try {
                WPS_UTMVehicleLocalizationMessage *sample = new WPS_UTMVehicleLocalizationMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_UTMVehicleLocalizationMessagePluginSupport_copy_data(
            WPS_UTMVehicleLocalizationMessage *dst,
            const WPS_UTMVehicleLocalizationMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        WPS_UTMVehicleLocalizationMessage *
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_key(void)
        {
            return WPS_UTMVehicleLocalizationMessagePluginSupport_create_data();
        }

        void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_key(
            WPS_UTMVehicleLocalizationMessageKeyHolder *key) 
        {
            WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        WPS_UTMVehicleLocalizationMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationMessage >::get().native()
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
        WPS_UTMVehicleLocalizationMessagePlugin_on_participant_detached(
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
        WPS_UTMVehicleLocalizationMessagePlugin_on_endpoint_attached(
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
                    WPS_UTMVehicleLocalizationMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_UTMVehicleLocalizationMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_UTMVehicleLocalizationMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_UTMVehicleLocalizationMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_UTMVehicleLocalizationMessage *dst,
            const WPS_UTMVehicleLocalizationMessage *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_UTMVehicleLocalizationMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_UTMVehicleLocalizationMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationMessagePlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_UTMVehicleLocalizationMessage, 
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
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool WPS_UTMVehicleLocalizationMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage **sample, 
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
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size(
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
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_UTMVehicleLocalizationMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessageKeyHolder *dst, 
            const WPS_UTMVehicleLocalizationMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage *dst, const
            WPS_UTMVehicleLocalizationMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_UTMVehicleLocalizationMessage *instance,
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
        WPS_UTMVehicleLocalizationMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            WPS_UTMVehicleLocalizationMessage * sample = NULL;
            sample = (WPS_UTMVehicleLocalizationMessage *)
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
            if (!WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *WPS_UTMVehicleLocalizationMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_UTMVehicleLocalizationMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_UTMVehicleLocalizationMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        WPS_UTMVehicleLocalizationStatusEnumPlugin_get_serialized_sample_max_size(
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

        void WPS_UTMVehicleLocalizationStatusEnumPluginSupport_print_data(
            const WPS_UTMVehicleLocalizationStatusEnum *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_UTMVehicleLocalizationStatusEnum", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_UTMVehicleLocalizationReportData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_UTMVehicleLocalizationReportData *
        WPS_UTMVehicleLocalizationReportDataPluginSupport_create_data(void)
        {
            try {
                WPS_UTMVehicleLocalizationReportData *sample = new WPS_UTMVehicleLocalizationReportData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationReportData *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_copy_data(
            WPS_UTMVehicleLocalizationReportData *dst,
            const WPS_UTMVehicleLocalizationReportData *src)
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
        WPS_UTMVehicleLocalizationReportDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_UTMVehicleLocalizationReportData *dst,
            const WPS_UTMVehicleLocalizationReportData *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_UTMVehicleLocalizationReportDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationReportData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationReportData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_UTMVehicleLocalizationReportData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationReportDataPlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationReportData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationReportData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_UTMVehicleLocalizationReportData, 
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
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationReportDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_UTMVehicleLocalizationReportDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportData **sample, 
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
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_key_max_size(
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
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WPS_UTMVehicleLocalizationReportMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_UTMVehicleLocalizationReportMessage *
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_data(void)
        {
            try {
                WPS_UTMVehicleLocalizationReportMessage *sample = new WPS_UTMVehicleLocalizationReportMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationReportMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_copy_data(
            WPS_UTMVehicleLocalizationReportMessage *dst,
            const WPS_UTMVehicleLocalizationReportMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        WPS_UTMVehicleLocalizationReportMessage *
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_key(void)
        {
            return WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_data();
        }

        void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_key(
            WPS_UTMVehicleLocalizationReportMessageKeyHolder *key) 
        {
            WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationReportMessage >::get().native()
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_participant_detached(
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_endpoint_attached(
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
                    WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_UTMVehicleLocalizationReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_UTMVehicleLocalizationReportMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_UTMVehicleLocalizationReportMessage *dst,
            const WPS_UTMVehicleLocalizationReportMessage *src)
        {
            return WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_UTMVehicleLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationReportMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationReportMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_UTMVehicleLocalizationReportMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationReportMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_UTMVehicleLocalizationReportMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_UTMVehicleLocalizationReportMessage, 
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage **sample, 
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size(
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessageKeyHolder *dst, 
            const WPS_UTMVehicleLocalizationReportMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage *dst, const
            WPS_UTMVehicleLocalizationReportMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_UTMVehicleLocalizationReportMessage *instance,
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
        WPS_UTMVehicleLocalizationReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            WPS_UTMVehicleLocalizationReportMessage * sample = NULL;
            sample = (WPS_UTMVehicleLocalizationReportMessage *)
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
            if (!WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *WPS_UTMVehicleLocalizationReportMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_UTMVehicleLocalizationReportMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_UTMVehicleLocalizationReportMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace WPS_UTMVehicleLocalizationReporting  */
    namespace WPS_ModelDifferences {

        /* ----------------------------------------------------------------------------
        *  Type WPS_ModelDifferencesParameters
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_ModelDifferencesParameters *
        WPS_ModelDifferencesParametersPluginSupport_create_data(void)
        {
            try {
                WPS_ModelDifferencesParameters *sample = new WPS_ModelDifferencesParameters;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_ModelDifferencesParametersPluginSupport_destroy_data(
            WPS_ModelDifferencesParameters *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_ModelDifferencesParametersPluginSupport_copy_data(
            WPS_ModelDifferencesParameters *dst,
            const WPS_ModelDifferencesParameters *src)
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
        WPS_ModelDifferencesParametersPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_ModelDifferencesParameters *dst,
            const WPS_ModelDifferencesParameters *src)
        {
            return WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParametersPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_ModelDifferencesParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_ModelDifferencesParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesParameters *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesParameters >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_ModelDifferencesParameters, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_ModelDifferencesParametersPlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesParametersPlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesParameters *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesParameters >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_ModelDifferencesParameters, 
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
        WPS_ModelDifferencesParametersPlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesParametersPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_ModelDifferencesParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesParameters **sample, 
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
        WPS_ModelDifferencesParametersPlugin_get_serialized_key_max_size(
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
        WPS_ModelDifferencesParametersPlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_ModelDifferencesOperation_typePlugin_get_serialized_sample_max_size(
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

        void WPS_ModelDifferencesOperation_typePluginSupport_print_data(
            const WPS_ModelDifferencesOperation_type *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_ModelDifferencesOperation_type", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_ModelDifferencesData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_ModelDifferencesData *
        WPS_ModelDifferencesDataPluginSupport_create_data(void)
        {
            try {
                WPS_ModelDifferencesData *sample = new WPS_ModelDifferencesData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_ModelDifferencesDataPluginSupport_destroy_data(
            WPS_ModelDifferencesData *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_ModelDifferencesDataPluginSupport_copy_data(
            WPS_ModelDifferencesData *dst,
            const WPS_ModelDifferencesData *src)
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
        WPS_ModelDifferencesDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_ModelDifferencesData *dst,
            const WPS_ModelDifferencesData *src)
        {
            return WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_ModelDifferencesDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_ModelDifferencesDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_ModelDifferencesData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_ModelDifferencesDataPlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesDataPlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_ModelDifferencesData, 
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
        WPS_ModelDifferencesDataPlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_ModelDifferencesDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesData **sample, 
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
        WPS_ModelDifferencesDataPlugin_get_serialized_key_max_size(
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
        WPS_ModelDifferencesDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WPS_ModelDifferencesMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_ModelDifferencesMessage *
        WPS_ModelDifferencesMessagePluginSupport_create_data(void)
        {
            try {
                WPS_ModelDifferencesMessage *sample = new WPS_ModelDifferencesMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_ModelDifferencesMessagePluginSupport_destroy_data(
            WPS_ModelDifferencesMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_ModelDifferencesMessagePluginSupport_copy_data(
            WPS_ModelDifferencesMessage *dst,
            const WPS_ModelDifferencesMessage *src)
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

        PRESTypePluginParticipantData 
        WPS_ModelDifferencesMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesMessage >::get().native()
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
        WPS_ModelDifferencesMessagePlugin_on_participant_detached(
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
        WPS_ModelDifferencesMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *containerPluginContext)
        {
            try {
                PRESTypePluginEndpointData epd = NULL;
                unsigned int serializedSampleMaxSize = 0;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                if (participant_data == NULL) {
                    return NULL;
                } 

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    WPS_ModelDifferencesMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_ModelDifferencesMessagePluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_ModelDifferencesMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_ModelDifferencesMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_ModelDifferencesMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_ModelDifferencesMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_ModelDifferencesMessage *dst,
            const WPS_ModelDifferencesMessage *src)
        {
            return WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_ModelDifferencesMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_ModelDifferencesMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesMessagePlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_ModelDifferencesMessage, 
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
        WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool WPS_ModelDifferencesMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage **sample, 
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
        WPS_ModelDifferencesMessagePlugin_get_serialized_key_max_size(
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
        WPS_ModelDifferencesMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        struct PRESTypePlugin *WPS_ModelDifferencesMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_ModelDifferencesMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_ModelDifferencesMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_ModelDifferencesMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_ModelDifferencesMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_get_key_kind;

            /* These functions are only used for keyed types. As this is not a keyed
            type they are all set to NULL
            */
            plugin->serializeKeyFnc = NULL ;    
            plugin->deserializeKeyFnc = NULL;  
            plugin->getKeyFnc = NULL;
            plugin->returnKeyFnc = NULL;
            plugin->instanceToKeyFnc = NULL;
            plugin->keyToInstanceFnc = NULL;
            plugin->getSerializedKeyMaxSizeFnc = NULL;
            plugin->instanceToKeyHashFnc = NULL;
            plugin->serializedSampleToKeyHashFnc = NULL;
            plugin->serializedKeyToKeyHashFnc = NULL;    
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_ModelDifferencesMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_ModelDifferencesMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_ModelDifferencesMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        WPS_ModelDifferencesStatusEnumPlugin_get_serialized_sample_max_size(
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

        void WPS_ModelDifferencesStatusEnumPluginSupport_print_data(
            const WPS_ModelDifferencesStatusEnum *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "WPS_ModelDifferencesStatusEnum", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type WPS_ModelDifferencesReportMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WPS_ModelDifferencesReportMessage *
        WPS_ModelDifferencesReportMessagePluginSupport_create_data(void)
        {
            try {
                WPS_ModelDifferencesReportMessage *sample = new WPS_ModelDifferencesReportMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_data(
            WPS_ModelDifferencesReportMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        WPS_ModelDifferencesReportMessagePluginSupport_copy_data(
            WPS_ModelDifferencesReportMessage *dst,
            const WPS_ModelDifferencesReportMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        WPS_ModelDifferencesReportMessage *
        WPS_ModelDifferencesReportMessagePluginSupport_create_key(void)
        {
            return WPS_ModelDifferencesReportMessagePluginSupport_create_data();
        }

        void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_key(
            WPS_ModelDifferencesReportMessageKeyHolder *key) 
        {
            WPS_ModelDifferencesReportMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        WPS_ModelDifferencesReportMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesReportMessage >::get().native()
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
        WPS_ModelDifferencesReportMessagePlugin_on_participant_detached(
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
        WPS_ModelDifferencesReportMessagePlugin_on_endpoint_attached(
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
                    WPS_ModelDifferencesReportMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    WPS_ModelDifferencesReportMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size, epd,
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
        WPS_ModelDifferencesReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        WPS_ModelDifferencesReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "WPS_ModelDifferencesReportMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            WPS_ModelDifferencesReportMessage *dst,
            const WPS_ModelDifferencesReportMessage *src)
        {
            return WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        WPS_ModelDifferencesReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesReportMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesReportMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                WPS_ModelDifferencesReportMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesReportMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< WPS_ModelDifferencesReportMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            WPS_ModelDifferencesReportMessage, 
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
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size(
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
        WPS_ModelDifferencesReportMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool WPS_ModelDifferencesReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage **sample, 
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
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size(
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
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        WPS_ModelDifferencesReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessageKeyHolder *dst, 
            const WPS_ModelDifferencesReportMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage *dst, const
            WPS_ModelDifferencesReportMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_ModelDifferencesReportMessage *instance,
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
        WPS_ModelDifferencesReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            WPS_ModelDifferencesReportMessage * sample = NULL;
            sample = (WPS_ModelDifferencesReportMessage *)
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
            if (!WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *WPS_ModelDifferencesReportMessagePlugin_new(void) 
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
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            WPS_ModelDifferencesReportMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            WPS_ModelDifferencesReportMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            WPS_ModelDifferencesReportMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            WPS_ModelDifferencesReportMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            WPS_ModelDifferencesReportMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            WPS_ModelDifferencesReportMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            WPS_ModelDifferencesReportMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            WPS_ModelDifferencesReportMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        WPS_ModelDifferencesReportMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace WPS_ModelDifferences  */
} /* namespace WorldPerceptionModel  */
#undef RTI_CDR_CURRENT_SUBMODULE 
