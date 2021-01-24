

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from buildmodel.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef buildmodelPlugin_1709726144_h
#define buildmodelPlugin_1709726144_h

#include "buildmodel.hpp"

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
    namespace BuildModel {

        #define Test_DataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define Test_DataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define Test_DataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define Test_DataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define Test_DataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern Test_Data*
        Test_DataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern Test_Data*
        Test_DataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern Test_Data*
        Test_DataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        Test_DataPluginSupport_copy_data(
            Test_Data *out,
            const Test_Data *in);

        NDDSUSERDllExport extern void 
        Test_DataPluginSupport_destroy_data_w_params(
            Test_Data *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        Test_DataPluginSupport_destroy_data_ex(
            Test_Data *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        Test_DataPluginSupport_destroy_data(
            Test_Data *sample);

        NDDSUSERDllExport extern void 
        Test_DataPluginSupport_print_data(
            const Test_Data *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        Test_DataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            Test_Data *out,
            const Test_Data *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        Test_DataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const Test_Data *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        Test_DataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            Test_Data **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        Test_DataPlugin_deserialize_from_cdr_buffer(
            Test_Data *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        Test_DataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        Test_DataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        Test_DataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        Test_DataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        Test_DataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            Test_Data ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

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
        * By default, this type is struct DDS_BuildModelMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_BuildModelMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_BuildModelMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_BuildModelMessage.
        */
        typedef  class DDS_BuildModelMessage DDS_BuildModelMessageKeyHolder;

        #define DDS_BuildModelMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_BuildModelMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_BuildModelMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_BuildModelMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_BuildModelMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_BuildModelMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_BuildModelMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_BuildModelMessage*
        DDS_BuildModelMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_BuildModelMessage*
        DDS_BuildModelMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BuildModelMessage*
        DDS_BuildModelMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePluginSupport_copy_data(
            DDS_BuildModelMessage *out,
            const DDS_BuildModelMessage *in);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePluginSupport_destroy_data_w_params(
            DDS_BuildModelMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePluginSupport_destroy_data_ex(
            DDS_BuildModelMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePluginSupport_destroy_data(
            DDS_BuildModelMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePluginSupport_print_data(
            const DDS_BuildModelMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_BuildModelMessage*
        DDS_BuildModelMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BuildModelMessage*
        DDS_BuildModelMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePluginSupport_destroy_key_ex(
            DDS_BuildModelMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePluginSupport_destroy_key(
            DDS_BuildModelMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_BuildModelMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_BuildModelMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_BuildModelMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_BuildModelMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage *out,
            const DDS_BuildModelMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BuildModelMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_BuildModelMessagePlugin_deserialize_from_cdr_buffer(
            DDS_BuildModelMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_BuildModelMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_BuildModelMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_BuildModelMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_BuildModelMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessageKeyHolder *key, 
            const DDS_BuildModelMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelMessage *instance, 
            const DDS_BuildModelMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BuildModelMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_BuildModelMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_BuildModelMessagePlugin_delete(struct PRESTypePlugin *);

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
        * By default, this type is struct DDS_BuildModelReportMessage
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct DDS_BuildModelReportMessage)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * DDS_BuildModelReportMessage must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct DDS_BuildModelReportMessage.
        */
        typedef  class DDS_BuildModelReportMessage DDS_BuildModelReportMessageKeyHolder;

        #define DDS_BuildModelReportMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define DDS_BuildModelReportMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define DDS_BuildModelReportMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define DDS_BuildModelReportMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define DDS_BuildModelReportMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define DDS_BuildModelReportMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define DDS_BuildModelReportMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern DDS_BuildModelReportMessage*
        DDS_BuildModelReportMessagePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern DDS_BuildModelReportMessage*
        DDS_BuildModelReportMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BuildModelReportMessage*
        DDS_BuildModelReportMessagePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePluginSupport_copy_data(
            DDS_BuildModelReportMessage *out,
            const DDS_BuildModelReportMessage *in);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePluginSupport_destroy_data_w_params(
            DDS_BuildModelReportMessage *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePluginSupport_destroy_data_ex(
            DDS_BuildModelReportMessage *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePluginSupport_destroy_data(
            DDS_BuildModelReportMessage *sample);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePluginSupport_print_data(
            const DDS_BuildModelReportMessage *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern DDS_BuildModelReportMessage*
        DDS_BuildModelReportMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern DDS_BuildModelReportMessage*
        DDS_BuildModelReportMessagePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePluginSupport_destroy_key_ex(
            DDS_BuildModelReportMessageKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePluginSupport_destroy_key(
            DDS_BuildModelReportMessageKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        DDS_BuildModelReportMessagePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        DDS_BuildModelReportMessagePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        DDS_BuildModelReportMessagePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        DDS_BuildModelReportMessagePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage *out,
            const DDS_BuildModelReportMessage *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        DDS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const DDS_BuildModelReportMessage *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        DDS_BuildModelReportMessagePlugin_deserialize_from_cdr_buffer(
            DDS_BuildModelReportMessage *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        DDS_BuildModelReportMessagePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        DDS_BuildModelReportMessagePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        DDS_BuildModelReportMessagePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessageKeyHolder *key, 
            const DDS_BuildModelReportMessage *instance);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            DDS_BuildModelReportMessage *instance, 
            const DDS_BuildModelReportMessageKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_instance_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            DDS_KeyHash_t *keyhash,
            const DDS_BuildModelReportMessage *instance,
            RTIEncapsulationId encapsulationId);

        NDDSUSERDllExport extern RTIBool 
        DDS_BuildModelReportMessagePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        DDS_BuildModelReportMessagePlugin_new(void);

        NDDSUSERDllExport extern void
        DDS_BuildModelReportMessagePlugin_delete(struct PRESTypePlugin *);

    } /* namespace BuildModel  */
} /* namespace WorldPerceptionModel  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* buildmodelPlugin_1709726144_h */

