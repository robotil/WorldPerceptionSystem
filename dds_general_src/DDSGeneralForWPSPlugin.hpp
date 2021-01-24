

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSGeneralForWPS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DDSGeneralForWPSPlugin_896445415_h
#define DDSGeneralForWPSPlugin_896445415_h

#include "DDSGeneralForWPS.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace DDS_GRI {
    namespace DDSCommon {

        #define String200Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define String200Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define String200Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define String200Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define String200Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern String200*
        String200PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern String200*
        String200PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern String200*
        String200PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        String200PluginSupport_copy_data(
            String200 *out,
            const String200 *in);

        NDDSUSERDllExport extern void 
        String200PluginSupport_destroy_data_w_params(
            String200 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        String200PluginSupport_destroy_data_ex(
            String200 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        String200PluginSupport_destroy_data(
            String200 *sample);

        NDDSUSERDllExport extern void 
        String200PluginSupport_print_data(
            const String200 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        String200Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            String200 *out,
            const String200 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        String200Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        String200Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        String200Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        String200Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define String100Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define String100Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define String100Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define String100Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define String100Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern String100*
        String100PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern String100*
        String100PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern String100*
        String100PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        String100PluginSupport_copy_data(
            String100 *out,
            const String100 *in);

        NDDSUSERDllExport extern void 
        String100PluginSupport_destroy_data_w_params(
            String100 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        String100PluginSupport_destroy_data_ex(
            String100 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        String100PluginSupport_destroy_data(
            String100 *sample);

        NDDSUSERDllExport extern void 
        String100PluginSupport_print_data(
            const String100 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        String100Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            String100 *out,
            const String100 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        String100Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        String100Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        String100Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        String100Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define String50Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define String50Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define String50Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define String50Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define String50Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern String50*
        String50PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern String50*
        String50PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern String50*
        String50PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        String50PluginSupport_copy_data(
            String50 *out,
            const String50 *in);

        NDDSUSERDllExport extern void 
        String50PluginSupport_destroy_data_w_params(
            String50 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        String50PluginSupport_destroy_data_ex(
            String50 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        String50PluginSupport_destroy_data(
            String50 *sample);

        NDDSUSERDllExport extern void 
        String50PluginSupport_print_data(
            const String50 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        String50Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            String50 *out,
            const String50 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        String50Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        String50Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        String50Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        String50Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define String20Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define String20Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define String20Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define String20Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define String20Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern String20*
        String20PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern String20*
        String20PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern String20*
        String20PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        String20PluginSupport_copy_data(
            String20 *out,
            const String20 *in);

        NDDSUSERDllExport extern void 
        String20PluginSupport_destroy_data_w_params(
            String20 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        String20PluginSupport_destroy_data_ex(
            String20 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        String20PluginSupport_destroy_data(
            String20 *sample);

        NDDSUSERDllExport extern void 
        String20PluginSupport_print_data(
            const String20 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        String20Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            String20 *out,
            const String20 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        String20Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        String20Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        String20Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        String20Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define WString200Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WString200Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WString200Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WString200Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WString200Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WString200*
        WString200PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WString200*
        WString200PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WString200*
        WString200PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WString200PluginSupport_copy_data(
            WString200 *out,
            const WString200 *in);

        NDDSUSERDllExport extern void 
        WString200PluginSupport_destroy_data_w_params(
            WString200 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WString200PluginSupport_destroy_data_ex(
            WString200 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WString200PluginSupport_destroy_data(
            WString200 *sample);

        NDDSUSERDllExport extern void 
        WString200PluginSupport_print_data(
            const WString200 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WString200Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WString200 *out,
            const WString200 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WString200Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WString200Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WString200Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WString200Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define WString100Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WString100Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WString100Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WString100Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WString100Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WString100*
        WString100PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WString100*
        WString100PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WString100*
        WString100PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WString100PluginSupport_copy_data(
            WString100 *out,
            const WString100 *in);

        NDDSUSERDllExport extern void 
        WString100PluginSupport_destroy_data_w_params(
            WString100 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WString100PluginSupport_destroy_data_ex(
            WString100 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WString100PluginSupport_destroy_data(
            WString100 *sample);

        NDDSUSERDllExport extern void 
        WString100PluginSupport_print_data(
            const WString100 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WString100Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WString100 *out,
            const WString100 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WString100Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WString100Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WString100Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WString100Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define WString50Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WString50Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WString50Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WString50Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WString50Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WString50*
        WString50PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WString50*
        WString50PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WString50*
        WString50PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WString50PluginSupport_copy_data(
            WString50 *out,
            const WString50 *in);

        NDDSUSERDllExport extern void 
        WString50PluginSupport_destroy_data_w_params(
            WString50 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WString50PluginSupport_destroy_data_ex(
            WString50 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WString50PluginSupport_destroy_data(
            WString50 *sample);

        NDDSUSERDllExport extern void 
        WString50PluginSupport_print_data(
            const WString50 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WString50Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WString50 *out,
            const WString50 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WString50Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WString50Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WString50Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WString50Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define WString20Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WString20Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WString20Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WString20Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WString20Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WString20*
        WString20PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WString20*
        WString20PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WString20*
        WString20PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WString20PluginSupport_copy_data(
            WString20 *out,
            const WString20 *in);

        NDDSUSERDllExport extern void 
        WString20PluginSupport_destroy_data_w_params(
            WString20 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WString20PluginSupport_destroy_data_ex(
            WString20 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WString20PluginSupport_destroy_data(
            WString20 *sample);

        NDDSUSERDllExport extern void 
        WString20PluginSupport_print_data(
            const WString20 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WString20Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WString20 *out,
            const WString20 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WString20Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WString20Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WString20Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WString20Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define DDS_GUIDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GUIDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GUIDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GUIDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GUIDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GUID*
        DDS_GUIDPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GUID*
        DDS_GUIDPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GUID*
        DDS_GUIDPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GUIDPluginSupport_copy_data(
            DDS_GUID *out,
            const DDS_GUID *in);

        NDDSUSERDllExport extern void 
        DDS_GUIDPluginSupport_destroy_data_w_params(
            DDS_GUID *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GUIDPluginSupport_destroy_data_ex(
            DDS_GUID *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GUIDPluginSupport_destroy_data(
            DDS_GUID *sample);

        NDDSUSERDllExport extern void 
        DDS_GUIDPluginSupport_print_data(
            const DDS_GUID *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_GUIDPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GUID *out,
            const DDS_GUID *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_GUIDPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GUIDPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GUIDPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GUIDPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define DDS_FileTimeUTCPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_FileTimeUTCPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_FileTimeUTCPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_FileTimeUTCPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_FileTimeUTCPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_FileTimeUTC*
        DDS_FileTimeUTCPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_FileTimeUTC*
        DDS_FileTimeUTCPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_FileTimeUTC*
        DDS_FileTimeUTCPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_FileTimeUTCPluginSupport_copy_data(
            DDS_FileTimeUTC *out,
            const DDS_FileTimeUTC *in);

        NDDSUSERDllExport extern void 
        DDS_FileTimeUTCPluginSupport_destroy_data_w_params(
            DDS_FileTimeUTC *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_FileTimeUTCPluginSupport_destroy_data_ex(
            DDS_FileTimeUTC *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_FileTimeUTCPluginSupport_destroy_data(
            DDS_FileTimeUTC *sample);

        NDDSUSERDllExport extern void 
        DDS_FileTimeUTCPluginSupport_print_data(
            const DDS_FileTimeUTC *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_FileTimeUTCPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_FileTimeUTC *out,
            const DDS_FileTimeUTC *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_FileTimeUTCPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_FileTimeUTCPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_FileTimeUTCPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_FileTimeUTCPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define T_Int32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define T_Int32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define T_Int32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define T_Int32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define T_Int32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern T_Int32*
        T_Int32PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern T_Int32*
        T_Int32PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern T_Int32*
        T_Int32PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        T_Int32PluginSupport_copy_data(
            T_Int32 *out,
            const T_Int32 *in);

        NDDSUSERDllExport extern void 
        T_Int32PluginSupport_destroy_data_w_params(
            T_Int32 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        T_Int32PluginSupport_destroy_data_ex(
            T_Int32 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        T_Int32PluginSupport_destroy_data(
            T_Int32 *sample);

        NDDSUSERDllExport extern void 
        T_Int32PluginSupport_print_data(
            const T_Int32 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        T_Int32Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            T_Int32 *out,
            const T_Int32 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        T_Int32Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        T_Int32Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        T_Int32Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        T_Int32Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define T_Int64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define T_Int64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define T_Int64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define T_Int64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define T_Int64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern T_Int64*
        T_Int64PluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern T_Int64*
        T_Int64PluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern T_Int64*
        T_Int64PluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        T_Int64PluginSupport_copy_data(
            T_Int64 *out,
            const T_Int64 *in);

        NDDSUSERDllExport extern void 
        T_Int64PluginSupport_destroy_data_w_params(
            T_Int64 *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        T_Int64PluginSupport_destroy_data_ex(
            T_Int64 *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        T_Int64PluginSupport_destroy_data(
            T_Int64 *sample);

        NDDSUSERDllExport extern void 
        T_Int64PluginSupport_print_data(
            const T_Int64 *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        T_Int64Plugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            T_Int64 *out,
            const T_Int64 *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        T_Int64Plugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        T_Int64Plugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        T_Int64Plugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        T_Int64Plugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define T_DateTimeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define T_DateTimeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define T_DateTimeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define T_DateTimeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define T_DateTimeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern T_DateTimeType*
        T_DateTimeTypePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern T_DateTimeType*
        T_DateTimeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern T_DateTimeType*
        T_DateTimeTypePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        T_DateTimeTypePluginSupport_copy_data(
            T_DateTimeType *out,
            const T_DateTimeType *in);

        NDDSUSERDllExport extern void 
        T_DateTimeTypePluginSupport_destroy_data_w_params(
            T_DateTimeType *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        T_DateTimeTypePluginSupport_destroy_data_ex(
            T_DateTimeType *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        T_DateTimeTypePluginSupport_destroy_data(
            T_DateTimeType *sample);

        NDDSUSERDllExport extern void 
        T_DateTimeTypePluginSupport_print_data(
            const T_DateTimeType *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        T_DateTimeTypePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            T_DateTimeType *out,
            const T_DateTimeType *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        T_DateTimeTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const T_DateTimeType *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        T_DateTimeTypePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            T_DateTimeType **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        T_DateTimeTypePlugin_deserialize_from_cdr_buffer(
            T_DateTimeType *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        T_DateTimeTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        T_DateTimeTypePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        T_DateTimeTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        T_DateTimeTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        T_DateTimeTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            T_DateTimeType ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_ValueTypeEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_ValueTypeEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ValueTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        DDS_ValueTypeEnumPluginSupport_print_data(
            const DDS_ValueTypeEnum *sample, const char *desc, int indent_level);

        #define DDS_AttributeValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_AttributeValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_AttributeValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_AttributeValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_AttributeValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_AttributeValue*
        DDS_AttributeValuePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_AttributeValue*
        DDS_AttributeValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_AttributeValue*
        DDS_AttributeValuePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_AttributeValuePluginSupport_copy_data(
            DDS_AttributeValue *out,
            const DDS_AttributeValue *in);

        NDDSUSERDllExport extern void 
        DDS_AttributeValuePluginSupport_destroy_data_w_params(
            DDS_AttributeValue *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_AttributeValuePluginSupport_destroy_data_ex(
            DDS_AttributeValue *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_AttributeValuePluginSupport_destroy_data(
            DDS_AttributeValue *sample);

        NDDSUSERDllExport extern void 
        DDS_AttributeValuePluginSupport_print_data(
            const DDS_AttributeValue *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_AttributeValuePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AttributeValue *out,
            const DDS_AttributeValue *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_AttributeValuePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_AttributeValue *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_AttributeValuePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AttributeValue **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_AttributeValuePlugin_deserialize_from_cdr_buffer(
            DDS_AttributeValue *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_AttributeValuePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_AttributeValuePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_AttributeValuePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_AttributeValuePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_AttributeValuePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AttributeValue ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_IdentifierPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_IdentifierPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_IdentifierPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_IdentifierPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_IdentifierPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_Identifier*
        DDS_IdentifierPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_Identifier*
        DDS_IdentifierPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Identifier*
        DDS_IdentifierPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_IdentifierPluginSupport_copy_data(
            DDS_Identifier *out,
            const DDS_Identifier *in);

        NDDSUSERDllExport extern void 
        DDS_IdentifierPluginSupport_destroy_data_w_params(
            DDS_Identifier *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_IdentifierPluginSupport_destroy_data_ex(
            DDS_Identifier *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_IdentifierPluginSupport_destroy_data(
            DDS_Identifier *sample);

        NDDSUSERDllExport extern void 
        DDS_IdentifierPluginSupport_print_data(
            const DDS_Identifier *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_IdentifierPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Identifier *out,
            const DDS_Identifier *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_IdentifierPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Identifier *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_IdentifierPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Identifier **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_IdentifierPlugin_deserialize_from_cdr_buffer(
            DDS_Identifier *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_IdentifierPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_IdentifierPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_IdentifierPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_IdentifierPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_IdentifierPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Identifier ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_GuidIdentifierPairPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GuidIdentifierPairPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GuidIdentifierPairPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GuidIdentifierPairPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GuidIdentifierPairPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GuidIdentifierPair*
        DDS_GuidIdentifierPairPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GuidIdentifierPair*
        DDS_GuidIdentifierPairPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GuidIdentifierPair*
        DDS_GuidIdentifierPairPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GuidIdentifierPairPluginSupport_copy_data(
            DDS_GuidIdentifierPair *out,
            const DDS_GuidIdentifierPair *in);

        NDDSUSERDllExport extern void 
        DDS_GuidIdentifierPairPluginSupport_destroy_data_w_params(
            DDS_GuidIdentifierPair *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GuidIdentifierPairPluginSupport_destroy_data_ex(
            DDS_GuidIdentifierPair *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GuidIdentifierPairPluginSupport_destroy_data(
            DDS_GuidIdentifierPair *sample);

        NDDSUSERDllExport extern void 
        DDS_GuidIdentifierPairPluginSupport_print_data(
            const DDS_GuidIdentifierPair *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_GuidIdentifierPairPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_GuidIdentifierPairPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_GuidIdentifierPairPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_GuidIdentifierPairPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_GuidIdentifierPairPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GuidIdentifierPair *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_GuidIdentifierPairPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GuidIdentifierPair *out,
            const DDS_GuidIdentifierPair *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GuidIdentifierPairPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GuidIdentifierPair *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GuidIdentifierPairPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GuidIdentifierPair **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GuidIdentifierPairPlugin_deserialize_from_cdr_buffer(
            DDS_GuidIdentifierPair *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GuidIdentifierPairPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GuidIdentifierPairPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GuidIdentifierPairPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GuidIdentifierPairPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GuidIdentifierPairPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GuidIdentifierPair ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_GuidIdentifierPairPlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_GuidIdentifierPairPlugin_delete(struct PRESTypePlugin *);

        #define DDS_LogicPointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_LogicPointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_LogicPointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_LogicPointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_LogicPointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_LogicPoint*
        DDS_LogicPointPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_LogicPoint*
        DDS_LogicPointPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_LogicPoint*
        DDS_LogicPointPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_LogicPointPluginSupport_copy_data(
            DDS_LogicPoint *out,
            const DDS_LogicPoint *in);

        NDDSUSERDllExport extern void 
        DDS_LogicPointPluginSupport_destroy_data_w_params(
            DDS_LogicPoint *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_LogicPointPluginSupport_destroy_data_ex(
            DDS_LogicPoint *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_LogicPointPluginSupport_destroy_data(
            DDS_LogicPoint *sample);

        NDDSUSERDllExport extern void 
        DDS_LogicPointPluginSupport_print_data(
            const DDS_LogicPoint *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_LogicPointPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_LogicPoint *out,
            const DDS_LogicPoint *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_LogicPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_LogicPoint *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_LogicPointPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_LogicPoint **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_LogicPointPlugin_deserialize_from_cdr_buffer(
            DDS_LogicPoint *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_LogicPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_LogicPointPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_LogicPointPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_LogicPointPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_LogicPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_LogicPoint ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_GeoPointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GeoPointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GeoPointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GeoPointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GeoPointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GeoPoint*
        DDS_GeoPointPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GeoPoint*
        DDS_GeoPointPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GeoPoint*
        DDS_GeoPointPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoPointPluginSupport_copy_data(
            DDS_GeoPoint *out,
            const DDS_GeoPoint *in);

        NDDSUSERDllExport extern void 
        DDS_GeoPointPluginSupport_destroy_data_w_params(
            DDS_GeoPoint *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GeoPointPluginSupport_destroy_data_ex(
            DDS_GeoPoint *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GeoPointPluginSupport_destroy_data(
            DDS_GeoPoint *sample);

        NDDSUSERDllExport extern void 
        DDS_GeoPointPluginSupport_print_data(
            const DDS_GeoPoint *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoPointPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoPoint *out,
            const DDS_GeoPoint *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GeoPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GeoPoint *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoPointPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoPoint **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GeoPointPlugin_deserialize_from_cdr_buffer(
            DDS_GeoPoint *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GeoPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GeoPointPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GeoPointPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GeoPointPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoPoint ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_GeoCirclePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GeoCirclePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GeoCirclePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GeoCirclePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GeoCirclePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GeoCircle*
        DDS_GeoCirclePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GeoCircle*
        DDS_GeoCirclePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GeoCircle*
        DDS_GeoCirclePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoCirclePluginSupport_copy_data(
            DDS_GeoCircle *out,
            const DDS_GeoCircle *in);

        NDDSUSERDllExport extern void 
        DDS_GeoCirclePluginSupport_destroy_data_w_params(
            DDS_GeoCircle *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GeoCirclePluginSupport_destroy_data_ex(
            DDS_GeoCircle *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GeoCirclePluginSupport_destroy_data(
            DDS_GeoCircle *sample);

        NDDSUSERDllExport extern void 
        DDS_GeoCirclePluginSupport_print_data(
            const DDS_GeoCircle *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoCirclePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoCircle *out,
            const DDS_GeoCircle *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GeoCirclePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GeoCircle *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoCirclePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoCircle **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GeoCirclePlugin_deserialize_from_cdr_buffer(
            DDS_GeoCircle *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GeoCirclePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GeoCirclePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GeoCirclePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GeoCirclePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GeoCirclePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GeoCircle ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_WayPointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_WayPointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_WayPointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_WayPointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_WayPointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_WayPoint*
        DDS_WayPointPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_WayPoint*
        DDS_WayPointPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_WayPoint*
        DDS_WayPointPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPointPluginSupport_copy_data(
            DDS_WayPoint *out,
            const DDS_WayPoint *in);

        NDDSUSERDllExport extern void 
        DDS_WayPointPluginSupport_destroy_data_w_params(
            DDS_WayPoint *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_WayPointPluginSupport_destroy_data_ex(
            DDS_WayPoint *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_WayPointPluginSupport_destroy_data(
            DDS_WayPoint *sample);

        NDDSUSERDllExport extern void 
        DDS_WayPointPluginSupport_print_data(
            const DDS_WayPoint *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPointPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WayPoint *out,
            const DDS_WayPoint *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_WayPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_WayPoint *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPointPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WayPoint **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_WayPointPlugin_deserialize_from_cdr_buffer(
            DDS_WayPoint *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_WayPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_WayPointPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_WayPointPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_WayPointPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WayPoint ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_String50DoublePairPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_String50DoublePairPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_String50DoublePairPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_String50DoublePairPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_String50DoublePairPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_String50DoublePair*
        DDS_String50DoublePairPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_String50DoublePair*
        DDS_String50DoublePairPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_String50DoublePair*
        DDS_String50DoublePairPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_String50DoublePairPluginSupport_copy_data(
            DDS_String50DoublePair *out,
            const DDS_String50DoublePair *in);

        NDDSUSERDllExport extern void 
        DDS_String50DoublePairPluginSupport_destroy_data_w_params(
            DDS_String50DoublePair *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_String50DoublePairPluginSupport_destroy_data_ex(
            DDS_String50DoublePair *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_String50DoublePairPluginSupport_destroy_data(
            DDS_String50DoublePair *sample);

        NDDSUSERDllExport extern void 
        DDS_String50DoublePairPluginSupport_print_data(
            const DDS_String50DoublePair *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_String50DoublePairPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_String50DoublePair *out,
            const DDS_String50DoublePair *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_String50DoublePairPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_String50DoublePair *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_String50DoublePairPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_String50DoublePair **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_String50DoublePairPlugin_deserialize_from_cdr_buffer(
            DDS_String50DoublePair *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_String50DoublePairPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_String50DoublePairPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_String50DoublePairPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_String50DoublePairPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_String50DoublePairPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_String50DoublePair ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_RangeDescriptionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_RangeDescriptionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_RangeDescriptionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_RangeDescriptionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_RangeDescriptionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_RangeDescription*
        DDS_RangeDescriptionPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_RangeDescription*
        DDS_RangeDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RangeDescription*
        DDS_RangeDescriptionPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_RangeDescriptionPluginSupport_copy_data(
            DDS_RangeDescription *out,
            const DDS_RangeDescription *in);

        NDDSUSERDllExport extern void 
        DDS_RangeDescriptionPluginSupport_destroy_data_w_params(
            DDS_RangeDescription *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_RangeDescriptionPluginSupport_destroy_data_ex(
            DDS_RangeDescription *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RangeDescriptionPluginSupport_destroy_data(
            DDS_RangeDescription *sample);

        NDDSUSERDllExport extern void 
        DDS_RangeDescriptionPluginSupport_print_data(
            const DDS_RangeDescription *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_RangeDescriptionPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RangeDescription *out,
            const DDS_RangeDescription *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_RangeDescriptionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RangeDescription *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_RangeDescriptionPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RangeDescription **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_RangeDescriptionPlugin_deserialize_from_cdr_buffer(
            DDS_RangeDescription *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_RangeDescriptionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_RangeDescriptionPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_RangeDescriptionPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_RangeDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_RangeDescriptionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RangeDescription ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_ItemTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ItemTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ItemTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ItemTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ItemTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ItemType*
        DDS_ItemTypePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ItemType*
        DDS_ItemTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ItemType*
        DDS_ItemTypePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemTypePluginSupport_copy_data(
            DDS_ItemType *out,
            const DDS_ItemType *in);

        NDDSUSERDllExport extern void 
        DDS_ItemTypePluginSupport_destroy_data_w_params(
            DDS_ItemType *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ItemTypePluginSupport_destroy_data_ex(
            DDS_ItemType *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ItemTypePluginSupport_destroy_data(
            DDS_ItemType *sample);

        NDDSUSERDllExport extern void 
        DDS_ItemTypePluginSupport_print_data(
            const DDS_ItemType *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemTypePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemType *out,
            const DDS_ItemType *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ItemTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ItemType *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemTypePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemType **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ItemTypePlugin_deserialize_from_cdr_buffer(
            DDS_ItemType *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ItemTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ItemTypePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ItemTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ItemTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemType ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_VisibilityPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_VisibilityPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_VisibilityPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        DDS_VisibilityPluginSupport_print_data(
            const DDS_Visibility *sample, const char *desc, int indent_level);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_OperationTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_OperationTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_OperationTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        DDS_OperationTypePluginSupport_print_data(
            const DDS_OperationType *sample, const char *desc, int indent_level);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_OprationStatusPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        DDS_OprationStatusPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_OprationStatusPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        DDS_OprationStatusPluginSupport_print_data(
            const DDS_OprationStatus *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_BaseRequestMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_BaseRequestMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_BaseRequestMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_BaseRequestMessage.
        */
        typedef  class DDS_BaseRequestMessage DDS_BaseRequestMessageKeyHolder;

        #define DDS_BaseRequestMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_BaseRequestMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_BaseRequestMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_BaseRequestMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_BaseRequestMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_BaseRequestMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_BaseRequestMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_BaseRequestMessage*
        DDS_BaseRequestMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_BaseRequestMessage*
        DDS_BaseRequestMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BaseRequestMessage*
        DDS_BaseRequestMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePluginSupport_copy_data(
            DDS_BaseRequestMessage *out,
            const DDS_BaseRequestMessage *in);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePluginSupport_destroy_data_w_params(
            DDS_BaseRequestMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePluginSupport_destroy_data_ex(
            DDS_BaseRequestMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePluginSupport_destroy_data(
            DDS_BaseRequestMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePluginSupport_print_data(
            const DDS_BaseRequestMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_BaseRequestMessage*
        DDS_BaseRequestMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BaseRequestMessage*
        DDS_BaseRequestMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePluginSupport_destroy_key_ex(
            DDS_BaseRequestMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePluginSupport_destroy_key(
            DDS_BaseRequestMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_BaseRequestMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_BaseRequestMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_BaseRequestMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_BaseRequestMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage *out,
            const DDS_BaseRequestMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_BaseRequestMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BaseRequestMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_BaseRequestMessagePlugin_deserialize_from_cdr_buffer(
            DDS_BaseRequestMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseRequestMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_BaseRequestMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseRequestMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseRequestMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessageKeyHolder *key, 
            const DDS_BaseRequestMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRequestMessage *instance, 
            const DDS_BaseRequestMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BaseRequestMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRequestMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_BaseRequestMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_BaseRequestMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace DDSCommon  */
    namespace DDSInfrastarcture {

        #define DDS_SectionWaypointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_SectionWaypointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_SectionWaypointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_SectionWaypointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_SectionWaypointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_SectionWaypoint*
        DDS_SectionWaypointPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_SectionWaypoint*
        DDS_SectionWaypointPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_SectionWaypoint*
        DDS_SectionWaypointPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionWaypointPluginSupport_copy_data(
            DDS_SectionWaypoint *out,
            const DDS_SectionWaypoint *in);

        NDDSUSERDllExport extern void 
        DDS_SectionWaypointPluginSupport_destroy_data_w_params(
            DDS_SectionWaypoint *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_SectionWaypointPluginSupport_destroy_data_ex(
            DDS_SectionWaypoint *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_SectionWaypointPluginSupport_destroy_data(
            DDS_SectionWaypoint *sample);

        NDDSUSERDllExport extern void 
        DDS_SectionWaypointPluginSupport_print_data(
            const DDS_SectionWaypoint *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionWaypointPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_SectionWaypoint *out,
            const DDS_SectionWaypoint *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_SectionWaypointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_SectionWaypoint *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionWaypointPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_SectionWaypoint **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_SectionWaypointPlugin_deserialize_from_cdr_buffer(
            DDS_SectionWaypoint *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_SectionWaypointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_SectionWaypointPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_SectionWaypointPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_SectionWaypointPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionWaypointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_SectionWaypoint ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_WaypointBehaviorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_WaypointBehaviorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_WaypointBehaviorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_WaypointBehaviorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_WaypointBehaviorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_WaypointBehaviorType*
        DDS_WaypointBehaviorTypePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_WaypointBehaviorType*
        DDS_WaypointBehaviorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_WaypointBehaviorType*
        DDS_WaypointBehaviorTypePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorTypePluginSupport_copy_data(
            DDS_WaypointBehaviorType *out,
            const DDS_WaypointBehaviorType *in);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorTypePluginSupport_destroy_data_w_params(
            DDS_WaypointBehaviorType *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorTypePluginSupport_destroy_data_ex(
            DDS_WaypointBehaviorType *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorTypePluginSupport_destroy_data(
            DDS_WaypointBehaviorType *sample);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorTypePluginSupport_print_data(
            const DDS_WaypointBehaviorType *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorTypePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviorType *out,
            const DDS_WaypointBehaviorType *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_WaypointBehaviorTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_WaypointBehaviorType *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorTypePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviorType **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_WaypointBehaviorTypePlugin_deserialize_from_cdr_buffer(
            DDS_WaypointBehaviorType *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_WaypointBehaviorTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_WaypointBehaviorTypePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_WaypointBehaviorTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_WaypointBehaviorTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviorType ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_WaypointBehaviorsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_WaypointBehaviorsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_WaypointBehaviorsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_WaypointBehaviorsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_WaypointBehaviorsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_WaypointBehaviors*
        DDS_WaypointBehaviorsPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_WaypointBehaviors*
        DDS_WaypointBehaviorsPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_WaypointBehaviors*
        DDS_WaypointBehaviorsPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorsPluginSupport_copy_data(
            DDS_WaypointBehaviors *out,
            const DDS_WaypointBehaviors *in);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorsPluginSupport_destroy_data_w_params(
            DDS_WaypointBehaviors *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorsPluginSupport_destroy_data_ex(
            DDS_WaypointBehaviors *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorsPluginSupport_destroy_data(
            DDS_WaypointBehaviors *sample);

        NDDSUSERDllExport extern void 
        DDS_WaypointBehaviorsPluginSupport_print_data(
            const DDS_WaypointBehaviors *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorsPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviors *out,
            const DDS_WaypointBehaviors *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_WaypointBehaviorsPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_WaypointBehaviors *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorsPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviors **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_WaypointBehaviorsPlugin_deserialize_from_cdr_buffer(
            DDS_WaypointBehaviors *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_WaypointBehaviorsPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_WaypointBehaviorsPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_WaypointBehaviorsPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_WaypointBehaviorsPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_WaypointBehaviorsPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WaypointBehaviors ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_ItemDescrpitionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ItemDescrpitionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ItemDescrpitionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ItemDescrpitionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ItemDescrpitionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ItemDescrpition*
        DDS_ItemDescrpitionPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ItemDescrpition*
        DDS_ItemDescrpitionPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ItemDescrpition*
        DDS_ItemDescrpitionPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemDescrpitionPluginSupport_copy_data(
            DDS_ItemDescrpition *out,
            const DDS_ItemDescrpition *in);

        NDDSUSERDllExport extern void 
        DDS_ItemDescrpitionPluginSupport_destroy_data_w_params(
            DDS_ItemDescrpition *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ItemDescrpitionPluginSupport_destroy_data_ex(
            DDS_ItemDescrpition *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ItemDescrpitionPluginSupport_destroy_data(
            DDS_ItemDescrpition *sample);

        NDDSUSERDllExport extern void 
        DDS_ItemDescrpitionPluginSupport_print_data(
            const DDS_ItemDescrpition *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemDescrpitionPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemDescrpition *out,
            const DDS_ItemDescrpition *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ItemDescrpitionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ItemDescrpition *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemDescrpitionPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemDescrpition **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ItemDescrpitionPlugin_deserialize_from_cdr_buffer(
            DDS_ItemDescrpition *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ItemDescrpitionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ItemDescrpitionPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ItemDescrpitionPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ItemDescrpitionPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ItemDescrpitionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ItemDescrpition ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_BaseItem
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_BaseItem)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_BaseItem must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_BaseItem.
        */
        typedef  class DDS_BaseItem DDS_BaseItemKeyHolder;

        #define DDS_BaseItemPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_BaseItemPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_BaseItemPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_BaseItemPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_BaseItemPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_BaseItemPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_BaseItemPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_BaseItem*
        DDS_BaseItemPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_BaseItem*
        DDS_BaseItemPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BaseItem*
        DDS_BaseItemPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPluginSupport_copy_data(
            DDS_BaseItem *out,
            const DDS_BaseItem *in);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPluginSupport_destroy_data_w_params(
            DDS_BaseItem *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPluginSupport_destroy_data_ex(
            DDS_BaseItem *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPluginSupport_destroy_data(
            DDS_BaseItem *sample);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPluginSupport_print_data(
            const DDS_BaseItem *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_BaseItem*
        DDS_BaseItemPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BaseItem*
        DDS_BaseItemPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPluginSupport_destroy_key_ex(
            DDS_BaseItemKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPluginSupport_destroy_key(
            DDS_BaseItemKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_BaseItemPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_BaseItemPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_BaseItemPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_BaseItemPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem *out,
            const DDS_BaseItem *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_BaseItemPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BaseItem *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_BaseItemPlugin_deserialize_from_cdr_buffer(
            DDS_BaseItem *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseItemPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_BaseItemPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseItemPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseItemPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItemKeyHolder *key, 
            const DDS_BaseItem *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseItem *instance, 
            const DDS_BaseItemKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BaseItem *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseItemPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_BaseItemPlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_BaseItemPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_Way
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_Way)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_Way must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_Way.
        */
        typedef  class DDS_Way DDS_WayKeyHolder;

        #define DDS_WayPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_WayPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_WayPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_WayPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_WayPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_WayPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_WayPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_Way*
        DDS_WayPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_Way*
        DDS_WayPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Way*
        DDS_WayPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPluginSupport_copy_data(
            DDS_Way *out,
            const DDS_Way *in);

        NDDSUSERDllExport extern void 
        DDS_WayPluginSupport_destroy_data_w_params(
            DDS_Way *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_WayPluginSupport_destroy_data_ex(
            DDS_Way *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_WayPluginSupport_destroy_data(
            DDS_Way *sample);

        NDDSUSERDllExport extern void 
        DDS_WayPluginSupport_print_data(
            const DDS_Way *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_Way*
        DDS_WayPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Way*
        DDS_WayPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_WayPluginSupport_destroy_key_ex(
            DDS_WayKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_WayPluginSupport_destroy_key(
            DDS_WayKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Way *out,
            const DDS_Way *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_WayPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Way *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Way **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_WayPlugin_deserialize_from_cdr_buffer(
            DDS_Way *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_WayPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_WayPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_WayPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_WayPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Way ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_WayKeyHolder *key, 
            const DDS_Way *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Way *instance, 
            const DDS_WayKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_Way *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_WayPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ClientServerWayMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ClientServerWayMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ClientServerWayMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ClientServerWayMessage.
        */
        typedef  class DDS_ClientServerWayMessage DDS_ClientServerWayMessageKeyHolder;

        #define DDS_ClientServerWayMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ClientServerWayMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ClientServerWayMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ClientServerWayMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ClientServerWayMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ClientServerWayMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ClientServerWayMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ClientServerWayMessage*
        DDS_ClientServerWayMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ClientServerWayMessage*
        DDS_ClientServerWayMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerWayMessage*
        DDS_ClientServerWayMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePluginSupport_copy_data(
            DDS_ClientServerWayMessage *out,
            const DDS_ClientServerWayMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePluginSupport_destroy_data_w_params(
            DDS_ClientServerWayMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePluginSupport_destroy_data_ex(
            DDS_ClientServerWayMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePluginSupport_destroy_data(
            DDS_ClientServerWayMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePluginSupport_print_data(
            const DDS_ClientServerWayMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ClientServerWayMessage*
        DDS_ClientServerWayMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerWayMessage*
        DDS_ClientServerWayMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePluginSupport_destroy_key_ex(
            DDS_ClientServerWayMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePluginSupport_destroy_key(
            DDS_ClientServerWayMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ClientServerWayMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ClientServerWayMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ClientServerWayMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ClientServerWayMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage *out,
            const DDS_ClientServerWayMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerWayMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerWayMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerWayMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerWayMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerWayMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ClientServerWayMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerWayMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessageKeyHolder *key, 
            const DDS_ClientServerWayMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerWayMessage *instance, 
            const DDS_ClientServerWayMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerWayMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerWayMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ClientServerWayMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ClientServerWayMessagePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_Section
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_Section)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_Section must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_Section.
        */
        typedef  class DDS_Section DDS_SectionKeyHolder;

        #define DDS_SectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_SectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_SectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_SectionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_SectionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_SectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_SectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_Section*
        DDS_SectionPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_Section*
        DDS_SectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Section*
        DDS_SectionPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPluginSupport_copy_data(
            DDS_Section *out,
            const DDS_Section *in);

        NDDSUSERDllExport extern void 
        DDS_SectionPluginSupport_destroy_data_w_params(
            DDS_Section *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_SectionPluginSupport_destroy_data_ex(
            DDS_Section *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_SectionPluginSupport_destroy_data(
            DDS_Section *sample);

        NDDSUSERDllExport extern void 
        DDS_SectionPluginSupport_print_data(
            const DDS_Section *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_Section*
        DDS_SectionPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Section*
        DDS_SectionPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_SectionPluginSupport_destroy_key_ex(
            DDS_SectionKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_SectionPluginSupport_destroy_key(
            DDS_SectionKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Section *out,
            const DDS_Section *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_SectionPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Section *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Section **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_SectionPlugin_deserialize_from_cdr_buffer(
            DDS_Section *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_SectionPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_SectionPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_SectionPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_SectionPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Section ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_SectionKeyHolder *key, 
            const DDS_Section *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Section *instance, 
            const DDS_SectionKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_Section *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_SectionPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ClientServerSectionMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ClientServerSectionMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ClientServerSectionMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ClientServerSectionMessage.
        */
        typedef  class DDS_ClientServerSectionMessage DDS_ClientServerSectionMessageKeyHolder;

        #define DDS_ClientServerSectionMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ClientServerSectionMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ClientServerSectionMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ClientServerSectionMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ClientServerSectionMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ClientServerSectionMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ClientServerSectionMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ClientServerSectionMessage*
        DDS_ClientServerSectionMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ClientServerSectionMessage*
        DDS_ClientServerSectionMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerSectionMessage*
        DDS_ClientServerSectionMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePluginSupport_copy_data(
            DDS_ClientServerSectionMessage *out,
            const DDS_ClientServerSectionMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_data_w_params(
            DDS_ClientServerSectionMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_data_ex(
            DDS_ClientServerSectionMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_data(
            DDS_ClientServerSectionMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePluginSupport_print_data(
            const DDS_ClientServerSectionMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ClientServerSectionMessage*
        DDS_ClientServerSectionMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerSectionMessage*
        DDS_ClientServerSectionMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_key_ex(
            DDS_ClientServerSectionMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePluginSupport_destroy_key(
            DDS_ClientServerSectionMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ClientServerSectionMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ClientServerSectionMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ClientServerSectionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ClientServerSectionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage *out,
            const DDS_ClientServerSectionMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerSectionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerSectionMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerSectionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerSectionMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerSectionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ClientServerSectionMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerSectionMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessageKeyHolder *key, 
            const DDS_ClientServerSectionMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerSectionMessage *instance, 
            const DDS_ClientServerSectionMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerSectionMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerSectionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ClientServerSectionMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ClientServerSectionMessagePlugin_delete(struct PRESTypePlugin *);

        #define DDS_BaseRoutePropertyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_BaseRoutePropertyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_BaseRoutePropertyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_BaseRoutePropertyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_BaseRoutePropertyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_BaseRouteProperty*
        DDS_BaseRoutePropertyPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_BaseRouteProperty*
        DDS_BaseRoutePropertyPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BaseRouteProperty*
        DDS_BaseRoutePropertyPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRoutePropertyPluginSupport_copy_data(
            DDS_BaseRouteProperty *out,
            const DDS_BaseRouteProperty *in);

        NDDSUSERDllExport extern void 
        DDS_BaseRoutePropertyPluginSupport_destroy_data_w_params(
            DDS_BaseRouteProperty *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_BaseRoutePropertyPluginSupport_destroy_data_ex(
            DDS_BaseRouteProperty *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BaseRoutePropertyPluginSupport_destroy_data(
            DDS_BaseRouteProperty *sample);

        NDDSUSERDllExport extern void 
        DDS_BaseRoutePropertyPluginSupport_print_data(
            const DDS_BaseRouteProperty *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRoutePropertyPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRouteProperty *out,
            const DDS_BaseRouteProperty *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_BaseRoutePropertyPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BaseRouteProperty *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRoutePropertyPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRouteProperty **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_BaseRoutePropertyPlugin_deserialize_from_cdr_buffer(
            DDS_BaseRouteProperty *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseRoutePropertyPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_BaseRoutePropertyPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseRoutePropertyPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_BaseRoutePropertyPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_BaseRoutePropertyPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BaseRouteProperty ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_Route
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_Route)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_Route must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_Route.
        */
        typedef  class DDS_Route DDS_RouteKeyHolder;

        #define DDS_RoutePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_RoutePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_RoutePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_RoutePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_RoutePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_RoutePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_RoutePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_Route*
        DDS_RoutePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_Route*
        DDS_RoutePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Route*
        DDS_RoutePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePluginSupport_copy_data(
            DDS_Route *out,
            const DDS_Route *in);

        NDDSUSERDllExport extern void 
        DDS_RoutePluginSupport_destroy_data_w_params(
            DDS_Route *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_RoutePluginSupport_destroy_data_ex(
            DDS_Route *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RoutePluginSupport_destroy_data(
            DDS_Route *sample);

        NDDSUSERDllExport extern void 
        DDS_RoutePluginSupport_print_data(
            const DDS_Route *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_Route*
        DDS_RoutePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_Route*
        DDS_RoutePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_RoutePluginSupport_destroy_key_ex(
            DDS_RouteKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RoutePluginSupport_destroy_key(
            DDS_RouteKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_RoutePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_RoutePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_RoutePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_RoutePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_RoutePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route *out,
            const DDS_Route *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_RoutePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_Route *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_RoutePlugin_deserialize_from_cdr_buffer(
            DDS_Route *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_RoutePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_RoutePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_RoutePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_RoutePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RouteKeyHolder *key, 
            const DDS_Route *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_Route *instance, 
            const DDS_RouteKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_Route *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_RoutePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_RoutePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_RoutePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ClientServerRouteMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ClientServerRouteMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ClientServerRouteMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ClientServerRouteMessage.
        */
        typedef  class DDS_ClientServerRouteMessage DDS_ClientServerRouteMessageKeyHolder;

        #define DDS_ClientServerRouteMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ClientServerRouteMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ClientServerRouteMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ClientServerRouteMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ClientServerRouteMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ClientServerRouteMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ClientServerRouteMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ClientServerRouteMessage*
        DDS_ClientServerRouteMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ClientServerRouteMessage*
        DDS_ClientServerRouteMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerRouteMessage*
        DDS_ClientServerRouteMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePluginSupport_copy_data(
            DDS_ClientServerRouteMessage *out,
            const DDS_ClientServerRouteMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_data_w_params(
            DDS_ClientServerRouteMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_data_ex(
            DDS_ClientServerRouteMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_data(
            DDS_ClientServerRouteMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePluginSupport_print_data(
            const DDS_ClientServerRouteMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ClientServerRouteMessage*
        DDS_ClientServerRouteMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerRouteMessage*
        DDS_ClientServerRouteMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_key_ex(
            DDS_ClientServerRouteMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePluginSupport_destroy_key(
            DDS_ClientServerRouteMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ClientServerRouteMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ClientServerRouteMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRouteMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ClientServerRouteMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage *out,
            const DDS_ClientServerRouteMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerRouteMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerRouteMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerRouteMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerRouteMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerRouteMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ClientServerRouteMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerRouteMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessageKeyHolder *key, 
            const DDS_ClientServerRouteMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRouteMessage *instance, 
            const DDS_ClientServerRouteMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerRouteMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRouteMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ClientServerRouteMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ClientServerRouteMessagePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ClientServerRequestItemsDiscrptionByTypeMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ClientServerRequestItemsDiscrptionByTypeMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ClientServerRequestItemsDiscrptionByTypeMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ClientServerRequestItemsDiscrptionByTypeMessage.
        */
        typedef  class DDS_ClientServerRequestItemsDiscrptionByTypeMessage DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder;

        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ClientServerRequestItemsDiscrptionByTypeMessage*
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ClientServerRequestItemsDiscrptionByTypeMessage*
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerRequestItemsDiscrptionByTypeMessage*
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_copy_data(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *out,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_data_w_params(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_data_ex(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_data(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_print_data(
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ClientServerRequestItemsDiscrptionByTypeMessage*
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerRequestItemsDiscrptionByTypeMessage*
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_key_ex(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePluginSupport_destroy_key(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *out,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *key, 
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage *instance, 
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerRequestItemsDiscrptionByTypeMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ClientServerResponseItemsDiscrptionMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ClientServerResponseItemsDiscrptionMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ClientServerResponseItemsDiscrptionMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ClientServerResponseItemsDiscrptionMessage.
        */
        typedef  class DDS_ClientServerResponseItemsDiscrptionMessage DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder;

        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ClientServerResponseItemsDiscrptionMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ClientServerResponseItemsDiscrptionMessage*
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ClientServerResponseItemsDiscrptionMessage*
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerResponseItemsDiscrptionMessage*
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_copy_data(
            DDS_ClientServerResponseItemsDiscrptionMessage *out,
            const DDS_ClientServerResponseItemsDiscrptionMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_data_w_params(
            DDS_ClientServerResponseItemsDiscrptionMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_data_ex(
            DDS_ClientServerResponseItemsDiscrptionMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_data(
            DDS_ClientServerResponseItemsDiscrptionMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_print_data(
            const DDS_ClientServerResponseItemsDiscrptionMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ClientServerResponseItemsDiscrptionMessage*
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ClientServerResponseItemsDiscrptionMessage*
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_key_ex(
            DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePluginSupport_destroy_key(
            DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage *out,
            const DDS_ClientServerResponseItemsDiscrptionMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ClientServerResponseItemsDiscrptionMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ClientServerResponseItemsDiscrptionMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *key, 
            const DDS_ClientServerResponseItemsDiscrptionMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ClientServerResponseItemsDiscrptionMessage *instance, 
            const DDS_ClientServerResponseItemsDiscrptionMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ClientServerResponseItemsDiscrptionMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ClientServerResponseItemsDiscrptionMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace DDSInfrastarcture  */
    namespace DDSExternalSystem {

        #define ExtendedGeoPointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define ExtendedGeoPointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define ExtendedGeoPointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define ExtendedGeoPointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define ExtendedGeoPointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern ExtendedGeoPoint*
        ExtendedGeoPointPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern ExtendedGeoPoint*
        ExtendedGeoPointPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ExtendedGeoPoint*
        ExtendedGeoPointPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointPluginSupport_copy_data(
            ExtendedGeoPoint *out,
            const ExtendedGeoPoint *in);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointPluginSupport_destroy_data_w_params(
            ExtendedGeoPoint *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointPluginSupport_destroy_data_ex(
            ExtendedGeoPoint *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointPluginSupport_destroy_data(
            ExtendedGeoPoint *sample);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointPluginSupport_print_data(
            const ExtendedGeoPoint *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPoint *out,
            const ExtendedGeoPoint *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        ExtendedGeoPointPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ExtendedGeoPoint *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPoint **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ExtendedGeoPointPlugin_deserialize_from_cdr_buffer(
            ExtendedGeoPoint *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        ExtendedGeoPointPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        ExtendedGeoPointPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        ExtendedGeoPointPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ExtendedGeoPointPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPoint ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define ExtendedGeoPointArrayPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define ExtendedGeoPointArrayPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define ExtendedGeoPointArrayPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define ExtendedGeoPointArrayPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define ExtendedGeoPointArrayPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern ExtendedGeoPointArray*
        ExtendedGeoPointArrayPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern ExtendedGeoPointArray*
        ExtendedGeoPointArrayPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern ExtendedGeoPointArray*
        ExtendedGeoPointArrayPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointArrayPluginSupport_copy_data(
            ExtendedGeoPointArray *out,
            const ExtendedGeoPointArray *in);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointArrayPluginSupport_destroy_data_w_params(
            ExtendedGeoPointArray *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointArrayPluginSupport_destroy_data_ex(
            ExtendedGeoPointArray *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointArrayPluginSupport_destroy_data(
            ExtendedGeoPointArray *sample);

        NDDSUSERDllExport extern void 
        ExtendedGeoPointArrayPluginSupport_print_data(
            const ExtendedGeoPointArray *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointArrayPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPointArray *out,
            const ExtendedGeoPointArray *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        ExtendedGeoPointArrayPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const ExtendedGeoPointArray *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointArrayPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPointArray **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        ExtendedGeoPointArrayPlugin_deserialize_from_cdr_buffer(
            ExtendedGeoPointArray *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        ExtendedGeoPointArrayPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        ExtendedGeoPointArrayPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        ExtendedGeoPointArrayPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        ExtendedGeoPointArrayPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        ExtendedGeoPointArrayPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            ExtendedGeoPointArray ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ExternalMissionData
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ExternalMissionData)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ExternalMissionData must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ExternalMissionData.
        */
        typedef  class DDS_ExternalMissionData DDS_ExternalMissionDataKeyHolder;

        #define DDS_ExternalMissionDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ExternalMissionDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ExternalMissionDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ExternalMissionDataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ExternalMissionDataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ExternalMissionDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ExternalMissionDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ExternalMissionData*
        DDS_ExternalMissionDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ExternalMissionData*
        DDS_ExternalMissionDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionData*
        DDS_ExternalMissionDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPluginSupport_copy_data(
            DDS_ExternalMissionData *out,
            const DDS_ExternalMissionData *in);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionDataPluginSupport_destroy_data_w_params(
            DDS_ExternalMissionData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionDataPluginSupport_destroy_data_ex(
            DDS_ExternalMissionData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionDataPluginSupport_destroy_data(
            DDS_ExternalMissionData *sample);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionDataPluginSupport_print_data(
            const DDS_ExternalMissionData *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ExternalMissionData*
        DDS_ExternalMissionDataPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionData*
        DDS_ExternalMissionDataPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionDataPluginSupport_destroy_key_ex(
            DDS_ExternalMissionDataKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionDataPluginSupport_destroy_key(
            DDS_ExternalMissionDataKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionData *out,
            const DDS_ExternalMissionData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionDataPlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ExternalMissionDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionDataKeyHolder *key, 
            const DDS_ExternalMissionData *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionData *instance, 
            const DDS_ExternalMissionDataKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionData *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionDataPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ExternalMissionMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ExternalMissionMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ExternalMissionMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ExternalMissionMessage.
        */
        typedef  class DDS_ExternalMissionMessage DDS_ExternalMissionMessageKeyHolder;

        #define DDS_ExternalMissionMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ExternalMissionMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ExternalMissionMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ExternalMissionMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ExternalMissionMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ExternalMissionMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ExternalMissionMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ExternalMissionMessage*
        DDS_ExternalMissionMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ExternalMissionMessage*
        DDS_ExternalMissionMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionMessage*
        DDS_ExternalMissionMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePluginSupport_copy_data(
            DDS_ExternalMissionMessage *out,
            const DDS_ExternalMissionMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePluginSupport_destroy_data_w_params(
            DDS_ExternalMissionMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePluginSupport_destroy_data_ex(
            DDS_ExternalMissionMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePluginSupport_destroy_data(
            DDS_ExternalMissionMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePluginSupport_print_data(
            const DDS_ExternalMissionMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ExternalMissionMessage*
        DDS_ExternalMissionMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionMessage*
        DDS_ExternalMissionMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePluginSupport_destroy_key_ex(
            DDS_ExternalMissionMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePluginSupport_destroy_key(
            DDS_ExternalMissionMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ExternalMissionMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ExternalMissionMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ExternalMissionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage *out,
            const DDS_ExternalMissionMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ExternalMissionMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessageKeyHolder *key, 
            const DDS_ExternalMissionMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionMessage *instance, 
            const DDS_ExternalMissionMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ExternalMissionMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ExternalMissionMessagePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ExternalMissionResponseData
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ExternalMissionResponseData)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ExternalMissionResponseData must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ExternalMissionResponseData.
        */
        typedef  class DDS_ExternalMissionResponseData DDS_ExternalMissionResponseDataKeyHolder;

        #define DDS_ExternalMissionResponseDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ExternalMissionResponseDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ExternalMissionResponseDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ExternalMissionResponseDataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ExternalMissionResponseDataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ExternalMissionResponseDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ExternalMissionResponseDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ExternalMissionResponseData*
        DDS_ExternalMissionResponseDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseData*
        DDS_ExternalMissionResponseDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseData*
        DDS_ExternalMissionResponseDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPluginSupport_copy_data(
            DDS_ExternalMissionResponseData *out,
            const DDS_ExternalMissionResponseData *in);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_data_w_params(
            DDS_ExternalMissionResponseData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_data_ex(
            DDS_ExternalMissionResponseData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_data(
            DDS_ExternalMissionResponseData *sample);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseDataPluginSupport_print_data(
            const DDS_ExternalMissionResponseData *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseData*
        DDS_ExternalMissionResponseDataPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseData*
        DDS_ExternalMissionResponseDataPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_key_ex(
            DDS_ExternalMissionResponseDataKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseDataPluginSupport_destroy_key(
            DDS_ExternalMissionResponseDataKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseData *out,
            const DDS_ExternalMissionResponseData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionResponseDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionResponseData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionResponseDataPlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionResponseData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionResponseDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ExternalMissionResponseDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionResponseDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionResponseDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseDataKeyHolder *key, 
            const DDS_ExternalMissionResponseData *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseData *instance, 
            const DDS_ExternalMissionResponseDataKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionResponseData *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseDataPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ExternalMissionResponseMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ExternalMissionResponseMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ExternalMissionResponseMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ExternalMissionResponseMessage.
        */
        typedef  class DDS_ExternalMissionResponseMessage DDS_ExternalMissionResponseMessageKeyHolder;

        #define DDS_ExternalMissionResponseMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ExternalMissionResponseMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ExternalMissionResponseMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ExternalMissionResponseMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ExternalMissionResponseMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ExternalMissionResponseMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ExternalMissionResponseMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ExternalMissionResponseMessage*
        DDS_ExternalMissionResponseMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseMessage*
        DDS_ExternalMissionResponseMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseMessage*
        DDS_ExternalMissionResponseMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePluginSupport_copy_data(
            DDS_ExternalMissionResponseMessage *out,
            const DDS_ExternalMissionResponseMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_data_w_params(
            DDS_ExternalMissionResponseMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_data_ex(
            DDS_ExternalMissionResponseMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_data(
            DDS_ExternalMissionResponseMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePluginSupport_print_data(
            const DDS_ExternalMissionResponseMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseMessage*
        DDS_ExternalMissionResponseMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ExternalMissionResponseMessage*
        DDS_ExternalMissionResponseMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_key_ex(
            DDS_ExternalMissionResponseMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePluginSupport_destroy_key(
            DDS_ExternalMissionResponseMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ExternalMissionResponseMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ExternalMissionResponseMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ExternalMissionResponseMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ExternalMissionResponseMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage *out,
            const DDS_ExternalMissionResponseMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionResponseMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ExternalMissionResponseMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ExternalMissionResponseMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ExternalMissionResponseMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ExternalMissionResponseMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ExternalMissionResponseMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessageKeyHolder *key, 
            const DDS_ExternalMissionResponseMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ExternalMissionResponseMessage *instance, 
            const DDS_ExternalMissionResponseMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ExternalMissionResponseMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ExternalMissionResponseMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ExternalMissionResponseMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ExternalMissionResponseMessagePlugin_delete(struct PRESTypePlugin *);

        #define DDS_ActivateMissionCommandDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ActivateMissionCommandDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ActivateMissionCommandDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ActivateMissionCommandDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ActivateMissionCommandDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ActivateMissionCommandData*
        DDS_ActivateMissionCommandDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ActivateMissionCommandData*
        DDS_ActivateMissionCommandDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ActivateMissionCommandData*
        DDS_ActivateMissionCommandDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandDataPluginSupport_copy_data(
            DDS_ActivateMissionCommandData *out,
            const DDS_ActivateMissionCommandData *in);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandDataPluginSupport_destroy_data_w_params(
            DDS_ActivateMissionCommandData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandDataPluginSupport_destroy_data_ex(
            DDS_ActivateMissionCommandData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandDataPluginSupport_destroy_data(
            DDS_ActivateMissionCommandData *sample);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandDataPluginSupport_print_data(
            const DDS_ActivateMissionCommandData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandData *out,
            const DDS_ActivateMissionCommandData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ActivateMissionCommandDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ActivateMissionCommandData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ActivateMissionCommandDataPlugin_deserialize_from_cdr_buffer(
            DDS_ActivateMissionCommandData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ActivateMissionCommandDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ActivateMissionCommandDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ActivateMissionCommandDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ActivateMissionCommandDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_ActivateMissionCommandMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_ActivateMissionCommandMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_ActivateMissionCommandMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_ActivateMissionCommandMessage.
        */
        typedef  class DDS_ActivateMissionCommandMessage DDS_ActivateMissionCommandMessageKeyHolder;

        #define DDS_ActivateMissionCommandMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_ActivateMissionCommandMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_ActivateMissionCommandMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_ActivateMissionCommandMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_ActivateMissionCommandMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_ActivateMissionCommandMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_ActivateMissionCommandMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_ActivateMissionCommandMessage*
        DDS_ActivateMissionCommandMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_ActivateMissionCommandMessage*
        DDS_ActivateMissionCommandMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ActivateMissionCommandMessage*
        DDS_ActivateMissionCommandMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePluginSupport_copy_data(
            DDS_ActivateMissionCommandMessage *out,
            const DDS_ActivateMissionCommandMessage *in);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_data_w_params(
            DDS_ActivateMissionCommandMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_data_ex(
            DDS_ActivateMissionCommandMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_data(
            DDS_ActivateMissionCommandMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePluginSupport_print_data(
            const DDS_ActivateMissionCommandMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_ActivateMissionCommandMessage*
        DDS_ActivateMissionCommandMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_ActivateMissionCommandMessage*
        DDS_ActivateMissionCommandMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_key_ex(
            DDS_ActivateMissionCommandMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePluginSupport_destroy_key(
            DDS_ActivateMissionCommandMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_ActivateMissionCommandMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_ActivateMissionCommandMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_ActivateMissionCommandMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_ActivateMissionCommandMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage *out,
            const DDS_ActivateMissionCommandMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_ActivateMissionCommandMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_ActivateMissionCommandMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_ActivateMissionCommandMessagePlugin_deserialize_from_cdr_buffer(
            DDS_ActivateMissionCommandMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_ActivateMissionCommandMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_ActivateMissionCommandMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessageKeyHolder *key, 
            const DDS_ActivateMissionCommandMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_ActivateMissionCommandMessage *instance, 
            const DDS_ActivateMissionCommandMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_ActivateMissionCommandMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_ActivateMissionCommandMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_ActivateMissionCommandMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_ActivateMissionCommandMessagePlugin_delete(struct PRESTypePlugin *);

        #define DDS_AddRegionDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_AddRegionDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_AddRegionDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_AddRegionDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_AddRegionDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_AddRegionData*
        DDS_AddRegionDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_AddRegionData*
        DDS_AddRegionDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_AddRegionData*
        DDS_AddRegionDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataPluginSupport_copy_data(
            DDS_AddRegionData *out,
            const DDS_AddRegionData *in);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataPluginSupport_destroy_data_w_params(
            DDS_AddRegionData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataPluginSupport_destroy_data_ex(
            DDS_AddRegionData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataPluginSupport_destroy_data(
            DDS_AddRegionData *sample);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataPluginSupport_print_data(
            const DDS_AddRegionData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionData *out,
            const DDS_AddRegionData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_AddRegionDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_AddRegionData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_AddRegionDataPlugin_deserialize_from_cdr_buffer(
            DDS_AddRegionData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_AddRegionDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_AddRegionDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_AddRegionDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_AddRegionDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_AddRegionDataMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_AddRegionDataMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_AddRegionDataMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_AddRegionDataMessage.
        */
        typedef  class DDS_AddRegionDataMessage DDS_AddRegionDataMessageKeyHolder;

        #define DDS_AddRegionDataMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_AddRegionDataMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_AddRegionDataMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_AddRegionDataMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_AddRegionDataMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_AddRegionDataMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_AddRegionDataMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_AddRegionDataMessage*
        DDS_AddRegionDataMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_AddRegionDataMessage*
        DDS_AddRegionDataMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_AddRegionDataMessage*
        DDS_AddRegionDataMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePluginSupport_copy_data(
            DDS_AddRegionDataMessage *out,
            const DDS_AddRegionDataMessage *in);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePluginSupport_destroy_data_w_params(
            DDS_AddRegionDataMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePluginSupport_destroy_data_ex(
            DDS_AddRegionDataMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePluginSupport_destroy_data(
            DDS_AddRegionDataMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePluginSupport_print_data(
            const DDS_AddRegionDataMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_AddRegionDataMessage*
        DDS_AddRegionDataMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_AddRegionDataMessage*
        DDS_AddRegionDataMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePluginSupport_destroy_key_ex(
            DDS_AddRegionDataMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePluginSupport_destroy_key(
            DDS_AddRegionDataMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_AddRegionDataMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_AddRegionDataMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_AddRegionDataMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_AddRegionDataMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage *out,
            const DDS_AddRegionDataMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_AddRegionDataMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_AddRegionDataMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_AddRegionDataMessagePlugin_deserialize_from_cdr_buffer(
            DDS_AddRegionDataMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_AddRegionDataMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_AddRegionDataMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_AddRegionDataMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessageKeyHolder *key, 
            const DDS_AddRegionDataMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_AddRegionDataMessage *instance, 
            const DDS_AddRegionDataMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_AddRegionDataMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_AddRegionDataMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_AddRegionDataMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_AddRegionDataMessagePlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_RegionResponseData
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_RegionResponseData)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_RegionResponseData must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_RegionResponseData.
        */
        typedef  class DDS_RegionResponseData DDS_RegionResponseDataKeyHolder;

        #define DDS_RegionResponseDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_RegionResponseDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_RegionResponseDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_RegionResponseDataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_RegionResponseDataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_RegionResponseDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_RegionResponseDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_RegionResponseData*
        DDS_RegionResponseDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_RegionResponseData*
        DDS_RegionResponseDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RegionResponseData*
        DDS_RegionResponseDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPluginSupport_copy_data(
            DDS_RegionResponseData *out,
            const DDS_RegionResponseData *in);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseDataPluginSupport_destroy_data_w_params(
            DDS_RegionResponseData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseDataPluginSupport_destroy_data_ex(
            DDS_RegionResponseData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseDataPluginSupport_destroy_data(
            DDS_RegionResponseData *sample);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseDataPluginSupport_print_data(
            const DDS_RegionResponseData *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_RegionResponseData*
        DDS_RegionResponseDataPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RegionResponseData*
        DDS_RegionResponseDataPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseDataPluginSupport_destroy_key_ex(
            DDS_RegionResponseDataKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseDataPluginSupport_destroy_key(
            DDS_RegionResponseDataKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseData *out,
            const DDS_RegionResponseData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_RegionResponseDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RegionResponseData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_RegionResponseDataPlugin_deserialize_from_cdr_buffer(
            DDS_RegionResponseData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_RegionResponseDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_RegionResponseDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_RegionResponseDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_RegionResponseDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseDataKeyHolder *key, 
            const DDS_RegionResponseData *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseData *instance, 
            const DDS_RegionResponseDataKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_RegionResponseData *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseDataPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_RegionResponseMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_RegionResponseMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_RegionResponseMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_RegionResponseMessage.
        */
        typedef  class DDS_RegionResponseMessage DDS_RegionResponseMessageKeyHolder;

        #define DDS_RegionResponseMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_RegionResponseMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_RegionResponseMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_RegionResponseMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_RegionResponseMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_RegionResponseMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_RegionResponseMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_RegionResponseMessage*
        DDS_RegionResponseMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_RegionResponseMessage*
        DDS_RegionResponseMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RegionResponseMessage*
        DDS_RegionResponseMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePluginSupport_copy_data(
            DDS_RegionResponseMessage *out,
            const DDS_RegionResponseMessage *in);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePluginSupport_destroy_data_w_params(
            DDS_RegionResponseMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePluginSupport_destroy_data_ex(
            DDS_RegionResponseMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePluginSupport_destroy_data(
            DDS_RegionResponseMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePluginSupport_print_data(
            const DDS_RegionResponseMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_RegionResponseMessage*
        DDS_RegionResponseMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RegionResponseMessage*
        DDS_RegionResponseMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePluginSupport_destroy_key_ex(
            DDS_RegionResponseMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePluginSupport_destroy_key(
            DDS_RegionResponseMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_RegionResponseMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_RegionResponseMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_RegionResponseMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_RegionResponseMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage *out,
            const DDS_RegionResponseMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_RegionResponseMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RegionResponseMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_RegionResponseMessagePlugin_deserialize_from_cdr_buffer(
            DDS_RegionResponseMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_RegionResponseMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_RegionResponseMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_RegionResponseMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_RegionResponseMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessageKeyHolder *key, 
            const DDS_RegionResponseMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RegionResponseMessage *instance, 
            const DDS_RegionResponseMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_RegionResponseMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_RegionResponseMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_RegionResponseMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_RegionResponseMessagePlugin_delete(struct PRESTypePlugin *);

        #define DDS_RemoveRegionDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_RemoveRegionDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_RemoveRegionDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_RemoveRegionDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_RemoveRegionDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_RemoveRegionData*
        DDS_RemoveRegionDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_RemoveRegionData*
        DDS_RemoveRegionDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RemoveRegionData*
        DDS_RemoveRegionDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionDataPluginSupport_copy_data(
            DDS_RemoveRegionData *out,
            const DDS_RemoveRegionData *in);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionDataPluginSupport_destroy_data_w_params(
            DDS_RemoveRegionData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionDataPluginSupport_destroy_data_ex(
            DDS_RemoveRegionData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionDataPluginSupport_destroy_data(
            DDS_RemoveRegionData *sample);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionDataPluginSupport_print_data(
            const DDS_RemoveRegionData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_RemoveRegionDataPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionDataPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_RemoveRegionDataPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionDataPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_RemoveRegionDataPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionData *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionData *out,
            const DDS_RemoveRegionData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_RemoveRegionDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RemoveRegionData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_RemoveRegionDataPlugin_deserialize_from_cdr_buffer(
            DDS_RemoveRegionData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_RemoveRegionDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_RemoveRegionDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_RemoveRegionDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_RemoveRegionDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_RemoveRegionDataPlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_RemoveRegionDataPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_RemoveRegionMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_RemoveRegionMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_RemoveRegionMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_RemoveRegionMessage.
        */
        typedef  class DDS_RemoveRegionMessage DDS_RemoveRegionMessageKeyHolder;

        #define DDS_RemoveRegionMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_RemoveRegionMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_RemoveRegionMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_RemoveRegionMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_RemoveRegionMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_RemoveRegionMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_RemoveRegionMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_RemoveRegionMessage*
        DDS_RemoveRegionMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_RemoveRegionMessage*
        DDS_RemoveRegionMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RemoveRegionMessage*
        DDS_RemoveRegionMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePluginSupport_copy_data(
            DDS_RemoveRegionMessage *out,
            const DDS_RemoveRegionMessage *in);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePluginSupport_destroy_data_w_params(
            DDS_RemoveRegionMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePluginSupport_destroy_data_ex(
            DDS_RemoveRegionMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePluginSupport_destroy_data(
            DDS_RemoveRegionMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePluginSupport_print_data(
            const DDS_RemoveRegionMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_RemoveRegionMessage*
        DDS_RemoveRegionMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_RemoveRegionMessage*
        DDS_RemoveRegionMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePluginSupport_destroy_key_ex(
            DDS_RemoveRegionMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePluginSupport_destroy_key(
            DDS_RemoveRegionMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_RemoveRegionMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_RemoveRegionMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_RemoveRegionMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_RemoveRegionMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage *out,
            const DDS_RemoveRegionMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_RemoveRegionMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_RemoveRegionMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_RemoveRegionMessagePlugin_deserialize_from_cdr_buffer(
            DDS_RemoveRegionMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_RemoveRegionMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_RemoveRegionMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_RemoveRegionMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessageKeyHolder *key, 
            const DDS_RemoveRegionMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_RemoveRegionMessage *instance, 
            const DDS_RemoveRegionMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_RemoveRegionMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_RemoveRegionMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_RemoveRegionMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_RemoveRegionMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace DDSExternalSystem  */
    namespace DDSCamera {

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_CameraCapabilitiesMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_CameraCapabilitiesMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_CameraCapabilitiesMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_CameraCapabilitiesMessage.
        */
        typedef  class DDS_CameraCapabilitiesMessage DDS_CameraCapabilitiesMessageKeyHolder;

        #define DDS_CameraCapabilitiesMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_CameraCapabilitiesMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_CameraCapabilitiesMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_CameraCapabilitiesMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_CameraCapabilitiesMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_CameraCapabilitiesMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_CameraCapabilitiesMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_CameraCapabilitiesMessage*
        DDS_CameraCapabilitiesMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_CameraCapabilitiesMessage*
        DDS_CameraCapabilitiesMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_CameraCapabilitiesMessage*
        DDS_CameraCapabilitiesMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePluginSupport_copy_data(
            DDS_CameraCapabilitiesMessage *out,
            const DDS_CameraCapabilitiesMessage *in);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_data_w_params(
            DDS_CameraCapabilitiesMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_data_ex(
            DDS_CameraCapabilitiesMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_data(
            DDS_CameraCapabilitiesMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePluginSupport_print_data(
            const DDS_CameraCapabilitiesMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_CameraCapabilitiesMessage*
        DDS_CameraCapabilitiesMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_CameraCapabilitiesMessage*
        DDS_CameraCapabilitiesMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_key_ex(
            DDS_CameraCapabilitiesMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePluginSupport_destroy_key(
            DDS_CameraCapabilitiesMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_CameraCapabilitiesMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_CameraCapabilitiesMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_CameraCapabilitiesMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_CameraCapabilitiesMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage *out,
            const DDS_CameraCapabilitiesMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_CameraCapabilitiesMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_CameraCapabilitiesMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_CameraCapabilitiesMessagePlugin_deserialize_from_cdr_buffer(
            DDS_CameraCapabilitiesMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_CameraCapabilitiesMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_CameraCapabilitiesMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessageKeyHolder *key, 
            const DDS_CameraCapabilitiesMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_CameraCapabilitiesMessage *instance, 
            const DDS_CameraCapabilitiesMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_CameraCapabilitiesMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_CameraCapabilitiesMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_CameraCapabilitiesMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_CameraCapabilitiesMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace DDSCamera  */
    namespace DDSGpp {

        #define DDS_GlobalPathQueryDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GlobalPathQueryDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GlobalPathQueryDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GlobalPathQueryDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GlobalPathQueryDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GlobalPathQueryData*
        DDS_GlobalPathQueryDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GlobalPathQueryData*
        DDS_GlobalPathQueryDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPathQueryData*
        DDS_GlobalPathQueryDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryDataPluginSupport_copy_data(
            DDS_GlobalPathQueryData *out,
            const DDS_GlobalPathQueryData *in);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryDataPluginSupport_destroy_data_w_params(
            DDS_GlobalPathQueryData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryDataPluginSupport_destroy_data_ex(
            DDS_GlobalPathQueryData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryDataPluginSupport_destroy_data(
            DDS_GlobalPathQueryData *sample);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryDataPluginSupport_print_data(
            const DDS_GlobalPathQueryData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryData *out,
            const DDS_GlobalPathQueryData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathQueryDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathQueryData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathQueryDataPlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathQueryData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathQueryDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GlobalPathQueryDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathQueryDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathQueryDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_GlobalPathQueryMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_GlobalPathQueryMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_GlobalPathQueryMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_GlobalPathQueryMessage.
        */
        typedef  class DDS_GlobalPathQueryMessage DDS_GlobalPathQueryMessageKeyHolder;

        #define DDS_GlobalPathQueryMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GlobalPathQueryMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GlobalPathQueryMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GlobalPathQueryMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_GlobalPathQueryMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_GlobalPathQueryMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GlobalPathQueryMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GlobalPathQueryMessage*
        DDS_GlobalPathQueryMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GlobalPathQueryMessage*
        DDS_GlobalPathQueryMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPathQueryMessage*
        DDS_GlobalPathQueryMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePluginSupport_copy_data(
            DDS_GlobalPathQueryMessage *out,
            const DDS_GlobalPathQueryMessage *in);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_data_w_params(
            DDS_GlobalPathQueryMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_data_ex(
            DDS_GlobalPathQueryMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_data(
            DDS_GlobalPathQueryMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePluginSupport_print_data(
            const DDS_GlobalPathQueryMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_GlobalPathQueryMessage*
        DDS_GlobalPathQueryMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPathQueryMessage*
        DDS_GlobalPathQueryMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_key_ex(
            DDS_GlobalPathQueryMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePluginSupport_destroy_key(
            DDS_GlobalPathQueryMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_GlobalPathQueryMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_GlobalPathQueryMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathQueryMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_GlobalPathQueryMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage *out,
            const DDS_GlobalPathQueryMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathQueryMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathQueryMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathQueryMessagePlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathQueryMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathQueryMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GlobalPathQueryMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathQueryMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessageKeyHolder *key, 
            const DDS_GlobalPathQueryMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathQueryMessage *instance, 
            const DDS_GlobalPathQueryMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_GlobalPathQueryMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathQueryMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_GlobalPathQueryMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_GlobalPathQueryMessagePlugin_delete(struct PRESTypePlugin *);

        #define DDS_GlobalPathPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GlobalPathPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GlobalPathPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GlobalPathPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GlobalPathPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GlobalPath*
        DDS_GlobalPathPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GlobalPath*
        DDS_GlobalPathPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPath*
        DDS_GlobalPathPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathPluginSupport_copy_data(
            DDS_GlobalPath *out,
            const DDS_GlobalPath *in);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathPluginSupport_destroy_data_w_params(
            DDS_GlobalPath *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathPluginSupport_destroy_data_ex(
            DDS_GlobalPath *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathPluginSupport_destroy_data(
            DDS_GlobalPath *sample);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathPluginSupport_print_data(
            const DDS_GlobalPath *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPath *out,
            const DDS_GlobalPath *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPath *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPath **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathPlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPath *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GlobalPathPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPath ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        #define DDS_GlobalPathReportDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GlobalPathReportDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GlobalPathReportDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GlobalPathReportDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GlobalPathReportDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GlobalPathReportData*
        DDS_GlobalPathReportDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GlobalPathReportData*
        DDS_GlobalPathReportDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPathReportData*
        DDS_GlobalPathReportDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportDataPluginSupport_copy_data(
            DDS_GlobalPathReportData *out,
            const DDS_GlobalPathReportData *in);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportDataPluginSupport_destroy_data_w_params(
            DDS_GlobalPathReportData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportDataPluginSupport_destroy_data_ex(
            DDS_GlobalPathReportData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportDataPluginSupport_destroy_data(
            DDS_GlobalPathReportData *sample);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportDataPluginSupport_print_data(
            const DDS_GlobalPathReportData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportData *out,
            const DDS_GlobalPathReportData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathReportDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathReportData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathReportDataPlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathReportData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathReportDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GlobalPathReportDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathReportDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathReportDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct DDS_GlobalPathReportMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_GlobalPathReportMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_GlobalPathReportMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_GlobalPathReportMessage.
        */
        typedef  class DDS_GlobalPathReportMessage DDS_GlobalPathReportMessageKeyHolder;

        #define DDS_GlobalPathReportMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_GlobalPathReportMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_GlobalPathReportMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_GlobalPathReportMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_GlobalPathReportMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_GlobalPathReportMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_GlobalPathReportMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_GlobalPathReportMessage*
        DDS_GlobalPathReportMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_GlobalPathReportMessage*
        DDS_GlobalPathReportMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPathReportMessage*
        DDS_GlobalPathReportMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePluginSupport_copy_data(
            DDS_GlobalPathReportMessage *out,
            const DDS_GlobalPathReportMessage *in);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_data_w_params(
            DDS_GlobalPathReportMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_data_ex(
            DDS_GlobalPathReportMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_data(
            DDS_GlobalPathReportMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePluginSupport_print_data(
            const DDS_GlobalPathReportMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_GlobalPathReportMessage*
        DDS_GlobalPathReportMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_GlobalPathReportMessage*
        DDS_GlobalPathReportMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_key_ex(
            DDS_GlobalPathReportMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePluginSupport_destroy_key(
            DDS_GlobalPathReportMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_GlobalPathReportMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_GlobalPathReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_GlobalPathReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_GlobalPathReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage *out,
            const DDS_GlobalPathReportMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_GlobalPathReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_GlobalPathReportMessagePlugin_deserialize_from_cdr_buffer(
            DDS_GlobalPathReportMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_GlobalPathReportMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_GlobalPathReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessageKeyHolder *key, 
            const DDS_GlobalPathReportMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_GlobalPathReportMessage *instance, 
            const DDS_GlobalPathReportMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_GlobalPathReportMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_GlobalPathReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_GlobalPathReportMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_GlobalPathReportMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace DDSGpp  */
} /* namespace DDS_GRI  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DDSGeneralForWPSPlugin_896445415_h */

