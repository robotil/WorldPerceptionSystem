

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WPSFull.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WPSFull_1442533129_hpp
#define WPSFull_1442533129_hpp

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

namespace WorldPerceptionModel {

    static const int32_t MAX_POINTS_IN_REGION_OF_INTEREST = 10;

    class NDDSUSERDllExport WPS_TDPoint {
      public:
        WPS_TDPoint();

        WPS_TDPoint(
            double x,
            double y,
            double z);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_TDPoint (WPS_TDPoint&&) = default;
        WPS_TDPoint& operator=(WPS_TDPoint&&) = default;
        WPS_TDPoint& operator=(const WPS_TDPoint&) = default;
        WPS_TDPoint(const WPS_TDPoint&) = default;
        #else
        WPS_TDPoint(WPS_TDPoint&& other_) OMG_NOEXCEPT;  
        WPS_TDPoint& operator=(WPS_TDPoint&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double& x() OMG_NOEXCEPT {
            return m_x_;
        }

        const double& x() const OMG_NOEXCEPT {
            return m_x_;
        }

        void x(double value) {
            m_x_ = value;
        }

        double& y() OMG_NOEXCEPT {
            return m_y_;
        }

        const double& y() const OMG_NOEXCEPT {
            return m_y_;
        }

        void y(double value) {
            m_y_ = value;
        }

        double& z() OMG_NOEXCEPT {
            return m_z_;
        }

        const double& z() const OMG_NOEXCEPT {
            return m_z_;
        }

        void z(double value) {
            m_z_ = value;
        }

        bool operator == (const WPS_TDPoint& other_) const;
        bool operator != (const WPS_TDPoint& other_) const;

        void swap(WPS_TDPoint& other_) OMG_NOEXCEPT ;

      private:

        double m_x_;
        double m_y_;
        double m_z_;

    };

    inline void swap(WPS_TDPoint& a, WPS_TDPoint& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_TDPoint& sample);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    // On Windows, dll-export template instantiations of standard types used by
    // other dll-exported types
    template class NDDSUSERDllExport std::allocator< WorldPerceptionModel::WPS_TDPoint >;
    template class NDDSUSERDllExport std::vector< WorldPerceptionModel::WPS_TDPoint >;
    #endif
    typedef ::rti::core::bounded_sequence< WorldPerceptionModel::WPS_TDPoint, (WorldPerceptionModel::MAX_POINTS_IN_REGION_OF_INTEREST) > RegionOfInterest_type;
    struct RegionOfInterest_type_AliasTag_t {};
    namespace WPS_BuildModel {

        class NDDSUSERDllExport WPS_BuildModelParameters {
          public:
            WPS_BuildModelParameters();

            WPS_BuildModelParameters(
                const std::string& PathToFolder,
                const WorldPerceptionModel::RegionOfInterest_type& region_of_interest);

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

            WorldPerceptionModel::RegionOfInterest_type& region_of_interest() OMG_NOEXCEPT {
                return m_region_of_interest_;
            }

            const WorldPerceptionModel::RegionOfInterest_type& region_of_interest() const OMG_NOEXCEPT {
                return m_region_of_interest_;
            }

            void region_of_interest(const WorldPerceptionModel::RegionOfInterest_type& value) {
                m_region_of_interest_ = value;
            }

            bool operator == (const WPS_BuildModelParameters& other_) const;
            bool operator != (const WPS_BuildModelParameters& other_) const;

            void swap(WPS_BuildModelParameters& other_) OMG_NOEXCEPT ;

          private:

            std::string m_PathToFolder_;
            WorldPerceptionModel::RegionOfInterest_type m_region_of_interest_;

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
                const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type& request,
                const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& parameters);

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

            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type& request() OMG_NOEXCEPT {
                return m_request_;
            }

            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type& request() const OMG_NOEXCEPT {
                return m_request_;
            }

            void request(const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type& value) {
                m_request_ = value;
            }

            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& parameters() OMG_NOEXCEPT {
                return m_parameters_;
            }

            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& parameters() const OMG_NOEXCEPT {
                return m_parameters_;
            }

            void parameters(const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& value) {
                m_parameters_ = value;
            }

            bool operator == (const WPS_BuildModelData& other_) const;
            bool operator != (const WPS_BuildModelData& other_) const;

            void swap(WPS_BuildModelData& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type m_request_;
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters m_parameters_;

        };

        inline void swap(WPS_BuildModelData& a, WPS_BuildModelData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_BuildModelData& sample);

        class NDDSUSERDllExport WPS_BuildModelMessage {
          public:
            WPS_BuildModelMessage();

            WPS_BuildModelMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_BuildModelMessage (WPS_BuildModelMessage&&) = default;
            WPS_BuildModelMessage& operator=(WPS_BuildModelMessage&&) = default;
            WPS_BuildModelMessage& operator=(const WPS_BuildModelMessage&) = default;
            WPS_BuildModelMessage(const WPS_BuildModelMessage&) = default;
            #else
            WPS_BuildModelMessage(WPS_BuildModelMessage&& other_) OMG_NOEXCEPT;  
            WPS_BuildModelMessage& operator=(WPS_BuildModelMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& value) {
                m_Data_ = value;
            }

            bool operator == (const WPS_BuildModelMessage& other_) const;
            bool operator != (const WPS_BuildModelMessage& other_) const;

            void swap(WPS_BuildModelMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData m_Data_;

        };

        inline void swap(WPS_BuildModelMessage& a, WPS_BuildModelMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_BuildModelMessage& sample);

        struct WPS_BuildModelStatusEnum_def {
            enum type {
                Idle,      
                InProgess,      
                Aborted,      
                Completed,      
                Failure     
            };
            static type get_default(){ return Idle;}
        };

        typedef ::dds::core::safe_enum< WPS_BuildModelStatusEnum_def > WPS_BuildModelStatusEnum;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_BuildModelStatusEnum& sample);

        class NDDSUSERDllExport WPS_BuildModelReportMessage {
          public:
            WPS_BuildModelReportMessage();

            WPS_BuildModelReportMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus,
                int32_t ModelQuality);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_BuildModelReportMessage (WPS_BuildModelReportMessage&&) = default;
            WPS_BuildModelReportMessage& operator=(WPS_BuildModelReportMessage&&) = default;
            WPS_BuildModelReportMessage& operator=(const WPS_BuildModelReportMessage&) = default;
            WPS_BuildModelReportMessage(const WPS_BuildModelReportMessage&) = default;
            #else
            WPS_BuildModelReportMessage(WPS_BuildModelReportMessage&& other_) OMG_NOEXCEPT;  
            WPS_BuildModelReportMessage& operator=(WPS_BuildModelReportMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus() OMG_NOEXCEPT {
                return m_BuildModelStatus_;
            }

            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus() const OMG_NOEXCEPT {
                return m_BuildModelStatus_;
            }

            void BuildModelStatus(const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum& value) {
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

            bool operator == (const WPS_BuildModelReportMessage& other_) const;
            bool operator != (const WPS_BuildModelReportMessage& other_) const;

            void swap(WPS_BuildModelReportMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum m_BuildModelStatus_;
            int32_t m_ModelQuality_;

        };

        inline void swap(WPS_BuildModelReportMessage& a, WPS_BuildModelReportMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_BuildModelReportMessage& sample);

    } // namespace WPS_BuildModel  
    namespace WPS_DroneLocalizationReporting {

        class NDDSUSERDllExport WPS_DroneLocalizationParameters {
          public:
            WPS_DroneLocalizationParameters();

            WPS_DroneLocalizationParameters(
                const std::string& PathToFolder,
                const std::string& LiveVideoURL);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_DroneLocalizationParameters (WPS_DroneLocalizationParameters&&) = default;
            WPS_DroneLocalizationParameters& operator=(WPS_DroneLocalizationParameters&&) = default;
            WPS_DroneLocalizationParameters& operator=(const WPS_DroneLocalizationParameters&) = default;
            WPS_DroneLocalizationParameters(const WPS_DroneLocalizationParameters&) = default;
            #else
            WPS_DroneLocalizationParameters(WPS_DroneLocalizationParameters&& other_) OMG_NOEXCEPT;  
            WPS_DroneLocalizationParameters& operator=(WPS_DroneLocalizationParameters&&  other_) OMG_NOEXCEPT;
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

            std::string& LiveVideoURL() OMG_NOEXCEPT {
                return m_LiveVideoURL_;
            }

            const std::string& LiveVideoURL() const OMG_NOEXCEPT {
                return m_LiveVideoURL_;
            }

            void LiveVideoURL(const std::string& value) {
                m_LiveVideoURL_ = value;
            }

            bool operator == (const WPS_DroneLocalizationParameters& other_) const;
            bool operator != (const WPS_DroneLocalizationParameters& other_) const;

            void swap(WPS_DroneLocalizationParameters& other_) OMG_NOEXCEPT ;

          private:

            std::string m_PathToFolder_;
            std::string m_LiveVideoURL_;

        };

        inline void swap(WPS_DroneLocalizationParameters& a, WPS_DroneLocalizationParameters& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_DroneLocalizationParameters& sample);

        struct WPS_DroneLocalizationOperation_type_def {
            enum type {
                ReportDroneLocalization,      
                AbortDroneLocalization     
            };
            static type get_default(){ return ReportDroneLocalization;}
        };

        typedef ::dds::core::safe_enum< WPS_DroneLocalizationOperation_type_def > WPS_DroneLocalizationOperation_type;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationOperation_type& sample);

        class NDDSUSERDllExport WPS_DroneLocalizationData {
          public:
            WPS_DroneLocalizationData();

            WPS_DroneLocalizationData(
                const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type& request,
                const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& parameters);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_DroneLocalizationData (WPS_DroneLocalizationData&&) = default;
            WPS_DroneLocalizationData& operator=(WPS_DroneLocalizationData&&) = default;
            WPS_DroneLocalizationData& operator=(const WPS_DroneLocalizationData&) = default;
            WPS_DroneLocalizationData(const WPS_DroneLocalizationData&) = default;
            #else
            WPS_DroneLocalizationData(WPS_DroneLocalizationData&& other_) OMG_NOEXCEPT;  
            WPS_DroneLocalizationData& operator=(WPS_DroneLocalizationData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type& request() OMG_NOEXCEPT {
                return m_request_;
            }

            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type& request() const OMG_NOEXCEPT {
                return m_request_;
            }

            void request(const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type& value) {
                m_request_ = value;
            }

            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& parameters() OMG_NOEXCEPT {
                return m_parameters_;
            }

            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& parameters() const OMG_NOEXCEPT {
                return m_parameters_;
            }

            void parameters(const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& value) {
                m_parameters_ = value;
            }

            bool operator == (const WPS_DroneLocalizationData& other_) const;
            bool operator != (const WPS_DroneLocalizationData& other_) const;

            void swap(WPS_DroneLocalizationData& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type m_request_;
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters m_parameters_;

        };

        inline void swap(WPS_DroneLocalizationData& a, WPS_DroneLocalizationData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_DroneLocalizationData& sample);

        class NDDSUSERDllExport WPS_DroneLocalizationMessage {
          public:
            WPS_DroneLocalizationMessage();

            WPS_DroneLocalizationMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_DroneLocalizationMessage (WPS_DroneLocalizationMessage&&) = default;
            WPS_DroneLocalizationMessage& operator=(WPS_DroneLocalizationMessage&&) = default;
            WPS_DroneLocalizationMessage& operator=(const WPS_DroneLocalizationMessage&) = default;
            WPS_DroneLocalizationMessage(const WPS_DroneLocalizationMessage&) = default;
            #else
            WPS_DroneLocalizationMessage(WPS_DroneLocalizationMessage&& other_) OMG_NOEXCEPT;  
            WPS_DroneLocalizationMessage& operator=(WPS_DroneLocalizationMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& value) {
                m_Data_ = value;
            }

            bool operator == (const WPS_DroneLocalizationMessage& other_) const;
            bool operator != (const WPS_DroneLocalizationMessage& other_) const;

            void swap(WPS_DroneLocalizationMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData m_Data_;

        };

        inline void swap(WPS_DroneLocalizationMessage& a, WPS_DroneLocalizationMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_DroneLocalizationMessage& sample);

        struct WPS_DroneLocalizationStatusEnum_def {
            enum type {
                Idle,      
                Reporting     
            };
            static type get_default(){ return Idle;}
        };

        typedef ::dds::core::safe_enum< WPS_DroneLocalizationStatusEnum_def > WPS_DroneLocalizationStatusEnum;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationStatusEnum& sample);

        class NDDSUSERDllExport WPS_DroneLocalizationReportMessage {
          public:
            WPS_DroneLocalizationReportMessage();

            WPS_DroneLocalizationReportMessage(
                const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum& DroneLocalizationStatus,
                bool docked);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_DroneLocalizationReportMessage (WPS_DroneLocalizationReportMessage&&) = default;
            WPS_DroneLocalizationReportMessage& operator=(WPS_DroneLocalizationReportMessage&&) = default;
            WPS_DroneLocalizationReportMessage& operator=(const WPS_DroneLocalizationReportMessage&) = default;
            WPS_DroneLocalizationReportMessage(const WPS_DroneLocalizationReportMessage&) = default;
            #else
            WPS_DroneLocalizationReportMessage(WPS_DroneLocalizationReportMessage&& other_) OMG_NOEXCEPT;  
            WPS_DroneLocalizationReportMessage& operator=(WPS_DroneLocalizationReportMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum& DroneLocalizationStatus() OMG_NOEXCEPT {
                return m_DroneLocalizationStatus_;
            }

            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum& DroneLocalizationStatus() const OMG_NOEXCEPT {
                return m_DroneLocalizationStatus_;
            }

            void DroneLocalizationStatus(const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum& value) {
                m_DroneLocalizationStatus_ = value;
            }

            bool& docked() OMG_NOEXCEPT {
                return m_docked_;
            }

            const bool& docked() const OMG_NOEXCEPT {
                return m_docked_;
            }

            void docked(bool value) {
                m_docked_ = value;
            }

            bool operator == (const WPS_DroneLocalizationReportMessage& other_) const;
            bool operator != (const WPS_DroneLocalizationReportMessage& other_) const;

            void swap(WPS_DroneLocalizationReportMessage& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum m_DroneLocalizationStatus_;
            bool m_docked_;

        };

        inline void swap(WPS_DroneLocalizationReportMessage& a, WPS_DroneLocalizationReportMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_DroneLocalizationReportMessage& sample);

    } // namespace WPS_DroneLocalizationReporting  
    namespace WPS_UTMVehicleLocalizationReporting {

        static const int32_t MAX_LINKED_FRAMES = 10;

        typedef ::rti::core::bounded_sequence< WorldPerceptionModel::WPS_TDPoint, (WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::MAX_LINKED_FRAMES) > RelevantLinkedFrames_type;
        struct RelevantLinkedFrames_type_AliasTag_t {};

        class NDDSUSERDllExport WPS_PositionOrientation {
          public:
            WPS_PositionOrientation();

            WPS_PositionOrientation(
                double x,
                double y,
                double z,
                double pitch,
                double roll,
                double yaw);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_PositionOrientation (WPS_PositionOrientation&&) = default;
            WPS_PositionOrientation& operator=(WPS_PositionOrientation&&) = default;
            WPS_PositionOrientation& operator=(const WPS_PositionOrientation&) = default;
            WPS_PositionOrientation(const WPS_PositionOrientation&) = default;
            #else
            WPS_PositionOrientation(WPS_PositionOrientation&& other_) OMG_NOEXCEPT;  
            WPS_PositionOrientation& operator=(WPS_PositionOrientation&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            double& x() OMG_NOEXCEPT {
                return m_x_;
            }

            const double& x() const OMG_NOEXCEPT {
                return m_x_;
            }

            void x(double value) {
                m_x_ = value;
            }

            double& y() OMG_NOEXCEPT {
                return m_y_;
            }

            const double& y() const OMG_NOEXCEPT {
                return m_y_;
            }

            void y(double value) {
                m_y_ = value;
            }

            double& z() OMG_NOEXCEPT {
                return m_z_;
            }

            const double& z() const OMG_NOEXCEPT {
                return m_z_;
            }

            void z(double value) {
                m_z_ = value;
            }

            double& pitch() OMG_NOEXCEPT {
                return m_pitch_;
            }

            const double& pitch() const OMG_NOEXCEPT {
                return m_pitch_;
            }

            void pitch(double value) {
                m_pitch_ = value;
            }

            double& roll() OMG_NOEXCEPT {
                return m_roll_;
            }

            const double& roll() const OMG_NOEXCEPT {
                return m_roll_;
            }

            void roll(double value) {
                m_roll_ = value;
            }

            double& yaw() OMG_NOEXCEPT {
                return m_yaw_;
            }

            const double& yaw() const OMG_NOEXCEPT {
                return m_yaw_;
            }

            void yaw(double value) {
                m_yaw_ = value;
            }

            bool operator == (const WPS_PositionOrientation& other_) const;
            bool operator != (const WPS_PositionOrientation& other_) const;

            void swap(WPS_PositionOrientation& other_) OMG_NOEXCEPT ;

          private:

            double m_x_;
            double m_y_;
            double m_z_;
            double m_pitch_;
            double m_roll_;
            double m_yaw_;

        };

        inline void swap(WPS_PositionOrientation& a, WPS_PositionOrientation& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_PositionOrientation& sample);

        class NDDSUSERDllExport WPS_UTMVehicleLocalizationParameters {
          public:
            WPS_UTMVehicleLocalizationParameters();

            WPS_UTMVehicleLocalizationParameters(
                const std::string& PathToFolder,
                const std::string& LiveVideoURL);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_UTMVehicleLocalizationParameters (WPS_UTMVehicleLocalizationParameters&&) = default;
            WPS_UTMVehicleLocalizationParameters& operator=(WPS_UTMVehicleLocalizationParameters&&) = default;
            WPS_UTMVehicleLocalizationParameters& operator=(const WPS_UTMVehicleLocalizationParameters&) = default;
            WPS_UTMVehicleLocalizationParameters(const WPS_UTMVehicleLocalizationParameters&) = default;
            #else
            WPS_UTMVehicleLocalizationParameters(WPS_UTMVehicleLocalizationParameters&& other_) OMG_NOEXCEPT;  
            WPS_UTMVehicleLocalizationParameters& operator=(WPS_UTMVehicleLocalizationParameters&&  other_) OMG_NOEXCEPT;
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

            std::string& LiveVideoURL() OMG_NOEXCEPT {
                return m_LiveVideoURL_;
            }

            const std::string& LiveVideoURL() const OMG_NOEXCEPT {
                return m_LiveVideoURL_;
            }

            void LiveVideoURL(const std::string& value) {
                m_LiveVideoURL_ = value;
            }

            bool operator == (const WPS_UTMVehicleLocalizationParameters& other_) const;
            bool operator != (const WPS_UTMVehicleLocalizationParameters& other_) const;

            void swap(WPS_UTMVehicleLocalizationParameters& other_) OMG_NOEXCEPT ;

          private:

            std::string m_PathToFolder_;
            std::string m_LiveVideoURL_;

        };

        inline void swap(WPS_UTMVehicleLocalizationParameters& a, WPS_UTMVehicleLocalizationParameters& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_UTMVehicleLocalizationParameters& sample);

        struct WPS_UTMVehicleLocalizationOperation_type_def {
            enum type {
                ReportUTMCenterFrameLocalization,      
                ReportVehicleOrientation,      
                AbortAllReporting     
            };
            static type get_default(){ return ReportUTMCenterFrameLocalization;}
        };

        typedef ::dds::core::safe_enum< WPS_UTMVehicleLocalizationOperation_type_def > WPS_UTMVehicleLocalizationOperation_type;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationOperation_type& sample);

        class NDDSUSERDllExport WPS_UTMVehicleLocalizationData {
          public:
            WPS_UTMVehicleLocalizationData();

            WPS_UTMVehicleLocalizationData(
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type& request,
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& parameters);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_UTMVehicleLocalizationData (WPS_UTMVehicleLocalizationData&&) = default;
            WPS_UTMVehicleLocalizationData& operator=(WPS_UTMVehicleLocalizationData&&) = default;
            WPS_UTMVehicleLocalizationData& operator=(const WPS_UTMVehicleLocalizationData&) = default;
            WPS_UTMVehicleLocalizationData(const WPS_UTMVehicleLocalizationData&) = default;
            #else
            WPS_UTMVehicleLocalizationData(WPS_UTMVehicleLocalizationData&& other_) OMG_NOEXCEPT;  
            WPS_UTMVehicleLocalizationData& operator=(WPS_UTMVehicleLocalizationData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type& request() OMG_NOEXCEPT {
                return m_request_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type& request() const OMG_NOEXCEPT {
                return m_request_;
            }

            void request(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type& value) {
                m_request_ = value;
            }

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& parameters() OMG_NOEXCEPT {
                return m_parameters_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& parameters() const OMG_NOEXCEPT {
                return m_parameters_;
            }

            void parameters(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& value) {
                m_parameters_ = value;
            }

            bool operator == (const WPS_UTMVehicleLocalizationData& other_) const;
            bool operator != (const WPS_UTMVehicleLocalizationData& other_) const;

            void swap(WPS_UTMVehicleLocalizationData& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type m_request_;
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters m_parameters_;

        };

        inline void swap(WPS_UTMVehicleLocalizationData& a, WPS_UTMVehicleLocalizationData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_UTMVehicleLocalizationData& sample);

        class NDDSUSERDllExport WPS_UTMVehicleLocalizationMessage {
          public:
            WPS_UTMVehicleLocalizationMessage();

            WPS_UTMVehicleLocalizationMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_UTMVehicleLocalizationMessage (WPS_UTMVehicleLocalizationMessage&&) = default;
            WPS_UTMVehicleLocalizationMessage& operator=(WPS_UTMVehicleLocalizationMessage&&) = default;
            WPS_UTMVehicleLocalizationMessage& operator=(const WPS_UTMVehicleLocalizationMessage&) = default;
            WPS_UTMVehicleLocalizationMessage(const WPS_UTMVehicleLocalizationMessage&) = default;
            #else
            WPS_UTMVehicleLocalizationMessage(WPS_UTMVehicleLocalizationMessage&& other_) OMG_NOEXCEPT;  
            WPS_UTMVehicleLocalizationMessage& operator=(WPS_UTMVehicleLocalizationMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& value) {
                m_Data_ = value;
            }

            bool operator == (const WPS_UTMVehicleLocalizationMessage& other_) const;
            bool operator != (const WPS_UTMVehicleLocalizationMessage& other_) const;

            void swap(WPS_UTMVehicleLocalizationMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData m_Data_;

        };

        inline void swap(WPS_UTMVehicleLocalizationMessage& a, WPS_UTMVehicleLocalizationMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_UTMVehicleLocalizationMessage& sample);

        struct WPS_UTMVehicleLocalizationStatusEnum_def {
            enum type {
                Idle,      
                Reporting     
            };
            static type get_default(){ return Idle;}
        };

        typedef ::dds::core::safe_enum< WPS_UTMVehicleLocalizationStatusEnum_def > WPS_UTMVehicleLocalizationStatusEnum;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationStatusEnum& sample);

        class NDDSUSERDllExport WPS_UTMVehicleLocalizationReportData {
          public:
            WPS_UTMVehicleLocalizationReportData();

            WPS_UTMVehicleLocalizationReportData(
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum& UTMVehicleLocalizationStatus,
                bool docked,
                const WorldPerceptionModel::WPS_TDPoint& UTMCenterFrame,
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& VehiclePosOrient,
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type& RelevantFrames);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_UTMVehicleLocalizationReportData (WPS_UTMVehicleLocalizationReportData&&) = default;
            WPS_UTMVehicleLocalizationReportData& operator=(WPS_UTMVehicleLocalizationReportData&&) = default;
            WPS_UTMVehicleLocalizationReportData& operator=(const WPS_UTMVehicleLocalizationReportData&) = default;
            WPS_UTMVehicleLocalizationReportData(const WPS_UTMVehicleLocalizationReportData&) = default;
            #else
            WPS_UTMVehicleLocalizationReportData(WPS_UTMVehicleLocalizationReportData&& other_) OMG_NOEXCEPT;  
            WPS_UTMVehicleLocalizationReportData& operator=(WPS_UTMVehicleLocalizationReportData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum& UTMVehicleLocalizationStatus() OMG_NOEXCEPT {
                return m_UTMVehicleLocalizationStatus_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum& UTMVehicleLocalizationStatus() const OMG_NOEXCEPT {
                return m_UTMVehicleLocalizationStatus_;
            }

            void UTMVehicleLocalizationStatus(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum& value) {
                m_UTMVehicleLocalizationStatus_ = value;
            }

            bool& docked() OMG_NOEXCEPT {
                return m_docked_;
            }

            const bool& docked() const OMG_NOEXCEPT {
                return m_docked_;
            }

            void docked(bool value) {
                m_docked_ = value;
            }

            WorldPerceptionModel::WPS_TDPoint& UTMCenterFrame() OMG_NOEXCEPT {
                return m_UTMCenterFrame_;
            }

            const WorldPerceptionModel::WPS_TDPoint& UTMCenterFrame() const OMG_NOEXCEPT {
                return m_UTMCenterFrame_;
            }

            void UTMCenterFrame(const WorldPerceptionModel::WPS_TDPoint& value) {
                m_UTMCenterFrame_ = value;
            }

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& VehiclePosOrient() OMG_NOEXCEPT {
                return m_VehiclePosOrient_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& VehiclePosOrient() const OMG_NOEXCEPT {
                return m_VehiclePosOrient_;
            }

            void VehiclePosOrient(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& value) {
                m_VehiclePosOrient_ = value;
            }

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type& RelevantFrames() OMG_NOEXCEPT {
                return m_RelevantFrames_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type& RelevantFrames() const OMG_NOEXCEPT {
                return m_RelevantFrames_;
            }

            void RelevantFrames(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type& value) {
                m_RelevantFrames_ = value;
            }

            bool operator == (const WPS_UTMVehicleLocalizationReportData& other_) const;
            bool operator != (const WPS_UTMVehicleLocalizationReportData& other_) const;

            void swap(WPS_UTMVehicleLocalizationReportData& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum m_UTMVehicleLocalizationStatus_;
            bool m_docked_;
            WorldPerceptionModel::WPS_TDPoint m_UTMCenterFrame_;
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation m_VehiclePosOrient_;
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type m_RelevantFrames_;

        };

        inline void swap(WPS_UTMVehicleLocalizationReportData& a, WPS_UTMVehicleLocalizationReportData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_UTMVehicleLocalizationReportData& sample);

        class NDDSUSERDllExport WPS_UTMVehicleLocalizationReportMessage {
          public:
            WPS_UTMVehicleLocalizationReportMessage();

            WPS_UTMVehicleLocalizationReportMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_UTMVehicleLocalizationReportMessage (WPS_UTMVehicleLocalizationReportMessage&&) = default;
            WPS_UTMVehicleLocalizationReportMessage& operator=(WPS_UTMVehicleLocalizationReportMessage&&) = default;
            WPS_UTMVehicleLocalizationReportMessage& operator=(const WPS_UTMVehicleLocalizationReportMessage&) = default;
            WPS_UTMVehicleLocalizationReportMessage(const WPS_UTMVehicleLocalizationReportMessage&) = default;
            #else
            WPS_UTMVehicleLocalizationReportMessage(WPS_UTMVehicleLocalizationReportMessage&& other_) OMG_NOEXCEPT;  
            WPS_UTMVehicleLocalizationReportMessage& operator=(WPS_UTMVehicleLocalizationReportMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& value) {
                m_Data_ = value;
            }

            bool operator == (const WPS_UTMVehicleLocalizationReportMessage& other_) const;
            bool operator != (const WPS_UTMVehicleLocalizationReportMessage& other_) const;

            void swap(WPS_UTMVehicleLocalizationReportMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData m_Data_;

        };

        inline void swap(WPS_UTMVehicleLocalizationReportMessage& a, WPS_UTMVehicleLocalizationReportMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_UTMVehicleLocalizationReportMessage& sample);

    } // namespace WPS_UTMVehicleLocalizationReporting  
    namespace WPS_ModelDifferences {

        class NDDSUSERDllExport WPS_ModelDifferencesParameters {
          public:
            WPS_ModelDifferencesParameters();

            WPS_ModelDifferencesParameters(
                const std::string& PathToFolder_Old,
                const std::string& PathToFolder_New,
                const WorldPerceptionModel::RegionOfInterest_type& region_of_interest);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_ModelDifferencesParameters (WPS_ModelDifferencesParameters&&) = default;
            WPS_ModelDifferencesParameters& operator=(WPS_ModelDifferencesParameters&&) = default;
            WPS_ModelDifferencesParameters& operator=(const WPS_ModelDifferencesParameters&) = default;
            WPS_ModelDifferencesParameters(const WPS_ModelDifferencesParameters&) = default;
            #else
            WPS_ModelDifferencesParameters(WPS_ModelDifferencesParameters&& other_) OMG_NOEXCEPT;  
            WPS_ModelDifferencesParameters& operator=(WPS_ModelDifferencesParameters&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& PathToFolder_Old() OMG_NOEXCEPT {
                return m_PathToFolder_Old_;
            }

            const std::string& PathToFolder_Old() const OMG_NOEXCEPT {
                return m_PathToFolder_Old_;
            }

            void PathToFolder_Old(const std::string& value) {
                m_PathToFolder_Old_ = value;
            }

            std::string& PathToFolder_New() OMG_NOEXCEPT {
                return m_PathToFolder_New_;
            }

            const std::string& PathToFolder_New() const OMG_NOEXCEPT {
                return m_PathToFolder_New_;
            }

            void PathToFolder_New(const std::string& value) {
                m_PathToFolder_New_ = value;
            }

            WorldPerceptionModel::RegionOfInterest_type& region_of_interest() OMG_NOEXCEPT {
                return m_region_of_interest_;
            }

            const WorldPerceptionModel::RegionOfInterest_type& region_of_interest() const OMG_NOEXCEPT {
                return m_region_of_interest_;
            }

            void region_of_interest(const WorldPerceptionModel::RegionOfInterest_type& value) {
                m_region_of_interest_ = value;
            }

            bool operator == (const WPS_ModelDifferencesParameters& other_) const;
            bool operator != (const WPS_ModelDifferencesParameters& other_) const;

            void swap(WPS_ModelDifferencesParameters& other_) OMG_NOEXCEPT ;

          private:

            std::string m_PathToFolder_Old_;
            std::string m_PathToFolder_New_;
            WorldPerceptionModel::RegionOfInterest_type m_region_of_interest_;

        };

        inline void swap(WPS_ModelDifferencesParameters& a, WPS_ModelDifferencesParameters& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_ModelDifferencesParameters& sample);

        struct WPS_ModelDifferencesOperation_type_def {
            enum type {
                CheckModelDifferences,      
                AbortCheckModel     
            };
            static type get_default(){ return CheckModelDifferences;}
        };

        typedef ::dds::core::safe_enum< WPS_ModelDifferencesOperation_type_def > WPS_ModelDifferencesOperation_type;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesOperation_type& sample);

        class NDDSUSERDllExport WPS_ModelDifferencesData {
          public:
            WPS_ModelDifferencesData();

            WPS_ModelDifferencesData(
                const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type& request,
                const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& parameters);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_ModelDifferencesData (WPS_ModelDifferencesData&&) = default;
            WPS_ModelDifferencesData& operator=(WPS_ModelDifferencesData&&) = default;
            WPS_ModelDifferencesData& operator=(const WPS_ModelDifferencesData&) = default;
            WPS_ModelDifferencesData(const WPS_ModelDifferencesData&) = default;
            #else
            WPS_ModelDifferencesData(WPS_ModelDifferencesData&& other_) OMG_NOEXCEPT;  
            WPS_ModelDifferencesData& operator=(WPS_ModelDifferencesData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type& request() OMG_NOEXCEPT {
                return m_request_;
            }

            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type& request() const OMG_NOEXCEPT {
                return m_request_;
            }

            void request(const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type& value) {
                m_request_ = value;
            }

            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& parameters() OMG_NOEXCEPT {
                return m_parameters_;
            }

            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& parameters() const OMG_NOEXCEPT {
                return m_parameters_;
            }

            void parameters(const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& value) {
                m_parameters_ = value;
            }

            bool operator == (const WPS_ModelDifferencesData& other_) const;
            bool operator != (const WPS_ModelDifferencesData& other_) const;

            void swap(WPS_ModelDifferencesData& other_) OMG_NOEXCEPT ;

          private:

            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type m_request_;
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters m_parameters_;

        };

        inline void swap(WPS_ModelDifferencesData& a, WPS_ModelDifferencesData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_ModelDifferencesData& sample);

        class NDDSUSERDllExport WPS_ModelDifferencesMessage {
          public:
            WPS_ModelDifferencesMessage();

            WPS_ModelDifferencesMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_ModelDifferencesMessage (WPS_ModelDifferencesMessage&&) = default;
            WPS_ModelDifferencesMessage& operator=(WPS_ModelDifferencesMessage&&) = default;
            WPS_ModelDifferencesMessage& operator=(const WPS_ModelDifferencesMessage&) = default;
            WPS_ModelDifferencesMessage(const WPS_ModelDifferencesMessage&) = default;
            #else
            WPS_ModelDifferencesMessage(WPS_ModelDifferencesMessage&& other_) OMG_NOEXCEPT;  
            WPS_ModelDifferencesMessage& operator=(WPS_ModelDifferencesMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& value) {
                m_Data_ = value;
            }

            bool operator == (const WPS_ModelDifferencesMessage& other_) const;
            bool operator != (const WPS_ModelDifferencesMessage& other_) const;

            void swap(WPS_ModelDifferencesMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData m_Data_;

        };

        inline void swap(WPS_ModelDifferencesMessage& a, WPS_ModelDifferencesMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_ModelDifferencesMessage& sample);

        struct WPS_ModelDifferencesStatusEnum_def {
            enum type {
                Idle,      
                InProgess,      
                Aborted,      
                Completed     
            };
            static type get_default(){ return Idle;}
        };

        typedef ::dds::core::safe_enum< WPS_ModelDifferencesStatusEnum_def > WPS_ModelDifferencesStatusEnum;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesStatusEnum& sample);

        class NDDSUSERDllExport WPS_ModelDifferencesReportMessage {
          public:
            WPS_ModelDifferencesReportMessage();

            WPS_ModelDifferencesReportMessage(
                int32_t RequestId,
                const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum& ModelDifferencesStatus);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WPS_ModelDifferencesReportMessage (WPS_ModelDifferencesReportMessage&&) = default;
            WPS_ModelDifferencesReportMessage& operator=(WPS_ModelDifferencesReportMessage&&) = default;
            WPS_ModelDifferencesReportMessage& operator=(const WPS_ModelDifferencesReportMessage&) = default;
            WPS_ModelDifferencesReportMessage(const WPS_ModelDifferencesReportMessage&) = default;
            #else
            WPS_ModelDifferencesReportMessage(WPS_ModelDifferencesReportMessage&& other_) OMG_NOEXCEPT;  
            WPS_ModelDifferencesReportMessage& operator=(WPS_ModelDifferencesReportMessage&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const int32_t& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(int32_t value) {
                m_RequestId_ = value;
            }

            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum& ModelDifferencesStatus() OMG_NOEXCEPT {
                return m_ModelDifferencesStatus_;
            }

            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum& ModelDifferencesStatus() const OMG_NOEXCEPT {
                return m_ModelDifferencesStatus_;
            }

            void ModelDifferencesStatus(const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum& value) {
                m_ModelDifferencesStatus_ = value;
            }

            bool operator == (const WPS_ModelDifferencesReportMessage& other_) const;
            bool operator != (const WPS_ModelDifferencesReportMessage& other_) const;

            void swap(WPS_ModelDifferencesReportMessage& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_RequestId_;
            WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum m_ModelDifferencesStatus_;

        };

        inline void swap(WPS_ModelDifferencesReportMessage& a, WPS_ModelDifferencesReportMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WPS_ModelDifferencesReportMessage& sample);

    } // namespace WPS_ModelDifferences  
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
        struct topic_type_name< WorldPerceptionModel::WPS_TDPoint > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_TDPoint";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_TDPoint > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_TDPoint& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_TDPoint& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData";
            }
        };

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData > {
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage > {
            NDDSUSERDllExport static std::string value() {
                return "WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage";
            }
        };

        template<>
        struct is_topic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_TDPoint > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_TDPoint > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::RegionOfInterest_type_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage > {
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

#endif // WPSFull_1442533129_hpp

