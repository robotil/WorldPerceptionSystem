

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSGeneralForWPS.idl using "rtiddsgen".
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

#include "DDSGeneralForWPSPlugin.hpp"

namespace DDS_GRI {
    namespace DDSCommon {

        /* ----------------------------------------------------------------------------
        *  Type String200
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        String200 *
        String200PluginSupport_create_data(void)
        {
            try {
                String200 *sample = new String200;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        String200PluginSupport_destroy_data(
            String200 *sample) 
        {
            delete sample;
        }

        RTIBool 
        String200PluginSupport_copy_data(
            String200 *dst,
            const String200 *src)
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
        String200Plugin_copy_sample(
            PRESTypePluginEndpointData,
            String200 *dst,
            const String200 *src)
        {
            return DDS_GRI::DDSCommon::String200PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        String200Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        String200Plugin_get_serialized_sample_max_size(
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
        String200Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        String200Plugin_get_serialized_key_max_size(
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
        String200Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type String100
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        String100 *
        String100PluginSupport_create_data(void)
        {
            try {
                String100 *sample = new String100;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        String100PluginSupport_destroy_data(
            String100 *sample) 
        {
            delete sample;
        }

        RTIBool 
        String100PluginSupport_copy_data(
            String100 *dst,
            const String100 *src)
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
        String100Plugin_copy_sample(
            PRESTypePluginEndpointData,
            String100 *dst,
            const String100 *src)
        {
            return DDS_GRI::DDSCommon::String100PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        String100Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        String100Plugin_get_serialized_sample_max_size(
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
        String100Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        String100Plugin_get_serialized_key_max_size(
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
        String100Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type String50
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        String50 *
        String50PluginSupport_create_data(void)
        {
            try {
                String50 *sample = new String50;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        String50PluginSupport_destroy_data(
            String50 *sample) 
        {
            delete sample;
        }

        RTIBool 
        String50PluginSupport_copy_data(
            String50 *dst,
            const String50 *src)
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
        String50Plugin_copy_sample(
            PRESTypePluginEndpointData,
            String50 *dst,
            const String50 *src)
        {
            return DDS_GRI::DDSCommon::String50PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        String50Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        String50Plugin_get_serialized_sample_max_size(
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
        String50Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        String50Plugin_get_serialized_key_max_size(
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
        String50Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type String20
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        String20 *
        String20PluginSupport_create_data(void)
        {
            try {
                String20 *sample = new String20;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        String20PluginSupport_destroy_data(
            String20 *sample) 
        {
            delete sample;
        }

        RTIBool 
        String20PluginSupport_copy_data(
            String20 *dst,
            const String20 *src)
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
        String20Plugin_copy_sample(
            PRESTypePluginEndpointData,
            String20 *dst,
            const String20 *src)
        {
            return DDS_GRI::DDSCommon::String20PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        String20Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        String20Plugin_get_serialized_sample_max_size(
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
        String20Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        String20Plugin_get_serialized_key_max_size(
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
        String20Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WString200
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WString200 *
        WString200PluginSupport_create_data(void)
        {
            try {
                WString200 *sample = new WString200;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WString200PluginSupport_destroy_data(
            WString200 *sample) 
        {
            delete sample;
        }

        RTIBool 
        WString200PluginSupport_copy_data(
            WString200 *dst,
            const WString200 *src)
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
        WString200Plugin_copy_sample(
            PRESTypePluginEndpointData,
            WString200 *dst,
            const WString200 *src)
        {
            return DDS_GRI::DDSCommon::WString200PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WString200Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        WString200Plugin_get_serialized_sample_max_size(
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
        WString200Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        WString200Plugin_get_serialized_key_max_size(
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
        WString200Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WString100
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WString100 *
        WString100PluginSupport_create_data(void)
        {
            try {
                WString100 *sample = new WString100;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WString100PluginSupport_destroy_data(
            WString100 *sample) 
        {
            delete sample;
        }

        RTIBool 
        WString100PluginSupport_copy_data(
            WString100 *dst,
            const WString100 *src)
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
        WString100Plugin_copy_sample(
            PRESTypePluginEndpointData,
            WString100 *dst,
            const WString100 *src)
        {
            return DDS_GRI::DDSCommon::WString100PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WString100Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        WString100Plugin_get_serialized_sample_max_size(
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
        WString100Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        WString100Plugin_get_serialized_key_max_size(
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
        WString100Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WString50
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WString50 *
        WString50PluginSupport_create_data(void)
        {
            try {
                WString50 *sample = new WString50;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WString50PluginSupport_destroy_data(
            WString50 *sample) 
        {
            delete sample;
        }

        RTIBool 
        WString50PluginSupport_copy_data(
            WString50 *dst,
            const WString50 *src)
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
        WString50Plugin_copy_sample(
            PRESTypePluginEndpointData,
            WString50 *dst,
            const WString50 *src)
        {
            return DDS_GRI::DDSCommon::WString50PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WString50Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        WString50Plugin_get_serialized_sample_max_size(
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
        WString50Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        WString50Plugin_get_serialized_key_max_size(
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
        WString50Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type WString20
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        WString20 *
        WString20PluginSupport_create_data(void)
        {
            try {
                WString20 *sample = new WString20;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        WString20PluginSupport_destroy_data(
            WString20 *sample) 
        {
            delete sample;
        }

        RTIBool 
        WString20PluginSupport_copy_data(
            WString20 *dst,
            const WString20 *src)
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
        WString20Plugin_copy_sample(
            PRESTypePluginEndpointData,
            WString20 *dst,
            const WString20 *src)
        {
            return DDS_GRI::DDSCommon::WString20PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        WString20Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        WString20Plugin_get_serialized_sample_max_size(
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
        WString20Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        WString20Plugin_get_serialized_key_max_size(
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
        WString20Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GUID
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GUID *
        DDS_GUIDPluginSupport_create_data(void)
        {
            try {
                DDS_GUID *sample = new DDS_GUID;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GUIDPluginSupport_destroy_data(
            DDS_GUID *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GUIDPluginSupport_copy_data(
            DDS_GUID *dst,
            const DDS_GUID *src)
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
        DDS_GUIDPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GUID *dst,
            const DDS_GUID *src)
        {
            return DDS_GRI::DDSCommon::DDS_GUIDPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GUIDPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        DDS_GUIDPlugin_get_serialized_sample_max_size(
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
        DDS_GUIDPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        DDS_GUIDPlugin_get_serialized_key_max_size(
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
        DDS_GUIDPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_FileTimeUTC
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_FileTimeUTC *
        DDS_FileTimeUTCPluginSupport_create_data(void)
        {
            try {
                DDS_FileTimeUTC *sample = new DDS_FileTimeUTC;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_FileTimeUTCPluginSupport_destroy_data(
            DDS_FileTimeUTC *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_FileTimeUTCPluginSupport_copy_data(
            DDS_FileTimeUTC *dst,
            const DDS_FileTimeUTC *src)
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
        DDS_FileTimeUTCPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_FileTimeUTC *dst,
            const DDS_FileTimeUTC *src)
        {
            return DDS_GRI::DDSCommon::DDS_FileTimeUTCPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_FileTimeUTCPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        DDS_FileTimeUTCPlugin_get_serialized_sample_max_size(
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
        DDS_FileTimeUTCPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        DDS_FileTimeUTCPlugin_get_serialized_key_max_size(
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
        DDS_FileTimeUTCPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type T_Int32
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        T_Int32 *
        T_Int32PluginSupport_create_data(void)
        {
            try {
                T_Int32 *sample = new T_Int32;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        T_Int32PluginSupport_destroy_data(
            T_Int32 *sample) 
        {
            delete sample;
        }

        RTIBool 
        T_Int32PluginSupport_copy_data(
            T_Int32 *dst,
            const T_Int32 *src)
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
        T_Int32Plugin_copy_sample(
            PRESTypePluginEndpointData,
            T_Int32 *dst,
            const T_Int32 *src)
        {
            return DDS_GRI::DDSCommon::T_Int32PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        T_Int32Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        T_Int32Plugin_get_serialized_sample_max_size(
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
        T_Int32Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        T_Int32Plugin_get_serialized_key_max_size(
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
        T_Int32Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type T_Int64
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        T_Int64 *
        T_Int64PluginSupport_create_data(void)
        {
            try {
                T_Int64 *sample = new T_Int64;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        T_Int64PluginSupport_destroy_data(
            T_Int64 *sample) 
        {
            delete sample;
        }

        RTIBool 
        T_Int64PluginSupport_copy_data(
            T_Int64 *dst,
            const T_Int64 *src)
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
        T_Int64Plugin_copy_sample(
            PRESTypePluginEndpointData,
            T_Int64 *dst,
            const T_Int64 *src)
        {
            return DDS_GRI::DDSCommon::T_Int64PluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        T_Int64Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        unsigned int 
        T_Int64Plugin_get_serialized_sample_max_size(
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
        T_Int64Plugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        unsigned int
        T_Int64Plugin_get_serialized_key_max_size(
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
        T_Int64Plugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type T_DateTimeType
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        T_DateTimeType *
        T_DateTimeTypePluginSupport_create_data(void)
        {
            try {
                T_DateTimeType *sample = new T_DateTimeType;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        T_DateTimeTypePluginSupport_destroy_data(
            T_DateTimeType *sample) 
        {
            delete sample;
        }

        RTIBool 
        T_DateTimeTypePluginSupport_copy_data(
            T_DateTimeType *dst,
            const T_DateTimeType *src)
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
        T_DateTimeTypePlugin_copy_sample(
            PRESTypePluginEndpointData,
            T_DateTimeType *dst,
            const T_DateTimeType *src)
        {
            return DDS_GRI::DDSCommon::T_DateTimeTypePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        T_DateTimeTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        T_DateTimeTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const T_DateTimeType *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< T_DateTimeType >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                T_DateTimeType, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                T_DateTimeTypePlugin_get_serialized_sample_max_size(
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
        T_DateTimeTypePlugin_deserialize_from_cdr_buffer(
            T_DateTimeType *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< T_DateTimeType >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            T_DateTimeType, 
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
        T_DateTimeTypePlugin_get_serialized_sample_max_size(
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
        T_DateTimeTypePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool T_DateTimeTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            T_DateTimeType **sample, 
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
        T_DateTimeTypePlugin_get_serialized_key_max_size(
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
        T_DateTimeTypePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ValueTypeEnumPlugin_get_serialized_sample_max_size(
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

        void DDS_ValueTypeEnumPluginSupport_print_data(
            const DDS_ValueTypeEnum *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "DDS_ValueTypeEnum", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type DDS_AttributeValue
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_AttributeValue *
        DDS_AttributeValuePluginSupport_create_data(void)
        {
            try {
                DDS_AttributeValue *sample = new DDS_AttributeValue;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_AttributeValuePluginSupport_destroy_data(
            DDS_AttributeValue *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_AttributeValuePluginSupport_copy_data(
            DDS_AttributeValue *dst,
            const DDS_AttributeValue *src)
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
        DDS_AttributeValuePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_AttributeValue *dst,
            const DDS_AttributeValue *src)
        {
            return DDS_GRI::DDSCommon::DDS_AttributeValuePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_AttributeValuePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_AttributeValuePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_AttributeValue *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AttributeValue >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_AttributeValue, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_AttributeValuePlugin_get_serialized_sample_max_size(
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
        DDS_AttributeValuePlugin_deserialize_from_cdr_buffer(
            DDS_AttributeValue *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AttributeValue >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_AttributeValue, 
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
        DDS_AttributeValuePlugin_get_serialized_sample_max_size(
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
        DDS_AttributeValuePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_AttributeValuePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AttributeValue **sample, 
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
        DDS_AttributeValuePlugin_get_serialized_key_max_size(
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
        DDS_AttributeValuePlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_Identifier
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_Identifier *
        DDS_IdentifierPluginSupport_create_data(void)
        {
            try {
                DDS_Identifier *sample = new DDS_Identifier;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_IdentifierPluginSupport_destroy_data(
            DDS_Identifier *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_IdentifierPluginSupport_copy_data(
            DDS_Identifier *dst,
            const DDS_Identifier *src)
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
        DDS_IdentifierPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_Identifier *dst,
            const DDS_Identifier *src)
        {
            return DDS_GRI::DDSCommon::DDS_IdentifierPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_IdentifierPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_IdentifierPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Identifier *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Identifier >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_Identifier, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_IdentifierPlugin_get_serialized_sample_max_size(
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
        DDS_IdentifierPlugin_deserialize_from_cdr_buffer(
            DDS_Identifier *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Identifier >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_Identifier, 
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
        DDS_IdentifierPlugin_get_serialized_sample_max_size(
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
        DDS_IdentifierPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_IdentifierPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Identifier **sample, 
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
        DDS_IdentifierPlugin_get_serialized_key_max_size(
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
        DDS_IdentifierPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GuidIdentifierPair
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GuidIdentifierPair *
        DDS_GuidIdentifierPairPluginSupport_create_data(void)
        {
            try {
                DDS_GuidIdentifierPair *sample = new DDS_GuidIdentifierPair;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GuidIdentifierPairPluginSupport_destroy_data(
            DDS_GuidIdentifierPair *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GuidIdentifierPairPluginSupport_copy_data(
            DDS_GuidIdentifierPair *dst,
            const DDS_GuidIdentifierPair *src)
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
        DDS_GuidIdentifierPairPlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GuidIdentifierPair >::get().native()
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
        DDS_GuidIdentifierPairPlugin_on_participant_detached(
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
        DDS_GuidIdentifierPairPlugin_on_endpoint_attached(
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
                    DDS_GuidIdentifierPairPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_GuidIdentifierPairPluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size, epd,
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
        DDS_GuidIdentifierPairPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_GuidIdentifierPairPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GuidIdentifierPair *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_GuidIdentifierPairPlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_GuidIdentifierPairPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GuidIdentifierPair *dst,
            const DDS_GuidIdentifierPair *src)
        {
            return DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GuidIdentifierPairPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GuidIdentifierPair *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GuidIdentifierPair >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GuidIdentifierPair, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size(
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
        DDS_GuidIdentifierPairPlugin_deserialize_from_cdr_buffer(
            DDS_GuidIdentifierPair *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GuidIdentifierPair >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GuidIdentifierPair, 
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
        DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size(
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
        DDS_GuidIdentifierPairPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_GuidIdentifierPairPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GuidIdentifierPair **sample, 
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
        DDS_GuidIdentifierPairPlugin_get_serialized_key_max_size(
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
        DDS_GuidIdentifierPairPlugin_get_serialized_key_max_size_for_keyhash(
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
        struct PRESTypePlugin *DDS_GuidIdentifierPairPlugin_new(void) 
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
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_GuidIdentifierPairPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_GuidIdentifierPairPlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_GuidIdentifierPairPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_GuidIdentifierPairPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_get_key_kind;

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
            &::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_GuidIdentifierPairPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_GuidIdentifierPairPlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSCommon::DDS_GuidIdentifierPair";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_GuidIdentifierPairPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_LogicPoint
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_LogicPoint *
        DDS_LogicPointPluginSupport_create_data(void)
        {
            try {
                DDS_LogicPoint *sample = new DDS_LogicPoint;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_LogicPointPluginSupport_destroy_data(
            DDS_LogicPoint *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_LogicPointPluginSupport_copy_data(
            DDS_LogicPoint *dst,
            const DDS_LogicPoint *src)
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
        DDS_LogicPointPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_LogicPoint *dst,
            const DDS_LogicPoint *src)
        {
            return DDS_GRI::DDSCommon::DDS_LogicPointPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_LogicPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_LogicPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_LogicPoint *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_LogicPoint >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_LogicPoint, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_LogicPointPlugin_get_serialized_sample_max_size(
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
        DDS_LogicPointPlugin_deserialize_from_cdr_buffer(
            DDS_LogicPoint *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_LogicPoint >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_LogicPoint, 
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
        DDS_LogicPointPlugin_get_serialized_sample_max_size(
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
        DDS_LogicPointPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_LogicPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_LogicPoint **sample, 
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
        DDS_LogicPointPlugin_get_serialized_key_max_size(
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
        DDS_LogicPointPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GeoPoint
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GeoPoint *
        DDS_GeoPointPluginSupport_create_data(void)
        {
            try {
                DDS_GeoPoint *sample = new DDS_GeoPoint;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GeoPointPluginSupport_destroy_data(
            DDS_GeoPoint *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GeoPointPluginSupport_copy_data(
            DDS_GeoPoint *dst,
            const DDS_GeoPoint *src)
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
        DDS_GeoPointPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GeoPoint *dst,
            const DDS_GeoPoint *src)
        {
            return DDS_GRI::DDSCommon::DDS_GeoPointPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GeoPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GeoPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GeoPoint *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GeoPoint >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GeoPoint, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GeoPointPlugin_get_serialized_sample_max_size(
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
        DDS_GeoPointPlugin_deserialize_from_cdr_buffer(
            DDS_GeoPoint *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GeoPoint >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GeoPoint, 
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
        DDS_GeoPointPlugin_get_serialized_sample_max_size(
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
        DDS_GeoPointPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_GeoPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoPoint **sample, 
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
        DDS_GeoPointPlugin_get_serialized_key_max_size(
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
        DDS_GeoPointPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GeoCircle
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GeoCircle *
        DDS_GeoCirclePluginSupport_create_data(void)
        {
            try {
                DDS_GeoCircle *sample = new DDS_GeoCircle;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GeoCirclePluginSupport_destroy_data(
            DDS_GeoCircle *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GeoCirclePluginSupport_copy_data(
            DDS_GeoCircle *dst,
            const DDS_GeoCircle *src)
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
        DDS_GeoCirclePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GeoCircle *dst,
            const DDS_GeoCircle *src)
        {
            return DDS_GRI::DDSCommon::DDS_GeoCirclePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GeoCirclePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GeoCirclePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GeoCircle *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GeoCircle >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GeoCircle, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GeoCirclePlugin_get_serialized_sample_max_size(
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
        DDS_GeoCirclePlugin_deserialize_from_cdr_buffer(
            DDS_GeoCircle *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GeoCircle >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GeoCircle, 
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
        DDS_GeoCirclePlugin_get_serialized_sample_max_size(
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
        DDS_GeoCirclePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_GeoCirclePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoCircle **sample, 
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
        DDS_GeoCirclePlugin_get_serialized_key_max_size(
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
        DDS_GeoCirclePlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_WayPoint
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_WayPoint *
        DDS_WayPointPluginSupport_create_data(void)
        {
            try {
                DDS_WayPoint *sample = new DDS_WayPoint;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_WayPointPluginSupport_destroy_data(
            DDS_WayPoint *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_WayPointPluginSupport_copy_data(
            DDS_WayPoint *dst,
            const DDS_WayPoint *src)
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
        DDS_WayPointPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_WayPoint *dst,
            const DDS_WayPoint *src)
        {
            return DDS_GRI::DDSCommon::DDS_WayPointPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_WayPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_WayPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_WayPoint *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_WayPoint >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_WayPoint, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_WayPointPlugin_get_serialized_sample_max_size(
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
        DDS_WayPointPlugin_deserialize_from_cdr_buffer(
            DDS_WayPoint *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_WayPoint >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_WayPoint, 
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
        DDS_WayPointPlugin_get_serialized_sample_max_size(
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
        DDS_WayPointPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_WayPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WayPoint **sample, 
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
        DDS_WayPointPlugin_get_serialized_key_max_size(
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
        DDS_WayPointPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_String50DoublePair
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_String50DoublePair *
        DDS_String50DoublePairPluginSupport_create_data(void)
        {
            try {
                DDS_String50DoublePair *sample = new DDS_String50DoublePair;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_String50DoublePairPluginSupport_destroy_data(
            DDS_String50DoublePair *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_String50DoublePairPluginSupport_copy_data(
            DDS_String50DoublePair *dst,
            const DDS_String50DoublePair *src)
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
        DDS_String50DoublePairPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_String50DoublePair *dst,
            const DDS_String50DoublePair *src)
        {
            return DDS_GRI::DDSCommon::DDS_String50DoublePairPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_String50DoublePairPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_String50DoublePairPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_String50DoublePair *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_String50DoublePair >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_String50DoublePair, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_String50DoublePairPlugin_get_serialized_sample_max_size(
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
        DDS_String50DoublePairPlugin_deserialize_from_cdr_buffer(
            DDS_String50DoublePair *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_String50DoublePair >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_String50DoublePair, 
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
        DDS_String50DoublePairPlugin_get_serialized_sample_max_size(
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
        DDS_String50DoublePairPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_String50DoublePairPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_String50DoublePair **sample, 
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
        DDS_String50DoublePairPlugin_get_serialized_key_max_size(
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
        DDS_String50DoublePairPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_RangeDescription
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_RangeDescription *
        DDS_RangeDescriptionPluginSupport_create_data(void)
        {
            try {
                DDS_RangeDescription *sample = new DDS_RangeDescription;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_RangeDescriptionPluginSupport_destroy_data(
            DDS_RangeDescription *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_RangeDescriptionPluginSupport_copy_data(
            DDS_RangeDescription *dst,
            const DDS_RangeDescription *src)
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
        DDS_RangeDescriptionPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_RangeDescription *dst,
            const DDS_RangeDescription *src)
        {
            return DDS_GRI::DDSCommon::DDS_RangeDescriptionPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_RangeDescriptionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_RangeDescriptionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RangeDescription *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RangeDescription >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_RangeDescription, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_RangeDescriptionPlugin_get_serialized_sample_max_size(
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
        DDS_RangeDescriptionPlugin_deserialize_from_cdr_buffer(
            DDS_RangeDescription *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RangeDescription >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_RangeDescription, 
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
        DDS_RangeDescriptionPlugin_get_serialized_sample_max_size(
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
        DDS_RangeDescriptionPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_RangeDescriptionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RangeDescription **sample, 
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
        DDS_RangeDescriptionPlugin_get_serialized_key_max_size(
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
        DDS_RangeDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_ItemType
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ItemType *
        DDS_ItemTypePluginSupport_create_data(void)
        {
            try {
                DDS_ItemType *sample = new DDS_ItemType;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ItemTypePluginSupport_destroy_data(
            DDS_ItemType *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ItemTypePluginSupport_copy_data(
            DDS_ItemType *dst,
            const DDS_ItemType *src)
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
        DDS_ItemTypePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ItemType *dst,
            const DDS_ItemType *src)
        {
            return DDS_GRI::DDSCommon::DDS_ItemTypePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ItemTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ItemTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ItemType *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ItemType >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ItemType, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ItemTypePlugin_get_serialized_sample_max_size(
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
        DDS_ItemTypePlugin_deserialize_from_cdr_buffer(
            DDS_ItemType *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ItemType >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ItemType, 
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
        DDS_ItemTypePlugin_get_serialized_sample_max_size(
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
        DDS_ItemTypePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_ItemTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemType **sample, 
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
        DDS_ItemTypePlugin_get_serialized_key_max_size(
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
        DDS_ItemTypePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_VisibilityPlugin_get_serialized_sample_max_size(
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

        void DDS_VisibilityPluginSupport_print_data(
            const DDS_Visibility *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "DDS_Visibility", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        DDS_OperationTypePlugin_get_serialized_sample_max_size(
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

        void DDS_OperationTypePluginSupport_print_data(
            const DDS_OperationType *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "DDS_OperationType", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        unsigned int 
        DDS_OprationStatusPlugin_get_serialized_sample_max_size(
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

        void DDS_OprationStatusPluginSupport_print_data(
            const DDS_OprationStatus *sample,
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

            RTICdrType_printEnum((RTICdrEnum *)sample, "DDS_OprationStatus", indent_level + 1);
        }

        /* ------------------------------------------------------------------------
        * Plug-in Installation Methods
        * ------------------------------------------------------------------------ */

        /* ----------------------------------------------------------------------------
        *  Type DDS_BaseRequestMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_BaseRequestMessage *
        DDS_BaseRequestMessagePluginSupport_create_data(void)
        {
            try {
                DDS_BaseRequestMessage *sample = new DDS_BaseRequestMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BaseRequestMessagePluginSupport_destroy_data(
            DDS_BaseRequestMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_BaseRequestMessagePluginSupport_copy_data(
            DDS_BaseRequestMessage *dst,
            const DDS_BaseRequestMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_BaseRequestMessage *
        DDS_BaseRequestMessagePluginSupport_create_key(void)
        {
            return DDS_BaseRequestMessagePluginSupport_create_data();
        }

        void 
        DDS_BaseRequestMessagePluginSupport_destroy_key(
            DDS_BaseRequestMessageKeyHolder *key) 
        {
            DDS_BaseRequestMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_BaseRequestMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseRequestMessage >::get().native()
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
        DDS_BaseRequestMessagePlugin_on_participant_detached(
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
        DDS_BaseRequestMessagePlugin_on_endpoint_attached(
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
                    DDS_BaseRequestMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_BaseRequestMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSCommon::DDS_BaseRequestMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSCommon::DDS_BaseRequestMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_BaseRequestMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_BaseRequestMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_BaseRequestMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_BaseRequestMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_BaseRequestMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_BaseRequestMessage *dst,
            const DDS_BaseRequestMessage *src)
        {
            return DDS_GRI::DDSCommon::DDS_BaseRequestMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_BaseRequestMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BaseRequestMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseRequestMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_BaseRequestMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size(
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
        DDS_BaseRequestMessagePlugin_deserialize_from_cdr_buffer(
            DDS_BaseRequestMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseRequestMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_BaseRequestMessage, 
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
        DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size(
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
        DDS_BaseRequestMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_BaseRequestMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage **sample, 
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
        DDS_BaseRequestMessagePlugin_get_serialized_key_max_size(
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
        DDS_BaseRequestMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_BaseRequestMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessageKeyHolder *dst, 
            const DDS_BaseRequestMessage *src)
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
        DDS_BaseRequestMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage *dst, const
            DDS_BaseRequestMessageKeyHolder *src)
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
        DDS_BaseRequestMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BaseRequestMessage *instance,
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
        DDS_BaseRequestMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_BaseRequestMessage * sample = NULL;
            sample = (DDS_BaseRequestMessage *)
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
            if (!DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_BaseRequestMessagePlugin_new(void) 
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
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_BaseRequestMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_BaseRequestMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_BaseRequestMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_BaseRequestMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_BaseRequestMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_BaseRequestMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_BaseRequestMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_BaseRequestMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSCommon::DDS_BaseRequestMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_BaseRequestMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace DDSCommon  */
    namespace DDSInfrastarcture {

        /* ----------------------------------------------------------------------------
        *  Type DDS_SectionWaypoint
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_SectionWaypoint *
        DDS_SectionWaypointPluginSupport_create_data(void)
        {
            try {
                DDS_SectionWaypoint *sample = new DDS_SectionWaypoint;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_SectionWaypointPluginSupport_destroy_data(
            DDS_SectionWaypoint *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_SectionWaypointPluginSupport_copy_data(
            DDS_SectionWaypoint *dst,
            const DDS_SectionWaypoint *src)
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
        DDS_SectionWaypointPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_SectionWaypoint *dst,
            const DDS_SectionWaypoint *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_SectionWaypointPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_SectionWaypointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_SectionWaypointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_SectionWaypoint *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_SectionWaypoint >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_SectionWaypoint, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_SectionWaypointPlugin_get_serialized_sample_max_size(
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
        DDS_SectionWaypointPlugin_deserialize_from_cdr_buffer(
            DDS_SectionWaypoint *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_SectionWaypoint >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_SectionWaypoint, 
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
        DDS_SectionWaypointPlugin_get_serialized_sample_max_size(
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
        DDS_SectionWaypointPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_SectionWaypointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_SectionWaypoint **sample, 
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
        DDS_SectionWaypointPlugin_get_serialized_key_max_size(
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
        DDS_SectionWaypointPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_WaypointBehaviorType
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_WaypointBehaviorType *
        DDS_WaypointBehaviorTypePluginSupport_create_data(void)
        {
            try {
                DDS_WaypointBehaviorType *sample = new DDS_WaypointBehaviorType;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_WaypointBehaviorTypePluginSupport_destroy_data(
            DDS_WaypointBehaviorType *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_WaypointBehaviorTypePluginSupport_copy_data(
            DDS_WaypointBehaviorType *dst,
            const DDS_WaypointBehaviorType *src)
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
        DDS_WaypointBehaviorTypePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_WaypointBehaviorType *dst,
            const DDS_WaypointBehaviorType *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorTypePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_WaypointBehaviorTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_WaypointBehaviorTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_WaypointBehaviorType *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_WaypointBehaviorType >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_WaypointBehaviorType, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_WaypointBehaviorTypePlugin_get_serialized_sample_max_size(
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
        DDS_WaypointBehaviorTypePlugin_deserialize_from_cdr_buffer(
            DDS_WaypointBehaviorType *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_WaypointBehaviorType >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_WaypointBehaviorType, 
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
        DDS_WaypointBehaviorTypePlugin_get_serialized_sample_max_size(
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
        DDS_WaypointBehaviorTypePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_WaypointBehaviorTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviorType **sample, 
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
        DDS_WaypointBehaviorTypePlugin_get_serialized_key_max_size(
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
        DDS_WaypointBehaviorTypePlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_WaypointBehaviors
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_WaypointBehaviors *
        DDS_WaypointBehaviorsPluginSupport_create_data(void)
        {
            try {
                DDS_WaypointBehaviors *sample = new DDS_WaypointBehaviors;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_WaypointBehaviorsPluginSupport_destroy_data(
            DDS_WaypointBehaviors *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_WaypointBehaviorsPluginSupport_copy_data(
            DDS_WaypointBehaviors *dst,
            const DDS_WaypointBehaviors *src)
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
        DDS_WaypointBehaviorsPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_WaypointBehaviors *dst,
            const DDS_WaypointBehaviors *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorsPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_WaypointBehaviorsPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_WaypointBehaviorsPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_WaypointBehaviors *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_WaypointBehaviors >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_WaypointBehaviors, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_WaypointBehaviorsPlugin_get_serialized_sample_max_size(
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
        DDS_WaypointBehaviorsPlugin_deserialize_from_cdr_buffer(
            DDS_WaypointBehaviors *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_WaypointBehaviors >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_WaypointBehaviors, 
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
        DDS_WaypointBehaviorsPlugin_get_serialized_sample_max_size(
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
        DDS_WaypointBehaviorsPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_WaypointBehaviorsPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviors **sample, 
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
        DDS_WaypointBehaviorsPlugin_get_serialized_key_max_size(
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
        DDS_WaypointBehaviorsPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_ItemDescrpition
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ItemDescrpition *
        DDS_ItemDescrpitionPluginSupport_create_data(void)
        {
            try {
                DDS_ItemDescrpition *sample = new DDS_ItemDescrpition;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ItemDescrpitionPluginSupport_destroy_data(
            DDS_ItemDescrpition *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ItemDescrpitionPluginSupport_copy_data(
            DDS_ItemDescrpition *dst,
            const DDS_ItemDescrpition *src)
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
        DDS_ItemDescrpitionPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ItemDescrpition *dst,
            const DDS_ItemDescrpition *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpitionPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ItemDescrpitionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ItemDescrpitionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ItemDescrpition *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ItemDescrpition >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ItemDescrpition, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ItemDescrpitionPlugin_get_serialized_sample_max_size(
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
        DDS_ItemDescrpitionPlugin_deserialize_from_cdr_buffer(
            DDS_ItemDescrpition *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ItemDescrpition >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ItemDescrpition, 
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
        DDS_ItemDescrpitionPlugin_get_serialized_sample_max_size(
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
        DDS_ItemDescrpitionPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_ItemDescrpitionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemDescrpition **sample, 
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
        DDS_ItemDescrpitionPlugin_get_serialized_key_max_size(
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
        DDS_ItemDescrpitionPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_BaseItem
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_BaseItem *
        DDS_BaseItemPluginSupport_create_data(void)
        {
            try {
                DDS_BaseItem *sample = new DDS_BaseItem;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BaseItemPluginSupport_destroy_data(
            DDS_BaseItem *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_BaseItemPluginSupport_copy_data(
            DDS_BaseItem *dst,
            const DDS_BaseItem *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_BaseItem *
        DDS_BaseItemPluginSupport_create_key(void)
        {
            return DDS_BaseItemPluginSupport_create_data();
        }

        void 
        DDS_BaseItemPluginSupport_destroy_key(
            DDS_BaseItemKeyHolder *key) 
        {
            DDS_BaseItemPluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_BaseItemPlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseItem >::get().native()
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
        DDS_BaseItemPlugin_on_participant_detached(
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
        DDS_BaseItemPlugin_on_endpoint_attached(
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
                    DDS_BaseItemPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_BaseItemPluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_BaseItemPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_BaseItemPluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_BaseItemPlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_get_serialized_sample_max_size, epd,
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
        DDS_BaseItemPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_BaseItemPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_BaseItemPlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_BaseItemPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_BaseItem *dst,
            const DDS_BaseItem *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_BaseItemPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_BaseItemPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_BaseItemPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BaseItem *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseItem >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_BaseItem, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_BaseItemPlugin_get_serialized_sample_max_size(
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
        DDS_BaseItemPlugin_deserialize_from_cdr_buffer(
            DDS_BaseItem *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseItem >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_BaseItem, 
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
        DDS_BaseItemPlugin_get_serialized_sample_max_size(
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
        DDS_BaseItemPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_BaseItemPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem **sample, 
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
        DDS_BaseItemPlugin_get_serialized_key_max_size(
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
        DDS_BaseItemPlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_BaseItemPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItemKeyHolder *dst, 
            const DDS_BaseItem *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->ClientSideId() = src->ClientSideId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_BaseItemPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem *dst, const
            DDS_BaseItemKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->ClientSideId() = src->ClientSideId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_BaseItemPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BaseItem *instance,
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
        DDS_BaseItemPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_BaseItem * sample = NULL;
            sample = (DDS_BaseItem *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_BaseItemPlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_BaseItemPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_BaseItemPlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_BaseItemPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_BaseItemPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_BaseItemPlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_BaseItemPlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_BaseItemPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_BaseItemPlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_BaseItem";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_BaseItemPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_Way
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_Way *
        DDS_WayPluginSupport_create_data(void)
        {
            try {
                DDS_Way *sample = new DDS_Way;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_WayPluginSupport_destroy_data(
            DDS_Way *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_WayPluginSupport_copy_data(
            DDS_Way *dst,
            const DDS_Way *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_Way *
        DDS_WayPluginSupport_create_key(void)
        {
            return DDS_WayPluginSupport_create_data();
        }

        void 
        DDS_WayPluginSupport_destroy_key(
            DDS_WayKeyHolder *key) 
        {
            DDS_WayPluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        DDS_WayPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_Way *dst,
            const DDS_Way *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_WayPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_WayPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_WayPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Way *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Way >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_Way, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_WayPlugin_get_serialized_sample_max_size(
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
        DDS_WayPlugin_deserialize_from_cdr_buffer(
            DDS_Way *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Way >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_Way, 
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
        DDS_WayPlugin_get_serialized_sample_max_size(
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
        DDS_WayPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_WayPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Way **sample, 
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
        DDS_WayPlugin_get_serialized_key_max_size(
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
        DDS_WayPlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_WayPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WayKeyHolder *dst, 
            const DDS_Way *src)
        {
            try {
                if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_instance_to_key(endpoint_data,(DDS_GRI::DDSInfrastarcture::DDS_BaseItem *)dst,(const DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)src)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_WayPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Way *dst, const
            DDS_WayKeyHolder *src)
        {
            try {
                if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_key_to_instance(endpoint_data,(DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)dst,(const DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)src)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_WayPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_Way *instance,
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
        DDS_WayPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_Way * sample = NULL;
            sample = (DDS_Way *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_WayPlugin_instance_to_keyhash(
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

        /* ----------------------------------------------------------------------------
        *  Type DDS_ClientServerWayMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ClientServerWayMessage *
        DDS_ClientServerWayMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ClientServerWayMessage *sample = new DDS_ClientServerWayMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ClientServerWayMessagePluginSupport_destroy_data(
            DDS_ClientServerWayMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ClientServerWayMessagePluginSupport_copy_data(
            DDS_ClientServerWayMessage *dst,
            const DDS_ClientServerWayMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ClientServerWayMessage *
        DDS_ClientServerWayMessagePluginSupport_create_key(void)
        {
            return DDS_ClientServerWayMessagePluginSupport_create_data();
        }

        void 
        DDS_ClientServerWayMessagePluginSupport_destroy_key(
            DDS_ClientServerWayMessageKeyHolder *key) 
        {
            DDS_ClientServerWayMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ClientServerWayMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerWayMessage >::get().native()
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
        DDS_ClientServerWayMessagePlugin_on_participant_detached(
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
        DDS_ClientServerWayMessagePlugin_on_endpoint_attached(
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
                    DDS_ClientServerWayMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ClientServerWayMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ClientServerWayMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ClientServerWayMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ClientServerWayMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ClientServerWayMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ClientServerWayMessage *dst,
            const DDS_ClientServerWayMessage *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ClientServerWayMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerWayMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerWayMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ClientServerWayMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerWayMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerWayMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerWayMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ClientServerWayMessage, 
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
        DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerWayMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ClientServerWayMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage **sample, 
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
        DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size(
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
        DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ClientServerWayMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessageKeyHolder *dst, 
            const DDS_ClientServerWayMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->Item() = src->Item();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerWayMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage *dst, const
            DDS_ClientServerWayMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->Item() = src->Item();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerWayMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerWayMessage *instance,
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
        DDS_ClientServerWayMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ClientServerWayMessage * sample = NULL;
            sample = (DDS_ClientServerWayMessage *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ClientServerWayMessagePlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ClientServerWayMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ClientServerWayMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ClientServerWayMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ClientServerWayMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ClientServerWayMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ClientServerWayMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ClientServerWayMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ClientServerWayMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ClientServerWayMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_Section
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_Section *
        DDS_SectionPluginSupport_create_data(void)
        {
            try {
                DDS_Section *sample = new DDS_Section;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_SectionPluginSupport_destroy_data(
            DDS_Section *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_SectionPluginSupport_copy_data(
            DDS_Section *dst,
            const DDS_Section *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_Section *
        DDS_SectionPluginSupport_create_key(void)
        {
            return DDS_SectionPluginSupport_create_data();
        }

        void 
        DDS_SectionPluginSupport_destroy_key(
            DDS_SectionKeyHolder *key) 
        {
            DDS_SectionPluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        DDS_SectionPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_Section *dst,
            const DDS_Section *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_SectionPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_SectionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_SectionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Section *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Section >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_Section, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_SectionPlugin_get_serialized_sample_max_size(
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
        DDS_SectionPlugin_deserialize_from_cdr_buffer(
            DDS_Section *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Section >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_Section, 
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
        DDS_SectionPlugin_get_serialized_sample_max_size(
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
        DDS_SectionPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_SectionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Section **sample, 
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
        DDS_SectionPlugin_get_serialized_key_max_size(
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
        DDS_SectionPlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_SectionPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_SectionKeyHolder *dst, 
            const DDS_Section *src)
        {
            try {
                if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_instance_to_key(endpoint_data,(DDS_GRI::DDSInfrastarcture::DDS_BaseItem *)dst,(const DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)src)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_SectionPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Section *dst, const
            DDS_SectionKeyHolder *src)
        {
            try {
                if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_key_to_instance(endpoint_data,(DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)dst,(const DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)src)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_SectionPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_Section *instance,
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
        DDS_SectionPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_Section * sample = NULL;
            sample = (DDS_Section *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_SectionPlugin_instance_to_keyhash(
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

        /* ----------------------------------------------------------------------------
        *  Type DDS_ClientServerSectionMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ClientServerSectionMessage *
        DDS_ClientServerSectionMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ClientServerSectionMessage *sample = new DDS_ClientServerSectionMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_data(
            DDS_ClientServerSectionMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ClientServerSectionMessagePluginSupport_copy_data(
            DDS_ClientServerSectionMessage *dst,
            const DDS_ClientServerSectionMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ClientServerSectionMessage *
        DDS_ClientServerSectionMessagePluginSupport_create_key(void)
        {
            return DDS_ClientServerSectionMessagePluginSupport_create_data();
        }

        void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_key(
            DDS_ClientServerSectionMessageKeyHolder *key) 
        {
            DDS_ClientServerSectionMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ClientServerSectionMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerSectionMessage >::get().native()
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
        DDS_ClientServerSectionMessagePlugin_on_participant_detached(
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
        DDS_ClientServerSectionMessagePlugin_on_endpoint_attached(
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
                    DDS_ClientServerSectionMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ClientServerSectionMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ClientServerSectionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ClientServerSectionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ClientServerSectionMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ClientServerSectionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ClientServerSectionMessage *dst,
            const DDS_ClientServerSectionMessage *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ClientServerSectionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerSectionMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerSectionMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ClientServerSectionMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerSectionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerSectionMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerSectionMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ClientServerSectionMessage, 
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
        DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerSectionMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ClientServerSectionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage **sample, 
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
        DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size(
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
        DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ClientServerSectionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessageKeyHolder *dst, 
            const DDS_ClientServerSectionMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->Item() = src->Item();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerSectionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage *dst, const
            DDS_ClientServerSectionMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->Item() = src->Item();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerSectionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerSectionMessage *instance,
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
        DDS_ClientServerSectionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ClientServerSectionMessage * sample = NULL;
            sample = (DDS_ClientServerSectionMessage *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ClientServerSectionMessagePlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ClientServerSectionMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ClientServerSectionMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ClientServerSectionMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ClientServerSectionMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ClientServerSectionMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ClientServerSectionMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ClientServerSectionMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ClientServerSectionMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ClientServerSectionMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_BaseRouteProperty
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_BaseRouteProperty *
        DDS_BaseRoutePropertyPluginSupport_create_data(void)
        {
            try {
                DDS_BaseRouteProperty *sample = new DDS_BaseRouteProperty;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_BaseRoutePropertyPluginSupport_destroy_data(
            DDS_BaseRouteProperty *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_BaseRoutePropertyPluginSupport_copy_data(
            DDS_BaseRouteProperty *dst,
            const DDS_BaseRouteProperty *src)
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
        DDS_BaseRoutePropertyPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_BaseRouteProperty *dst,
            const DDS_BaseRouteProperty *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_BaseRoutePropertyPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_BaseRoutePropertyPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_BaseRoutePropertyPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BaseRouteProperty *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseRouteProperty >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_BaseRouteProperty, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_BaseRoutePropertyPlugin_get_serialized_sample_max_size(
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
        DDS_BaseRoutePropertyPlugin_deserialize_from_cdr_buffer(
            DDS_BaseRouteProperty *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_BaseRouteProperty >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_BaseRouteProperty, 
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
        DDS_BaseRoutePropertyPlugin_get_serialized_sample_max_size(
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
        DDS_BaseRoutePropertyPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_BaseRoutePropertyPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRouteProperty **sample, 
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
        DDS_BaseRoutePropertyPlugin_get_serialized_key_max_size(
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
        DDS_BaseRoutePropertyPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_Route
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_Route *
        DDS_RoutePluginSupport_create_data(void)
        {
            try {
                DDS_Route *sample = new DDS_Route;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_RoutePluginSupport_destroy_data(
            DDS_Route *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_RoutePluginSupport_copy_data(
            DDS_Route *dst,
            const DDS_Route *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_Route *
        DDS_RoutePluginSupport_create_key(void)
        {
            return DDS_RoutePluginSupport_create_data();
        }

        void 
        DDS_RoutePluginSupport_destroy_key(
            DDS_RouteKeyHolder *key) 
        {
            DDS_RoutePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_RoutePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Route >::get().native()
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
        DDS_RoutePlugin_on_participant_detached(
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
        DDS_RoutePlugin_on_endpoint_attached(
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
                    DDS_RoutePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_RoutePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_RoutePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_RoutePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_RoutePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_get_serialized_sample_max_size, epd,
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
        DDS_RoutePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_RoutePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_RoutePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_RoutePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_Route *dst,
            const DDS_Route *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_RoutePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_RoutePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_RoutePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Route *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Route >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_Route, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_RoutePlugin_get_serialized_sample_max_size(
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
        DDS_RoutePlugin_deserialize_from_cdr_buffer(
            DDS_Route *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_Route >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_Route, 
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
        DDS_RoutePlugin_get_serialized_sample_max_size(
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
        DDS_RoutePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_RoutePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route **sample, 
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
        DDS_RoutePlugin_get_serialized_key_max_size(
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
        DDS_RoutePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_RoutePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RouteKeyHolder *dst, 
            const DDS_Route *src)
        {
            try {
                if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_instance_to_key(endpoint_data,(DDS_GRI::DDSInfrastarcture::DDS_BaseItem *)dst,(const DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)src)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_RoutePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route *dst, const
            DDS_RouteKeyHolder *src)
        {
            try {
                if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_key_to_instance(endpoint_data,(DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)dst,(const DDS_GRI::DDSInfrastarcture::DDS_BaseItem*)src)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_RoutePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_Route *instance,
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
        DDS_RoutePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_Route * sample = NULL;
            sample = (DDS_Route *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_RoutePlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_RoutePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_RoutePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_RoutePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_RoutePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_RoutePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_RoutePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Route >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_RoutePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_RoutePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_Route";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_RoutePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_ClientServerRouteMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ClientServerRouteMessage *
        DDS_ClientServerRouteMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ClientServerRouteMessage *sample = new DDS_ClientServerRouteMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_data(
            DDS_ClientServerRouteMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ClientServerRouteMessagePluginSupport_copy_data(
            DDS_ClientServerRouteMessage *dst,
            const DDS_ClientServerRouteMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ClientServerRouteMessage *
        DDS_ClientServerRouteMessagePluginSupport_create_key(void)
        {
            return DDS_ClientServerRouteMessagePluginSupport_create_data();
        }

        void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_key(
            DDS_ClientServerRouteMessageKeyHolder *key) 
        {
            DDS_ClientServerRouteMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ClientServerRouteMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerRouteMessage >::get().native()
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
        DDS_ClientServerRouteMessagePlugin_on_participant_detached(
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
        DDS_ClientServerRouteMessagePlugin_on_endpoint_attached(
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
                    DDS_ClientServerRouteMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ClientServerRouteMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ClientServerRouteMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ClientServerRouteMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ClientServerRouteMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ClientServerRouteMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ClientServerRouteMessage *dst,
            const DDS_ClientServerRouteMessage *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ClientServerRouteMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerRouteMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerRouteMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ClientServerRouteMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerRouteMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerRouteMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerRouteMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ClientServerRouteMessage, 
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
        DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerRouteMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ClientServerRouteMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage **sample, 
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
        DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size(
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
        DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ClientServerRouteMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessageKeyHolder *dst, 
            const DDS_ClientServerRouteMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->Item() = src->Item();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerRouteMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage *dst, const
            DDS_ClientServerRouteMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->Item() = src->Item();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerRouteMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerRouteMessage *instance,
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
        DDS_ClientServerRouteMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ClientServerRouteMessage * sample = NULL;
            sample = (DDS_ClientServerRouteMessage *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ClientServerRouteMessagePlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ClientServerRouteMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ClientServerRouteMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ClientServerRouteMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ClientServerRouteMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ClientServerRouteMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ClientServerRouteMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ClientServerRouteMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ClientServerRouteMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ClientServerRouteMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_ClientServerRequestItemsDiscrptionByTypeMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ClientServerRequestItemsDiscrptionByTypeMessage *
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample = new DDS_ClientServerRequestItemsDiscrptionByTypeMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_data(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_copy_data(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *dst,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ClientServerRequestItemsDiscrptionByTypeMessage *
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_key(void)
        {
            return DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_data();
        }

        void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_key(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *key) 
        {
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::get().native()
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_participant_detached(
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_endpoint_attached(
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
                    DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *dst,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ClientServerRequestItemsDiscrptionByTypeMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage, 
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage **sample, 
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size(
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *dst, 
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->ItemType() = src->ItemType();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *dst, const
            DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->ItemType() = src->ItemType();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *instance,
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
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage * sample = NULL;
            sample = (DDS_ClientServerRequestItemsDiscrptionByTypeMessage *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_ClientServerResponseItemsDiscrptionMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ClientServerResponseItemsDiscrptionMessage *
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ClientServerResponseItemsDiscrptionMessage *sample = new DDS_ClientServerResponseItemsDiscrptionMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_data(
            DDS_ClientServerResponseItemsDiscrptionMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_copy_data(
            DDS_ClientServerResponseItemsDiscrptionMessage *dst,
            const DDS_ClientServerResponseItemsDiscrptionMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ClientServerResponseItemsDiscrptionMessage *
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_key(void)
        {
            return DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_data();
        }

        void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_key(
            DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *key) 
        {
            DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerResponseItemsDiscrptionMessage >::get().native()
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_participant_detached(
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_endpoint_attached(
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
                    DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ClientServerResponseItemsDiscrptionMessage *dst,
            const DDS_ClientServerResponseItemsDiscrptionMessage *src)
        {
            return DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerResponseItemsDiscrptionMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerResponseItemsDiscrptionMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ClientServerResponseItemsDiscrptionMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerResponseItemsDiscrptionMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ClientServerResponseItemsDiscrptionMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ClientServerResponseItemsDiscrptionMessage, 
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage **sample, 
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size(
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *dst, 
            const DDS_ClientServerResponseItemsDiscrptionMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->ItemType() = src->ItemType();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage *dst, const
            DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->ItemType() = src->ItemType();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerResponseItemsDiscrptionMessage *instance,
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
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ClientServerResponseItemsDiscrptionMessage * sample = NULL;
            sample = (DDS_ClientServerResponseItemsDiscrptionMessage *)
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
            if (!DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ClientServerResponseItemsDiscrptionMessagePlugin_new(void) 
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
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace DDSInfrastarcture  */
    namespace DDSExternalSystem {

        /* ----------------------------------------------------------------------------
        *  Type ExtendedGeoPoint
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        ExtendedGeoPoint *
        ExtendedGeoPointPluginSupport_create_data(void)
        {
            try {
                ExtendedGeoPoint *sample = new ExtendedGeoPoint;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        ExtendedGeoPointPluginSupport_destroy_data(
            ExtendedGeoPoint *sample) 
        {
            delete sample;
        }

        RTIBool 
        ExtendedGeoPointPluginSupport_copy_data(
            ExtendedGeoPoint *dst,
            const ExtendedGeoPoint *src)
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
        ExtendedGeoPointPlugin_copy_sample(
            PRESTypePluginEndpointData,
            ExtendedGeoPoint *dst,
            const ExtendedGeoPoint *src)
        {
            return DDS_GRI::DDSExternalSystem::ExtendedGeoPointPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        ExtendedGeoPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        ExtendedGeoPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ExtendedGeoPoint *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ExtendedGeoPoint >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                ExtendedGeoPoint, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                ExtendedGeoPointPlugin_get_serialized_sample_max_size(
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
        ExtendedGeoPointPlugin_deserialize_from_cdr_buffer(
            ExtendedGeoPoint *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ExtendedGeoPoint >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            ExtendedGeoPoint, 
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
        ExtendedGeoPointPlugin_get_serialized_sample_max_size(
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
        ExtendedGeoPointPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool ExtendedGeoPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPoint **sample, 
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
        ExtendedGeoPointPlugin_get_serialized_key_max_size(
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
        ExtendedGeoPointPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type ExtendedGeoPointArray
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        ExtendedGeoPointArray *
        ExtendedGeoPointArrayPluginSupport_create_data(void)
        {
            try {
                ExtendedGeoPointArray *sample = new ExtendedGeoPointArray;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        ExtendedGeoPointArrayPluginSupport_destroy_data(
            ExtendedGeoPointArray *sample) 
        {
            delete sample;
        }

        RTIBool 
        ExtendedGeoPointArrayPluginSupport_copy_data(
            ExtendedGeoPointArray *dst,
            const ExtendedGeoPointArray *src)
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
        ExtendedGeoPointArrayPlugin_copy_sample(
            PRESTypePluginEndpointData,
            ExtendedGeoPointArray *dst,
            const ExtendedGeoPointArray *src)
        {
            return DDS_GRI::DDSExternalSystem::ExtendedGeoPointArrayPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        ExtendedGeoPointArrayPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        ExtendedGeoPointArrayPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ExtendedGeoPointArray *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ExtendedGeoPointArray >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                ExtendedGeoPointArray, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                ExtendedGeoPointArrayPlugin_get_serialized_sample_max_size(
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
        ExtendedGeoPointArrayPlugin_deserialize_from_cdr_buffer(
            ExtendedGeoPointArray *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ExtendedGeoPointArray >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            ExtendedGeoPointArray, 
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
        ExtendedGeoPointArrayPlugin_get_serialized_sample_max_size(
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
        ExtendedGeoPointArrayPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool ExtendedGeoPointArrayPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPointArray **sample, 
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
        ExtendedGeoPointArrayPlugin_get_serialized_key_max_size(
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
        ExtendedGeoPointArrayPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_ExternalMissionData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ExternalMissionData *
        DDS_ExternalMissionDataPluginSupport_create_data(void)
        {
            try {
                DDS_ExternalMissionData *sample = new DDS_ExternalMissionData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ExternalMissionDataPluginSupport_destroy_data(
            DDS_ExternalMissionData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ExternalMissionDataPluginSupport_copy_data(
            DDS_ExternalMissionData *dst,
            const DDS_ExternalMissionData *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ExternalMissionData *
        DDS_ExternalMissionDataPluginSupport_create_key(void)
        {
            return DDS_ExternalMissionDataPluginSupport_create_data();
        }

        void 
        DDS_ExternalMissionDataPluginSupport_destroy_key(
            DDS_ExternalMissionDataKeyHolder *key) 
        {
            DDS_ExternalMissionDataPluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        DDS_ExternalMissionDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ExternalMissionData *dst,
            const DDS_ExternalMissionData *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_ExternalMissionDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ExternalMissionDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ExternalMissionDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ExternalMissionData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ExternalMissionDataPlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionDataPlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ExternalMissionData, 
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
        DDS_ExternalMissionDataPlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ExternalMissionDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionData **sample, 
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
        DDS_ExternalMissionDataPlugin_get_serialized_key_max_size(
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
        DDS_ExternalMissionDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ExternalMissionDataPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionDataKeyHolder *dst, 
            const DDS_ExternalMissionData *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->VehicleId() = src->VehicleId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ExternalMissionDataPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionData *dst, const
            DDS_ExternalMissionDataKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->VehicleId() = src->VehicleId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_ExternalMissionDataPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionData *instance,
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
        DDS_ExternalMissionDataPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ExternalMissionData * sample = NULL;
            sample = (DDS_ExternalMissionData *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_ExternalMissionDataPlugin_instance_to_keyhash(
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

        /* ----------------------------------------------------------------------------
        *  Type DDS_ExternalMissionMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ExternalMissionMessage *
        DDS_ExternalMissionMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ExternalMissionMessage *sample = new DDS_ExternalMissionMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ExternalMissionMessagePluginSupport_destroy_data(
            DDS_ExternalMissionMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ExternalMissionMessagePluginSupport_copy_data(
            DDS_ExternalMissionMessage *dst,
            const DDS_ExternalMissionMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ExternalMissionMessage *
        DDS_ExternalMissionMessagePluginSupport_create_key(void)
        {
            return DDS_ExternalMissionMessagePluginSupport_create_data();
        }

        void 
        DDS_ExternalMissionMessagePluginSupport_destroy_key(
            DDS_ExternalMissionMessageKeyHolder *key) 
        {
            DDS_ExternalMissionMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ExternalMissionMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionMessage >::get().native()
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
        DDS_ExternalMissionMessagePlugin_on_participant_detached(
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
        DDS_ExternalMissionMessagePlugin_on_endpoint_attached(
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
                    DDS_ExternalMissionMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ExternalMissionMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ExternalMissionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ExternalMissionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ExternalMissionMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ExternalMissionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ExternalMissionMessage *dst,
            const DDS_ExternalMissionMessage *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ExternalMissionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ExternalMissionMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ExternalMissionMessage, 
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
        DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ExternalMissionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage **sample, 
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
        DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size(
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
        DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ExternalMissionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessageKeyHolder *dst, 
            const DDS_ExternalMissionMessage *src)
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
        DDS_ExternalMissionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage *dst, const
            DDS_ExternalMissionMessageKeyHolder *src)
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
        DDS_ExternalMissionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionMessage *instance,
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
        DDS_ExternalMissionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ExternalMissionMessage * sample = NULL;
            sample = (DDS_ExternalMissionMessage *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ExternalMissionMessagePlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ExternalMissionMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ExternalMissionMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ExternalMissionMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ExternalMissionMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ExternalMissionMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ExternalMissionMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ExternalMissionMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ExternalMissionMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ExternalMissionMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_ExternalMissionResponseData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ExternalMissionResponseData *
        DDS_ExternalMissionResponseDataPluginSupport_create_data(void)
        {
            try {
                DDS_ExternalMissionResponseData *sample = new DDS_ExternalMissionResponseData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_data(
            DDS_ExternalMissionResponseData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ExternalMissionResponseDataPluginSupport_copy_data(
            DDS_ExternalMissionResponseData *dst,
            const DDS_ExternalMissionResponseData *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ExternalMissionResponseData *
        DDS_ExternalMissionResponseDataPluginSupport_create_key(void)
        {
            return DDS_ExternalMissionResponseDataPluginSupport_create_data();
        }

        void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_key(
            DDS_ExternalMissionResponseDataKeyHolder *key) 
        {
            DDS_ExternalMissionResponseDataPluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        DDS_ExternalMissionResponseDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ExternalMissionResponseData *dst,
            const DDS_ExternalMissionResponseData *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ExternalMissionResponseDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ExternalMissionResponseDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionResponseData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionResponseData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ExternalMissionResponseData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ExternalMissionResponseDataPlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionResponseDataPlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionResponseData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionResponseData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ExternalMissionResponseData, 
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
        DDS_ExternalMissionResponseDataPlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionResponseDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ExternalMissionResponseDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseData **sample, 
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
        DDS_ExternalMissionResponseDataPlugin_get_serialized_key_max_size(
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
        DDS_ExternalMissionResponseDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ExternalMissionResponseDataPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseDataKeyHolder *dst, 
            const DDS_ExternalMissionResponseData *src)
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
        DDS_ExternalMissionResponseDataPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseData *dst, const
            DDS_ExternalMissionResponseDataKeyHolder *src)
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
        DDS_ExternalMissionResponseDataPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionResponseData *instance,
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
        DDS_ExternalMissionResponseDataPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ExternalMissionResponseData * sample = NULL;
            sample = (DDS_ExternalMissionResponseData *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseDataPlugin_instance_to_keyhash(
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

        /* ----------------------------------------------------------------------------
        *  Type DDS_ExternalMissionResponseMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ExternalMissionResponseMessage *
        DDS_ExternalMissionResponseMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ExternalMissionResponseMessage *sample = new DDS_ExternalMissionResponseMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_data(
            DDS_ExternalMissionResponseMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ExternalMissionResponseMessagePluginSupport_copy_data(
            DDS_ExternalMissionResponseMessage *dst,
            const DDS_ExternalMissionResponseMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ExternalMissionResponseMessage *
        DDS_ExternalMissionResponseMessagePluginSupport_create_key(void)
        {
            return DDS_ExternalMissionResponseMessagePluginSupport_create_data();
        }

        void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_key(
            DDS_ExternalMissionResponseMessageKeyHolder *key) 
        {
            DDS_ExternalMissionResponseMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ExternalMissionResponseMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionResponseMessage >::get().native()
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
        DDS_ExternalMissionResponseMessagePlugin_on_participant_detached(
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
        DDS_ExternalMissionResponseMessagePlugin_on_endpoint_attached(
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
                    DDS_ExternalMissionResponseMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ExternalMissionResponseMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ExternalMissionResponseMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ExternalMissionResponseMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ExternalMissionResponseMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ExternalMissionResponseMessage *dst,
            const DDS_ExternalMissionResponseMessage *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ExternalMissionResponseMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionResponseMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionResponseMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ExternalMissionResponseMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionResponseMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionResponseMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ExternalMissionResponseMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ExternalMissionResponseMessage, 
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
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ExternalMissionResponseMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ExternalMissionResponseMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage **sample, 
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
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size(
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
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ExternalMissionResponseMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessageKeyHolder *dst, 
            const DDS_ExternalMissionResponseMessage *src)
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
        DDS_ExternalMissionResponseMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage *dst, const
            DDS_ExternalMissionResponseMessageKeyHolder *src)
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
        DDS_ExternalMissionResponseMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionResponseMessage *instance,
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
        DDS_ExternalMissionResponseMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ExternalMissionResponseMessage * sample = NULL;
            sample = (DDS_ExternalMissionResponseMessage *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ExternalMissionResponseMessagePlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ExternalMissionResponseMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ExternalMissionResponseMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ExternalMissionResponseMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ExternalMissionResponseMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ExternalMissionResponseMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ExternalMissionResponseMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ExternalMissionResponseMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ExternalMissionResponseMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ExternalMissionResponseMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_ActivateMissionCommandData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ActivateMissionCommandData *
        DDS_ActivateMissionCommandDataPluginSupport_create_data(void)
        {
            try {
                DDS_ActivateMissionCommandData *sample = new DDS_ActivateMissionCommandData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ActivateMissionCommandDataPluginSupport_destroy_data(
            DDS_ActivateMissionCommandData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ActivateMissionCommandDataPluginSupport_copy_data(
            DDS_ActivateMissionCommandData *dst,
            const DDS_ActivateMissionCommandData *src)
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
        DDS_ActivateMissionCommandDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ActivateMissionCommandData *dst,
            const DDS_ActivateMissionCommandData *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ActivateMissionCommandDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ActivateMissionCommandDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ActivateMissionCommandData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ActivateMissionCommandData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ActivateMissionCommandData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ActivateMissionCommandDataPlugin_get_serialized_sample_max_size(
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
        DDS_ActivateMissionCommandDataPlugin_deserialize_from_cdr_buffer(
            DDS_ActivateMissionCommandData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ActivateMissionCommandData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ActivateMissionCommandData, 
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
        DDS_ActivateMissionCommandDataPlugin_get_serialized_sample_max_size(
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
        DDS_ActivateMissionCommandDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_ActivateMissionCommandDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandData **sample, 
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
        DDS_ActivateMissionCommandDataPlugin_get_serialized_key_max_size(
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
        DDS_ActivateMissionCommandDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_ActivateMissionCommandMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_ActivateMissionCommandMessage *
        DDS_ActivateMissionCommandMessagePluginSupport_create_data(void)
        {
            try {
                DDS_ActivateMissionCommandMessage *sample = new DDS_ActivateMissionCommandMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_data(
            DDS_ActivateMissionCommandMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_ActivateMissionCommandMessagePluginSupport_copy_data(
            DDS_ActivateMissionCommandMessage *dst,
            const DDS_ActivateMissionCommandMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_ActivateMissionCommandMessage *
        DDS_ActivateMissionCommandMessagePluginSupport_create_key(void)
        {
            return DDS_ActivateMissionCommandMessagePluginSupport_create_data();
        }

        void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_key(
            DDS_ActivateMissionCommandMessageKeyHolder *key) 
        {
            DDS_ActivateMissionCommandMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_ActivateMissionCommandMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ActivateMissionCommandMessage >::get().native()
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
        DDS_ActivateMissionCommandMessagePlugin_on_participant_detached(
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
        DDS_ActivateMissionCommandMessagePlugin_on_endpoint_attached(
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
                    DDS_ActivateMissionCommandMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_ActivateMissionCommandMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_ActivateMissionCommandMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_ActivateMissionCommandMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_ActivateMissionCommandMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_ActivateMissionCommandMessage *dst,
            const DDS_ActivateMissionCommandMessage *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_ActivateMissionCommandMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ActivateMissionCommandMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ActivateMissionCommandMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_ActivateMissionCommandMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ActivateMissionCommandMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ActivateMissionCommandMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_ActivateMissionCommandMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_ActivateMissionCommandMessage, 
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
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size(
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
        DDS_ActivateMissionCommandMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_ActivateMissionCommandMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage **sample, 
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
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size(
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
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_ActivateMissionCommandMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessageKeyHolder *dst, 
            const DDS_ActivateMissionCommandMessage *src)
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
        DDS_ActivateMissionCommandMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage *dst, const
            DDS_ActivateMissionCommandMessageKeyHolder *src)
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
        DDS_ActivateMissionCommandMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ActivateMissionCommandMessage *instance,
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
        DDS_ActivateMissionCommandMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_ActivateMissionCommandMessage * sample = NULL;
            sample = (DDS_ActivateMissionCommandMessage *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_ActivateMissionCommandMessagePlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_ActivateMissionCommandMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_ActivateMissionCommandMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_ActivateMissionCommandMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_ActivateMissionCommandMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_ActivateMissionCommandMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_ActivateMissionCommandMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_ActivateMissionCommandMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_ActivateMissionCommandMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_ActivateMissionCommandMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_AddRegionData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_AddRegionData *
        DDS_AddRegionDataPluginSupport_create_data(void)
        {
            try {
                DDS_AddRegionData *sample = new DDS_AddRegionData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_AddRegionDataPluginSupport_destroy_data(
            DDS_AddRegionData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_AddRegionDataPluginSupport_copy_data(
            DDS_AddRegionData *dst,
            const DDS_AddRegionData *src)
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
        DDS_AddRegionDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_AddRegionData *dst,
            const DDS_AddRegionData *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_AddRegionDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_AddRegionDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_AddRegionDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_AddRegionData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AddRegionData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_AddRegionData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_AddRegionDataPlugin_get_serialized_sample_max_size(
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
        DDS_AddRegionDataPlugin_deserialize_from_cdr_buffer(
            DDS_AddRegionData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AddRegionData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_AddRegionData, 
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
        DDS_AddRegionDataPlugin_get_serialized_sample_max_size(
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
        DDS_AddRegionDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_AddRegionDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionData **sample, 
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
        DDS_AddRegionDataPlugin_get_serialized_key_max_size(
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
        DDS_AddRegionDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_AddRegionDataMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_AddRegionDataMessage *
        DDS_AddRegionDataMessagePluginSupport_create_data(void)
        {
            try {
                DDS_AddRegionDataMessage *sample = new DDS_AddRegionDataMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_AddRegionDataMessagePluginSupport_destroy_data(
            DDS_AddRegionDataMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_AddRegionDataMessagePluginSupport_copy_data(
            DDS_AddRegionDataMessage *dst,
            const DDS_AddRegionDataMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_AddRegionDataMessage *
        DDS_AddRegionDataMessagePluginSupport_create_key(void)
        {
            return DDS_AddRegionDataMessagePluginSupport_create_data();
        }

        void 
        DDS_AddRegionDataMessagePluginSupport_destroy_key(
            DDS_AddRegionDataMessageKeyHolder *key) 
        {
            DDS_AddRegionDataMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_AddRegionDataMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AddRegionDataMessage >::get().native()
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
        DDS_AddRegionDataMessagePlugin_on_participant_detached(
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
        DDS_AddRegionDataMessagePlugin_on_endpoint_attached(
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
                    DDS_AddRegionDataMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_AddRegionDataMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_AddRegionDataMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_AddRegionDataMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_AddRegionDataMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_AddRegionDataMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_AddRegionDataMessage *dst,
            const DDS_AddRegionDataMessage *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_AddRegionDataMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_AddRegionDataMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AddRegionDataMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_AddRegionDataMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size(
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
        DDS_AddRegionDataMessagePlugin_deserialize_from_cdr_buffer(
            DDS_AddRegionDataMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_AddRegionDataMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_AddRegionDataMessage, 
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
        DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size(
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
        DDS_AddRegionDataMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_AddRegionDataMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage **sample, 
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
        DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size(
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
        DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_AddRegionDataMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessageKeyHolder *dst, 
            const DDS_AddRegionDataMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_AddRegionDataMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage *dst, const
            DDS_AddRegionDataMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_AddRegionDataMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_AddRegionDataMessage *instance,
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
        DDS_AddRegionDataMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_AddRegionDataMessage * sample = NULL;
            sample = (DDS_AddRegionDataMessage *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_AddRegionDataMessagePlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_AddRegionDataMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_AddRegionDataMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_AddRegionDataMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_AddRegionDataMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_AddRegionDataMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_AddRegionDataMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_AddRegionDataMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_AddRegionDataMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_AddRegionDataMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_RegionResponseData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_RegionResponseData *
        DDS_RegionResponseDataPluginSupport_create_data(void)
        {
            try {
                DDS_RegionResponseData *sample = new DDS_RegionResponseData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_RegionResponseDataPluginSupport_destroy_data(
            DDS_RegionResponseData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_RegionResponseDataPluginSupport_copy_data(
            DDS_RegionResponseData *dst,
            const DDS_RegionResponseData *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_RegionResponseData *
        DDS_RegionResponseDataPluginSupport_create_key(void)
        {
            return DDS_RegionResponseDataPluginSupport_create_data();
        }

        void 
        DDS_RegionResponseDataPluginSupport_destroy_key(
            DDS_RegionResponseDataKeyHolder *key) 
        {
            DDS_RegionResponseDataPluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        RTIBool 
        DDS_RegionResponseDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_RegionResponseData *dst,
            const DDS_RegionResponseData *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_RegionResponseDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_RegionResponseDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_RegionResponseDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RegionResponseData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RegionResponseData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_RegionResponseData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_RegionResponseDataPlugin_get_serialized_sample_max_size(
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
        DDS_RegionResponseDataPlugin_deserialize_from_cdr_buffer(
            DDS_RegionResponseData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RegionResponseData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_RegionResponseData, 
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
        DDS_RegionResponseDataPlugin_get_serialized_sample_max_size(
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
        DDS_RegionResponseDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_RegionResponseDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseData **sample, 
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
        DDS_RegionResponseDataPlugin_get_serialized_key_max_size(
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
        DDS_RegionResponseDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_RegionResponseDataPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseDataKeyHolder *dst, 
            const DDS_RegionResponseData *src)
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
        DDS_RegionResponseDataPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseData *dst, const
            DDS_RegionResponseDataKeyHolder *src)
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
        DDS_RegionResponseDataPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_RegionResponseData *instance,
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
        DDS_RegionResponseDataPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_RegionResponseData * sample = NULL;
            sample = (DDS_RegionResponseData *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_RegionResponseDataPlugin_instance_to_keyhash(
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

        /* ----------------------------------------------------------------------------
        *  Type DDS_RegionResponseMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_RegionResponseMessage *
        DDS_RegionResponseMessagePluginSupport_create_data(void)
        {
            try {
                DDS_RegionResponseMessage *sample = new DDS_RegionResponseMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_RegionResponseMessagePluginSupport_destroy_data(
            DDS_RegionResponseMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_RegionResponseMessagePluginSupport_copy_data(
            DDS_RegionResponseMessage *dst,
            const DDS_RegionResponseMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_RegionResponseMessage *
        DDS_RegionResponseMessagePluginSupport_create_key(void)
        {
            return DDS_RegionResponseMessagePluginSupport_create_data();
        }

        void 
        DDS_RegionResponseMessagePluginSupport_destroy_key(
            DDS_RegionResponseMessageKeyHolder *key) 
        {
            DDS_RegionResponseMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_RegionResponseMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RegionResponseMessage >::get().native()
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
        DDS_RegionResponseMessagePlugin_on_participant_detached(
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
        DDS_RegionResponseMessagePlugin_on_endpoint_attached(
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
                    DDS_RegionResponseMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_RegionResponseMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_RegionResponseMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_RegionResponseMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_RegionResponseMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_RegionResponseMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_RegionResponseMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_RegionResponseMessage *dst,
            const DDS_RegionResponseMessage *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_RegionResponseMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RegionResponseMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RegionResponseMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_RegionResponseMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size(
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
        DDS_RegionResponseMessagePlugin_deserialize_from_cdr_buffer(
            DDS_RegionResponseMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RegionResponseMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_RegionResponseMessage, 
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
        DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size(
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
        DDS_RegionResponseMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_RegionResponseMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage **sample, 
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
        DDS_RegionResponseMessagePlugin_get_serialized_key_max_size(
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
        DDS_RegionResponseMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_RegionResponseMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessageKeyHolder *dst, 
            const DDS_RegionResponseMessage *src)
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
        DDS_RegionResponseMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage *dst, const
            DDS_RegionResponseMessageKeyHolder *src)
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
        DDS_RegionResponseMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_RegionResponseMessage *instance,
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
        DDS_RegionResponseMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_RegionResponseMessage * sample = NULL;
            sample = (DDS_RegionResponseMessage *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_RegionResponseMessagePlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_RegionResponseMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_RegionResponseMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_RegionResponseMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_RegionResponseMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_RegionResponseMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_RegionResponseMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_RegionResponseMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_RegionResponseMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_RegionResponseMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_RemoveRegionData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_RemoveRegionData *
        DDS_RemoveRegionDataPluginSupport_create_data(void)
        {
            try {
                DDS_RemoveRegionData *sample = new DDS_RemoveRegionData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_RemoveRegionDataPluginSupport_destroy_data(
            DDS_RemoveRegionData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_RemoveRegionDataPluginSupport_copy_data(
            DDS_RemoveRegionData *dst,
            const DDS_RemoveRegionData *src)
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
        DDS_RemoveRegionDataPlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RemoveRegionData >::get().native()
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
        DDS_RemoveRegionDataPlugin_on_participant_detached(
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
        DDS_RemoveRegionDataPlugin_on_endpoint_attached(
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
                    DDS_RemoveRegionDataPluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_RemoveRegionDataPluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size, epd,
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
        DDS_RemoveRegionDataPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_RemoveRegionDataPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionData *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_RemoveRegionDataPlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_RemoveRegionDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_RemoveRegionData *dst,
            const DDS_RemoveRegionData *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_RemoveRegionDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RemoveRegionData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RemoveRegionData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_RemoveRegionData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size(
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
        DDS_RemoveRegionDataPlugin_deserialize_from_cdr_buffer(
            DDS_RemoveRegionData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RemoveRegionData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_RemoveRegionData, 
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
        DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size(
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
        DDS_RemoveRegionDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_RemoveRegionDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionData **sample, 
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
        DDS_RemoveRegionDataPlugin_get_serialized_key_max_size(
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
        DDS_RemoveRegionDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        struct PRESTypePlugin *DDS_RemoveRegionDataPlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_RemoveRegionDataPlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_RemoveRegionDataPlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_RemoveRegionDataPlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_RemoveRegionDataPlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_get_key_kind;

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
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_RemoveRegionDataPlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_RemoveRegionDataPlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_RemoveRegionDataPlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_RemoveRegionMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_RemoveRegionMessage *
        DDS_RemoveRegionMessagePluginSupport_create_data(void)
        {
            try {
                DDS_RemoveRegionMessage *sample = new DDS_RemoveRegionMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_RemoveRegionMessagePluginSupport_destroy_data(
            DDS_RemoveRegionMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_RemoveRegionMessagePluginSupport_copy_data(
            DDS_RemoveRegionMessage *dst,
            const DDS_RemoveRegionMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_RemoveRegionMessage *
        DDS_RemoveRegionMessagePluginSupport_create_key(void)
        {
            return DDS_RemoveRegionMessagePluginSupport_create_data();
        }

        void 
        DDS_RemoveRegionMessagePluginSupport_destroy_key(
            DDS_RemoveRegionMessageKeyHolder *key) 
        {
            DDS_RemoveRegionMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_RemoveRegionMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RemoveRegionMessage >::get().native()
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
        DDS_RemoveRegionMessagePlugin_on_participant_detached(
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
        DDS_RemoveRegionMessagePlugin_on_endpoint_attached(
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
                    DDS_RemoveRegionMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_RemoveRegionMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_RemoveRegionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_RemoveRegionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_RemoveRegionMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_RemoveRegionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_RemoveRegionMessage *dst,
            const DDS_RemoveRegionMessage *src)
        {
            return DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_RemoveRegionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RemoveRegionMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RemoveRegionMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_RemoveRegionMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_RemoveRegionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_RemoveRegionMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_RemoveRegionMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_RemoveRegionMessage, 
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
        DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size(
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
        DDS_RemoveRegionMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_RemoveRegionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage **sample, 
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
        DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size(
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
        DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_RemoveRegionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessageKeyHolder *dst, 
            const DDS_RemoveRegionMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_RemoveRegionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage *dst, const
            DDS_RemoveRegionMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->RequestId() = src->RequestId();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_RemoveRegionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_RemoveRegionMessage *instance,
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
        DDS_RemoveRegionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_RemoveRegionMessage * sample = NULL;
            sample = (DDS_RemoveRegionMessage *)
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
            if (!DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_RemoveRegionMessagePlugin_new(void) 
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
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_RemoveRegionMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_RemoveRegionMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_RemoveRegionMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_RemoveRegionMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_RemoveRegionMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_RemoveRegionMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_RemoveRegionMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_RemoveRegionMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_RemoveRegionMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace DDSExternalSystem  */
    namespace DDSCamera {

        /* ----------------------------------------------------------------------------
        *  Type DDS_CameraCapabilitiesMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_CameraCapabilitiesMessage *
        DDS_CameraCapabilitiesMessagePluginSupport_create_data(void)
        {
            try {
                DDS_CameraCapabilitiesMessage *sample = new DDS_CameraCapabilitiesMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_data(
            DDS_CameraCapabilitiesMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_CameraCapabilitiesMessagePluginSupport_copy_data(
            DDS_CameraCapabilitiesMessage *dst,
            const DDS_CameraCapabilitiesMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_CameraCapabilitiesMessage *
        DDS_CameraCapabilitiesMessagePluginSupport_create_key(void)
        {
            return DDS_CameraCapabilitiesMessagePluginSupport_create_data();
        }

        void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_key(
            DDS_CameraCapabilitiesMessageKeyHolder *key) 
        {
            DDS_CameraCapabilitiesMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_CameraCapabilitiesMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_CameraCapabilitiesMessage >::get().native()
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
        DDS_CameraCapabilitiesMessagePlugin_on_participant_detached(
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
        DDS_CameraCapabilitiesMessagePlugin_on_endpoint_attached(
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
                    DDS_CameraCapabilitiesMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_CameraCapabilitiesMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_CameraCapabilitiesMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_CameraCapabilitiesMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_CameraCapabilitiesMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_CameraCapabilitiesMessage *dst,
            const DDS_CameraCapabilitiesMessage *src)
        {
            return DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_CameraCapabilitiesMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_CameraCapabilitiesMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_CameraCapabilitiesMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_CameraCapabilitiesMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size(
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
        DDS_CameraCapabilitiesMessagePlugin_deserialize_from_cdr_buffer(
            DDS_CameraCapabilitiesMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_CameraCapabilitiesMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_CameraCapabilitiesMessage, 
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
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size(
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
        DDS_CameraCapabilitiesMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_CameraCapabilitiesMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage **sample, 
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
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size(
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
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_CameraCapabilitiesMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessageKeyHolder *dst, 
            const DDS_CameraCapabilitiesMessage *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   

                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->CameraID() = src->CameraID();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage *dst, const
            DDS_CameraCapabilitiesMessageKeyHolder *src)
        {
            try {
                if (endpoint_data) {} /* To avoid warnings */   
                dst->SourceId() = src->SourceId();
                dst->DestinationId() = src->DestinationId();
                dst->CameraID() = src->CameraID();
                return RTI_TRUE;
            } catch (...) {
                return RTI_FALSE;
            }    
        }

        RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_CameraCapabilitiesMessage *instance,
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
        DDS_CameraCapabilitiesMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_CameraCapabilitiesMessage * sample = NULL;
            sample = (DDS_CameraCapabilitiesMessage *)
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
            if (!DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_CameraCapabilitiesMessagePlugin_new(void) 
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
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_CameraCapabilitiesMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_CameraCapabilitiesMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_CameraCapabilitiesMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_CameraCapabilitiesMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_CameraCapabilitiesMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_CameraCapabilitiesMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_CameraCapabilitiesMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_CameraCapabilitiesMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_CameraCapabilitiesMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace DDSCamera  */
    namespace DDSGpp {

        /* ----------------------------------------------------------------------------
        *  Type DDS_GlobalPathQueryData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GlobalPathQueryData *
        DDS_GlobalPathQueryDataPluginSupport_create_data(void)
        {
            try {
                DDS_GlobalPathQueryData *sample = new DDS_GlobalPathQueryData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GlobalPathQueryDataPluginSupport_destroy_data(
            DDS_GlobalPathQueryData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GlobalPathQueryDataPluginSupport_copy_data(
            DDS_GlobalPathQueryData *dst,
            const DDS_GlobalPathQueryData *src)
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
        DDS_GlobalPathQueryDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GlobalPathQueryData *dst,
            const DDS_GlobalPathQueryData *src)
        {
            return DDS_GRI::DDSGpp::DDS_GlobalPathQueryDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GlobalPathQueryDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GlobalPathQueryDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathQueryData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathQueryData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GlobalPathQueryData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GlobalPathQueryDataPlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathQueryDataPlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathQueryData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathQueryData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GlobalPathQueryData, 
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
        DDS_GlobalPathQueryDataPlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathQueryDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_GlobalPathQueryDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryData **sample, 
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
        DDS_GlobalPathQueryDataPlugin_get_serialized_key_max_size(
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
        DDS_GlobalPathQueryDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GlobalPathQueryMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GlobalPathQueryMessage *
        DDS_GlobalPathQueryMessagePluginSupport_create_data(void)
        {
            try {
                DDS_GlobalPathQueryMessage *sample = new DDS_GlobalPathQueryMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_data(
            DDS_GlobalPathQueryMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GlobalPathQueryMessagePluginSupport_copy_data(
            DDS_GlobalPathQueryMessage *dst,
            const DDS_GlobalPathQueryMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_GlobalPathQueryMessage *
        DDS_GlobalPathQueryMessagePluginSupport_create_key(void)
        {
            return DDS_GlobalPathQueryMessagePluginSupport_create_data();
        }

        void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_key(
            DDS_GlobalPathQueryMessageKeyHolder *key) 
        {
            DDS_GlobalPathQueryMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_GlobalPathQueryMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathQueryMessage >::get().native()
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
        DDS_GlobalPathQueryMessagePlugin_on_participant_detached(
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
        DDS_GlobalPathQueryMessagePlugin_on_endpoint_attached(
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
                    DDS_GlobalPathQueryMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_GlobalPathQueryMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_GlobalPathQueryMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_GlobalPathQueryMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_GlobalPathQueryMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_GlobalPathQueryMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GlobalPathQueryMessage *dst,
            const DDS_GlobalPathQueryMessage *src)
        {
            return DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GlobalPathQueryMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathQueryMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathQueryMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GlobalPathQueryMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathQueryMessagePlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathQueryMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathQueryMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GlobalPathQueryMessage, 
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
        DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathQueryMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_GlobalPathQueryMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage **sample, 
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
        DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size(
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
        DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_GlobalPathQueryMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessageKeyHolder *dst, 
            const DDS_GlobalPathQueryMessage *src)
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
        DDS_GlobalPathQueryMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage *dst, const
            DDS_GlobalPathQueryMessageKeyHolder *src)
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
        DDS_GlobalPathQueryMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_GlobalPathQueryMessage *instance,
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
        DDS_GlobalPathQueryMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_GlobalPathQueryMessage * sample = NULL;
            sample = (DDS_GlobalPathQueryMessage *)
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
            if (!DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_GlobalPathQueryMessagePlugin_new(void) 
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
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_GlobalPathQueryMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_GlobalPathQueryMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_GlobalPathQueryMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_GlobalPathQueryMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_GlobalPathQueryMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_GlobalPathQueryMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_GlobalPathQueryMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_GlobalPathQueryMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_GlobalPathQueryMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 

        /* ----------------------------------------------------------------------------
        *  Type DDS_GlobalPath
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GlobalPath *
        DDS_GlobalPathPluginSupport_create_data(void)
        {
            try {
                DDS_GlobalPath *sample = new DDS_GlobalPath;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GlobalPathPluginSupport_destroy_data(
            DDS_GlobalPath *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GlobalPathPluginSupport_copy_data(
            DDS_GlobalPath *dst,
            const DDS_GlobalPath *src)
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
        DDS_GlobalPathPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GlobalPath *dst,
            const DDS_GlobalPath *src)
        {
            return DDS_GRI::DDSGpp::DDS_GlobalPathPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GlobalPathPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GlobalPathPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPath *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPath >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GlobalPath, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GlobalPathPlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathPlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPath *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPath >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GlobalPath, 
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
        DDS_GlobalPathPlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_GlobalPathPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPath **sample, 
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
        DDS_GlobalPathPlugin_get_serialized_key_max_size(
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
        DDS_GlobalPathPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GlobalPathReportData
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GlobalPathReportData *
        DDS_GlobalPathReportDataPluginSupport_create_data(void)
        {
            try {
                DDS_GlobalPathReportData *sample = new DDS_GlobalPathReportData;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GlobalPathReportDataPluginSupport_destroy_data(
            DDS_GlobalPathReportData *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GlobalPathReportDataPluginSupport_copy_data(
            DDS_GlobalPathReportData *dst,
            const DDS_GlobalPathReportData *src)
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
        DDS_GlobalPathReportDataPlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GlobalPathReportData *dst,
            const DDS_GlobalPathReportData *src)
        {
            return DDS_GRI::DDSGpp::DDS_GlobalPathReportDataPluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GlobalPathReportDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GlobalPathReportDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathReportData *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathReportData >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GlobalPathReportData, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GlobalPathReportDataPlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathReportDataPlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathReportData *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathReportData >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GlobalPathReportData, 
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
        DDS_GlobalPathReportDataPlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathReportDataPlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_NO_KEY;
        }

        RTIBool DDS_GlobalPathReportDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportData **sample, 
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
        DDS_GlobalPathReportDataPlugin_get_serialized_key_max_size(
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
        DDS_GlobalPathReportDataPlugin_get_serialized_key_max_size_for_keyhash(
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
        *  Type DDS_GlobalPathReportMessage
        * -------------------------------------------------------------------------- */

        /* -----------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------- */

        DDS_GlobalPathReportMessage *
        DDS_GlobalPathReportMessagePluginSupport_create_data(void)
        {
            try {
                DDS_GlobalPathReportMessage *sample = new DDS_GlobalPathReportMessage;    
                ::rti::topic::allocate_sample(*sample);
                return sample;
            } catch (...) {
                return NULL;
            }
        }

        void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_data(
            DDS_GlobalPathReportMessage *sample) 
        {
            delete sample;
        }

        RTIBool 
        DDS_GlobalPathReportMessagePluginSupport_copy_data(
            DDS_GlobalPathReportMessage *dst,
            const DDS_GlobalPathReportMessage *src)
        {
            try {
                *dst = *src;
            } catch (...) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        DDS_GlobalPathReportMessage *
        DDS_GlobalPathReportMessagePluginSupport_create_key(void)
        {
            return DDS_GlobalPathReportMessagePluginSupport_create_data();
        }

        void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_key(
            DDS_GlobalPathReportMessageKeyHolder *key) 
        {
            DDS_GlobalPathReportMessagePluginSupport_destroy_data(key);
        }

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        PRESTypePluginParticipantData 
        DDS_GlobalPathReportMessagePlugin_on_participant_attached(
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
                (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathReportMessage >::get().native()
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
        DDS_GlobalPathReportMessagePlugin_on_participant_detached(
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
        DDS_GlobalPathReportMessagePlugin_on_endpoint_attached(
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
                    DDS_GlobalPathReportMessagePluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    DDS_GlobalPathReportMessagePluginSupport_destroy_data,
                    (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                    DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                    DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePluginSupport_destroy_key);

                if (epd == NULL) {
                    return NULL;
                } 

                serializedKeyMaxSize =  DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                serializedKeyMaxSizeV2 = DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
                    serializedSampleMaxSize = DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size, epd,
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
        DDS_GlobalPathReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data)
        {  
            PRESTypePluginDefaultEndpointData_delete(endpoint_data);
        }

        void    
        DDS_GlobalPathReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage *sample,
            void *handle)
        {
            try {
                ::rti::topic::reset_sample(*sample);
            } catch(const std::exception& ex) {
                RTICdrLog_logWithFunctionName(
                    RTI_LOG_BIT_EXCEPTION,
                    "DDS_GlobalPathReportMessagePlugin_return_sample",
                    &RTI_LOG_ANY_FAILURE_s,
                    "exception: ",
                    ex.what());           
            }

            PRESTypePluginDefaultEndpointData_returnSample(
                endpoint_data, sample, handle);
        }

        RTIBool 
        DDS_GlobalPathReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData,
            DDS_GlobalPathReportMessage *dst,
            const DDS_GlobalPathReportMessage *src)
        {
            return DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePluginSupport_copy_data(dst,src);
        }

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */
        unsigned int 
        DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        RTIBool
        DDS_GlobalPathReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathReportMessage *sample,
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
                (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathReportMessage >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DDS_GlobalPathReportMessage, 
                true, true, true>();

                encapsulationId = DDS_TypeCode_get_native_encapsulation(
                    (DDS_TypeCode *) plugin.typeCode,
                    representation);

                if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathReportMessagePlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathReportMessage *sample,
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
            (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DDS_GlobalPathReportMessage >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            DDS_GlobalPathReportMessage, 
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
        DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size(
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
        DDS_GlobalPathReportMessagePlugin_get_key_kind(void)
        {
            return PRES_TYPEPLUGIN_USER_KEY;
        }

        RTIBool DDS_GlobalPathReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage **sample, 
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
        DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size(
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
        DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
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
        DDS_GlobalPathReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessageKeyHolder *dst, 
            const DDS_GlobalPathReportMessage *src)
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
        DDS_GlobalPathReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage *dst, const
            DDS_GlobalPathReportMessageKeyHolder *src)
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
        DDS_GlobalPathReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_GlobalPathReportMessage *instance,
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
        DDS_GlobalPathReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos)
        {
            DDS_GlobalPathReportMessage * sample = NULL;
            sample = (DDS_GlobalPathReportMessage *)
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
            if (!DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_instance_to_keyhash(
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
        struct PRESTypePlugin *DDS_GlobalPathReportMessagePlugin_new(void) 
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
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_on_participant_attached;
            plugin->onParticipantDetached =
            (PRESTypePluginOnParticipantDetachedCallback)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_on_participant_detached;
            plugin->onEndpointAttached =
            (PRESTypePluginOnEndpointAttachedCallback)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_on_endpoint_attached;
            plugin->onEndpointDetached =
            (PRESTypePluginOnEndpointDetachedCallback)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_on_endpoint_detached;

            plugin->copySampleFnc =
            (PRESTypePluginCopySampleFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_copy_sample;
            plugin->createSampleFnc =
            (PRESTypePluginCreateSampleFunction)
            DDS_GlobalPathReportMessagePlugin_create_sample;
            plugin->destroySampleFnc =
            (PRESTypePluginDestroySampleFunction)
            DDS_GlobalPathReportMessagePlugin_destroy_sample;

            plugin->serializeFnc = 
            (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
            plugin->deserializeFnc =
            (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
            plugin->getSerializedSampleMaxSizeFnc =
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size;
            plugin->getSerializedSampleMinSizeFnc =
            (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
            plugin->getDeserializedSampleMaxSizeFnc = NULL; 
            plugin->getSampleFnc =
            (PRESTypePluginGetSampleFunction)
            DDS_GlobalPathReportMessagePlugin_get_sample;
            plugin->returnSampleFnc =
            (PRESTypePluginReturnSampleFunction)
            DDS_GlobalPathReportMessagePlugin_return_sample;
            plugin->getKeyKindFnc =
            (PRESTypePluginGetKeyKindFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_get_key_kind;

            plugin->getSerializedKeyMaxSizeFnc =   
            (PRESTypePluginGetSerializedKeyMaxSizeFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size;
            plugin->serializeKeyFnc =
            (PRESTypePluginSerializeKeyFunction)
            PRESTypePlugin_interpretedSerializeKey;
            plugin->deserializeKeyFnc =
            (PRESTypePluginDeserializeKeyFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_deserialize_key;
            plugin->deserializeKeySampleFnc =
            (PRESTypePluginDeserializeKeySampleFunction)
            PRESTypePlugin_interpretedDeserializeKey;

            plugin-> instanceToKeyHashFnc = 
            (PRESTypePluginInstanceToKeyHashFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_instance_to_keyhash;
            plugin->serializedSampleToKeyHashFnc = 
            (PRESTypePluginSerializedSampleToKeyHashFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_serialized_sample_to_keyhash;

            plugin->getKeyFnc =
            (PRESTypePluginGetKeyFunction)
            DDS_GlobalPathReportMessagePlugin_get_key;
            plugin->returnKeyFnc =
            (PRESTypePluginReturnKeyFunction)
            DDS_GlobalPathReportMessagePlugin_return_key;

            plugin->instanceToKeyFnc =
            (PRESTypePluginInstanceToKeyFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_instance_to_key;
            plugin->keyToInstanceFnc =
            (PRESTypePluginKeyToInstanceFunction)
            DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_key_to_instance;
            plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
            #ifdef NDDS_STANDALONE_TYPE
            plugin->typeCode = NULL; 
            #else
            plugin->typeCode = (struct RTICdrTypeCode *) 
            &::rti::topic::dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::get().native();
            #endif
            plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

            /* Serialized buffer */
            plugin->getBuffer = 
            (PRESTypePluginGetBufferFunction)
            DDS_GlobalPathReportMessagePlugin_get_buffer;
            plugin->returnBuffer = 
            (PRESTypePluginReturnBufferFunction)
            DDS_GlobalPathReportMessagePlugin_return_buffer;
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

            static const char * TYPE_NAME = "DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage";
            plugin->endpointTypeName = TYPE_NAME;
            plugin->isMetpType = RTI_FALSE;
            return plugin;
        }

        void
        DDS_GlobalPathReportMessagePlugin_delete(struct PRESTypePlugin *plugin)
        {
            RTIOsapiHeap_freeStructure(plugin);
        } 
    } /* namespace DDSGpp  */
} /* namespace DDS_GRI  */
#undef RTI_CDR_CURRENT_SUBMODULE 
