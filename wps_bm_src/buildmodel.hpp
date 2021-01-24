

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from buildmodel.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef buildmodel_1709726144_hpp
#define buildmodel_1709726144_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "DDSGeneralForWPS.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace WorldPerceptionModel {
    namespace BuildModel {

        class NDDSUSERDllExport Test_Data {
          public:
            Test_Data();

            Test_Data(
                int32_t Id,
                const std::string& Name,
                const DDS_GRI::DDSCommon::DDS_GeoPoint& Point);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            Test_Data (Test_Data&&) = default;
            Test_Data& operator=(Test_Data&&) = default;
            Test_Data& operator=(const Test_Data&) = default;
            Test_Data(const Test_Data&) = default;
            #else
            Test_Data(Test_Data&& other_) OMG_NOEXCEPT;  
            Test_Data& operator=(Test_Data&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& Id() OMG_NOEXCEPT {
                return m_Id_;
            }

            const int32_t& Id() const OMG_NOEXCEPT {
                return m_Id_;
            }

            void Id(int32_t value) {
                m_Id_ = value;
            }

            std::string& Name() OMG_NOEXCEPT {
                return m_Name_;
            }

            const std::string& Name() const OMG_NOEXCEPT {
                return m_Name_;
            }

            void Name(const std::string& value) {
                m_Name_ = value;
            }

            DDS_GRI::DDSCommon::DDS_GeoPoint& Point() OMG_NOEXCEPT {
                return m_Point_;
            }

            const DDS_GRI::DDSCommon::DDS_GeoPoint& Point() const OMG_NOEXCEPT {
                return m_Point_;
            }

            void Point(const DDS_GRI::DDSCommon::DDS_GeoPoint& value) {
                m_Point_ = value;
            }

            bool operator == (const Test_Data& other_) const;
            bool operator != (const Test_Data& other_) const;

            void swap(Test_Data& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_Id_;
            std::string m_Name_;
            DDS_GRI::DDSCommon::DDS_GeoPoint m_Point_;

        };

        inline void swap(Test_Data& a, Test_Data& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Test_Data& sample);

        static const int32_t MAX_POINTS_IN_REGION_OF_INTEREST = 10;

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSCommon::DDS_GeoPoint >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSCommon::DDS_GeoPoint >;
        #endif
        typedef ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (WorldPerceptionModel::BuildModel::MAX_POINTS_IN_REGION_OF_INTEREST) > RegionOfInterest_type;
        struct RegionOfInterest_type_AliasTag_t {};

        class NDDSUSERDllExport WPS_BuildModelParameters {
          public:
            WPS_BuildModelParameters();

            WPS_BuildModelParameters(
                const std::string& PathToFolder,
                const WorldPerceptionModel::BuildModel::RegionOfInterest_type& region_of_interest);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_BuildModelParameters (WPS_BuildModelParameters&&) = default;
            WPS_BuildModelParameters& operator=(WPS_BuildModelParameters&&) = default;
            WPS_BuildModelParameters& operator=(const WPS_BuildModelParameters&) = default;
            WPS_BuildModelParameters(const WPS_BuildModelParameters&) = default;
            #else
            WPS_BuildModelParameters(WPS_BuildModelParameters&& other_) OMG_NOEXCEPT;  
            WPS_BuildModelParameters& operator=(WPS_BuildModelParameters&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& PathToFolder() OMG_NOEXCEPT {
                return m_PathToFolder_;
            }

            const std::string& PathToFolder() const OMG_NOEXCEPT {
                return m_PathToFolder_;
            }

            void PathToFolder(const std::string& value) {
                m_PathToFolder_ = value;
            }

            WorldPerceptionModel::BuildModel::RegionOfInterest_type& region_of_interest() OMG_NOEXCEPT {
                return m_region_of_interest_;
            }

            const WorldPerceptionModel::BuildModel::RegionOfInterest_type& region_of_interest() const OMG_NOEXCEPT {
                return m_region_of_interest_;
            }

            void region_of_interest(const WorldPerceptionModel::BuildModel::RegionOfInterest_type& value) {
                m_region_of_interest_ = value;
            }

            bool operator == (const WPS_BuildModelParameters& other_) const;
            bool operator != (const WPS_BuildModelParameters& other_) const;

            void swap(WPS_BuildModelParameters& other_) OMG_NOEXCEPT ;

          private:

            std::string m_PathToFolder_;
            WorldPerceptionModel::BuildModel::RegionOfInterest_type m_region_of_interest_;

        };

        inline void swap(WPS_BuildModelParameters& a, WPS_BuildModelParameters& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_BuildModelParameters& sample);

        struct WPS_BuildModelOperation_type_def {
            enum type {
                BuildModelDense,      
                AbortBuildModel     
            };
            static type get_default(){ return BuildModelDense;}
        };

        typedef ::dds::core::safe_enum< WPS_BuildModelOperation_type_def > WPS_BuildModelOperation_type;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_BuildModelOperation_type& sample);

        class NDDSUSERDllExport WPS_BuildModelData {
          public:
            WPS_BuildModelData();

            WPS_BuildModelData(
                const WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type& request,
                const WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& parameters);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_BuildModelData (WPS_BuildModelData&&) = default;
            WPS_BuildModelData& operator=(WPS_BuildModelData&&) = default;
            WPS_BuildModelData& operator=(const WPS_BuildModelData&) = default;
            WPS_BuildModelData(const WPS_BuildModelData&) = default;
            #else
            WPS_BuildModelData(WPS_BuildModelData&& other_) OMG_NOEXCEPT;  
            WPS_BuildModelData& operator=(WPS_BuildModelData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type& request() OMG_NOEXCEPT {
                return m_request_;
            }

            const WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type& request() const OMG_NOEXCEPT {
                return m_request_;
            }

            void request(const WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type& value) {
                m_request_ = value;
            }

            WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& parameters() OMG_NOEXCEPT {
                return m_parameters_;
            }

            const WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& parameters() const OMG_NOEXCEPT {
                return m_parameters_;
            }

            void parameters(const WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& value) {
                m_parameters_ = value;
            }

            bool operator == (const WPS_BuildModelData& other_) const;
            bool operator != (const WPS_BuildModelData& other_) const;

            void swap(WPS_BuildModelData& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type m_request_;
            WorldPerceptionModel::BuildModel::WPS_BuildModelParameters m_parameters_;

        };

        inline void swap(WPS_BuildModelData& a, WPS_BuildModelData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_BuildModelData& sample);

        class NDDSUSERDllExport DDS_BuildModelMessage {
          public:
            DDS_BuildModelMessage();

            DDS_BuildModelMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const std::string& RequestId,
                const WorldPerceptionModel::BuildModel::WPS_BuildModelData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_BuildModelMessage (DDS_BuildModelMessage&&) = default;
            DDS_BuildModelMessage& operator=(DDS_BuildModelMessage&&) = default;
            DDS_BuildModelMessage& operator=(const DDS_BuildModelMessage&) = default;
            DDS_BuildModelMessage(const DDS_BuildModelMessage&) = default;
            #else
            DDS_BuildModelMessage(DDS_BuildModelMessage&& other_) OMG_NOEXCEPT;  
            DDS_BuildModelMessage& operator=(DDS_BuildModelMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            DDS_GRI::DDSCommon::DDS_Identifier& SourceId() OMG_NOEXCEPT {
                return m_SourceId_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId() const OMG_NOEXCEPT {
                return m_SourceId_;
            }

            void SourceId(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_SourceId_ = value;
            }

            DDS_GRI::DDSCommon::DDS_Identifier& DestinationId() OMG_NOEXCEPT {
                return m_DestinationId_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId() const OMG_NOEXCEPT {
                return m_DestinationId_;
            }

            void DestinationId(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_DestinationId_ = value;
            }

            std::string& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const std::string& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(const std::string& value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::BuildModel::WPS_BuildModelData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const WorldPerceptionModel::BuildModel::WPS_BuildModelData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const WorldPerceptionModel::BuildModel::WPS_BuildModelData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_BuildModelMessage& other_) const;
            bool operator != (const DDS_BuildModelMessage& other_) const;

            void swap(DDS_BuildModelMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            std::string m_RequestId_;
            WorldPerceptionModel::BuildModel::WPS_BuildModelData m_Data_;

        };

        inline void swap(DDS_BuildModelMessage& a, DDS_BuildModelMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_BuildModelMessage& sample);

        struct WPS_BuildModelStatusEnum_def {
            enum type {
                Idle,      
                InProgess,      
                Aborted,      
                Completed     
            };
            static type get_default(){ return Idle;}
        };

        typedef ::dds::core::safe_enum< WPS_BuildModelStatusEnum_def > WPS_BuildModelStatusEnum;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_BuildModelStatusEnum& sample);

        class NDDSUSERDllExport DDS_BuildModelReportMessage {
          public:
            DDS_BuildModelReportMessage();

            DDS_BuildModelReportMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus,
                int32_t ModelQuality);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_BuildModelReportMessage (DDS_BuildModelReportMessage&&) = default;
            DDS_BuildModelReportMessage& operator=(DDS_BuildModelReportMessage&&) = default;
            DDS_BuildModelReportMessage& operator=(const DDS_BuildModelReportMessage&) = default;
            DDS_BuildModelReportMessage(const DDS_BuildModelReportMessage&) = default;
            #else
            DDS_BuildModelReportMessage(DDS_BuildModelReportMessage&& other_) OMG_NOEXCEPT;  
            DDS_BuildModelReportMessage& operator=(DDS_BuildModelReportMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            DDS_GRI::DDSCommon::DDS_Identifier& SourceId() OMG_NOEXCEPT {
                return m_SourceId_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId() const OMG_NOEXCEPT {
                return m_SourceId_;
            }

            void SourceId(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_SourceId_ = value;
            }

            DDS_GRI::DDSCommon::DDS_Identifier& DestinationId() OMG_NOEXCEPT {
                return m_DestinationId_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId() const OMG_NOEXCEPT {
                return m_DestinationId_;
            }

            void DestinationId(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_DestinationId_ = value;
            }

            WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus() OMG_NOEXCEPT {
                return m_BuildModelStatus_;
            }

            const WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus() const OMG_NOEXCEPT {
                return m_BuildModelStatus_;
            }

            void BuildModelStatus(const WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum& value) {
                m_BuildModelStatus_ = value;
            }

            int32_t& ModelQuality() OMG_NOEXCEPT {
                return m_ModelQuality_;
            }

            const int32_t& ModelQuality() const OMG_NOEXCEPT {
                return m_ModelQuality_;
            }

            void ModelQuality(int32_t value) {
                m_ModelQuality_ = value;
            }

            bool operator == (const DDS_BuildModelReportMessage& other_) const;
            bool operator != (const DDS_BuildModelReportMessage& other_) const;

            void swap(DDS_BuildModelReportMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum m_BuildModelStatus_;
            int32_t m_ModelQuality_;

        };

        inline void swap(DDS_BuildModelReportMessage& a, DDS_BuildModelReportMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_BuildModelReportMessage& sample);

    } // namespace BuildModel  
} // namespace WorldPerceptionModel  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< WorldPerceptionModel::BuildModel::Test_Data > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::BuildModel::Test_Data";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::BuildModel::Test_Data > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::BuildModel::Test_Data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::BuildModel::Test_Data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::BuildModel::WPS_BuildModelParameters";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelParameters& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::BuildModel::WPS_BuildModelData > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::BuildModel::WPS_BuildModelData";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::BuildModel::WPS_BuildModelData > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::BuildModel::WPS_BuildModelData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::BuildModel::DDS_BuildModelMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::Test_Data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::Test_Data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::RegionOfInterest_type_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::WPS_BuildModelParameters > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::WPS_BuildModelOperation_type > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::WPS_BuildModelData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::DDS_BuildModelMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::WPS_BuildModelStatusEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::BuildModel::DDS_BuildModelReportMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // buildmodel_1709726144_hpp

