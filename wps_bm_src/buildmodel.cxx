

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from buildmodel.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "buildmodel.hpp"
#include "buildmodelPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace WorldPerceptionModel {

    namespace BuildModel {

        // ---- Test_Data: 

        Test_Data::Test_Data() :
            m_Id_ (0) ,
            m_Name_ ("")  {
        }   

        Test_Data::Test_Data (
            int32_t Id,
            const std::string& Name,
            const DDS_GRI::DDSCommon::DDS_GeoPoint& Point)
            :
                m_Id_( Id ),
                m_Name_( Name ),
                m_Point_( Point ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        Test_Data::Test_Data(Test_Data&& other_) OMG_NOEXCEPT  :m_Id_ (std::move(other_.m_Id_))
        ,
        m_Name_ (std::move(other_.m_Name_))
        ,
        m_Point_ (std::move(other_.m_Point_))
        {
        } 

        Test_Data& Test_Data::operator=(Test_Data&&  other_) OMG_NOEXCEPT {
            Test_Data tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void Test_Data::swap(Test_Data& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Id_, other_.m_Id_);
            swap(m_Name_, other_.m_Name_);
            swap(m_Point_, other_.m_Point_);
        }  

        bool Test_Data::operator == (const Test_Data& other_) const {
            if (m_Id_ != other_.m_Id_) {
                return false;
            }
            if (m_Name_ != other_.m_Name_) {
                return false;
            }
            if (m_Point_ != other_.m_Point_) {
                return false;
            }
            return true;
        }
        bool Test_Data::operator != (const Test_Data& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const Test_Data& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Id: " << sample.Id()<<", ";
            o << "Name: " << sample.Name()<<", ";
            o << "Point: " << sample.Point() ;
            o <<"]";
            return o;
        }

        // ---- WPS_BuildModelParameters: 

        WPS_BuildModelParameters::WPS_BuildModelParameters() :
            m_PathToFolder_ ("")  {
        }   

        WPS_BuildModelParameters::WPS_BuildModelParameters (
            const std::string& PathToFolder,
            const WorldPerceptionModel::BuildModel::RegionOfInterest_type& region_of_interest)
            :
                m_PathToFolder_( PathToFolder ),
                m_region_of_interest_( region_of_interest ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_BuildModelParameters::WPS_BuildModelParameters(WPS_BuildModelParameters&& other_) OMG_NOEXCEPT  :m_PathToFolder_ (std::move(other_.m_PathToFolder_))
        ,
        m_region_of_interest_ (std::move(other_.m_region_of_interest_))
        {
        } 

        WPS_BuildModelParameters& WPS_BuildModelParameters::operator=(WPS_BuildModelParameters&&  other_) OMG_NOEXCEPT {
            WPS_BuildModelParameters tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_BuildModelParameters::swap(WPS_BuildModelParameters& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PathToFolder_, other_.m_PathToFolder_);
            swap(m_region_of_interest_, other_.m_region_of_interest_);
        }  

        bool WPS_BuildModelParameters::operator == (const WPS_BuildModelParameters& other_) const {
            if (m_PathToFolder_ != other_.m_PathToFolder_) {
                return false;
            }
            if (m_region_of_interest_ != other_.m_region_of_interest_) {
                return false;
            }
            return true;
        }
        bool WPS_BuildModelParameters::operator != (const WPS_BuildModelParameters& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_BuildModelParameters& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PathToFolder: " << sample.PathToFolder()<<", ";
            o << "region_of_interest: " << sample.region_of_interest() ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const WPS_BuildModelOperation_type& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_BuildModelOperation_type::BuildModelDense:
                o << "WPS_BuildModelOperation_type::BuildModelDense" << " ";
                break;
                case WPS_BuildModelOperation_type::AbortBuildModel:
                o << "WPS_BuildModelOperation_type::AbortBuildModel" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_BuildModelData: 

        WPS_BuildModelData::WPS_BuildModelData() :
            m_request_(WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type::BuildModelDense)  {
        }   

        WPS_BuildModelData::WPS_BuildModelData (
            const WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type& request,
            const WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& parameters)
            :
                m_request_( request ),
                m_parameters_( parameters ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_BuildModelData::WPS_BuildModelData(WPS_BuildModelData&& other_) OMG_NOEXCEPT  :m_request_ (std::move(other_.m_request_))
        ,
        m_parameters_ (std::move(other_.m_parameters_))
        {
        } 

        WPS_BuildModelData& WPS_BuildModelData::operator=(WPS_BuildModelData&&  other_) OMG_NOEXCEPT {
            WPS_BuildModelData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_BuildModelData::swap(WPS_BuildModelData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_request_, other_.m_request_);
            swap(m_parameters_, other_.m_parameters_);
        }  

        bool WPS_BuildModelData::operator == (const WPS_BuildModelData& other_) const {
            if (m_request_ != other_.m_request_) {
                return false;
            }
            if (m_parameters_ != other_.m_parameters_) {
                return false;
            }
            return true;
        }
        bool WPS_BuildModelData::operator != (const WPS_BuildModelData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_BuildModelData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "request: " << sample.request()<<", ";
            o << "parameters: " << sample.parameters() ;
            o <<"]";
            return o;
        }

        // ---- DDS_BuildModelMessage: 

        DDS_BuildModelMessage::DDS_BuildModelMessage() :
            m_RequestId_ ("")  {
        }   

        DDS_BuildModelMessage::DDS_BuildModelMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const WorldPerceptionModel::BuildModel::WPS_BuildModelData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_BuildModelMessage::DDS_BuildModelMessage(DDS_BuildModelMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_BuildModelMessage& DDS_BuildModelMessage::operator=(DDS_BuildModelMessage&&  other_) OMG_NOEXCEPT {
            DDS_BuildModelMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_BuildModelMessage::swap(DDS_BuildModelMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_BuildModelMessage::operator == (const DDS_BuildModelMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_RequestId_ != other_.m_RequestId_) {
                return false;
            }
            if (m_Data_ != other_.m_Data_) {
                return false;
            }
            return true;
        }
        bool DDS_BuildModelMessage::operator != (const DDS_BuildModelMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_BuildModelMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "RequestId: " << sample.RequestId()<<", ";
            o << "Data: " << sample.Data() ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const WPS_BuildModelStatusEnum& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_BuildModelStatusEnum::Idle:
                o << "WPS_BuildModelStatusEnum::Idle" << " ";
                break;
                case WPS_BuildModelStatusEnum::InProgess:
                o << "WPS_BuildModelStatusEnum::InProgess" << " ";
                break;
                case WPS_BuildModelStatusEnum::Aborted:
                o << "WPS_BuildModelStatusEnum::Aborted" << " ";
                break;
                case WPS_BuildModelStatusEnum::Completed:
                o << "WPS_BuildModelStatusEnum::Completed" << " ";
                break;
            }
            return o;
        }

        // ---- DDS_BuildModelReportMessage: 

        DDS_BuildModelReportMessage::DDS_BuildModelReportMessage() :
            m_BuildModelStatus_(WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum::Idle) ,
            m_ModelQuality_ (0)  {
        }   

        DDS_BuildModelReportMessage::DDS_BuildModelReportMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus,
            int32_t ModelQuality)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_BuildModelStatus_( BuildModelStatus ),
                m_ModelQuality_( ModelQuality ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_BuildModelReportMessage::DDS_BuildModelReportMessage(DDS_BuildModelReportMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_BuildModelStatus_ (std::move(other_.m_BuildModelStatus_))
        ,
        m_ModelQuality_ (std::move(other_.m_ModelQuality_))
        {
        } 

        DDS_BuildModelReportMessage& DDS_BuildModelReportMessage::operator=(DDS_BuildModelReportMessage&&  other_) OMG_NOEXCEPT {
            DDS_BuildModelReportMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_BuildModelReportMessage::swap(DDS_BuildModelReportMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_BuildModelStatus_, other_.m_BuildModelStatus_);
            swap(m_ModelQuality_, other_.m_ModelQuality_);
        }  

        bool DDS_BuildModelReportMessage::operator == (const DDS_BuildModelReportMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_BuildModelStatus_ != other_.m_BuildModelStatus_) {
                return false;
            }
            if (m_ModelQuality_ != other_.m_ModelQuality_) {
                return false;
            }
            return true;
        }
        bool DDS_BuildModelReportMessage::operator != (const DDS_BuildModelReportMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_BuildModelReportMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "BuildModelStatus: " << sample.BuildModelStatus()<<", ";
            o << "ModelQuality: " << sample.ModelQuality() ;
            o <<"]";
            return o;
        }

    } // namespace BuildModel  

} // namespace WorldPerceptionModel  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::Test_Data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Test_Data_g_tc_members[3]=
                {

                    {
                        (char *)"Id",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Name",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Point",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Test_Data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::Test_Data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Test_Data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Test_Data*/

                if (is_initialized) {
                    return &Test_Data_g_tc;
                }

                Test_Data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Test_Data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                Test_Data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();
                Test_Data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint>::get().native();

                /* Initialize the values for member annotations. */
                Test_Data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Test_Data_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                Test_Data_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Test_Data_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Test_Data_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Test_Data_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Test_Data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                Test_Data_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                Test_Data_g_tc._data._sampleAccessInfo = sample_access_info();
                Test_Data_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Test_Data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::BuildModel::Test_Data *sample;

                static RTIXCdrMemberAccessInfo Test_Data_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Test_Data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Test_Data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::BuildModel::Test_Data);
                if (sample == NULL) {
                    return NULL;
                }

                Test_Data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Id() - (char *)sample);

                Test_Data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Name() - (char *)sample);

                Test_Data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Point() - (char *)sample);

                Test_Data_g_sampleAccessInfo.memberAccessInfos = 
                Test_Data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::Test_Data);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        Test_Data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        Test_Data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Test_Data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Test_Data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::Test_Data >;

                Test_Data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Test_Data_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Test_Data_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Test_Data_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::BuildModel::Test_Data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::Test_Data >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::RegionOfInterest_type_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RegionOfInterest_type_g_tc_sequence;

                static DDS_TypeCode RegionOfInterest_type_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"WorldPerceptionModel::BuildModel::RegionOfInterest_type", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for  RegionOfInterest_type */

                if (is_initialized) {
                    return &RegionOfInterest_type_g_tc;
                }

                RegionOfInterest_type_g_tc_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (WorldPerceptionModel::BuildModel::MAX_POINTS_IN_REGION_OF_INTEREST) > >(((WorldPerceptionModel::BuildModel::MAX_POINTS_IN_REGION_OF_INTEREST)));

                RegionOfInterest_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RegionOfInterest_type_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint>::get().native();
                RegionOfInterest_type_g_tc._data._typeCode =  (RTICdrTypeCode *)& RegionOfInterest_type_g_tc_sequence;

                /* Initialize the values for member annotations. */

                RegionOfInterest_type_g_tc._data._sampleAccessInfo = sample_access_info();
                RegionOfInterest_type_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RegionOfInterest_type_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RegionOfInterest_type_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RegionOfInterest_type_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RegionOfInterest_type_g_sampleAccessInfo;
                }

                RegionOfInterest_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RegionOfInterest_type_g_sampleAccessInfo.memberAccessInfos = 
                RegionOfInterest_type_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::RegionOfInterest_type);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        RegionOfInterest_type_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        RegionOfInterest_type_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RegionOfInterest_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RegionOfInterest_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::RegionOfInterest_type >;

                RegionOfInterest_type_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RegionOfInterest_type_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RegionOfInterest_type_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &RegionOfInterest_type_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< WorldPerceptionModel::BuildModel::RegionOfInterest_type_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::RegionOfInterest_type_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_BuildModelParameters_g_tc_members[2]=
                {

                    {
                        (char *)"PathToFolder",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"region_of_interest",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WPS_BuildModelParameters_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::WPS_BuildModelParameters", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_BuildModelParameters_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_BuildModelParameters*/

                if (is_initialized) {
                    return &WPS_BuildModelParameters_g_tc;
                }

                WPS_BuildModelParameters_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_BuildModelParameters_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();
                WPS_BuildModelParameters_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::RegionOfInterest_type_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WPS_BuildModelParameters_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_BuildModelParameters_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_BuildModelParameters_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_BuildModelParameters_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_BuildModelParameters_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::BuildModel::WPS_BuildModelParameters *sample;

                static RTIXCdrMemberAccessInfo WPS_BuildModelParameters_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelParameters_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelParameters_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::BuildModel::WPS_BuildModelParameters);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_BuildModelParameters_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathToFolder() - (char *)sample);

                WPS_BuildModelParameters_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->region_of_interest() - (char *)sample);

                WPS_BuildModelParameters_g_sampleAccessInfo.memberAccessInfos = 
                WPS_BuildModelParameters_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::WPS_BuildModelParameters);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_BuildModelParameters_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_BuildModelParameters_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_BuildModelParameters_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_BuildModelParameters_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters >;

                WPS_BuildModelParameters_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelParameters_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_BuildModelParameters_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WPS_BuildModelParameters_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_BuildModelOperation_type_g_tc_members[2]=
                {

                    {
                        (char *)"BuildModelDense",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type::BuildModelDense, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AbortBuildModel",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type::AbortBuildModel, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WPS_BuildModelOperation_type_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_BuildModelOperation_type_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_BuildModelOperation_type*/

                if (is_initialized) {
                    return &WPS_BuildModelOperation_type_g_tc;
                }

                WPS_BuildModelOperation_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_BuildModelOperation_type_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_BuildModelOperation_type_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_BuildModelOperation_type_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_BuildModelOperation_type_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_BuildModelOperation_type_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_BuildModelOperation_type_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelOperation_type_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelOperation_type_g_sampleAccessInfo;
                }

                WPS_BuildModelOperation_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_BuildModelOperation_type_g_sampleAccessInfo.memberAccessInfos = 
                WPS_BuildModelOperation_type_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_BuildModelOperation_type_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_BuildModelOperation_type_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_BuildModelOperation_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_BuildModelOperation_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type >;

                WPS_BuildModelOperation_type_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelOperation_type_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_BuildModelOperation_type_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WPS_BuildModelOperation_type_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_BuildModelData_g_tc_members[2]=
                {

                    {
                        (char *)"request",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"parameters",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WPS_BuildModelData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::WPS_BuildModelData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_BuildModelData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_BuildModelData*/

                if (is_initialized) {
                    return &WPS_BuildModelData_g_tc;
                }

                WPS_BuildModelData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_BuildModelData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type>::get().native();
                WPS_BuildModelData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters>::get().native();

                /* Initialize the values for member annotations. */
                WPS_BuildModelData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_BuildModelData_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_BuildModelData_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_BuildModelData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_BuildModelData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::BuildModel::WPS_BuildModelData *sample;

                static RTIXCdrMemberAccessInfo WPS_BuildModelData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::BuildModel::WPS_BuildModelData);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_BuildModelData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->request() - (char *)sample);

                WPS_BuildModelData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->parameters() - (char *)sample);

                WPS_BuildModelData_g_sampleAccessInfo.memberAccessInfos = 
                WPS_BuildModelData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::WPS_BuildModelData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_BuildModelData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_BuildModelData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_BuildModelData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_BuildModelData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::WPS_BuildModelData >;

                WPS_BuildModelData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_BuildModelData_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WPS_BuildModelData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_BuildModelMessage_g_tc_members[4]=
                {

                    {
                        (char *)"SourceId",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DestinationId",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RequestId",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Data",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DDS_BuildModelMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::DDS_BuildModelMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_BuildModelMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_BuildModelMessage*/

                if (is_initialized) {
                    return &DDS_BuildModelMessage_g_tc;
                }

                DDS_BuildModelMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_BuildModelMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_BuildModelMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_BuildModelMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_BuildModelMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_BuildModelMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_BuildModelMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_BuildModelMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_BuildModelMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_BuildModelMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::BuildModel::DDS_BuildModelMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_BuildModelMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_BuildModelMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_BuildModelMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::BuildModel::DDS_BuildModelMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_BuildModelMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_BuildModelMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_BuildModelMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_BuildModelMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_BuildModelMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_BuildModelMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_BuildModelMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_BuildModelMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_BuildModelMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_BuildModelMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >;

                DDS_BuildModelMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_BuildModelMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_BuildModelMessage_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DDS_BuildModelMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_BuildModelStatusEnum_g_tc_members[4]=
                {

                    {
                        (char *)"Idle",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum::Idle, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"InProgess",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum::InProgess, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Aborted",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum::Aborted, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Completed",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum::Completed, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WPS_BuildModelStatusEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_BuildModelStatusEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_BuildModelStatusEnum*/

                if (is_initialized) {
                    return &WPS_BuildModelStatusEnum_g_tc;
                }

                WPS_BuildModelStatusEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_BuildModelStatusEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_BuildModelStatusEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_BuildModelStatusEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_BuildModelStatusEnum_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_BuildModelStatusEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_BuildModelStatusEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelStatusEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelStatusEnum_g_sampleAccessInfo;
                }

                WPS_BuildModelStatusEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_BuildModelStatusEnum_g_sampleAccessInfo.memberAccessInfos = 
                WPS_BuildModelStatusEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_BuildModelStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_BuildModelStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_BuildModelStatusEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_BuildModelStatusEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum >;

                WPS_BuildModelStatusEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelStatusEnum_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_BuildModelStatusEnum_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WPS_BuildModelStatusEnum_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_BuildModelReportMessage_g_tc_members[4]=
                {

                    {
                        (char *)"SourceId",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DestinationId",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BuildModelStatus",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ModelQuality",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DDS_BuildModelReportMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_BuildModelReportMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_BuildModelReportMessage*/

                if (is_initialized) {
                    return &DDS_BuildModelReportMessage_g_tc;
                }

                DDS_BuildModelReportMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_BuildModelReportMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_BuildModelReportMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_BuildModelReportMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum>::get().native();
                DDS_BuildModelReportMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */

                DDS_BuildModelReportMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DDS_BuildModelReportMessage_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                DDS_BuildModelReportMessage_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DDS_BuildModelReportMessage_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                DDS_BuildModelReportMessage_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DDS_BuildModelReportMessage_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DDS_BuildModelReportMessage_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DDS_BuildModelReportMessage_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DDS_BuildModelReportMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_BuildModelReportMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_BuildModelReportMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_BuildModelReportMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_BuildModelReportMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_BuildModelReportMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_BuildModelReportMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_BuildModelReportMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_BuildModelReportMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BuildModelStatus() - (char *)sample);

                DDS_BuildModelReportMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ModelQuality() - (char *)sample);

                DDS_BuildModelReportMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_BuildModelReportMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_BuildModelReportMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_BuildModelReportMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_BuildModelReportMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_BuildModelReportMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >;

                DDS_BuildModelReportMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_BuildModelReportMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_BuildModelReportMessage_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DDS_BuildModelReportMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::get())));
        }

    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< WorldPerceptionModel::BuildModel::Test_Data >::reset_sample(WorldPerceptionModel::BuildModel::Test_Data& sample) 
        {
            sample.Id(0);
            sample.Name("");
            ::rti::topic::reset_sample(sample.Point());
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::Test_Data >::allocate_sample(WorldPerceptionModel::BuildModel::Test_Data& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Name(),  -1, 200);
            ::rti::topic::allocate_sample(sample.Point(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters >::reset_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& sample) 
        {
            sample.PathToFolder("");
            ::rti::topic::reset_sample(sample.region_of_interest());
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters >::allocate_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.PathToFolder(),  -1, 200);
            ::rti::topic::allocate_sample(sample.region_of_interest(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::WPS_BuildModelData >::reset_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelData& sample) 
        {
            sample.request(WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type::BuildModelDense);
            ::rti::topic::reset_sample(sample.parameters());
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::WPS_BuildModelData >::allocate_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.request(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parameters(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_new,
                WorldPerceptionModel::BuildModel::DDS_BuildModelMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::from_cdr_buffer(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_BuildModelMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::BuildModel::DDS_BuildModelMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::reset_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage >::allocate_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_new,
                WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::from_cdr_buffer(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_BuildModelReportMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::reset_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.BuildModelStatus(WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum::Idle);
            sample.ModelQuality(0);
        }

        void topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage >::allocate_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.BuildModelStatus(),  -1, -1);
        }

    }
}  

