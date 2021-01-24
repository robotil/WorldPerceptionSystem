

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSGeneralForWPS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DDSGeneralForWPS_896445415_hpp
#define DDSGeneralForWPS_896445415_hpp

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

namespace DDS_GRI {
    namespace DDSCommon {

        typedef std::string String200;
        struct String200_AliasTag_t {};

        typedef std::string String100;
        struct String100_AliasTag_t {};

        typedef std::string String50;
        struct String50_AliasTag_t {};

        typedef std::string String20;
        struct String20_AliasTag_t {};

        typedef std::wstring WString200;
        struct WString200_AliasTag_t {};

        typedef std::wstring WString100;
        struct WString100_AliasTag_t {};

        typedef std::wstring WString50;
        struct WString50_AliasTag_t {};

        typedef std::wstring WString20;
        struct WString20_AliasTag_t {};

        static const int32_t GUID_LEN = 24;

        typedef std::string DDS_GUID;
        struct DDS_GUID_AliasTag_t {};

        typedef ::rti::core::int64 DDS_FileTimeUTC;
        struct DDS_FileTimeUTC_AliasTag_t {};

        typedef int32_t T_Int32;
        struct T_Int32_AliasTag_t {};

        typedef ::rti::core::int64 T_Int64;
        struct T_Int64_AliasTag_t {};

        class NDDSUSERDllExport T_DateTimeType {
          public:
            T_DateTimeType();

            T_DateTimeType(
                ::rti::core::int64 A_second,
                int32_t A_nanoseconds);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            T_DateTimeType (T_DateTimeType&&) = default;
            T_DateTimeType& operator=(T_DateTimeType&&) = default;
            T_DateTimeType& operator=(const T_DateTimeType&) = default;
            T_DateTimeType(const T_DateTimeType&) = default;
            #else
            T_DateTimeType(T_DateTimeType&& other_) OMG_NOEXCEPT;  
            T_DateTimeType& operator=(T_DateTimeType&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            ::rti::core::int64& A_second() OMG_NOEXCEPT {
                return m_A_second_;
            }

            const ::rti::core::int64& A_second() const OMG_NOEXCEPT {
                return m_A_second_;
            }

            void A_second(::rti::core::int64 value) {
                m_A_second_ = value;
            }

            int32_t& A_nanoseconds() OMG_NOEXCEPT {
                return m_A_nanoseconds_;
            }

            const int32_t& A_nanoseconds() const OMG_NOEXCEPT {
                return m_A_nanoseconds_;
            }

            void A_nanoseconds(int32_t value) {
                m_A_nanoseconds_ = value;
            }

            bool operator == (const T_DateTimeType& other_) const;
            bool operator != (const T_DateTimeType& other_) const;

            void swap(T_DateTimeType& other_) OMG_NOEXCEPT ;

          private:

            ::rti::core::int64 m_A_second_;
            int32_t m_A_nanoseconds_;

        };

        inline void swap(T_DateTimeType& a, T_DateTimeType& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const T_DateTimeType& sample);

        struct DDS_ValueTypeEnum_def {
            enum type {
                None,      
                Bool,      
                Byte,      
                Char,      
                Decimal,      
                Double,      
                Float,      
                Int,      
                Long,      
                Sbyte,      
                Short,      
                Uint,      
                Ulong,      
                Ushort,      
                String     
            };
            static type get_default(){ return None;}
        };

        typedef ::dds::core::safe_enum< DDS_ValueTypeEnum_def > DDS_ValueTypeEnum;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DDS_ValueTypeEnum& sample);

        class NDDSUSERDllExport DDS_AttributeValue {
          public:
            DDS_AttributeValue();

            DDS_AttributeValue(
                const std::string& Name,
                const std::string& Value,
                const DDS_GRI::DDSCommon::DDS_ValueTypeEnum& ValueType,
                bool IsChanged);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_AttributeValue (DDS_AttributeValue&&) = default;
            DDS_AttributeValue& operator=(DDS_AttributeValue&&) = default;
            DDS_AttributeValue& operator=(const DDS_AttributeValue&) = default;
            DDS_AttributeValue(const DDS_AttributeValue&) = default;
            #else
            DDS_AttributeValue(DDS_AttributeValue&& other_) OMG_NOEXCEPT;  
            DDS_AttributeValue& operator=(DDS_AttributeValue&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& Name() OMG_NOEXCEPT {
                return m_Name_;
            }

            const std::string& Name() const OMG_NOEXCEPT {
                return m_Name_;
            }

            void Name(const std::string& value) {
                m_Name_ = value;
            }

            std::string& Value() OMG_NOEXCEPT {
                return m_Value_;
            }

            const std::string& Value() const OMG_NOEXCEPT {
                return m_Value_;
            }

            void Value(const std::string& value) {
                m_Value_ = value;
            }

            DDS_GRI::DDSCommon::DDS_ValueTypeEnum& ValueType() OMG_NOEXCEPT {
                return m_ValueType_;
            }

            const DDS_GRI::DDSCommon::DDS_ValueTypeEnum& ValueType() const OMG_NOEXCEPT {
                return m_ValueType_;
            }

            void ValueType(const DDS_GRI::DDSCommon::DDS_ValueTypeEnum& value) {
                m_ValueType_ = value;
            }

            bool& IsChanged() OMG_NOEXCEPT {
                return m_IsChanged_;
            }

            const bool& IsChanged() const OMG_NOEXCEPT {
                return m_IsChanged_;
            }

            void IsChanged(bool value) {
                m_IsChanged_ = value;
            }

            bool operator == (const DDS_AttributeValue& other_) const;
            bool operator != (const DDS_AttributeValue& other_) const;

            void swap(DDS_AttributeValue& other_) OMG_NOEXCEPT ;

          private:

            std::string m_Name_;
            std::string m_Value_;
            DDS_GRI::DDSCommon::DDS_ValueTypeEnum m_ValueType_;
            bool m_IsChanged_;

        };

        inline void swap(DDS_AttributeValue& a, DDS_AttributeValue& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_AttributeValue& sample);

        class NDDSUSERDllExport DDS_Identifier {
          public:
            DDS_Identifier();

            DDS_Identifier(
                uint16_t Id,
                const std::string& Type);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_Identifier (DDS_Identifier&&) = default;
            DDS_Identifier& operator=(DDS_Identifier&&) = default;
            DDS_Identifier& operator=(const DDS_Identifier&) = default;
            DDS_Identifier(const DDS_Identifier&) = default;
            #else
            DDS_Identifier(DDS_Identifier&& other_) OMG_NOEXCEPT;  
            DDS_Identifier& operator=(DDS_Identifier&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            uint16_t& Id() OMG_NOEXCEPT {
                return m_Id_;
            }

            const uint16_t& Id() const OMG_NOEXCEPT {
                return m_Id_;
            }

            void Id(uint16_t value) {
                m_Id_ = value;
            }

            std::string& Type() OMG_NOEXCEPT {
                return m_Type_;
            }

            const std::string& Type() const OMG_NOEXCEPT {
                return m_Type_;
            }

            void Type(const std::string& value) {
                m_Type_ = value;
            }

            bool operator == (const DDS_Identifier& other_) const;
            bool operator != (const DDS_Identifier& other_) const;

            void swap(DDS_Identifier& other_) OMG_NOEXCEPT ;

          private:

            uint16_t m_Id_;
            std::string m_Type_;

        };

        inline void swap(DDS_Identifier& a, DDS_Identifier& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_Identifier& sample);

        class NDDSUSERDllExport DDS_GuidIdentifierPair {
          public:
            DDS_GuidIdentifierPair();

            DDS_GuidIdentifierPair(
                const std::string& Guid,
                const DDS_GRI::DDSCommon::DDS_Identifier& Id);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GuidIdentifierPair (DDS_GuidIdentifierPair&&) = default;
            DDS_GuidIdentifierPair& operator=(DDS_GuidIdentifierPair&&) = default;
            DDS_GuidIdentifierPair& operator=(const DDS_GuidIdentifierPair&) = default;
            DDS_GuidIdentifierPair(const DDS_GuidIdentifierPair&) = default;
            #else
            DDS_GuidIdentifierPair(DDS_GuidIdentifierPair&& other_) OMG_NOEXCEPT;  
            DDS_GuidIdentifierPair& operator=(DDS_GuidIdentifierPair&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& Guid() OMG_NOEXCEPT {
                return m_Guid_;
            }

            const std::string& Guid() const OMG_NOEXCEPT {
                return m_Guid_;
            }

            void Guid(const std::string& value) {
                m_Guid_ = value;
            }

            DDS_GRI::DDSCommon::DDS_Identifier& Id() OMG_NOEXCEPT {
                return m_Id_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& Id() const OMG_NOEXCEPT {
                return m_Id_;
            }

            void Id(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_Id_ = value;
            }

            bool operator == (const DDS_GuidIdentifierPair& other_) const;
            bool operator != (const DDS_GuidIdentifierPair& other_) const;

            void swap(DDS_GuidIdentifierPair& other_) OMG_NOEXCEPT ;

          private:

            std::string m_Guid_;
            DDS_GRI::DDSCommon::DDS_Identifier m_Id_;

        };

        inline void swap(DDS_GuidIdentifierPair& a, DDS_GuidIdentifierPair& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GuidIdentifierPair& sample);

        class NDDSUSERDllExport DDS_LogicPoint {
          public:
            DDS_LogicPoint();

            DDS_LogicPoint(
                double X,
                double Y);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_LogicPoint (DDS_LogicPoint&&) = default;
            DDS_LogicPoint& operator=(DDS_LogicPoint&&) = default;
            DDS_LogicPoint& operator=(const DDS_LogicPoint&) = default;
            DDS_LogicPoint(const DDS_LogicPoint&) = default;
            #else
            DDS_LogicPoint(DDS_LogicPoint&& other_) OMG_NOEXCEPT;  
            DDS_LogicPoint& operator=(DDS_LogicPoint&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            double& X() OMG_NOEXCEPT {
                return m_X_;
            }

            const double& X() const OMG_NOEXCEPT {
                return m_X_;
            }

            void X(double value) {
                m_X_ = value;
            }

            double& Y() OMG_NOEXCEPT {
                return m_Y_;
            }

            const double& Y() const OMG_NOEXCEPT {
                return m_Y_;
            }

            void Y(double value) {
                m_Y_ = value;
            }

            bool operator == (const DDS_LogicPoint& other_) const;
            bool operator != (const DDS_LogicPoint& other_) const;

            void swap(DDS_LogicPoint& other_) OMG_NOEXCEPT ;

          private:

            double m_X_;
            double m_Y_;

        };

        inline void swap(DDS_LogicPoint& a, DDS_LogicPoint& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_LogicPoint& sample);

        class NDDSUSERDllExport DDS_GeoPoint {
          public:
            DDS_GeoPoint();

            DDS_GeoPoint(
                double Longitude,
                double Latitude,
                double Altitude,
                uint16_t GeoPointId);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GeoPoint (DDS_GeoPoint&&) = default;
            DDS_GeoPoint& operator=(DDS_GeoPoint&&) = default;
            DDS_GeoPoint& operator=(const DDS_GeoPoint&) = default;
            DDS_GeoPoint(const DDS_GeoPoint&) = default;
            #else
            DDS_GeoPoint(DDS_GeoPoint&& other_) OMG_NOEXCEPT;  
            DDS_GeoPoint& operator=(DDS_GeoPoint&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            double& Longitude() OMG_NOEXCEPT {
                return m_Longitude_;
            }

            const double& Longitude() const OMG_NOEXCEPT {
                return m_Longitude_;
            }

            void Longitude(double value) {
                m_Longitude_ = value;
            }

            double& Latitude() OMG_NOEXCEPT {
                return m_Latitude_;
            }

            const double& Latitude() const OMG_NOEXCEPT {
                return m_Latitude_;
            }

            void Latitude(double value) {
                m_Latitude_ = value;
            }

            double& Altitude() OMG_NOEXCEPT {
                return m_Altitude_;
            }

            const double& Altitude() const OMG_NOEXCEPT {
                return m_Altitude_;
            }

            void Altitude(double value) {
                m_Altitude_ = value;
            }

            uint16_t& GeoPointId() OMG_NOEXCEPT {
                return m_GeoPointId_;
            }

            const uint16_t& GeoPointId() const OMG_NOEXCEPT {
                return m_GeoPointId_;
            }

            void GeoPointId(uint16_t value) {
                m_GeoPointId_ = value;
            }

            bool operator == (const DDS_GeoPoint& other_) const;
            bool operator != (const DDS_GeoPoint& other_) const;

            void swap(DDS_GeoPoint& other_) OMG_NOEXCEPT ;

          private:

            double m_Longitude_;
            double m_Latitude_;
            double m_Altitude_;
            uint16_t m_GeoPointId_;

        };

        inline void swap(DDS_GeoPoint& a, DDS_GeoPoint& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GeoPoint& sample);

        class NDDSUSERDllExport DDS_GeoCircle {
          public:
            DDS_GeoCircle();

            DDS_GeoCircle(
                double Radius,
                const DDS_GRI::DDSCommon::DDS_GeoPoint& Center);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GeoCircle (DDS_GeoCircle&&) = default;
            DDS_GeoCircle& operator=(DDS_GeoCircle&&) = default;
            DDS_GeoCircle& operator=(const DDS_GeoCircle&) = default;
            DDS_GeoCircle(const DDS_GeoCircle&) = default;
            #else
            DDS_GeoCircle(DDS_GeoCircle&& other_) OMG_NOEXCEPT;  
            DDS_GeoCircle& operator=(DDS_GeoCircle&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            double& Radius() OMG_NOEXCEPT {
                return m_Radius_;
            }

            const double& Radius() const OMG_NOEXCEPT {
                return m_Radius_;
            }

            void Radius(double value) {
                m_Radius_ = value;
            }

            DDS_GRI::DDSCommon::DDS_GeoPoint& Center() OMG_NOEXCEPT {
                return m_Center_;
            }

            const DDS_GRI::DDSCommon::DDS_GeoPoint& Center() const OMG_NOEXCEPT {
                return m_Center_;
            }

            void Center(const DDS_GRI::DDSCommon::DDS_GeoPoint& value) {
                m_Center_ = value;
            }

            bool operator == (const DDS_GeoCircle& other_) const;
            bool operator != (const DDS_GeoCircle& other_) const;

            void swap(DDS_GeoCircle& other_) OMG_NOEXCEPT ;

          private:

            double m_Radius_;
            DDS_GRI::DDSCommon::DDS_GeoPoint m_Center_;

        };

        inline void swap(DDS_GeoCircle& a, DDS_GeoCircle& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GeoCircle& sample);

        class NDDSUSERDllExport DDS_WayPoint {
          public:
            DDS_WayPoint();

            DDS_WayPoint(
                double Longitude,
                double Latitude,
                double Altitude,
                uint16_t WaypointId,
                uint8_t WaypointCriticalLevel);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_WayPoint (DDS_WayPoint&&) = default;
            DDS_WayPoint& operator=(DDS_WayPoint&&) = default;
            DDS_WayPoint& operator=(const DDS_WayPoint&) = default;
            DDS_WayPoint(const DDS_WayPoint&) = default;
            #else
            DDS_WayPoint(DDS_WayPoint&& other_) OMG_NOEXCEPT;  
            DDS_WayPoint& operator=(DDS_WayPoint&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            double& Longitude() OMG_NOEXCEPT {
                return m_Longitude_;
            }

            const double& Longitude() const OMG_NOEXCEPT {
                return m_Longitude_;
            }

            void Longitude(double value) {
                m_Longitude_ = value;
            }

            double& Latitude() OMG_NOEXCEPT {
                return m_Latitude_;
            }

            const double& Latitude() const OMG_NOEXCEPT {
                return m_Latitude_;
            }

            void Latitude(double value) {
                m_Latitude_ = value;
            }

            double& Altitude() OMG_NOEXCEPT {
                return m_Altitude_;
            }

            const double& Altitude() const OMG_NOEXCEPT {
                return m_Altitude_;
            }

            void Altitude(double value) {
                m_Altitude_ = value;
            }

            uint16_t& WaypointId() OMG_NOEXCEPT {
                return m_WaypointId_;
            }

            const uint16_t& WaypointId() const OMG_NOEXCEPT {
                return m_WaypointId_;
            }

            void WaypointId(uint16_t value) {
                m_WaypointId_ = value;
            }

            uint8_t& WaypointCriticalLevel() OMG_NOEXCEPT {
                return m_WaypointCriticalLevel_;
            }

            const uint8_t& WaypointCriticalLevel() const OMG_NOEXCEPT {
                return m_WaypointCriticalLevel_;
            }

            void WaypointCriticalLevel(uint8_t value) {
                m_WaypointCriticalLevel_ = value;
            }

            bool operator == (const DDS_WayPoint& other_) const;
            bool operator != (const DDS_WayPoint& other_) const;

            void swap(DDS_WayPoint& other_) OMG_NOEXCEPT ;

          private:

            double m_Longitude_;
            double m_Latitude_;
            double m_Altitude_;
            uint16_t m_WaypointId_;
            uint8_t m_WaypointCriticalLevel_;

        };

        inline void swap(DDS_WayPoint& a, DDS_WayPoint& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_WayPoint& sample);

        class NDDSUSERDllExport DDS_String50DoublePair {
          public:
            DDS_String50DoublePair();

            DDS_String50DoublePair(
                const std::string& Key,
                double Value);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_String50DoublePair (DDS_String50DoublePair&&) = default;
            DDS_String50DoublePair& operator=(DDS_String50DoublePair&&) = default;
            DDS_String50DoublePair& operator=(const DDS_String50DoublePair&) = default;
            DDS_String50DoublePair(const DDS_String50DoublePair&) = default;
            #else
            DDS_String50DoublePair(DDS_String50DoublePair&& other_) OMG_NOEXCEPT;  
            DDS_String50DoublePair& operator=(DDS_String50DoublePair&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& Key() OMG_NOEXCEPT {
                return m_Key_;
            }

            const std::string& Key() const OMG_NOEXCEPT {
                return m_Key_;
            }

            void Key(const std::string& value) {
                m_Key_ = value;
            }

            double& Value() OMG_NOEXCEPT {
                return m_Value_;
            }

            const double& Value() const OMG_NOEXCEPT {
                return m_Value_;
            }

            void Value(double value) {
                m_Value_ = value;
            }

            bool operator == (const DDS_String50DoublePair& other_) const;
            bool operator != (const DDS_String50DoublePair& other_) const;

            void swap(DDS_String50DoublePair& other_) OMG_NOEXCEPT ;

          private:

            std::string m_Key_;
            double m_Value_;

        };

        inline void swap(DDS_String50DoublePair& a, DDS_String50DoublePair& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_String50DoublePair& sample);

        class NDDSUSERDllExport DDS_RangeDescription {
          public:
            DDS_RangeDescription();

            DDS_RangeDescription(
                double Minimum,
                double Maximum);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_RangeDescription (DDS_RangeDescription&&) = default;
            DDS_RangeDescription& operator=(DDS_RangeDescription&&) = default;
            DDS_RangeDescription& operator=(const DDS_RangeDescription&) = default;
            DDS_RangeDescription(const DDS_RangeDescription&) = default;
            #else
            DDS_RangeDescription(DDS_RangeDescription&& other_) OMG_NOEXCEPT;  
            DDS_RangeDescription& operator=(DDS_RangeDescription&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            double& Minimum() OMG_NOEXCEPT {
                return m_Minimum_;
            }

            const double& Minimum() const OMG_NOEXCEPT {
                return m_Minimum_;
            }

            void Minimum(double value) {
                m_Minimum_ = value;
            }

            double& Maximum() OMG_NOEXCEPT {
                return m_Maximum_;
            }

            const double& Maximum() const OMG_NOEXCEPT {
                return m_Maximum_;
            }

            void Maximum(double value) {
                m_Maximum_ = value;
            }

            bool operator == (const DDS_RangeDescription& other_) const;
            bool operator != (const DDS_RangeDescription& other_) const;

            void swap(DDS_RangeDescription& other_) OMG_NOEXCEPT ;

          private:

            double m_Minimum_;
            double m_Maximum_;

        };

        inline void swap(DDS_RangeDescription& a, DDS_RangeDescription& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_RangeDescription& sample);

        class NDDSUSERDllExport DDS_ItemType {
          public:
            DDS_ItemType();

            DDS_ItemType(
                uint16_t Type,
                uint8_t Subtype);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ItemType (DDS_ItemType&&) = default;
            DDS_ItemType& operator=(DDS_ItemType&&) = default;
            DDS_ItemType& operator=(const DDS_ItemType&) = default;
            DDS_ItemType(const DDS_ItemType&) = default;
            #else
            DDS_ItemType(DDS_ItemType&& other_) OMG_NOEXCEPT;  
            DDS_ItemType& operator=(DDS_ItemType&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            uint16_t& Type() OMG_NOEXCEPT {
                return m_Type_;
            }

            const uint16_t& Type() const OMG_NOEXCEPT {
                return m_Type_;
            }

            void Type(uint16_t value) {
                m_Type_ = value;
            }

            uint8_t& Subtype() OMG_NOEXCEPT {
                return m_Subtype_;
            }

            const uint8_t& Subtype() const OMG_NOEXCEPT {
                return m_Subtype_;
            }

            void Subtype(uint8_t value) {
                m_Subtype_ = value;
            }

            bool operator == (const DDS_ItemType& other_) const;
            bool operator != (const DDS_ItemType& other_) const;

            void swap(DDS_ItemType& other_) OMG_NOEXCEPT ;

          private:

            uint16_t m_Type_;
            uint8_t m_Subtype_;

        };

        inline void swap(DDS_ItemType& a, DDS_ItemType& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ItemType& sample);

        struct DDS_Visibility_def {
            enum type {
                Visible = 0,      
                Hidden = 1,      
                Collapsed = 2     
            };
            static type get_default(){ return Visible;}
        };

        typedef ::dds::core::safe_enum< DDS_Visibility_def > DDS_Visibility;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DDS_Visibility& sample);
        struct DDS_OperationType_def {
            enum type {
                OnOffOperation,      
                EnumsOperation,      
                NumericOperation,      
                UpDownEnumsOperation     
            };
            static type get_default(){ return OnOffOperation;}
        };

        typedef ::dds::core::safe_enum< DDS_OperationType_def > DDS_OperationType;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DDS_OperationType& sample);
        struct DDS_OprationStatus_def {
            enum type {
                None,      
                NotExecuted,      
                InProcess,      
                FinishedSuccessfully,      
                Failure,      
                Timeout,      
                Stoped     
            };
            static type get_default(){ return None;}
        };

        typedef ::dds::core::safe_enum< DDS_OprationStatus_def > DDS_OprationStatus;
        NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DDS_OprationStatus& sample);

        class NDDSUSERDllExport DDS_BaseRequestMessage {
          public:
            DDS_BaseRequestMessage();

            DDS_BaseRequestMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_BaseRequestMessage (DDS_BaseRequestMessage&&) = default;
            DDS_BaseRequestMessage& operator=(DDS_BaseRequestMessage&&) = default;
            DDS_BaseRequestMessage& operator=(const DDS_BaseRequestMessage&) = default;
            DDS_BaseRequestMessage(const DDS_BaseRequestMessage&) = default;
            #else
            DDS_BaseRequestMessage(DDS_BaseRequestMessage&& other_) OMG_NOEXCEPT;  
            DDS_BaseRequestMessage& operator=(DDS_BaseRequestMessage&&  other_) OMG_NOEXCEPT;
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

            bool operator == (const DDS_BaseRequestMessage& other_) const;
            bool operator != (const DDS_BaseRequestMessage& other_) const;

            void swap(DDS_BaseRequestMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;

        };

        inline void swap(DDS_BaseRequestMessage& a, DDS_BaseRequestMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_BaseRequestMessage& sample);

    } // namespace DDSCommon  
    namespace DDSInfrastarcture {

        class NDDSUSERDllExport DDS_SectionWaypoint
        : public DDS_GRI::DDSCommon::DDS_WayPoint {
          public:
            DDS_SectionWaypoint();

            DDS_SectionWaypoint(
                double Longitude,
                double Latitude,
                double Altitude,
                uint16_t WaypointId,
                uint8_t WaypointCriticalLevel,
                int32_t PervWaypintId,
                int32_t WaypointIndex);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_SectionWaypoint (DDS_SectionWaypoint&&) = default;
            DDS_SectionWaypoint& operator=(DDS_SectionWaypoint&&) = default;
            DDS_SectionWaypoint& operator=(const DDS_SectionWaypoint&) = default;
            DDS_SectionWaypoint(const DDS_SectionWaypoint&) = default;
            #else
            DDS_SectionWaypoint(DDS_SectionWaypoint&& other_) OMG_NOEXCEPT;  
            DDS_SectionWaypoint& operator=(DDS_SectionWaypoint&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& PervWaypintId() OMG_NOEXCEPT {
                return m_PervWaypintId_;
            }

            const int32_t& PervWaypintId() const OMG_NOEXCEPT {
                return m_PervWaypintId_;
            }

            void PervWaypintId(int32_t value) {
                m_PervWaypintId_ = value;
            }

            int32_t& WaypointIndex() OMG_NOEXCEPT {
                return m_WaypointIndex_;
            }

            const int32_t& WaypointIndex() const OMG_NOEXCEPT {
                return m_WaypointIndex_;
            }

            void WaypointIndex(int32_t value) {
                m_WaypointIndex_ = value;
            }

            bool operator == (const DDS_SectionWaypoint& other_) const;
            bool operator != (const DDS_SectionWaypoint& other_) const;

            void swap(DDS_SectionWaypoint& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_PervWaypintId_;
            int32_t m_WaypointIndex_;

        };

        inline void swap(DDS_SectionWaypoint& a, DDS_SectionWaypoint& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_SectionWaypoint& sample);

        class NDDSUSERDllExport DDS_WaypointBehaviorType {
          public:
            DDS_WaypointBehaviorType();

            DDS_WaypointBehaviorType(
                int32_t BehaviorType,
                double Value);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_WaypointBehaviorType (DDS_WaypointBehaviorType&&) = default;
            DDS_WaypointBehaviorType& operator=(DDS_WaypointBehaviorType&&) = default;
            DDS_WaypointBehaviorType& operator=(const DDS_WaypointBehaviorType&) = default;
            DDS_WaypointBehaviorType(const DDS_WaypointBehaviorType&) = default;
            #else
            DDS_WaypointBehaviorType(DDS_WaypointBehaviorType&& other_) OMG_NOEXCEPT;  
            DDS_WaypointBehaviorType& operator=(DDS_WaypointBehaviorType&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& BehaviorType() OMG_NOEXCEPT {
                return m_BehaviorType_;
            }

            const int32_t& BehaviorType() const OMG_NOEXCEPT {
                return m_BehaviorType_;
            }

            void BehaviorType(int32_t value) {
                m_BehaviorType_ = value;
            }

            double& Value() OMG_NOEXCEPT {
                return m_Value_;
            }

            const double& Value() const OMG_NOEXCEPT {
                return m_Value_;
            }

            void Value(double value) {
                m_Value_ = value;
            }

            bool operator == (const DDS_WaypointBehaviorType& other_) const;
            bool operator != (const DDS_WaypointBehaviorType& other_) const;

            void swap(DDS_WaypointBehaviorType& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_BehaviorType_;
            double m_Value_;

        };

        inline void swap(DDS_WaypointBehaviorType& a, DDS_WaypointBehaviorType& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_WaypointBehaviorType& sample);

        static const int32_t MAX_LEN_OF_WAYPOINT_BEHAIVIORS = 10;

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >;
        #endif
        class NDDSUSERDllExport DDS_WaypointBehaviors {
          public:
            DDS_WaypointBehaviors();

            DDS_WaypointBehaviors(
                uint16_t WaypointId,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) >& Behaviors);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_WaypointBehaviors (DDS_WaypointBehaviors&&) = default;
            DDS_WaypointBehaviors& operator=(DDS_WaypointBehaviors&&) = default;
            DDS_WaypointBehaviors& operator=(const DDS_WaypointBehaviors&) = default;
            DDS_WaypointBehaviors(const DDS_WaypointBehaviors&) = default;
            #else
            DDS_WaypointBehaviors(DDS_WaypointBehaviors&& other_) OMG_NOEXCEPT;  
            DDS_WaypointBehaviors& operator=(DDS_WaypointBehaviors&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            uint16_t& WaypointId() OMG_NOEXCEPT {
                return m_WaypointId_;
            }

            const uint16_t& WaypointId() const OMG_NOEXCEPT {
                return m_WaypointId_;
            }

            void WaypointId(uint16_t value) {
                m_WaypointId_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) >& Behaviors() OMG_NOEXCEPT {
                return m_Behaviors_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) >& Behaviors() const OMG_NOEXCEPT {
                return m_Behaviors_;
            }

            void Behaviors(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) >& value) {
                m_Behaviors_ = value;
            }

            bool operator == (const DDS_WaypointBehaviors& other_) const;
            bool operator != (const DDS_WaypointBehaviors& other_) const;

            void swap(DDS_WaypointBehaviors& other_) OMG_NOEXCEPT ;

          private:

            uint16_t m_WaypointId_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) > m_Behaviors_;

        };

        inline void swap(DDS_WaypointBehaviors& a, DDS_WaypointBehaviors& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_WaypointBehaviors& sample);

        class NDDSUSERDllExport DDS_ItemDescrpition {
          public:
            DDS_ItemDescrpition();

            DDS_ItemDescrpition(
                const std::string& RefClientSideId,
                const std::wstring& Name,
                const std::string& Createion,
                ::rti::core::int64 ModificationTime,
                const std::string& Creator,
                const std::wstring& Description,
                const DDS_GRI::DDSCommon::DDS_ItemType& MissionElementType,
                bool IsReservedItem,
                bool IsSave,
                uint16_t ItemId,
                const std::string& VehicleType);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ItemDescrpition (DDS_ItemDescrpition&&) = default;
            DDS_ItemDescrpition& operator=(DDS_ItemDescrpition&&) = default;
            DDS_ItemDescrpition& operator=(const DDS_ItemDescrpition&) = default;
            DDS_ItemDescrpition(const DDS_ItemDescrpition&) = default;
            #else
            DDS_ItemDescrpition(DDS_ItemDescrpition&& other_) OMG_NOEXCEPT;  
            DDS_ItemDescrpition& operator=(DDS_ItemDescrpition&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& RefClientSideId() OMG_NOEXCEPT {
                return m_RefClientSideId_;
            }

            const std::string& RefClientSideId() const OMG_NOEXCEPT {
                return m_RefClientSideId_;
            }

            void RefClientSideId(const std::string& value) {
                m_RefClientSideId_ = value;
            }

            std::wstring& Name() OMG_NOEXCEPT {
                return m_Name_;
            }

            const std::wstring& Name() const OMG_NOEXCEPT {
                return m_Name_;
            }

            void Name(const std::wstring& value) {
                m_Name_ = value;
            }

            std::string& Createion() OMG_NOEXCEPT {
                return m_Createion_;
            }

            const std::string& Createion() const OMG_NOEXCEPT {
                return m_Createion_;
            }

            void Createion(const std::string& value) {
                m_Createion_ = value;
            }

            ::rti::core::int64& ModificationTime() OMG_NOEXCEPT {
                return m_ModificationTime_;
            }

            const ::rti::core::int64& ModificationTime() const OMG_NOEXCEPT {
                return m_ModificationTime_;
            }

            void ModificationTime(::rti::core::int64 value) {
                m_ModificationTime_ = value;
            }

            std::string& Creator() OMG_NOEXCEPT {
                return m_Creator_;
            }

            const std::string& Creator() const OMG_NOEXCEPT {
                return m_Creator_;
            }

            void Creator(const std::string& value) {
                m_Creator_ = value;
            }

            std::wstring& Description() OMG_NOEXCEPT {
                return m_Description_;
            }

            const std::wstring& Description() const OMG_NOEXCEPT {
                return m_Description_;
            }

            void Description(const std::wstring& value) {
                m_Description_ = value;
            }

            DDS_GRI::DDSCommon::DDS_ItemType& MissionElementType() OMG_NOEXCEPT {
                return m_MissionElementType_;
            }

            const DDS_GRI::DDSCommon::DDS_ItemType& MissionElementType() const OMG_NOEXCEPT {
                return m_MissionElementType_;
            }

            void MissionElementType(const DDS_GRI::DDSCommon::DDS_ItemType& value) {
                m_MissionElementType_ = value;
            }

            bool& IsReservedItem() OMG_NOEXCEPT {
                return m_IsReservedItem_;
            }

            const bool& IsReservedItem() const OMG_NOEXCEPT {
                return m_IsReservedItem_;
            }

            void IsReservedItem(bool value) {
                m_IsReservedItem_ = value;
            }

            bool& IsSave() OMG_NOEXCEPT {
                return m_IsSave_;
            }

            const bool& IsSave() const OMG_NOEXCEPT {
                return m_IsSave_;
            }

            void IsSave(bool value) {
                m_IsSave_ = value;
            }

            uint16_t& ItemId() OMG_NOEXCEPT {
                return m_ItemId_;
            }

            const uint16_t& ItemId() const OMG_NOEXCEPT {
                return m_ItemId_;
            }

            void ItemId(uint16_t value) {
                m_ItemId_ = value;
            }

            std::string& VehicleType() OMG_NOEXCEPT {
                return m_VehicleType_;
            }

            const std::string& VehicleType() const OMG_NOEXCEPT {
                return m_VehicleType_;
            }

            void VehicleType(const std::string& value) {
                m_VehicleType_ = value;
            }

            bool operator == (const DDS_ItemDescrpition& other_) const;
            bool operator != (const DDS_ItemDescrpition& other_) const;

            void swap(DDS_ItemDescrpition& other_) OMG_NOEXCEPT ;

          private:

            std::string m_RefClientSideId_;
            std::wstring m_Name_;
            std::string m_Createion_;
            ::rti::core::int64 m_ModificationTime_;
            std::string m_Creator_;
            std::wstring m_Description_;
            DDS_GRI::DDSCommon::DDS_ItemType m_MissionElementType_;
            bool m_IsReservedItem_;
            bool m_IsSave_;
            uint16_t m_ItemId_;
            std::string m_VehicleType_;

        };

        inline void swap(DDS_ItemDescrpition& a, DDS_ItemDescrpition& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ItemDescrpition& sample);

        class NDDSUSERDllExport DDS_BaseItem {
          public:
            DDS_BaseItem();

            DDS_BaseItem(
                const std::string& ClientSideId,
                uint16_t ItemId,
                const std::string& ModificationId,
                const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
                uint8_t Action,
                const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition,
                uint16_t Assignment);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_BaseItem (DDS_BaseItem&&) = default;
            DDS_BaseItem& operator=(DDS_BaseItem&&) = default;
            DDS_BaseItem& operator=(const DDS_BaseItem&) = default;
            DDS_BaseItem(const DDS_BaseItem&) = default;
            #else
            DDS_BaseItem(DDS_BaseItem&& other_) OMG_NOEXCEPT;  
            DDS_BaseItem& operator=(DDS_BaseItem&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& ClientSideId() OMG_NOEXCEPT {
                return m_ClientSideId_;
            }

            const std::string& ClientSideId() const OMG_NOEXCEPT {
                return m_ClientSideId_;
            }

            void ClientSideId(const std::string& value) {
                m_ClientSideId_ = value;
            }

            uint16_t& ItemId() OMG_NOEXCEPT {
                return m_ItemId_;
            }

            const uint16_t& ItemId() const OMG_NOEXCEPT {
                return m_ItemId_;
            }

            void ItemId(uint16_t value) {
                m_ItemId_ = value;
            }

            std::string& ModificationId() OMG_NOEXCEPT {
                return m_ModificationId_;
            }

            const std::string& ModificationId() const OMG_NOEXCEPT {
                return m_ModificationId_;
            }

            void ModificationId(const std::string& value) {
                m_ModificationId_ = value;
            }

            DDS_GRI::DDSCommon::DDS_ItemType& ItemType() OMG_NOEXCEPT {
                return m_ItemType_;
            }

            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType() const OMG_NOEXCEPT {
                return m_ItemType_;
            }

            void ItemType(const DDS_GRI::DDSCommon::DDS_ItemType& value) {
                m_ItemType_ = value;
            }

            uint8_t& Action() OMG_NOEXCEPT {
                return m_Action_;
            }

            const uint8_t& Action() const OMG_NOEXCEPT {
                return m_Action_;
            }

            void Action(uint8_t value) {
                m_Action_ = value;
            }

            DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition() OMG_NOEXCEPT {
                return m_ItemDescrpition_;
            }

            const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition() const OMG_NOEXCEPT {
                return m_ItemDescrpition_;
            }

            void ItemDescrpition(const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& value) {
                m_ItemDescrpition_ = value;
            }

            uint16_t& Assignment() OMG_NOEXCEPT {
                return m_Assignment_;
            }

            const uint16_t& Assignment() const OMG_NOEXCEPT {
                return m_Assignment_;
            }

            void Assignment(uint16_t value) {
                m_Assignment_ = value;
            }

            bool operator == (const DDS_BaseItem& other_) const;
            bool operator != (const DDS_BaseItem& other_) const;

            void swap(DDS_BaseItem& other_) OMG_NOEXCEPT ;

          private:

            std::string m_ClientSideId_;
            uint16_t m_ItemId_;
            std::string m_ModificationId_;
            DDS_GRI::DDSCommon::DDS_ItemType m_ItemType_;
            uint8_t m_Action_;
            DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition m_ItemDescrpition_;
            uint16_t m_Assignment_;

        };

        inline void swap(DDS_BaseItem& a, DDS_BaseItem& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_BaseItem& sample);

        class NDDSUSERDllExport DDS_Way
        : public DDS_GRI::DDSInfrastarcture::DDS_BaseItem {
          public:
            DDS_Way();

            explicit DDS_Way(
                const std::string& ClientSideId,
                uint16_t ItemId,
                const std::string& ModificationId,
                const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
                uint8_t Action,
                const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition,
                uint16_t Assignment,
                uint8_t Stam);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_Way (DDS_Way&&) = default;
            DDS_Way& operator=(DDS_Way&&) = default;
            DDS_Way& operator=(const DDS_Way&) = default;
            DDS_Way(const DDS_Way&) = default;
            #else
            DDS_Way(DDS_Way&& other_) OMG_NOEXCEPT;  
            DDS_Way& operator=(DDS_Way&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            uint8_t& Stam() OMG_NOEXCEPT {
                return m_Stam_;
            }

            const uint8_t& Stam() const OMG_NOEXCEPT {
                return m_Stam_;
            }

            void Stam(uint8_t value) {
                m_Stam_ = value;
            }

            bool operator == (const DDS_Way& other_) const;
            bool operator != (const DDS_Way& other_) const;

            void swap(DDS_Way& other_) OMG_NOEXCEPT ;

          private:

            uint8_t m_Stam_;

        };

        inline void swap(DDS_Way& a, DDS_Way& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_Way& sample);

        class NDDSUSERDllExport DDS_ClientServerWayMessage {
          public:
            DDS_ClientServerWayMessage();

            DDS_ClientServerWayMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSInfrastarcture::DDS_Way& Item);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ClientServerWayMessage (DDS_ClientServerWayMessage&&) = default;
            DDS_ClientServerWayMessage& operator=(DDS_ClientServerWayMessage&&) = default;
            DDS_ClientServerWayMessage& operator=(const DDS_ClientServerWayMessage&) = default;
            DDS_ClientServerWayMessage(const DDS_ClientServerWayMessage&) = default;
            #else
            DDS_ClientServerWayMessage(DDS_ClientServerWayMessage&& other_) OMG_NOEXCEPT;  
            DDS_ClientServerWayMessage& operator=(DDS_ClientServerWayMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSInfrastarcture::DDS_Way& Item() OMG_NOEXCEPT {
                return m_Item_;
            }

            const DDS_GRI::DDSInfrastarcture::DDS_Way& Item() const OMG_NOEXCEPT {
                return m_Item_;
            }

            void Item(const DDS_GRI::DDSInfrastarcture::DDS_Way& value) {
                m_Item_ = value;
            }

            bool operator == (const DDS_ClientServerWayMessage& other_) const;
            bool operator != (const DDS_ClientServerWayMessage& other_) const;

            void swap(DDS_ClientServerWayMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSInfrastarcture::DDS_Way m_Item_;

        };

        inline void swap(DDS_ClientServerWayMessage& a, DDS_ClientServerWayMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ClientServerWayMessage& sample);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >;
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >;
        #endif
        class NDDSUSERDllExport DDS_Section
        : public DDS_GRI::DDSInfrastarcture::DDS_BaseItem {
          public:
            DDS_Section();

            DDS_Section(
                const std::string& ClientSideId,
                uint16_t ItemId,
                const std::string& ModificationId,
                const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
                uint8_t Action,
                const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition,
                uint16_t Assignment,
                const std::string& WayId,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& Waypoints,
                double Speed,
                uint8_t Direction,
                double Width,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_Section (DDS_Section&&) = default;
            DDS_Section& operator=(DDS_Section&&) = default;
            DDS_Section& operator=(const DDS_Section&) = default;
            DDS_Section(const DDS_Section&) = default;
            #else
            DDS_Section(DDS_Section&& other_) OMG_NOEXCEPT;  
            DDS_Section& operator=(DDS_Section&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& WayId() OMG_NOEXCEPT {
                return m_WayId_;
            }

            const std::string& WayId() const OMG_NOEXCEPT {
                return m_WayId_;
            }

            void WayId(const std::string& value) {
                m_WayId_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& Waypoints() OMG_NOEXCEPT {
                return m_Waypoints_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& Waypoints() const OMG_NOEXCEPT {
                return m_Waypoints_;
            }

            void Waypoints(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& value) {
                m_Waypoints_ = value;
            }

            double& Speed() OMG_NOEXCEPT {
                return m_Speed_;
            }

            const double& Speed() const OMG_NOEXCEPT {
                return m_Speed_;
            }

            void Speed(double value) {
                m_Speed_ = value;
            }

            uint8_t& Direction() OMG_NOEXCEPT {
                return m_Direction_;
            }

            const uint8_t& Direction() const OMG_NOEXCEPT {
                return m_Direction_;
            }

            void Direction(uint8_t value) {
                m_Direction_ = value;
            }

            double& Width() OMG_NOEXCEPT {
                return m_Width_;
            }

            const double& Width() const OMG_NOEXCEPT {
                return m_Width_;
            }

            void Width(double value) {
                m_Width_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior() OMG_NOEXCEPT {
                return m_WaypointsBehavior_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior() const OMG_NOEXCEPT {
                return m_WaypointsBehavior_;
            }

            void WaypointsBehavior(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& value) {
                m_WaypointsBehavior_ = value;
            }

            bool operator == (const DDS_Section& other_) const;
            bool operator != (const DDS_Section& other_) const;

            void swap(DDS_Section& other_) OMG_NOEXCEPT ;

          private:

            std::string m_WayId_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 > m_Waypoints_;
            double m_Speed_;
            uint8_t m_Direction_;
            double m_Width_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 > m_WaypointsBehavior_;

        };

        inline void swap(DDS_Section& a, DDS_Section& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_Section& sample);

        class NDDSUSERDllExport DDS_ClientServerSectionMessage {
          public:
            DDS_ClientServerSectionMessage();

            DDS_ClientServerSectionMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSInfrastarcture::DDS_Section& Item);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ClientServerSectionMessage (DDS_ClientServerSectionMessage&&) = default;
            DDS_ClientServerSectionMessage& operator=(DDS_ClientServerSectionMessage&&) = default;
            DDS_ClientServerSectionMessage& operator=(const DDS_ClientServerSectionMessage&) = default;
            DDS_ClientServerSectionMessage(const DDS_ClientServerSectionMessage&) = default;
            #else
            DDS_ClientServerSectionMessage(DDS_ClientServerSectionMessage&& other_) OMG_NOEXCEPT;  
            DDS_ClientServerSectionMessage& operator=(DDS_ClientServerSectionMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSInfrastarcture::DDS_Section& Item() OMG_NOEXCEPT {
                return m_Item_;
            }

            const DDS_GRI::DDSInfrastarcture::DDS_Section& Item() const OMG_NOEXCEPT {
                return m_Item_;
            }

            void Item(const DDS_GRI::DDSInfrastarcture::DDS_Section& value) {
                m_Item_ = value;
            }

            bool operator == (const DDS_ClientServerSectionMessage& other_) const;
            bool operator != (const DDS_ClientServerSectionMessage& other_) const;

            void swap(DDS_ClientServerSectionMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSInfrastarcture::DDS_Section m_Item_;

        };

        inline void swap(DDS_ClientServerSectionMessage& a, DDS_ClientServerSectionMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ClientServerSectionMessage& sample);

        class NDDSUSERDllExport DDS_BaseRouteProperty {
          public:
            DDS_BaseRouteProperty();

            DDS_BaseRouteProperty(
                uint16_t PathWidth,
                uint16_t MotionRadius,
                uint16_t RequiredRadiusOfCurvature,
                uint8_t WaypointType);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_BaseRouteProperty (DDS_BaseRouteProperty&&) = default;
            DDS_BaseRouteProperty& operator=(DDS_BaseRouteProperty&&) = default;
            DDS_BaseRouteProperty& operator=(const DDS_BaseRouteProperty&) = default;
            DDS_BaseRouteProperty(const DDS_BaseRouteProperty&) = default;
            #else
            DDS_BaseRouteProperty(DDS_BaseRouteProperty&& other_) OMG_NOEXCEPT;  
            DDS_BaseRouteProperty& operator=(DDS_BaseRouteProperty&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            uint16_t& PathWidth() OMG_NOEXCEPT {
                return m_PathWidth_;
            }

            const uint16_t& PathWidth() const OMG_NOEXCEPT {
                return m_PathWidth_;
            }

            void PathWidth(uint16_t value) {
                m_PathWidth_ = value;
            }

            uint16_t& MotionRadius() OMG_NOEXCEPT {
                return m_MotionRadius_;
            }

            const uint16_t& MotionRadius() const OMG_NOEXCEPT {
                return m_MotionRadius_;
            }

            void MotionRadius(uint16_t value) {
                m_MotionRadius_ = value;
            }

            uint16_t& RequiredRadiusOfCurvature() OMG_NOEXCEPT {
                return m_RequiredRadiusOfCurvature_;
            }

            const uint16_t& RequiredRadiusOfCurvature() const OMG_NOEXCEPT {
                return m_RequiredRadiusOfCurvature_;
            }

            void RequiredRadiusOfCurvature(uint16_t value) {
                m_RequiredRadiusOfCurvature_ = value;
            }

            uint8_t& WaypointType() OMG_NOEXCEPT {
                return m_WaypointType_;
            }

            const uint8_t& WaypointType() const OMG_NOEXCEPT {
                return m_WaypointType_;
            }

            void WaypointType(uint8_t value) {
                m_WaypointType_ = value;
            }

            bool operator == (const DDS_BaseRouteProperty& other_) const;
            bool operator != (const DDS_BaseRouteProperty& other_) const;

            void swap(DDS_BaseRouteProperty& other_) OMG_NOEXCEPT ;

          private:

            uint16_t m_PathWidth_;
            uint16_t m_MotionRadius_;
            uint16_t m_RequiredRadiusOfCurvature_;
            uint8_t m_WaypointType_;

        };

        inline void swap(DDS_BaseRouteProperty& a, DDS_BaseRouteProperty& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_BaseRouteProperty& sample);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< std::string >;
        template class NDDSUSERDllExport std::vector< std::string >;
        #endif
        class NDDSUSERDllExport DDS_Route
        : public DDS_GRI::DDSInfrastarcture::DDS_BaseItem {
          public:
            DDS_Route();

            DDS_Route(
                const std::string& ClientSideId,
                uint16_t ItemId,
                const std::string& ModificationId,
                const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
                uint8_t Action,
                const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition,
                uint16_t Assignment,
                const DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& BaseRouteProperties,
                const ::rti::core::bounded_sequence< std::string, 100 >& Sections,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& Waypoints,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_Route (DDS_Route&&) = default;
            DDS_Route& operator=(DDS_Route&&) = default;
            DDS_Route& operator=(const DDS_Route&) = default;
            DDS_Route(const DDS_Route&) = default;
            #else
            DDS_Route(DDS_Route&& other_) OMG_NOEXCEPT;  
            DDS_Route& operator=(DDS_Route&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& BaseRouteProperties() OMG_NOEXCEPT {
                return m_BaseRouteProperties_;
            }

            const DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& BaseRouteProperties() const OMG_NOEXCEPT {
                return m_BaseRouteProperties_;
            }

            void BaseRouteProperties(const DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& value) {
                m_BaseRouteProperties_ = value;
            }

            ::rti::core::bounded_sequence< std::string, 100 >& Sections() OMG_NOEXCEPT {
                return m_Sections_;
            }

            const ::rti::core::bounded_sequence< std::string, 100 >& Sections() const OMG_NOEXCEPT {
                return m_Sections_;
            }

            void Sections(const ::rti::core::bounded_sequence< std::string, 100 >& value) {
                m_Sections_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& Waypoints() OMG_NOEXCEPT {
                return m_Waypoints_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& Waypoints() const OMG_NOEXCEPT {
                return m_Waypoints_;
            }

            void Waypoints(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 >& value) {
                m_Waypoints_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior() OMG_NOEXCEPT {
                return m_WaypointsBehavior_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior() const OMG_NOEXCEPT {
                return m_WaypointsBehavior_;
            }

            void WaypointsBehavior(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& value) {
                m_WaypointsBehavior_ = value;
            }

            bool operator == (const DDS_Route& other_) const;
            bool operator != (const DDS_Route& other_) const;

            void swap(DDS_Route& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty m_BaseRouteProperties_;
            ::rti::core::bounded_sequence< std::string, 100 > m_Sections_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 > m_Waypoints_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 > m_WaypointsBehavior_;

        };

        inline void swap(DDS_Route& a, DDS_Route& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_Route& sample);

        class NDDSUSERDllExport DDS_ClientServerRouteMessage {
          public:
            DDS_ClientServerRouteMessage();

            DDS_ClientServerRouteMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSInfrastarcture::DDS_Route& Item);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ClientServerRouteMessage (DDS_ClientServerRouteMessage&&) = default;
            DDS_ClientServerRouteMessage& operator=(DDS_ClientServerRouteMessage&&) = default;
            DDS_ClientServerRouteMessage& operator=(const DDS_ClientServerRouteMessage&) = default;
            DDS_ClientServerRouteMessage(const DDS_ClientServerRouteMessage&) = default;
            #else
            DDS_ClientServerRouteMessage(DDS_ClientServerRouteMessage&& other_) OMG_NOEXCEPT;  
            DDS_ClientServerRouteMessage& operator=(DDS_ClientServerRouteMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSInfrastarcture::DDS_Route& Item() OMG_NOEXCEPT {
                return m_Item_;
            }

            const DDS_GRI::DDSInfrastarcture::DDS_Route& Item() const OMG_NOEXCEPT {
                return m_Item_;
            }

            void Item(const DDS_GRI::DDSInfrastarcture::DDS_Route& value) {
                m_Item_ = value;
            }

            bool operator == (const DDS_ClientServerRouteMessage& other_) const;
            bool operator != (const DDS_ClientServerRouteMessage& other_) const;

            void swap(DDS_ClientServerRouteMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSInfrastarcture::DDS_Route m_Item_;

        };

        inline void swap(DDS_ClientServerRouteMessage& a, DDS_ClientServerRouteMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ClientServerRouteMessage& sample);

        class NDDSUSERDllExport DDS_ClientServerRequestItemsDiscrptionByTypeMessage {
          public:
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage();

            DDS_ClientServerRequestItemsDiscrptionByTypeMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_ItemType& ItemType);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage (DDS_ClientServerRequestItemsDiscrptionByTypeMessage&&) = default;
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage& operator=(DDS_ClientServerRequestItemsDiscrptionByTypeMessage&&) = default;
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage& operator=(const DDS_ClientServerRequestItemsDiscrptionByTypeMessage&) = default;
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage(const DDS_ClientServerRequestItemsDiscrptionByTypeMessage&) = default;
            #else
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage(DDS_ClientServerRequestItemsDiscrptionByTypeMessage&& other_) OMG_NOEXCEPT;  
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage& operator=(DDS_ClientServerRequestItemsDiscrptionByTypeMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSCommon::DDS_ItemType& ItemType() OMG_NOEXCEPT {
                return m_ItemType_;
            }

            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType() const OMG_NOEXCEPT {
                return m_ItemType_;
            }

            void ItemType(const DDS_GRI::DDSCommon::DDS_ItemType& value) {
                m_ItemType_ = value;
            }

            bool operator == (const DDS_ClientServerRequestItemsDiscrptionByTypeMessage& other_) const;
            bool operator != (const DDS_ClientServerRequestItemsDiscrptionByTypeMessage& other_) const;

            void swap(DDS_ClientServerRequestItemsDiscrptionByTypeMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_ItemType m_ItemType_;

        };

        inline void swap(DDS_ClientServerRequestItemsDiscrptionByTypeMessage& a, DDS_ClientServerRequestItemsDiscrptionByTypeMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >;
        #endif
        class NDDSUSERDllExport DDS_ClientServerResponseItemsDiscrptionMessage {
          public:
            DDS_ClientServerResponseItemsDiscrptionMessage();

            DDS_ClientServerResponseItemsDiscrptionMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 >& ItemDescrpitions);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ClientServerResponseItemsDiscrptionMessage (DDS_ClientServerResponseItemsDiscrptionMessage&&) = default;
            DDS_ClientServerResponseItemsDiscrptionMessage& operator=(DDS_ClientServerResponseItemsDiscrptionMessage&&) = default;
            DDS_ClientServerResponseItemsDiscrptionMessage& operator=(const DDS_ClientServerResponseItemsDiscrptionMessage&) = default;
            DDS_ClientServerResponseItemsDiscrptionMessage(const DDS_ClientServerResponseItemsDiscrptionMessage&) = default;
            #else
            DDS_ClientServerResponseItemsDiscrptionMessage(DDS_ClientServerResponseItemsDiscrptionMessage&& other_) OMG_NOEXCEPT;  
            DDS_ClientServerResponseItemsDiscrptionMessage& operator=(DDS_ClientServerResponseItemsDiscrptionMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSCommon::DDS_ItemType& ItemType() OMG_NOEXCEPT {
                return m_ItemType_;
            }

            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType() const OMG_NOEXCEPT {
                return m_ItemType_;
            }

            void ItemType(const DDS_GRI::DDSCommon::DDS_ItemType& value) {
                m_ItemType_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 >& ItemDescrpitions() OMG_NOEXCEPT {
                return m_ItemDescrpitions_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 >& ItemDescrpitions() const OMG_NOEXCEPT {
                return m_ItemDescrpitions_;
            }

            void ItemDescrpitions(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 >& value) {
                m_ItemDescrpitions_ = value;
            }

            bool operator == (const DDS_ClientServerResponseItemsDiscrptionMessage& other_) const;
            bool operator != (const DDS_ClientServerResponseItemsDiscrptionMessage& other_) const;

            void swap(DDS_ClientServerResponseItemsDiscrptionMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSCommon::DDS_ItemType m_ItemType_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 > m_ItemDescrpitions_;

        };

        inline void swap(DDS_ClientServerResponseItemsDiscrptionMessage& a, DDS_ClientServerResponseItemsDiscrptionMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ClientServerResponseItemsDiscrptionMessage& sample);

    } // namespace DDSInfrastarcture  
    namespace DDSExternalSystem {

        static const int32_t EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN = 10;

        class NDDSUSERDllExport ExtendedGeoPoint {
          public:
            ExtendedGeoPoint();

            ExtendedGeoPoint(
                const DDS_GRI::DDSCommon::DDS_GeoPoint& Point,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) >& Behaviors);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ExtendedGeoPoint (ExtendedGeoPoint&&) = default;
            ExtendedGeoPoint& operator=(ExtendedGeoPoint&&) = default;
            ExtendedGeoPoint& operator=(const ExtendedGeoPoint&) = default;
            ExtendedGeoPoint(const ExtendedGeoPoint&) = default;
            #else
            ExtendedGeoPoint(ExtendedGeoPoint&& other_) OMG_NOEXCEPT;  
            ExtendedGeoPoint& operator=(ExtendedGeoPoint&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            DDS_GRI::DDSCommon::DDS_GeoPoint& Point() OMG_NOEXCEPT {
                return m_Point_;
            }

            const DDS_GRI::DDSCommon::DDS_GeoPoint& Point() const OMG_NOEXCEPT {
                return m_Point_;
            }

            void Point(const DDS_GRI::DDSCommon::DDS_GeoPoint& value) {
                m_Point_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) >& Behaviors() OMG_NOEXCEPT {
                return m_Behaviors_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) >& Behaviors() const OMG_NOEXCEPT {
                return m_Behaviors_;
            }

            void Behaviors(const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) >& value) {
                m_Behaviors_ = value;
            }

            bool operator == (const ExtendedGeoPoint& other_) const;
            bool operator != (const ExtendedGeoPoint& other_) const;

            void swap(ExtendedGeoPoint& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_GeoPoint m_Point_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) > m_Behaviors_;

        };

        inline void swap(ExtendedGeoPoint& a, ExtendedGeoPoint& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ExtendedGeoPoint& sample);

        static const int32_t EXTENDED_GEO_POINT_ARRAY_MAX_LEN = 200;

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >;
        #endif
        class NDDSUSERDllExport ExtendedGeoPointArray {
          public:
            ExtendedGeoPointArray();

            explicit ExtendedGeoPointArray(
                const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) >& Points);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ExtendedGeoPointArray (ExtendedGeoPointArray&&) = default;
            ExtendedGeoPointArray& operator=(ExtendedGeoPointArray&&) = default;
            ExtendedGeoPointArray& operator=(const ExtendedGeoPointArray&) = default;
            ExtendedGeoPointArray(const ExtendedGeoPointArray&) = default;
            #else
            ExtendedGeoPointArray(ExtendedGeoPointArray&& other_) OMG_NOEXCEPT;  
            ExtendedGeoPointArray& operator=(ExtendedGeoPointArray&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) >& Points() OMG_NOEXCEPT {
                return m_Points_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) >& Points() const OMG_NOEXCEPT {
                return m_Points_;
            }

            void Points(const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) >& value) {
                m_Points_ = value;
            }

            bool operator == (const ExtendedGeoPointArray& other_) const;
            bool operator != (const ExtendedGeoPointArray& other_) const;

            void swap(ExtendedGeoPointArray& other_) OMG_NOEXCEPT ;

          private:

            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) > m_Points_;

        };

        inline void swap(ExtendedGeoPointArray& a, ExtendedGeoPointArray& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ExtendedGeoPointArray& sample);

        static const int32_t EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN = 5;

        static const int32_t EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN = 5;

        static const int32_t EXTERNAL_MISSION_DATA_POINTS_MAX_LEN = 10;

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >;
        #endif
        class NDDSUSERDllExport DDS_ExternalMissionData {
          public:
            DDS_ExternalMissionData();

            DDS_ExternalMissionData(
                const DDS_GRI::DDSCommon::DDS_Identifier& VehicleId,
                uint8_t MissionType,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) >& Polyline,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) >& Polygone,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) >& Points);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ExternalMissionData (DDS_ExternalMissionData&&) = default;
            DDS_ExternalMissionData& operator=(DDS_ExternalMissionData&&) = default;
            DDS_ExternalMissionData& operator=(const DDS_ExternalMissionData&) = default;
            DDS_ExternalMissionData(const DDS_ExternalMissionData&) = default;
            #else
            DDS_ExternalMissionData(DDS_ExternalMissionData&& other_) OMG_NOEXCEPT;  
            DDS_ExternalMissionData& operator=(DDS_ExternalMissionData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            DDS_GRI::DDSCommon::DDS_Identifier& VehicleId() OMG_NOEXCEPT {
                return m_VehicleId_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& VehicleId() const OMG_NOEXCEPT {
                return m_VehicleId_;
            }

            void VehicleId(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_VehicleId_ = value;
            }

            uint8_t& MissionType() OMG_NOEXCEPT {
                return m_MissionType_;
            }

            const uint8_t& MissionType() const OMG_NOEXCEPT {
                return m_MissionType_;
            }

            void MissionType(uint8_t value) {
                m_MissionType_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) >& Polyline() OMG_NOEXCEPT {
                return m_Polyline_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) >& Polyline() const OMG_NOEXCEPT {
                return m_Polyline_;
            }

            void Polyline(const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) >& value) {
                m_Polyline_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) >& Polygone() OMG_NOEXCEPT {
                return m_Polygone_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) >& Polygone() const OMG_NOEXCEPT {
                return m_Polygone_;
            }

            void Polygone(const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) >& value) {
                m_Polygone_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) >& Points() OMG_NOEXCEPT {
                return m_Points_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) >& Points() const OMG_NOEXCEPT {
                return m_Points_;
            }

            void Points(const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) >& value) {
                m_Points_ = value;
            }

            bool operator == (const DDS_ExternalMissionData& other_) const;
            bool operator != (const DDS_ExternalMissionData& other_) const;

            void swap(DDS_ExternalMissionData& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_VehicleId_;
            uint8_t m_MissionType_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) > m_Polyline_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) > m_Polygone_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) > m_Points_;

        };

        inline void swap(DDS_ExternalMissionData& a, DDS_ExternalMissionData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ExternalMissionData& sample);

        class NDDSUSERDllExport DDS_ExternalMissionMessage {
          public:
            DDS_ExternalMissionMessage();

            DDS_ExternalMissionMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const std::string& RequestId,
                const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& MissionData);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ExternalMissionMessage (DDS_ExternalMissionMessage&&) = default;
            DDS_ExternalMissionMessage& operator=(DDS_ExternalMissionMessage&&) = default;
            DDS_ExternalMissionMessage& operator=(const DDS_ExternalMissionMessage&) = default;
            DDS_ExternalMissionMessage(const DDS_ExternalMissionMessage&) = default;
            #else
            DDS_ExternalMissionMessage(DDS_ExternalMissionMessage&& other_) OMG_NOEXCEPT;  
            DDS_ExternalMissionMessage& operator=(DDS_ExternalMissionMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& MissionData() OMG_NOEXCEPT {
                return m_MissionData_;
            }

            const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& MissionData() const OMG_NOEXCEPT {
                return m_MissionData_;
            }

            void MissionData(const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& value) {
                m_MissionData_ = value;
            }

            bool operator == (const DDS_ExternalMissionMessage& other_) const;
            bool operator != (const DDS_ExternalMissionMessage& other_) const;

            void swap(DDS_ExternalMissionMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            std::string m_RequestId_;
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData m_MissionData_;

        };

        inline void swap(DDS_ExternalMissionMessage& a, DDS_ExternalMissionMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ExternalMissionMessage& sample);

        class NDDSUSERDllExport DDS_ExternalMissionResponseData {
          public:
            DDS_ExternalMissionResponseData();

            DDS_ExternalMissionResponseData(
                const std::string& RequestId,
                bool IsSucceed,
                const std::string& MissionId);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ExternalMissionResponseData (DDS_ExternalMissionResponseData&&) = default;
            DDS_ExternalMissionResponseData& operator=(DDS_ExternalMissionResponseData&&) = default;
            DDS_ExternalMissionResponseData& operator=(const DDS_ExternalMissionResponseData&) = default;
            DDS_ExternalMissionResponseData(const DDS_ExternalMissionResponseData&) = default;
            #else
            DDS_ExternalMissionResponseData(DDS_ExternalMissionResponseData&& other_) OMG_NOEXCEPT;  
            DDS_ExternalMissionResponseData& operator=(DDS_ExternalMissionResponseData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const std::string& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(const std::string& value) {
                m_RequestId_ = value;
            }

            bool& IsSucceed() OMG_NOEXCEPT {
                return m_IsSucceed_;
            }

            const bool& IsSucceed() const OMG_NOEXCEPT {
                return m_IsSucceed_;
            }

            void IsSucceed(bool value) {
                m_IsSucceed_ = value;
            }

            std::string& MissionId() OMG_NOEXCEPT {
                return m_MissionId_;
            }

            const std::string& MissionId() const OMG_NOEXCEPT {
                return m_MissionId_;
            }

            void MissionId(const std::string& value) {
                m_MissionId_ = value;
            }

            bool operator == (const DDS_ExternalMissionResponseData& other_) const;
            bool operator != (const DDS_ExternalMissionResponseData& other_) const;

            void swap(DDS_ExternalMissionResponseData& other_) OMG_NOEXCEPT ;

          private:

            std::string m_RequestId_;
            bool m_IsSucceed_;
            std::string m_MissionId_;

        };

        inline void swap(DDS_ExternalMissionResponseData& a, DDS_ExternalMissionResponseData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ExternalMissionResponseData& sample);

        class NDDSUSERDllExport DDS_ExternalMissionResponseMessage {
          public:
            DDS_ExternalMissionResponseMessage();

            DDS_ExternalMissionResponseMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ExternalMissionResponseMessage (DDS_ExternalMissionResponseMessage&&) = default;
            DDS_ExternalMissionResponseMessage& operator=(DDS_ExternalMissionResponseMessage&&) = default;
            DDS_ExternalMissionResponseMessage& operator=(const DDS_ExternalMissionResponseMessage&) = default;
            DDS_ExternalMissionResponseMessage(const DDS_ExternalMissionResponseMessage&) = default;
            #else
            DDS_ExternalMissionResponseMessage(DDS_ExternalMissionResponseMessage&& other_) OMG_NOEXCEPT;  
            DDS_ExternalMissionResponseMessage& operator=(DDS_ExternalMissionResponseMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_ExternalMissionResponseMessage& other_) const;
            bool operator != (const DDS_ExternalMissionResponseMessage& other_) const;

            void swap(DDS_ExternalMissionResponseMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData m_Data_;

        };

        inline void swap(DDS_ExternalMissionResponseMessage& a, DDS_ExternalMissionResponseMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ExternalMissionResponseMessage& sample);

        class NDDSUSERDllExport DDS_ActivateMissionCommandData {
          public:
            DDS_ActivateMissionCommandData();

            explicit DDS_ActivateMissionCommandData(
                const std::string& MissionId);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ActivateMissionCommandData (DDS_ActivateMissionCommandData&&) = default;
            DDS_ActivateMissionCommandData& operator=(DDS_ActivateMissionCommandData&&) = default;
            DDS_ActivateMissionCommandData& operator=(const DDS_ActivateMissionCommandData&) = default;
            DDS_ActivateMissionCommandData(const DDS_ActivateMissionCommandData&) = default;
            #else
            DDS_ActivateMissionCommandData(DDS_ActivateMissionCommandData&& other_) OMG_NOEXCEPT;  
            DDS_ActivateMissionCommandData& operator=(DDS_ActivateMissionCommandData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& MissionId() OMG_NOEXCEPT {
                return m_MissionId_;
            }

            const std::string& MissionId() const OMG_NOEXCEPT {
                return m_MissionId_;
            }

            void MissionId(const std::string& value) {
                m_MissionId_ = value;
            }

            bool operator == (const DDS_ActivateMissionCommandData& other_) const;
            bool operator != (const DDS_ActivateMissionCommandData& other_) const;

            void swap(DDS_ActivateMissionCommandData& other_) OMG_NOEXCEPT ;

          private:

            std::string m_MissionId_;

        };

        inline void swap(DDS_ActivateMissionCommandData& a, DDS_ActivateMissionCommandData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ActivateMissionCommandData& sample);

        class NDDSUSERDllExport DDS_ActivateMissionCommandMessage {
          public:
            DDS_ActivateMissionCommandMessage();

            DDS_ActivateMissionCommandMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_ActivateMissionCommandMessage (DDS_ActivateMissionCommandMessage&&) = default;
            DDS_ActivateMissionCommandMessage& operator=(DDS_ActivateMissionCommandMessage&&) = default;
            DDS_ActivateMissionCommandMessage& operator=(const DDS_ActivateMissionCommandMessage&) = default;
            DDS_ActivateMissionCommandMessage(const DDS_ActivateMissionCommandMessage&) = default;
            #else
            DDS_ActivateMissionCommandMessage(DDS_ActivateMissionCommandMessage&& other_) OMG_NOEXCEPT;  
            DDS_ActivateMissionCommandMessage& operator=(DDS_ActivateMissionCommandMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_ActivateMissionCommandMessage& other_) const;
            bool operator != (const DDS_ActivateMissionCommandMessage& other_) const;

            void swap(DDS_ActivateMissionCommandMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData m_Data_;

        };

        inline void swap(DDS_ActivateMissionCommandMessage& a, DDS_ActivateMissionCommandMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_ActivateMissionCommandMessage& sample);

        static const int32_t ADD_REGION_DATA_POLIGON_MAX_LEN = 100;

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSCommon::DDS_GeoPoint >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSCommon::DDS_GeoPoint >;
        #endif
        class NDDSUSERDllExport DDS_AddRegionData {
          public:
            DDS_AddRegionData();

            DDS_AddRegionData(
                const std::string& MissionId,
                uint8_t PolygonType,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) >& Polygon);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_AddRegionData (DDS_AddRegionData&&) = default;
            DDS_AddRegionData& operator=(DDS_AddRegionData&&) = default;
            DDS_AddRegionData& operator=(const DDS_AddRegionData&) = default;
            DDS_AddRegionData(const DDS_AddRegionData&) = default;
            #else
            DDS_AddRegionData(DDS_AddRegionData&& other_) OMG_NOEXCEPT;  
            DDS_AddRegionData& operator=(DDS_AddRegionData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& MissionId() OMG_NOEXCEPT {
                return m_MissionId_;
            }

            const std::string& MissionId() const OMG_NOEXCEPT {
                return m_MissionId_;
            }

            void MissionId(const std::string& value) {
                m_MissionId_ = value;
            }

            uint8_t& PolygonType() OMG_NOEXCEPT {
                return m_PolygonType_;
            }

            const uint8_t& PolygonType() const OMG_NOEXCEPT {
                return m_PolygonType_;
            }

            void PolygonType(uint8_t value) {
                m_PolygonType_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) >& Polygon() OMG_NOEXCEPT {
                return m_Polygon_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) >& Polygon() const OMG_NOEXCEPT {
                return m_Polygon_;
            }

            void Polygon(const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) >& value) {
                m_Polygon_ = value;
            }

            bool operator == (const DDS_AddRegionData& other_) const;
            bool operator != (const DDS_AddRegionData& other_) const;

            void swap(DDS_AddRegionData& other_) OMG_NOEXCEPT ;

          private:

            std::string m_MissionId_;
            uint8_t m_PolygonType_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) > m_Polygon_;

        };

        inline void swap(DDS_AddRegionData& a, DDS_AddRegionData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_AddRegionData& sample);

        class NDDSUSERDllExport DDS_AddRegionDataMessage {
          public:
            DDS_AddRegionDataMessage();

            DDS_AddRegionDataMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const std::string& RequestId,
                const DDS_GRI::DDSExternalSystem::DDS_AddRegionData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_AddRegionDataMessage (DDS_AddRegionDataMessage&&) = default;
            DDS_AddRegionDataMessage& operator=(DDS_AddRegionDataMessage&&) = default;
            DDS_AddRegionDataMessage& operator=(const DDS_AddRegionDataMessage&) = default;
            DDS_AddRegionDataMessage(const DDS_AddRegionDataMessage&) = default;
            #else
            DDS_AddRegionDataMessage(DDS_AddRegionDataMessage&& other_) OMG_NOEXCEPT;  
            DDS_AddRegionDataMessage& operator=(DDS_AddRegionDataMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSExternalSystem::DDS_AddRegionData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSExternalSystem::DDS_AddRegionData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSExternalSystem::DDS_AddRegionData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_AddRegionDataMessage& other_) const;
            bool operator != (const DDS_AddRegionDataMessage& other_) const;

            void swap(DDS_AddRegionDataMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            std::string m_RequestId_;
            DDS_GRI::DDSExternalSystem::DDS_AddRegionData m_Data_;

        };

        inline void swap(DDS_AddRegionDataMessage& a, DDS_AddRegionDataMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_AddRegionDataMessage& sample);

        class NDDSUSERDllExport DDS_RegionResponseData {
          public:
            DDS_RegionResponseData();

            DDS_RegionResponseData(
                const std::string& RequestId,
                const std::string& MissionId,
                const std::string& RegionId,
                uint8_t Action,
                bool IsSucceed);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_RegionResponseData (DDS_RegionResponseData&&) = default;
            DDS_RegionResponseData& operator=(DDS_RegionResponseData&&) = default;
            DDS_RegionResponseData& operator=(const DDS_RegionResponseData&) = default;
            DDS_RegionResponseData(const DDS_RegionResponseData&) = default;
            #else
            DDS_RegionResponseData(DDS_RegionResponseData&& other_) OMG_NOEXCEPT;  
            DDS_RegionResponseData& operator=(DDS_RegionResponseData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const std::string& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(const std::string& value) {
                m_RequestId_ = value;
            }

            std::string& MissionId() OMG_NOEXCEPT {
                return m_MissionId_;
            }

            const std::string& MissionId() const OMG_NOEXCEPT {
                return m_MissionId_;
            }

            void MissionId(const std::string& value) {
                m_MissionId_ = value;
            }

            std::string& RegionId() OMG_NOEXCEPT {
                return m_RegionId_;
            }

            const std::string& RegionId() const OMG_NOEXCEPT {
                return m_RegionId_;
            }

            void RegionId(const std::string& value) {
                m_RegionId_ = value;
            }

            uint8_t& Action() OMG_NOEXCEPT {
                return m_Action_;
            }

            const uint8_t& Action() const OMG_NOEXCEPT {
                return m_Action_;
            }

            void Action(uint8_t value) {
                m_Action_ = value;
            }

            bool& IsSucceed() OMG_NOEXCEPT {
                return m_IsSucceed_;
            }

            const bool& IsSucceed() const OMG_NOEXCEPT {
                return m_IsSucceed_;
            }

            void IsSucceed(bool value) {
                m_IsSucceed_ = value;
            }

            bool operator == (const DDS_RegionResponseData& other_) const;
            bool operator != (const DDS_RegionResponseData& other_) const;

            void swap(DDS_RegionResponseData& other_) OMG_NOEXCEPT ;

          private:

            std::string m_RequestId_;
            std::string m_MissionId_;
            std::string m_RegionId_;
            uint8_t m_Action_;
            bool m_IsSucceed_;

        };

        inline void swap(DDS_RegionResponseData& a, DDS_RegionResponseData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_RegionResponseData& sample);

        class NDDSUSERDllExport DDS_RegionResponseMessage {
          public:
            DDS_RegionResponseMessage();

            DDS_RegionResponseMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_RegionResponseMessage (DDS_RegionResponseMessage&&) = default;
            DDS_RegionResponseMessage& operator=(DDS_RegionResponseMessage&&) = default;
            DDS_RegionResponseMessage& operator=(const DDS_RegionResponseMessage&) = default;
            DDS_RegionResponseMessage(const DDS_RegionResponseMessage&) = default;
            #else
            DDS_RegionResponseMessage(DDS_RegionResponseMessage&& other_) OMG_NOEXCEPT;  
            DDS_RegionResponseMessage& operator=(DDS_RegionResponseMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_RegionResponseMessage& other_) const;
            bool operator != (const DDS_RegionResponseMessage& other_) const;

            void swap(DDS_RegionResponseMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSExternalSystem::DDS_RegionResponseData m_Data_;

        };

        inline void swap(DDS_RegionResponseMessage& a, DDS_RegionResponseMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_RegionResponseMessage& sample);

        static const int32_t REMOVE_REGION_DATA_ARRAY_MAX_LEN = 100;

        class NDDSUSERDllExport DDS_RemoveRegionData {
          public:
            DDS_RemoveRegionData();

            DDS_RemoveRegionData(
                const std::string& MissionId,
                const ::rti::core::bounded_sequence< std::string, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) >& RegionsToRemove);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_RemoveRegionData (DDS_RemoveRegionData&&) = default;
            DDS_RemoveRegionData& operator=(DDS_RemoveRegionData&&) = default;
            DDS_RemoveRegionData& operator=(const DDS_RemoveRegionData&) = default;
            DDS_RemoveRegionData(const DDS_RemoveRegionData&) = default;
            #else
            DDS_RemoveRegionData(DDS_RemoveRegionData&& other_) OMG_NOEXCEPT;  
            DDS_RemoveRegionData& operator=(DDS_RemoveRegionData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& MissionId() OMG_NOEXCEPT {
                return m_MissionId_;
            }

            const std::string& MissionId() const OMG_NOEXCEPT {
                return m_MissionId_;
            }

            void MissionId(const std::string& value) {
                m_MissionId_ = value;
            }

            ::rti::core::bounded_sequence< std::string, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) >& RegionsToRemove() OMG_NOEXCEPT {
                return m_RegionsToRemove_;
            }

            const ::rti::core::bounded_sequence< std::string, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) >& RegionsToRemove() const OMG_NOEXCEPT {
                return m_RegionsToRemove_;
            }

            void RegionsToRemove(const ::rti::core::bounded_sequence< std::string, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) >& value) {
                m_RegionsToRemove_ = value;
            }

            bool operator == (const DDS_RemoveRegionData& other_) const;
            bool operator != (const DDS_RemoveRegionData& other_) const;

            void swap(DDS_RemoveRegionData& other_) OMG_NOEXCEPT ;

          private:

            std::string m_MissionId_;
            ::rti::core::bounded_sequence< std::string, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) > m_RegionsToRemove_;

        };

        inline void swap(DDS_RemoveRegionData& a, DDS_RemoveRegionData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_RemoveRegionData& sample);

        class NDDSUSERDllExport DDS_RemoveRegionMessage {
          public:
            DDS_RemoveRegionMessage();

            DDS_RemoveRegionMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const std::string& RequestId,
                const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_RemoveRegionMessage (DDS_RemoveRegionMessage&&) = default;
            DDS_RemoveRegionMessage& operator=(DDS_RemoveRegionMessage&&) = default;
            DDS_RemoveRegionMessage& operator=(const DDS_RemoveRegionMessage&) = default;
            DDS_RemoveRegionMessage(const DDS_RemoveRegionMessage&) = default;
            #else
            DDS_RemoveRegionMessage(DDS_RemoveRegionMessage&& other_) OMG_NOEXCEPT;  
            DDS_RemoveRegionMessage& operator=(DDS_RemoveRegionMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_RemoveRegionMessage& other_) const;
            bool operator != (const DDS_RemoveRegionMessage& other_) const;

            void swap(DDS_RemoveRegionMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            std::string m_RequestId_;
            DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData m_Data_;

        };

        inline void swap(DDS_RemoveRegionMessage& a, DDS_RemoveRegionMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_RemoveRegionMessage& sample);

    } // namespace DDSExternalSystem  
    namespace DDSCamera {

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSCommon::DDS_String50DoublePair >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSCommon::DDS_String50DoublePair >;
        #endif
        class NDDSUSERDllExport DDS_CameraCapabilitiesMessage {
          public:
            DDS_CameraCapabilitiesMessage();

            DDS_CameraCapabilitiesMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const DDS_GRI::DDSCommon::DDS_Identifier& CameraID,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 >& Parameters);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_CameraCapabilitiesMessage (DDS_CameraCapabilitiesMessage&&) = default;
            DDS_CameraCapabilitiesMessage& operator=(DDS_CameraCapabilitiesMessage&&) = default;
            DDS_CameraCapabilitiesMessage& operator=(const DDS_CameraCapabilitiesMessage&) = default;
            DDS_CameraCapabilitiesMessage(const DDS_CameraCapabilitiesMessage&) = default;
            #else
            DDS_CameraCapabilitiesMessage(DDS_CameraCapabilitiesMessage&& other_) OMG_NOEXCEPT;  
            DDS_CameraCapabilitiesMessage& operator=(DDS_CameraCapabilitiesMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSCommon::DDS_Identifier& CameraID() OMG_NOEXCEPT {
                return m_CameraID_;
            }

            const DDS_GRI::DDSCommon::DDS_Identifier& CameraID() const OMG_NOEXCEPT {
                return m_CameraID_;
            }

            void CameraID(const DDS_GRI::DDSCommon::DDS_Identifier& value) {
                m_CameraID_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 >& Parameters() OMG_NOEXCEPT {
                return m_Parameters_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 >& Parameters() const OMG_NOEXCEPT {
                return m_Parameters_;
            }

            void Parameters(const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 >& value) {
                m_Parameters_ = value;
            }

            bool operator == (const DDS_CameraCapabilitiesMessage& other_) const;
            bool operator != (const DDS_CameraCapabilitiesMessage& other_) const;

            void swap(DDS_CameraCapabilitiesMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_CameraID_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 > m_Parameters_;

        };

        inline void swap(DDS_CameraCapabilitiesMessage& a, DDS_CameraCapabilitiesMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_CameraCapabilitiesMessage& sample);

    } // namespace DDSCamera  
    namespace DDSGpp {

        class NDDSUSERDllExport DDS_GlobalPathQueryData {
          public:
            DDS_GlobalPathQueryData();

            DDS_GlobalPathQueryData(
                const DDS_GRI::DDSCommon::DDS_LogicPoint& PointFrom,
                const DDS_GRI::DDSCommon::DDS_LogicPoint& PointTo,
                int32_t MaxNumOfPath,
                double MaxDistanceToPathInMeters);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GlobalPathQueryData (DDS_GlobalPathQueryData&&) = default;
            DDS_GlobalPathQueryData& operator=(DDS_GlobalPathQueryData&&) = default;
            DDS_GlobalPathQueryData& operator=(const DDS_GlobalPathQueryData&) = default;
            DDS_GlobalPathQueryData(const DDS_GlobalPathQueryData&) = default;
            #else
            DDS_GlobalPathQueryData(DDS_GlobalPathQueryData&& other_) OMG_NOEXCEPT;  
            DDS_GlobalPathQueryData& operator=(DDS_GlobalPathQueryData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            DDS_GRI::DDSCommon::DDS_LogicPoint& PointFrom() OMG_NOEXCEPT {
                return m_PointFrom_;
            }

            const DDS_GRI::DDSCommon::DDS_LogicPoint& PointFrom() const OMG_NOEXCEPT {
                return m_PointFrom_;
            }

            void PointFrom(const DDS_GRI::DDSCommon::DDS_LogicPoint& value) {
                m_PointFrom_ = value;
            }

            DDS_GRI::DDSCommon::DDS_LogicPoint& PointTo() OMG_NOEXCEPT {
                return m_PointTo_;
            }

            const DDS_GRI::DDSCommon::DDS_LogicPoint& PointTo() const OMG_NOEXCEPT {
                return m_PointTo_;
            }

            void PointTo(const DDS_GRI::DDSCommon::DDS_LogicPoint& value) {
                m_PointTo_ = value;
            }

            int32_t& MaxNumOfPath() OMG_NOEXCEPT {
                return m_MaxNumOfPath_;
            }

            const int32_t& MaxNumOfPath() const OMG_NOEXCEPT {
                return m_MaxNumOfPath_;
            }

            void MaxNumOfPath(int32_t value) {
                m_MaxNumOfPath_ = value;
            }

            double& MaxDistanceToPathInMeters() OMG_NOEXCEPT {
                return m_MaxDistanceToPathInMeters_;
            }

            const double& MaxDistanceToPathInMeters() const OMG_NOEXCEPT {
                return m_MaxDistanceToPathInMeters_;
            }

            void MaxDistanceToPathInMeters(double value) {
                m_MaxDistanceToPathInMeters_ = value;
            }

            bool operator == (const DDS_GlobalPathQueryData& other_) const;
            bool operator != (const DDS_GlobalPathQueryData& other_) const;

            void swap(DDS_GlobalPathQueryData& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_LogicPoint m_PointFrom_;
            DDS_GRI::DDSCommon::DDS_LogicPoint m_PointTo_;
            int32_t m_MaxNumOfPath_;
            double m_MaxDistanceToPathInMeters_;

        };

        inline void swap(DDS_GlobalPathQueryData& a, DDS_GlobalPathQueryData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GlobalPathQueryData& sample);

        class NDDSUSERDllExport DDS_GlobalPathQueryMessage {
          public:
            DDS_GlobalPathQueryMessage();

            DDS_GlobalPathQueryMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const std::string& RequestId,
                const DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GlobalPathQueryMessage (DDS_GlobalPathQueryMessage&&) = default;
            DDS_GlobalPathQueryMessage& operator=(DDS_GlobalPathQueryMessage&&) = default;
            DDS_GlobalPathQueryMessage& operator=(const DDS_GlobalPathQueryMessage&) = default;
            DDS_GlobalPathQueryMessage(const DDS_GlobalPathQueryMessage&) = default;
            #else
            DDS_GlobalPathQueryMessage(DDS_GlobalPathQueryMessage&& other_) OMG_NOEXCEPT;  
            DDS_GlobalPathQueryMessage& operator=(DDS_GlobalPathQueryMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_GlobalPathQueryMessage& other_) const;
            bool operator != (const DDS_GlobalPathQueryMessage& other_) const;

            void swap(DDS_GlobalPathQueryMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            std::string m_RequestId_;
            DDS_GRI::DDSGpp::DDS_GlobalPathQueryData m_Data_;

        };

        inline void swap(DDS_GlobalPathQueryMessage& a, DDS_GlobalPathQueryMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GlobalPathQueryMessage& sample);

        static const int32_t MAX_POINTS_IN_GLOBAL_PATH = 500;

        static const int32_t MAX_NUM_OF_PATH = 4;

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSCommon::DDS_LogicPoint >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSCommon::DDS_LogicPoint >;
        #endif
        class NDDSUSERDllExport DDS_GlobalPath {
          public:
            DDS_GlobalPath();

            DDS_GlobalPath(
                int32_t PathId,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) >& Path);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GlobalPath (DDS_GlobalPath&&) = default;
            DDS_GlobalPath& operator=(DDS_GlobalPath&&) = default;
            DDS_GlobalPath& operator=(const DDS_GlobalPath&) = default;
            DDS_GlobalPath(const DDS_GlobalPath&) = default;
            #else
            DDS_GlobalPath(DDS_GlobalPath&& other_) OMG_NOEXCEPT;  
            DDS_GlobalPath& operator=(DDS_GlobalPath&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            int32_t& PathId() OMG_NOEXCEPT {
                return m_PathId_;
            }

            const int32_t& PathId() const OMG_NOEXCEPT {
                return m_PathId_;
            }

            void PathId(int32_t value) {
                m_PathId_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) >& Path() OMG_NOEXCEPT {
                return m_Path_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) >& Path() const OMG_NOEXCEPT {
                return m_Path_;
            }

            void Path(const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) >& value) {
                m_Path_ = value;
            }

            bool operator == (const DDS_GlobalPath& other_) const;
            bool operator != (const DDS_GlobalPath& other_) const;

            void swap(DDS_GlobalPath& other_) OMG_NOEXCEPT ;

          private:

            int32_t m_PathId_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) > m_Path_;

        };

        inline void swap(DDS_GlobalPath& a, DDS_GlobalPath& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GlobalPath& sample);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        // On Windows, dll-export template instantiations of standard types used by
        // other dll-exported types
        template class NDDSUSERDllExport std::allocator< DDS_GRI::DDSGpp::DDS_GlobalPath >;
        template class NDDSUSERDllExport std::vector< DDS_GRI::DDSGpp::DDS_GlobalPath >;
        #endif
        class NDDSUSERDllExport DDS_GlobalPathReportData {
          public:
            DDS_GlobalPathReportData();

            DDS_GlobalPathReportData(
                const std::string& RequestId,
                const ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) >& GlobalPathList);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GlobalPathReportData (DDS_GlobalPathReportData&&) = default;
            DDS_GlobalPathReportData& operator=(DDS_GlobalPathReportData&&) = default;
            DDS_GlobalPathReportData& operator=(const DDS_GlobalPathReportData&) = default;
            DDS_GlobalPathReportData(const DDS_GlobalPathReportData&) = default;
            #else
            DDS_GlobalPathReportData(DDS_GlobalPathReportData&& other_) OMG_NOEXCEPT;  
            DDS_GlobalPathReportData& operator=(DDS_GlobalPathReportData&&  other_) OMG_NOEXCEPT;
            #endif
            #endif 

            std::string& RequestId() OMG_NOEXCEPT {
                return m_RequestId_;
            }

            const std::string& RequestId() const OMG_NOEXCEPT {
                return m_RequestId_;
            }

            void RequestId(const std::string& value) {
                m_RequestId_ = value;
            }

            ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) >& GlobalPathList() OMG_NOEXCEPT {
                return m_GlobalPathList_;
            }

            const ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) >& GlobalPathList() const OMG_NOEXCEPT {
                return m_GlobalPathList_;
            }

            void GlobalPathList(const ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) >& value) {
                m_GlobalPathList_ = value;
            }

            bool operator == (const DDS_GlobalPathReportData& other_) const;
            bool operator != (const DDS_GlobalPathReportData& other_) const;

            void swap(DDS_GlobalPathReportData& other_) OMG_NOEXCEPT ;

          private:

            std::string m_RequestId_;
            ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) > m_GlobalPathList_;

        };

        inline void swap(DDS_GlobalPathReportData& a, DDS_GlobalPathReportData& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GlobalPathReportData& sample);

        class NDDSUSERDllExport DDS_GlobalPathReportMessage {
          public:
            DDS_GlobalPathReportMessage();

            DDS_GlobalPathReportMessage(
                const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
                const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
                const std::string& RequestId,
                const DDS_GRI::DDSGpp::DDS_GlobalPathReportData& Data);

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            DDS_GlobalPathReportMessage (DDS_GlobalPathReportMessage&&) = default;
            DDS_GlobalPathReportMessage& operator=(DDS_GlobalPathReportMessage&&) = default;
            DDS_GlobalPathReportMessage& operator=(const DDS_GlobalPathReportMessage&) = default;
            DDS_GlobalPathReportMessage(const DDS_GlobalPathReportMessage&) = default;
            #else
            DDS_GlobalPathReportMessage(DDS_GlobalPathReportMessage&& other_) OMG_NOEXCEPT;  
            DDS_GlobalPathReportMessage& operator=(DDS_GlobalPathReportMessage&&  other_) OMG_NOEXCEPT;
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

            DDS_GRI::DDSGpp::DDS_GlobalPathReportData& Data() OMG_NOEXCEPT {
                return m_Data_;
            }

            const DDS_GRI::DDSGpp::DDS_GlobalPathReportData& Data() const OMG_NOEXCEPT {
                return m_Data_;
            }

            void Data(const DDS_GRI::DDSGpp::DDS_GlobalPathReportData& value) {
                m_Data_ = value;
            }

            bool operator == (const DDS_GlobalPathReportMessage& other_) const;
            bool operator != (const DDS_GlobalPathReportMessage& other_) const;

            void swap(DDS_GlobalPathReportMessage& other_) OMG_NOEXCEPT ;

          private:

            DDS_GRI::DDSCommon::DDS_Identifier m_SourceId_;
            DDS_GRI::DDSCommon::DDS_Identifier m_DestinationId_;
            std::string m_RequestId_;
            DDS_GRI::DDSGpp::DDS_GlobalPathReportData m_Data_;

        };

        inline void swap(DDS_GlobalPathReportMessage& a, DDS_GlobalPathReportMessage& b)  OMG_NOEXCEPT 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DDS_GlobalPathReportMessage& sample);

    } // namespace DDSGpp  
} // namespace DDS_GRI  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::T_DateTimeType > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::T_DateTimeType";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::T_DateTimeType > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::T_DateTimeType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::T_DateTimeType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_AttributeValue > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_AttributeValue";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_AttributeValue > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_AttributeValue& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_AttributeValue& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_Identifier > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_Identifier";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_Identifier > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_Identifier& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_Identifier& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_GuidIdentifierPair";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_LogicPoint > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_LogicPoint";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_LogicPoint > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_LogicPoint& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_LogicPoint& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_GeoPoint > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_GeoPoint";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_GeoPoint > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_GeoPoint& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_GeoPoint& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_GeoCircle > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_GeoCircle";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_GeoCircle > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_GeoCircle& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_GeoCircle& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_WayPoint > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_WayPoint";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_WayPoint > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_WayPoint& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_WayPoint& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_String50DoublePair > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_String50DoublePair";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_String50DoublePair > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_String50DoublePair& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_String50DoublePair& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_RangeDescription > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_RangeDescription";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_RangeDescription > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_RangeDescription& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_RangeDescription& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_ItemType > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_ItemType";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_ItemType > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_ItemType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_ItemType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCommon::DDS_BaseRequestMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCommon::DDS_BaseRequestMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSCommon::DDS_BaseRequestMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSCommon::DDS_BaseRequestMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_BaseItem > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_BaseItem";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_Way > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_Way";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Way > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_Way& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_Way& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_Section > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_Section";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Section > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_Section& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_Section& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_Route > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_Route";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_Route > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Route > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_Route& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_Route& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_Route& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_Route& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::ExtendedGeoPoint";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPoint& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPoint& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_AddRegionData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_AddRegionData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_RegionResponseData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSGpp::DDS_GlobalPathQueryData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSGpp::DDS_GlobalPath > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSGpp::DDS_GlobalPath";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPath > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPath& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPath& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSGpp::DDS_GlobalPathReportData > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSGpp::DDS_GlobalPathReportData";
            }
        };

        template<>
        struct topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportData > {
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportData& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage > {
            NDDSUSERDllExport static std::string value() {
                return "DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage";
            }
        };

        template<>
        struct is_topic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::String100_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::String50_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::String20_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::WString200_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::WString100_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::WString50_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::WString20_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_FileTimeUTC_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::T_Int32_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::T_Int64_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::T_DateTimeType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::T_DateTimeType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_ValueTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_ValueTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_AttributeValue > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_AttributeValue > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_Identifier > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_LogicPoint > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_LogicPoint > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_GeoPoint > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_GeoCircle > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_GeoCircle > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_WayPoint > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_WayPoint > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_String50DoublePair > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_String50DoublePair > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_RangeDescription > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_RangeDescription > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_ItemType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_ItemType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_Visibility > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_Visibility > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_OperationType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_OperationType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_OprationStatus > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_OprationStatus > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCommon::DDS_BaseRequestMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCommon::DDS_BaseRequestMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_BaseItem > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Way > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_Way > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Section > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_Section > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Route > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_Route > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_AddRegionData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPath > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSGpp::DDS_GlobalPath > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportData > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSGpp::DDS_GlobalPathReportData > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage > {
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

#endif // DDSGeneralForWPS_896445415_hpp

