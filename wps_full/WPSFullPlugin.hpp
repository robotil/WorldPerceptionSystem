

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WPSFull.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WPSFullPlugin_1442534127_h
#define WPSFullPlugin_1442534127_h

#include "WPSFull.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "DDSGeneralForWPSPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace WorldPerceptionModel {

    #define RegionOfInterest_typePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define RegionOfInterest_typePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RegionOfInterest_typePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RegionOfInterest_typePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RegionOfInterest_typePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RegionOfInterest_type*
    RegionOfInterest_typePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RegionOfInterest_type*
    RegionOfInterest_typePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RegionOfInterest_type*
    RegionOfInterest_typePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RegionOfInterest_typePluginSupport_copy_data(
        RegionOfInterest_type *out,
        const RegionOfInterest_type *in);

    NDDSUSERDllExport extern void 
    RegionOfInterest_typePluginSupport_destroy_data_w_params(
        RegionOfInterest_type *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RegionOfInterest_typePluginSupport_destroy_data_ex(
        RegionOfInterest_type *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RegionOfInterest_typePluginSupport_destroy_data(
        RegionOfInterest_type *sample);

    NDDSUSERDllExport extern void 
    RegionOfInterest_typePluginSupport_print_data(
        const RegionOfInterest_type *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RegionOfInterest_typePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RegionOfInterest_type *out,
        const RegionOfInterest_type *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RegionOfInterest_typePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RegionOfInterest_typePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RegionOfInterest_typePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RegionOfInterest_typePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    namespace WPS_BuildModel {

        #define WPS_BuildModelParametersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_BuildModelParametersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_BuildModelParametersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_BuildModelParametersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_BuildModelParametersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_BuildModelParameters*
        WPS_BuildModelParametersPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_BuildModelParameters*
        WPS_BuildModelParametersPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_BuildModelParameters*
        WPS_BuildModelParametersPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelParametersPluginSupport_copy_data(
            WPS_BuildModelParameters *out,
            const WPS_BuildModelParameters *in);

        NDDSUSERDllExport extern void 
        WPS_BuildModelParametersPluginSupport_destroy_data_w_params(
            WPS_BuildModelParameters *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_BuildModelParametersPluginSupport_destroy_data_ex(
            WPS_BuildModelParameters *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_BuildModelParametersPluginSupport_destroy_data(
            WPS_BuildModelParameters *sample);

        NDDSUSERDllExport extern void 
        WPS_BuildModelParametersPluginSupport_print_data(
            const WPS_BuildModelParameters *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelParametersPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelParameters *out,
            const WPS_BuildModelParameters *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelParameters *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelParametersPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelParameters **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelParametersPlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelParameters *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_BuildModelParametersPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelParameters ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelOperation_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelOperation_typePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelOperation_typePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_BuildModelOperation_typePluginSupport_print_data(
            const WPS_BuildModelOperation_type *sample, const char *desc, int indent_level);

        #define WPS_BuildModelDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_BuildModelDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_BuildModelDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_BuildModelDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_BuildModelDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_BuildModelData*
        WPS_BuildModelDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_BuildModelData*
        WPS_BuildModelDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_BuildModelData*
        WPS_BuildModelDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelDataPluginSupport_copy_data(
            WPS_BuildModelData *out,
            const WPS_BuildModelData *in);

        NDDSUSERDllExport extern void 
        WPS_BuildModelDataPluginSupport_destroy_data_w_params(
            WPS_BuildModelData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_BuildModelDataPluginSupport_destroy_data_ex(
            WPS_BuildModelData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_BuildModelDataPluginSupport_destroy_data(
            WPS_BuildModelData *sample);

        NDDSUSERDllExport extern void 
        WPS_BuildModelDataPluginSupport_print_data(
            const WPS_BuildModelData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelData *out,
            const WPS_BuildModelData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelDataPlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_BuildModelDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_BuildModelMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_BuildModelMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_BuildModelMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_BuildModelMessage.
        */
        typedef  class WPS_BuildModelMessage WPS_BuildModelMessageKeyHolder;

        #define WPS_BuildModelMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_BuildModelMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_BuildModelMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_BuildModelMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_BuildModelMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_BuildModelMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_BuildModelMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_BuildModelMessage*
        WPS_BuildModelMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_BuildModelMessage*
        WPS_BuildModelMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_BuildModelMessage*
        WPS_BuildModelMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePluginSupport_copy_data(
            WPS_BuildModelMessage *out,
            const WPS_BuildModelMessage *in);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePluginSupport_destroy_data_w_params(
            WPS_BuildModelMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePluginSupport_destroy_data_ex(
            WPS_BuildModelMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePluginSupport_destroy_data(
            WPS_BuildModelMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePluginSupport_print_data(
            const WPS_BuildModelMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_BuildModelMessage*
        WPS_BuildModelMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_BuildModelMessage*
        WPS_BuildModelMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePluginSupport_destroy_key_ex(
            WPS_BuildModelMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePluginSupport_destroy_key(
            WPS_BuildModelMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_BuildModelMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_BuildModelMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_BuildModelMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_BuildModelMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage *out,
            const WPS_BuildModelMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelMessagePlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_BuildModelMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessageKeyHolder *key, 
            const WPS_BuildModelMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelMessage *instance, 
            const WPS_BuildModelMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_BuildModelMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_BuildModelMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_BuildModelMessagePlugin_delete(struct PRESTypePlugin *);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelStatusEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelStatusEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelStatusEnumPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_BuildModelStatusEnumPluginSupport_print_data(
            const WPS_BuildModelStatusEnum *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_BuildModelReportMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_BuildModelReportMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_BuildModelReportMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_BuildModelReportMessage.
        */
        typedef  class WPS_BuildModelReportMessage WPS_BuildModelReportMessageKeyHolder;

        #define WPS_BuildModelReportMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_BuildModelReportMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_BuildModelReportMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_BuildModelReportMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_BuildModelReportMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_BuildModelReportMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_BuildModelReportMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_BuildModelReportMessage*
        WPS_BuildModelReportMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_BuildModelReportMessage*
        WPS_BuildModelReportMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_BuildModelReportMessage*
        WPS_BuildModelReportMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePluginSupport_copy_data(
            WPS_BuildModelReportMessage *out,
            const WPS_BuildModelReportMessage *in);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePluginSupport_destroy_data_w_params(
            WPS_BuildModelReportMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePluginSupport_destroy_data_ex(
            WPS_BuildModelReportMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePluginSupport_destroy_data(
            WPS_BuildModelReportMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePluginSupport_print_data(
            const WPS_BuildModelReportMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_BuildModelReportMessage*
        WPS_BuildModelReportMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_BuildModelReportMessage*
        WPS_BuildModelReportMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePluginSupport_destroy_key_ex(
            WPS_BuildModelReportMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePluginSupport_destroy_key(
            WPS_BuildModelReportMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_BuildModelReportMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_BuildModelReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_BuildModelReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_BuildModelReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage *out,
            const WPS_BuildModelReportMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_BuildModelReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_BuildModelReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_BuildModelReportMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_BuildModelReportMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_BuildModelReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessageKeyHolder *key, 
            const WPS_BuildModelReportMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_BuildModelReportMessage *instance, 
            const WPS_BuildModelReportMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_BuildModelReportMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_BuildModelReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_BuildModelReportMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_BuildModelReportMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace WPS_BuildModel  */
    namespace WPS_DroneLocalizationReporting {

        #define WPS_DroneLocalizationParametersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_DroneLocalizationParametersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_DroneLocalizationParametersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_DroneLocalizationParametersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_DroneLocalizationParametersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_DroneLocalizationParameters*
        WPS_DroneLocalizationParametersPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_DroneLocalizationParameters*
        WPS_DroneLocalizationParametersPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_DroneLocalizationParameters*
        WPS_DroneLocalizationParametersPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationParametersPluginSupport_copy_data(
            WPS_DroneLocalizationParameters *out,
            const WPS_DroneLocalizationParameters *in);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationParametersPluginSupport_destroy_data_w_params(
            WPS_DroneLocalizationParameters *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationParametersPluginSupport_destroy_data_ex(
            WPS_DroneLocalizationParameters *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationParametersPluginSupport_destroy_data(
            WPS_DroneLocalizationParameters *sample);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationParametersPluginSupport_print_data(
            const WPS_DroneLocalizationParameters *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationParametersPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationParameters *out,
            const WPS_DroneLocalizationParameters *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationParameters *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationParametersPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationParameters **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationParametersPlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationParameters *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_DroneLocalizationParametersPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationParameters ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationOperation_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationOperation_typePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationOperation_typePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_DroneLocalizationOperation_typePluginSupport_print_data(
            const WPS_DroneLocalizationOperation_type *sample, const char *desc, int indent_level);

        #define WPS_DroneLocalizationDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_DroneLocalizationDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_DroneLocalizationDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_DroneLocalizationDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_DroneLocalizationDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_DroneLocalizationData*
        WPS_DroneLocalizationDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_DroneLocalizationData*
        WPS_DroneLocalizationDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_DroneLocalizationData*
        WPS_DroneLocalizationDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationDataPluginSupport_copy_data(
            WPS_DroneLocalizationData *out,
            const WPS_DroneLocalizationData *in);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationDataPluginSupport_destroy_data_w_params(
            WPS_DroneLocalizationData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationDataPluginSupport_destroy_data_ex(
            WPS_DroneLocalizationData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationDataPluginSupport_destroy_data(
            WPS_DroneLocalizationData *sample);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationDataPluginSupport_print_data(
            const WPS_DroneLocalizationData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationData *out,
            const WPS_DroneLocalizationData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationDataPlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_DroneLocalizationDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_DroneLocalizationMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_DroneLocalizationMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_DroneLocalizationMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_DroneLocalizationMessage.
        */
        typedef  class WPS_DroneLocalizationMessage WPS_DroneLocalizationMessageKeyHolder;

        #define WPS_DroneLocalizationMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_DroneLocalizationMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_DroneLocalizationMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_DroneLocalizationMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_DroneLocalizationMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_DroneLocalizationMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_DroneLocalizationMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_DroneLocalizationMessage*
        WPS_DroneLocalizationMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_DroneLocalizationMessage*
        WPS_DroneLocalizationMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_DroneLocalizationMessage*
        WPS_DroneLocalizationMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePluginSupport_copy_data(
            WPS_DroneLocalizationMessage *out,
            const WPS_DroneLocalizationMessage *in);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_data_w_params(
            WPS_DroneLocalizationMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_data_ex(
            WPS_DroneLocalizationMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_data(
            WPS_DroneLocalizationMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePluginSupport_print_data(
            const WPS_DroneLocalizationMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_DroneLocalizationMessage*
        WPS_DroneLocalizationMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_DroneLocalizationMessage*
        WPS_DroneLocalizationMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_key_ex(
            WPS_DroneLocalizationMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePluginSupport_destroy_key(
            WPS_DroneLocalizationMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_DroneLocalizationMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_DroneLocalizationMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_DroneLocalizationMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage *out,
            const WPS_DroneLocalizationMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationMessagePlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_DroneLocalizationMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessageKeyHolder *key, 
            const WPS_DroneLocalizationMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationMessage *instance, 
            const WPS_DroneLocalizationMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_DroneLocalizationMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_DroneLocalizationMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_DroneLocalizationMessagePlugin_delete(struct PRESTypePlugin *);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationStatusEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationStatusEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationStatusEnumPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_DroneLocalizationStatusEnumPluginSupport_print_data(
            const WPS_DroneLocalizationStatusEnum *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_DroneLocalizationReportMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_DroneLocalizationReportMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_DroneLocalizationReportMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_DroneLocalizationReportMessage.
        */
        typedef  class WPS_DroneLocalizationReportMessage WPS_DroneLocalizationReportMessageKeyHolder;

        #define WPS_DroneLocalizationReportMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_DroneLocalizationReportMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_DroneLocalizationReportMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_DroneLocalizationReportMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_DroneLocalizationReportMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_DroneLocalizationReportMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_DroneLocalizationReportMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_DroneLocalizationReportMessage*
        WPS_DroneLocalizationReportMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_DroneLocalizationReportMessage*
        WPS_DroneLocalizationReportMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_DroneLocalizationReportMessage*
        WPS_DroneLocalizationReportMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePluginSupport_copy_data(
            WPS_DroneLocalizationReportMessage *out,
            const WPS_DroneLocalizationReportMessage *in);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePluginSupport_destroy_data_w_params(
            WPS_DroneLocalizationReportMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePluginSupport_destroy_data_ex(
            WPS_DroneLocalizationReportMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePluginSupport_destroy_data(
            WPS_DroneLocalizationReportMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePluginSupport_print_data(
            const WPS_DroneLocalizationReportMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_DroneLocalizationReportMessage*
        WPS_DroneLocalizationReportMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_DroneLocalizationReportMessage*
        WPS_DroneLocalizationReportMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePluginSupport_destroy_key_ex(
            WPS_DroneLocalizationReportMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePluginSupport_destroy_key(
            WPS_DroneLocalizationReportMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_DroneLocalizationReportMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_DroneLocalizationReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_DroneLocalizationReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_DroneLocalizationReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage *out,
            const WPS_DroneLocalizationReportMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_DroneLocalizationReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_DroneLocalizationReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_DroneLocalizationReportMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_DroneLocalizationReportMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_DroneLocalizationReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessageKeyHolder *key, 
            const WPS_DroneLocalizationReportMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_DroneLocalizationReportMessage *instance, 
            const WPS_DroneLocalizationReportMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_DroneLocalizationReportMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_DroneLocalizationReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_DroneLocalizationReportMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_DroneLocalizationReportMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace WPS_DroneLocalizationReporting  */
    namespace WPS_UTMVehicleLocalizationReporting {

        #define RelevantLinkedFrames_typePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define RelevantLinkedFrames_typePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define RelevantLinkedFrames_typePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define RelevantLinkedFrames_typePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define RelevantLinkedFrames_typePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RelevantLinkedFrames_type*
        RelevantLinkedFrames_typePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern RelevantLinkedFrames_type*
        RelevantLinkedFrames_typePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern RelevantLinkedFrames_type*
        RelevantLinkedFrames_typePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        RelevantLinkedFrames_typePluginSupport_copy_data(
            RelevantLinkedFrames_type *out,
            const RelevantLinkedFrames_type *in);

        NDDSUSERDllExport extern void 
        RelevantLinkedFrames_typePluginSupport_destroy_data_w_params(
            RelevantLinkedFrames_type *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        RelevantLinkedFrames_typePluginSupport_destroy_data_ex(
            RelevantLinkedFrames_type *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        RelevantLinkedFrames_typePluginSupport_destroy_data(
            RelevantLinkedFrames_type *sample);

        NDDSUSERDllExport extern void 
        RelevantLinkedFrames_typePluginSupport_print_data(
            const RelevantLinkedFrames_type *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        RelevantLinkedFrames_typePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            RelevantLinkedFrames_type *out,
            const RelevantLinkedFrames_type *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        RelevantLinkedFrames_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        RelevantLinkedFrames_typePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        RelevantLinkedFrames_typePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        RelevantLinkedFrames_typePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define WPS_PositionOrientationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_PositionOrientationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_PositionOrientationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_PositionOrientationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_PositionOrientationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_PositionOrientation*
        WPS_PositionOrientationPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_PositionOrientation*
        WPS_PositionOrientationPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_PositionOrientation*
        WPS_PositionOrientationPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_PositionOrientationPluginSupport_copy_data(
            WPS_PositionOrientation *out,
            const WPS_PositionOrientation *in);

        NDDSUSERDllExport extern void 
        WPS_PositionOrientationPluginSupport_destroy_data_w_params(
            WPS_PositionOrientation *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_PositionOrientationPluginSupport_destroy_data_ex(
            WPS_PositionOrientation *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_PositionOrientationPluginSupport_destroy_data(
            WPS_PositionOrientation *sample);

        NDDSUSERDllExport extern void 
        WPS_PositionOrientationPluginSupport_print_data(
            const WPS_PositionOrientation *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_PositionOrientationPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_PositionOrientationPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_PositionOrientationPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_PositionOrientationPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_PositionOrientationPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_PositionOrientation *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_PositionOrientationPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_PositionOrientation *out,
            const WPS_PositionOrientation *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_PositionOrientationPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_PositionOrientation *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_PositionOrientationPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_PositionOrientation **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_PositionOrientationPlugin_deserialize_from_cdr_buffer(
            WPS_PositionOrientation *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_PositionOrientationPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_PositionOrientationPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_PositionOrientationPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_PositionOrientationPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_PositionOrientationPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_PositionOrientation ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_PositionOrientationPlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_PositionOrientationPlugin_delete(struct PRESTypePlugin *);

        #define WPS_UTMVehicleLocalizationParametersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_UTMVehicleLocalizationParametersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_UTMVehicleLocalizationParametersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_UTMVehicleLocalizationParametersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_UTMVehicleLocalizationParametersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationParameters*
        WPS_UTMVehicleLocalizationParametersPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationParameters*
        WPS_UTMVehicleLocalizationParametersPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationParameters*
        WPS_UTMVehicleLocalizationParametersPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationParametersPluginSupport_copy_data(
            WPS_UTMVehicleLocalizationParameters *out,
            const WPS_UTMVehicleLocalizationParameters *in);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationParametersPluginSupport_destroy_data_w_params(
            WPS_UTMVehicleLocalizationParameters *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationParametersPluginSupport_destroy_data_ex(
            WPS_UTMVehicleLocalizationParameters *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationParametersPluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationParameters *sample);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationParametersPluginSupport_print_data(
            const WPS_UTMVehicleLocalizationParameters *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationParametersPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationParameters *out,
            const WPS_UTMVehicleLocalizationParameters *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationParameters *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationParametersPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationParameters **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationParametersPlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationParameters *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_UTMVehicleLocalizationParametersPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationParameters ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationOperation_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationOperation_typePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationOperation_typePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_UTMVehicleLocalizationOperation_typePluginSupport_print_data(
            const WPS_UTMVehicleLocalizationOperation_type *sample, const char *desc, int indent_level);

        #define WPS_UTMVehicleLocalizationDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_UTMVehicleLocalizationDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_UTMVehicleLocalizationDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_UTMVehicleLocalizationDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_UTMVehicleLocalizationDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationData*
        WPS_UTMVehicleLocalizationDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationData*
        WPS_UTMVehicleLocalizationDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationData*
        WPS_UTMVehicleLocalizationDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationDataPluginSupport_copy_data(
            WPS_UTMVehicleLocalizationData *out,
            const WPS_UTMVehicleLocalizationData *in);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationDataPluginSupport_destroy_data_w_params(
            WPS_UTMVehicleLocalizationData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationDataPluginSupport_destroy_data_ex(
            WPS_UTMVehicleLocalizationData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationDataPluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationData *sample);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationDataPluginSupport_print_data(
            const WPS_UTMVehicleLocalizationData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationData *out,
            const WPS_UTMVehicleLocalizationData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationDataPlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_UTMVehicleLocalizationDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_UTMVehicleLocalizationMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_UTMVehicleLocalizationMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_UTMVehicleLocalizationMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_UTMVehicleLocalizationMessage.
        */
        typedef  class WPS_UTMVehicleLocalizationMessage WPS_UTMVehicleLocalizationMessageKeyHolder;

        #define WPS_UTMVehicleLocalizationMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_UTMVehicleLocalizationMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_UTMVehicleLocalizationMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_UTMVehicleLocalizationMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_UTMVehicleLocalizationMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_UTMVehicleLocalizationMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_UTMVehicleLocalizationMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationMessage*
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationMessage*
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationMessage*
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePluginSupport_copy_data(
            WPS_UTMVehicleLocalizationMessage *out,
            const WPS_UTMVehicleLocalizationMessage *in);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_data_w_params(
            WPS_UTMVehicleLocalizationMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_data_ex(
            WPS_UTMVehicleLocalizationMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_print_data(
            const WPS_UTMVehicleLocalizationMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationMessage*
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationMessage*
        WPS_UTMVehicleLocalizationMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_key_ex(
            WPS_UTMVehicleLocalizationMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePluginSupport_destroy_key(
            WPS_UTMVehicleLocalizationMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_UTMVehicleLocalizationMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_UTMVehicleLocalizationMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_UTMVehicleLocalizationMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage *out,
            const WPS_UTMVehicleLocalizationMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationMessagePlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_UTMVehicleLocalizationMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessageKeyHolder *key, 
            const WPS_UTMVehicleLocalizationMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationMessage *instance, 
            const WPS_UTMVehicleLocalizationMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_UTMVehicleLocalizationMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_UTMVehicleLocalizationMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_UTMVehicleLocalizationMessagePlugin_delete(struct PRESTypePlugin *);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationStatusEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationStatusEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationStatusEnumPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_UTMVehicleLocalizationStatusEnumPluginSupport_print_data(
            const WPS_UTMVehicleLocalizationStatusEnum *sample, const char *desc, int indent_level);

        #define WPS_UTMVehicleLocalizationReportDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_UTMVehicleLocalizationReportDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_UTMVehicleLocalizationReportDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_UTMVehicleLocalizationReportDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_UTMVehicleLocalizationReportDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportData*
        WPS_UTMVehicleLocalizationReportDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportData*
        WPS_UTMVehicleLocalizationReportDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportData*
        WPS_UTMVehicleLocalizationReportDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_copy_data(
            WPS_UTMVehicleLocalizationReportData *out,
            const WPS_UTMVehicleLocalizationReportData *in);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_destroy_data_w_params(
            WPS_UTMVehicleLocalizationReportData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_destroy_data_ex(
            WPS_UTMVehicleLocalizationReportData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationReportData *sample);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportDataPluginSupport_print_data(
            const WPS_UTMVehicleLocalizationReportData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportData *out,
            const WPS_UTMVehicleLocalizationReportData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationReportDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationReportData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationReportDataPlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationReportData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_UTMVehicleLocalizationReportDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationReportDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_UTMVehicleLocalizationReportMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_UTMVehicleLocalizationReportMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_UTMVehicleLocalizationReportMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_UTMVehicleLocalizationReportMessage.
        */
        typedef  class WPS_UTMVehicleLocalizationReportMessage WPS_UTMVehicleLocalizationReportMessageKeyHolder;

        #define WPS_UTMVehicleLocalizationReportMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_UTMVehicleLocalizationReportMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_UTMVehicleLocalizationReportMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_UTMVehicleLocalizationReportMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_UTMVehicleLocalizationReportMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_UTMVehicleLocalizationReportMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_UTMVehicleLocalizationReportMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportMessage*
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportMessage*
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportMessage*
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_copy_data(
            WPS_UTMVehicleLocalizationReportMessage *out,
            const WPS_UTMVehicleLocalizationReportMessage *in);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_data_w_params(
            WPS_UTMVehicleLocalizationReportMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_data_ex(
            WPS_UTMVehicleLocalizationReportMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_data(
            WPS_UTMVehicleLocalizationReportMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_print_data(
            const WPS_UTMVehicleLocalizationReportMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportMessage*
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_UTMVehicleLocalizationReportMessage*
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_key_ex(
            WPS_UTMVehicleLocalizationReportMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePluginSupport_destroy_key(
            WPS_UTMVehicleLocalizationReportMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_UTMVehicleLocalizationReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_UTMVehicleLocalizationReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage *out,
            const WPS_UTMVehicleLocalizationReportMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_UTMVehicleLocalizationReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_UTMVehicleLocalizationReportMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_UTMVehicleLocalizationReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessageKeyHolder *key, 
            const WPS_UTMVehicleLocalizationReportMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_UTMVehicleLocalizationReportMessage *instance, 
            const WPS_UTMVehicleLocalizationReportMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_UTMVehicleLocalizationReportMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_UTMVehicleLocalizationReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_UTMVehicleLocalizationReportMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_UTMVehicleLocalizationReportMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace WPS_UTMVehicleLocalizationReporting  */
    namespace WPS_ModelDifferences {

        #define WPS_ModelDifferencesParametersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_ModelDifferencesParametersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_ModelDifferencesParametersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_ModelDifferencesParametersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_ModelDifferencesParametersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_ModelDifferencesParameters*
        WPS_ModelDifferencesParametersPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_ModelDifferencesParameters*
        WPS_ModelDifferencesParametersPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_ModelDifferencesParameters*
        WPS_ModelDifferencesParametersPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesParametersPluginSupport_copy_data(
            WPS_ModelDifferencesParameters *out,
            const WPS_ModelDifferencesParameters *in);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesParametersPluginSupport_destroy_data_w_params(
            WPS_ModelDifferencesParameters *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesParametersPluginSupport_destroy_data_ex(
            WPS_ModelDifferencesParameters *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesParametersPluginSupport_destroy_data(
            WPS_ModelDifferencesParameters *sample);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesParametersPluginSupport_print_data(
            const WPS_ModelDifferencesParameters *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesParametersPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesParameters *out,
            const WPS_ModelDifferencesParameters *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesParameters *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesParametersPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesParameters **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesParametersPlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesParameters *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_ModelDifferencesParametersPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesParameters ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesOperation_typePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesOperation_typePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesOperation_typePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_ModelDifferencesOperation_typePluginSupport_print_data(
            const WPS_ModelDifferencesOperation_type *sample, const char *desc, int indent_level);

        #define WPS_ModelDifferencesDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_ModelDifferencesDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_ModelDifferencesDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_ModelDifferencesDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_ModelDifferencesDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_ModelDifferencesData*
        WPS_ModelDifferencesDataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_ModelDifferencesData*
        WPS_ModelDifferencesDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_ModelDifferencesData*
        WPS_ModelDifferencesDataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesDataPluginSupport_copy_data(
            WPS_ModelDifferencesData *out,
            const WPS_ModelDifferencesData *in);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesDataPluginSupport_destroy_data_w_params(
            WPS_ModelDifferencesData *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesDataPluginSupport_destroy_data_ex(
            WPS_ModelDifferencesData *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesDataPluginSupport_destroy_data(
            WPS_ModelDifferencesData *sample);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesDataPluginSupport_print_data(
            const WPS_ModelDifferencesData *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesDataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesData *out,
            const WPS_ModelDifferencesData *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesDataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesData *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesDataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesData **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesDataPlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesData *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesDataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_ModelDifferencesDataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesDataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesDataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesDataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesData ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_ModelDifferencesMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_ModelDifferencesMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_ModelDifferencesMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_ModelDifferencesMessage.
        */
        typedef  class WPS_ModelDifferencesMessage WPS_ModelDifferencesMessageKeyHolder;

        #define WPS_ModelDifferencesMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_ModelDifferencesMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_ModelDifferencesMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_ModelDifferencesMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_ModelDifferencesMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_ModelDifferencesMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_ModelDifferencesMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_ModelDifferencesMessage*
        WPS_ModelDifferencesMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_ModelDifferencesMessage*
        WPS_ModelDifferencesMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_ModelDifferencesMessage*
        WPS_ModelDifferencesMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePluginSupport_copy_data(
            WPS_ModelDifferencesMessage *out,
            const WPS_ModelDifferencesMessage *in);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePluginSupport_destroy_data_w_params(
            WPS_ModelDifferencesMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePluginSupport_destroy_data_ex(
            WPS_ModelDifferencesMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePluginSupport_destroy_data(
            WPS_ModelDifferencesMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePluginSupport_print_data(
            const WPS_ModelDifferencesMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_ModelDifferencesMessage*
        WPS_ModelDifferencesMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_ModelDifferencesMessage*
        WPS_ModelDifferencesMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePluginSupport_destroy_key_ex(
            WPS_ModelDifferencesMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePluginSupport_destroy_key(
            WPS_ModelDifferencesMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_ModelDifferencesMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_ModelDifferencesMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_ModelDifferencesMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage *out,
            const WPS_ModelDifferencesMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesMessagePlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_ModelDifferencesMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessageKeyHolder *key, 
            const WPS_ModelDifferencesMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesMessage *instance, 
            const WPS_ModelDifferencesMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_ModelDifferencesMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_ModelDifferencesMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_ModelDifferencesMessagePlugin_delete(struct PRESTypePlugin *);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesStatusEnumPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesStatusEnumPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesStatusEnumPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* ----------------------------------------------------------------------------
        Support functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void
        WPS_ModelDifferencesStatusEnumPluginSupport_print_data(
            const WPS_ModelDifferencesStatusEnum *sample, const char *desc, int indent_level);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct WPS_ModelDifferencesReportMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct WPS_ModelDifferencesReportMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * WPS_ModelDifferencesReportMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct WPS_ModelDifferencesReportMessage.
        */
        typedef  class WPS_ModelDifferencesReportMessage WPS_ModelDifferencesReportMessageKeyHolder;

        #define WPS_ModelDifferencesReportMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define WPS_ModelDifferencesReportMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define WPS_ModelDifferencesReportMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define WPS_ModelDifferencesReportMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define WPS_ModelDifferencesReportMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define WPS_ModelDifferencesReportMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define WPS_ModelDifferencesReportMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern WPS_ModelDifferencesReportMessage*
        WPS_ModelDifferencesReportMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern WPS_ModelDifferencesReportMessage*
        WPS_ModelDifferencesReportMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_ModelDifferencesReportMessage*
        WPS_ModelDifferencesReportMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePluginSupport_copy_data(
            WPS_ModelDifferencesReportMessage *out,
            const WPS_ModelDifferencesReportMessage *in);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_data_w_params(
            WPS_ModelDifferencesReportMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_data_ex(
            WPS_ModelDifferencesReportMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_data(
            WPS_ModelDifferencesReportMessage *sample);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePluginSupport_print_data(
            const WPS_ModelDifferencesReportMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern WPS_ModelDifferencesReportMessage*
        WPS_ModelDifferencesReportMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern WPS_ModelDifferencesReportMessage*
        WPS_ModelDifferencesReportMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_key_ex(
            WPS_ModelDifferencesReportMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePluginSupport_destroy_key(
            WPS_ModelDifferencesReportMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        WPS_ModelDifferencesReportMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        WPS_ModelDifferencesReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        WPS_ModelDifferencesReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        WPS_ModelDifferencesReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage *out,
            const WPS_ModelDifferencesReportMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const WPS_ModelDifferencesReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        WPS_ModelDifferencesReportMessagePlugin_deserialize_from_cdr_buffer(
            WPS_ModelDifferencesReportMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        WPS_ModelDifferencesReportMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        WPS_ModelDifferencesReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessageKeyHolder *key, 
            const WPS_ModelDifferencesReportMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            WPS_ModelDifferencesReportMessage *instance, 
            const WPS_ModelDifferencesReportMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const WPS_ModelDifferencesReportMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        WPS_ModelDifferencesReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        WPS_ModelDifferencesReportMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        WPS_ModelDifferencesReportMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace WPS_ModelDifferences  */
} /* namespace WorldPerceptionModel  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WPSFullPlugin_1442534127_h */

