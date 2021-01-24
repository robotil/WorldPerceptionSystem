

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSGeneralForWPS.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "DDSGeneralForWPS.hpp"
#include "DDSGeneralForWPSPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace DDS_GRI {

    namespace DDSCommon {

        // ---- T_DateTimeType: 

        T_DateTimeType::T_DateTimeType() :
            m_A_second_ (0ll) ,
            m_A_nanoseconds_ (0)  {
        }   

        T_DateTimeType::T_DateTimeType (
            ::rti::core::int64 A_second,
            int32_t A_nanoseconds)
            :
                m_A_second_( A_second ),
                m_A_nanoseconds_( A_nanoseconds ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        T_DateTimeType::T_DateTimeType(T_DateTimeType&& other_) OMG_NOEXCEPT  :m_A_second_ (std::move(other_.m_A_second_))
        ,
        m_A_nanoseconds_ (std::move(other_.m_A_nanoseconds_))
        {
        } 

        T_DateTimeType& T_DateTimeType::operator=(T_DateTimeType&&  other_) OMG_NOEXCEPT {
            T_DateTimeType tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void T_DateTimeType::swap(T_DateTimeType& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_A_second_, other_.m_A_second_);
            swap(m_A_nanoseconds_, other_.m_A_nanoseconds_);
        }  

        bool T_DateTimeType::operator == (const T_DateTimeType& other_) const {
            if (m_A_second_ != other_.m_A_second_) {
                return false;
            }
            if (m_A_nanoseconds_ != other_.m_A_nanoseconds_) {
                return false;
            }
            return true;
        }
        bool T_DateTimeType::operator != (const T_DateTimeType& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const T_DateTimeType& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "A_second: " << sample.A_second()<<", ";
            o << "A_nanoseconds: " << sample.A_nanoseconds() ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const DDS_ValueTypeEnum& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case DDS_ValueTypeEnum::None:
                o << "DDS_ValueTypeEnum::None" << " ";
                break;
                case DDS_ValueTypeEnum::Bool:
                o << "DDS_ValueTypeEnum::Bool" << " ";
                break;
                case DDS_ValueTypeEnum::Byte:
                o << "DDS_ValueTypeEnum::Byte" << " ";
                break;
                case DDS_ValueTypeEnum::Char:
                o << "DDS_ValueTypeEnum::Char" << " ";
                break;
                case DDS_ValueTypeEnum::Decimal:
                o << "DDS_ValueTypeEnum::Decimal" << " ";
                break;
                case DDS_ValueTypeEnum::Double:
                o << "DDS_ValueTypeEnum::Double" << " ";
                break;
                case DDS_ValueTypeEnum::Float:
                o << "DDS_ValueTypeEnum::Float" << " ";
                break;
                case DDS_ValueTypeEnum::Int:
                o << "DDS_ValueTypeEnum::Int" << " ";
                break;
                case DDS_ValueTypeEnum::Long:
                o << "DDS_ValueTypeEnum::Long" << " ";
                break;
                case DDS_ValueTypeEnum::Sbyte:
                o << "DDS_ValueTypeEnum::Sbyte" << " ";
                break;
                case DDS_ValueTypeEnum::Short:
                o << "DDS_ValueTypeEnum::Short" << " ";
                break;
                case DDS_ValueTypeEnum::Uint:
                o << "DDS_ValueTypeEnum::Uint" << " ";
                break;
                case DDS_ValueTypeEnum::Ulong:
                o << "DDS_ValueTypeEnum::Ulong" << " ";
                break;
                case DDS_ValueTypeEnum::Ushort:
                o << "DDS_ValueTypeEnum::Ushort" << " ";
                break;
                case DDS_ValueTypeEnum::String:
                o << "DDS_ValueTypeEnum::String" << " ";
                break;
            }
            return o;
        }

        // ---- DDS_AttributeValue: 

        DDS_AttributeValue::DDS_AttributeValue() :
            m_Name_ ("") ,
            m_Value_ ("") ,
            m_ValueType_(DDS_GRI::DDSCommon::DDS_ValueTypeEnum::None) ,
            m_IsChanged_ (0)  {
        }   

        DDS_AttributeValue::DDS_AttributeValue (
            const std::string& Name,
            const std::string& Value,
            const DDS_GRI::DDSCommon::DDS_ValueTypeEnum& ValueType,
            bool IsChanged)
            :
                m_Name_( Name ),
                m_Value_( Value ),
                m_ValueType_( ValueType ),
                m_IsChanged_( IsChanged ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_AttributeValue::DDS_AttributeValue(DDS_AttributeValue&& other_) OMG_NOEXCEPT  :m_Name_ (std::move(other_.m_Name_))
        ,
        m_Value_ (std::move(other_.m_Value_))
        ,
        m_ValueType_ (std::move(other_.m_ValueType_))
        ,
        m_IsChanged_ (std::move(other_.m_IsChanged_))
        {
        } 

        DDS_AttributeValue& DDS_AttributeValue::operator=(DDS_AttributeValue&&  other_) OMG_NOEXCEPT {
            DDS_AttributeValue tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_AttributeValue::swap(DDS_AttributeValue& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Name_, other_.m_Name_);
            swap(m_Value_, other_.m_Value_);
            swap(m_ValueType_, other_.m_ValueType_);
            swap(m_IsChanged_, other_.m_IsChanged_);
        }  

        bool DDS_AttributeValue::operator == (const DDS_AttributeValue& other_) const {
            if (m_Name_ != other_.m_Name_) {
                return false;
            }
            if (m_Value_ != other_.m_Value_) {
                return false;
            }
            if (m_ValueType_ != other_.m_ValueType_) {
                return false;
            }
            if (m_IsChanged_ != other_.m_IsChanged_) {
                return false;
            }
            return true;
        }
        bool DDS_AttributeValue::operator != (const DDS_AttributeValue& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_AttributeValue& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Name: " << sample.Name()<<", ";
            o << "Value: " << sample.Value()<<", ";
            o << "ValueType: " << sample.ValueType()<<", ";
            o << "IsChanged: " << sample.IsChanged() ;
            o <<"]";
            return o;
        }

        // ---- DDS_Identifier: 

        DDS_Identifier::DDS_Identifier() :
            m_Id_ (0) ,
            m_Type_ ("")  {
        }   

        DDS_Identifier::DDS_Identifier (
            uint16_t Id,
            const std::string& Type)
            :
                m_Id_( Id ),
                m_Type_( Type ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_Identifier::DDS_Identifier(DDS_Identifier&& other_) OMG_NOEXCEPT  :m_Id_ (std::move(other_.m_Id_))
        ,
        m_Type_ (std::move(other_.m_Type_))
        {
        } 

        DDS_Identifier& DDS_Identifier::operator=(DDS_Identifier&&  other_) OMG_NOEXCEPT {
            DDS_Identifier tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_Identifier::swap(DDS_Identifier& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Id_, other_.m_Id_);
            swap(m_Type_, other_.m_Type_);
        }  

        bool DDS_Identifier::operator == (const DDS_Identifier& other_) const {
            if (m_Id_ != other_.m_Id_) {
                return false;
            }
            if (m_Type_ != other_.m_Type_) {
                return false;
            }
            return true;
        }
        bool DDS_Identifier::operator != (const DDS_Identifier& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_Identifier& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Id: " << sample.Id()<<", ";
            o << "Type: " << sample.Type() ;
            o <<"]";
            return o;
        }

        // ---- DDS_GuidIdentifierPair: 

        DDS_GuidIdentifierPair::DDS_GuidIdentifierPair() :
            m_Guid_ ("")  {
        }   

        DDS_GuidIdentifierPair::DDS_GuidIdentifierPair (
            const std::string& Guid,
            const DDS_GRI::DDSCommon::DDS_Identifier& Id)
            :
                m_Guid_( Guid ),
                m_Id_( Id ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GuidIdentifierPair::DDS_GuidIdentifierPair(DDS_GuidIdentifierPair&& other_) OMG_NOEXCEPT  :m_Guid_ (std::move(other_.m_Guid_))
        ,
        m_Id_ (std::move(other_.m_Id_))
        {
        } 

        DDS_GuidIdentifierPair& DDS_GuidIdentifierPair::operator=(DDS_GuidIdentifierPair&&  other_) OMG_NOEXCEPT {
            DDS_GuidIdentifierPair tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GuidIdentifierPair::swap(DDS_GuidIdentifierPair& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Guid_, other_.m_Guid_);
            swap(m_Id_, other_.m_Id_);
        }  

        bool DDS_GuidIdentifierPair::operator == (const DDS_GuidIdentifierPair& other_) const {
            if (m_Guid_ != other_.m_Guid_) {
                return false;
            }
            if (m_Id_ != other_.m_Id_) {
                return false;
            }
            return true;
        }
        bool DDS_GuidIdentifierPair::operator != (const DDS_GuidIdentifierPair& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GuidIdentifierPair& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Guid: " << sample.Guid()<<", ";
            o << "Id: " << sample.Id() ;
            o <<"]";
            return o;
        }

        // ---- DDS_LogicPoint: 

        DDS_LogicPoint::DDS_LogicPoint() :
            m_X_ (0.0) ,
            m_Y_ (0.0)  {
        }   

        DDS_LogicPoint::DDS_LogicPoint (
            double X,
            double Y)
            :
                m_X_( X ),
                m_Y_( Y ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_LogicPoint::DDS_LogicPoint(DDS_LogicPoint&& other_) OMG_NOEXCEPT  :m_X_ (std::move(other_.m_X_))
        ,
        m_Y_ (std::move(other_.m_Y_))
        {
        } 

        DDS_LogicPoint& DDS_LogicPoint::operator=(DDS_LogicPoint&&  other_) OMG_NOEXCEPT {
            DDS_LogicPoint tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_LogicPoint::swap(DDS_LogicPoint& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_X_, other_.m_X_);
            swap(m_Y_, other_.m_Y_);
        }  

        bool DDS_LogicPoint::operator == (const DDS_LogicPoint& other_) const {
            if (m_X_ != other_.m_X_) {
                return false;
            }
            if (m_Y_ != other_.m_Y_) {
                return false;
            }
            return true;
        }
        bool DDS_LogicPoint::operator != (const DDS_LogicPoint& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_LogicPoint& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "X: " << std::setprecision(15) <<sample.X()<<", ";
            o << "Y: " << std::setprecision(15) <<sample.Y() ;
            o <<"]";
            return o;
        }

        // ---- DDS_GeoPoint: 

        DDS_GeoPoint::DDS_GeoPoint() :
            m_Longitude_ (0.0) ,
            m_Latitude_ (0.0) ,
            m_Altitude_ (0.0) ,
            m_GeoPointId_ (0)  {
        }   

        DDS_GeoPoint::DDS_GeoPoint (
            double Longitude,
            double Latitude,
            double Altitude,
            uint16_t GeoPointId)
            :
                m_Longitude_( Longitude ),
                m_Latitude_( Latitude ),
                m_Altitude_( Altitude ),
                m_GeoPointId_( GeoPointId ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GeoPoint::DDS_GeoPoint(DDS_GeoPoint&& other_) OMG_NOEXCEPT  :m_Longitude_ (std::move(other_.m_Longitude_))
        ,
        m_Latitude_ (std::move(other_.m_Latitude_))
        ,
        m_Altitude_ (std::move(other_.m_Altitude_))
        ,
        m_GeoPointId_ (std::move(other_.m_GeoPointId_))
        {
        } 

        DDS_GeoPoint& DDS_GeoPoint::operator=(DDS_GeoPoint&&  other_) OMG_NOEXCEPT {
            DDS_GeoPoint tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GeoPoint::swap(DDS_GeoPoint& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Longitude_, other_.m_Longitude_);
            swap(m_Latitude_, other_.m_Latitude_);
            swap(m_Altitude_, other_.m_Altitude_);
            swap(m_GeoPointId_, other_.m_GeoPointId_);
        }  

        bool DDS_GeoPoint::operator == (const DDS_GeoPoint& other_) const {
            if (m_Longitude_ != other_.m_Longitude_) {
                return false;
            }
            if (m_Latitude_ != other_.m_Latitude_) {
                return false;
            }
            if (m_Altitude_ != other_.m_Altitude_) {
                return false;
            }
            if (m_GeoPointId_ != other_.m_GeoPointId_) {
                return false;
            }
            return true;
        }
        bool DDS_GeoPoint::operator != (const DDS_GeoPoint& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GeoPoint& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Longitude: " << std::setprecision(15) <<sample.Longitude()<<", ";
            o << "Latitude: " << std::setprecision(15) <<sample.Latitude()<<", ";
            o << "Altitude: " << std::setprecision(15) <<sample.Altitude()<<", ";
            o << "GeoPointId: " << sample.GeoPointId() ;
            o <<"]";
            return o;
        }

        // ---- DDS_GeoCircle: 

        DDS_GeoCircle::DDS_GeoCircle() :
            m_Radius_ (0.0)  {
        }   

        DDS_GeoCircle::DDS_GeoCircle (
            double Radius,
            const DDS_GRI::DDSCommon::DDS_GeoPoint& Center)
            :
                m_Radius_( Radius ),
                m_Center_( Center ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GeoCircle::DDS_GeoCircle(DDS_GeoCircle&& other_) OMG_NOEXCEPT  :m_Radius_ (std::move(other_.m_Radius_))
        ,
        m_Center_ (std::move(other_.m_Center_))
        {
        } 

        DDS_GeoCircle& DDS_GeoCircle::operator=(DDS_GeoCircle&&  other_) OMG_NOEXCEPT {
            DDS_GeoCircle tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GeoCircle::swap(DDS_GeoCircle& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Radius_, other_.m_Radius_);
            swap(m_Center_, other_.m_Center_);
        }  

        bool DDS_GeoCircle::operator == (const DDS_GeoCircle& other_) const {
            if (m_Radius_ != other_.m_Radius_) {
                return false;
            }
            if (m_Center_ != other_.m_Center_) {
                return false;
            }
            return true;
        }
        bool DDS_GeoCircle::operator != (const DDS_GeoCircle& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GeoCircle& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Radius: " << std::setprecision(15) <<sample.Radius()<<", ";
            o << "Center: " << sample.Center() ;
            o <<"]";
            return o;
        }

        // ---- DDS_WayPoint: 

        DDS_WayPoint::DDS_WayPoint() :
            m_Longitude_ (0.0) ,
            m_Latitude_ (0.0) ,
            m_Altitude_ (0.0) ,
            m_WaypointId_ (0) ,
            m_WaypointCriticalLevel_ (0)  {
        }   

        DDS_WayPoint::DDS_WayPoint (
            double Longitude,
            double Latitude,
            double Altitude,
            uint16_t WaypointId,
            uint8_t WaypointCriticalLevel)
            :
                m_Longitude_( Longitude ),
                m_Latitude_( Latitude ),
                m_Altitude_( Altitude ),
                m_WaypointId_( WaypointId ),
                m_WaypointCriticalLevel_( WaypointCriticalLevel ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_WayPoint::DDS_WayPoint(DDS_WayPoint&& other_) OMG_NOEXCEPT  :m_Longitude_ (std::move(other_.m_Longitude_))
        ,
        m_Latitude_ (std::move(other_.m_Latitude_))
        ,
        m_Altitude_ (std::move(other_.m_Altitude_))
        ,
        m_WaypointId_ (std::move(other_.m_WaypointId_))
        ,
        m_WaypointCriticalLevel_ (std::move(other_.m_WaypointCriticalLevel_))
        {
        } 

        DDS_WayPoint& DDS_WayPoint::operator=(DDS_WayPoint&&  other_) OMG_NOEXCEPT {
            DDS_WayPoint tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_WayPoint::swap(DDS_WayPoint& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Longitude_, other_.m_Longitude_);
            swap(m_Latitude_, other_.m_Latitude_);
            swap(m_Altitude_, other_.m_Altitude_);
            swap(m_WaypointId_, other_.m_WaypointId_);
            swap(m_WaypointCriticalLevel_, other_.m_WaypointCriticalLevel_);
        }  

        bool DDS_WayPoint::operator == (const DDS_WayPoint& other_) const {
            if (m_Longitude_ != other_.m_Longitude_) {
                return false;
            }
            if (m_Latitude_ != other_.m_Latitude_) {
                return false;
            }
            if (m_Altitude_ != other_.m_Altitude_) {
                return false;
            }
            if (m_WaypointId_ != other_.m_WaypointId_) {
                return false;
            }
            if (m_WaypointCriticalLevel_ != other_.m_WaypointCriticalLevel_) {
                return false;
            }
            return true;
        }
        bool DDS_WayPoint::operator != (const DDS_WayPoint& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_WayPoint& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Longitude: " << std::setprecision(15) <<sample.Longitude()<<", ";
            o << "Latitude: " << std::setprecision(15) <<sample.Latitude()<<", ";
            o << "Altitude: " << std::setprecision(15) <<sample.Altitude()<<", ";
            o << "WaypointId: " << sample.WaypointId()<<", ";
            o << "WaypointCriticalLevel: <" << std::hex<<(int)sample.WaypointCriticalLevel()  ;
            o <<"]";
            return o;
        }

        // ---- DDS_String50DoublePair: 

        DDS_String50DoublePair::DDS_String50DoublePair() :
            m_Key_ ("") ,
            m_Value_ (0.0)  {
        }   

        DDS_String50DoublePair::DDS_String50DoublePair (
            const std::string& Key,
            double Value)
            :
                m_Key_( Key ),
                m_Value_( Value ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_String50DoublePair::DDS_String50DoublePair(DDS_String50DoublePair&& other_) OMG_NOEXCEPT  :m_Key_ (std::move(other_.m_Key_))
        ,
        m_Value_ (std::move(other_.m_Value_))
        {
        } 

        DDS_String50DoublePair& DDS_String50DoublePair::operator=(DDS_String50DoublePair&&  other_) OMG_NOEXCEPT {
            DDS_String50DoublePair tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_String50DoublePair::swap(DDS_String50DoublePair& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Key_, other_.m_Key_);
            swap(m_Value_, other_.m_Value_);
        }  

        bool DDS_String50DoublePair::operator == (const DDS_String50DoublePair& other_) const {
            if (m_Key_ != other_.m_Key_) {
                return false;
            }
            if (m_Value_ != other_.m_Value_) {
                return false;
            }
            return true;
        }
        bool DDS_String50DoublePair::operator != (const DDS_String50DoublePair& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_String50DoublePair& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Key: " << sample.Key()<<", ";
            o << "Value: " << std::setprecision(15) <<sample.Value() ;
            o <<"]";
            return o;
        }

        // ---- DDS_RangeDescription: 

        DDS_RangeDescription::DDS_RangeDescription() :
            m_Minimum_ (0.0) ,
            m_Maximum_ (0.0)  {
        }   

        DDS_RangeDescription::DDS_RangeDescription (
            double Minimum,
            double Maximum)
            :
                m_Minimum_( Minimum ),
                m_Maximum_( Maximum ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_RangeDescription::DDS_RangeDescription(DDS_RangeDescription&& other_) OMG_NOEXCEPT  :m_Minimum_ (std::move(other_.m_Minimum_))
        ,
        m_Maximum_ (std::move(other_.m_Maximum_))
        {
        } 

        DDS_RangeDescription& DDS_RangeDescription::operator=(DDS_RangeDescription&&  other_) OMG_NOEXCEPT {
            DDS_RangeDescription tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_RangeDescription::swap(DDS_RangeDescription& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Minimum_, other_.m_Minimum_);
            swap(m_Maximum_, other_.m_Maximum_);
        }  

        bool DDS_RangeDescription::operator == (const DDS_RangeDescription& other_) const {
            if (m_Minimum_ != other_.m_Minimum_) {
                return false;
            }
            if (m_Maximum_ != other_.m_Maximum_) {
                return false;
            }
            return true;
        }
        bool DDS_RangeDescription::operator != (const DDS_RangeDescription& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_RangeDescription& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Minimum: " << std::setprecision(15) <<sample.Minimum()<<", ";
            o << "Maximum: " << std::setprecision(15) <<sample.Maximum() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ItemType: 

        DDS_ItemType::DDS_ItemType() :
            m_Type_ (0) ,
            m_Subtype_ (0)  {
        }   

        DDS_ItemType::DDS_ItemType (
            uint16_t Type,
            uint8_t Subtype)
            :
                m_Type_( Type ),
                m_Subtype_( Subtype ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ItemType::DDS_ItemType(DDS_ItemType&& other_) OMG_NOEXCEPT  :m_Type_ (std::move(other_.m_Type_))
        ,
        m_Subtype_ (std::move(other_.m_Subtype_))
        {
        } 

        DDS_ItemType& DDS_ItemType::operator=(DDS_ItemType&&  other_) OMG_NOEXCEPT {
            DDS_ItemType tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ItemType::swap(DDS_ItemType& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Type_, other_.m_Type_);
            swap(m_Subtype_, other_.m_Subtype_);
        }  

        bool DDS_ItemType::operator == (const DDS_ItemType& other_) const {
            if (m_Type_ != other_.m_Type_) {
                return false;
            }
            if (m_Subtype_ != other_.m_Subtype_) {
                return false;
            }
            return true;
        }
        bool DDS_ItemType::operator != (const DDS_ItemType& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ItemType& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Type: " << sample.Type()<<", ";
            o << "Subtype: <" << std::hex<<(int)sample.Subtype()  ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const DDS_Visibility& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case DDS_Visibility::Visible:
                o << "DDS_Visibility::Visible" << " ";
                break;
                case DDS_Visibility::Hidden:
                o << "DDS_Visibility::Hidden" << " ";
                break;
                case DDS_Visibility::Collapsed:
                o << "DDS_Visibility::Collapsed" << " ";
                break;
            }
            return o;
        }

        std::ostream& operator << (std::ostream& o,const DDS_OperationType& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case DDS_OperationType::OnOffOperation:
                o << "DDS_OperationType::OnOffOperation" << " ";
                break;
                case DDS_OperationType::EnumsOperation:
                o << "DDS_OperationType::EnumsOperation" << " ";
                break;
                case DDS_OperationType::NumericOperation:
                o << "DDS_OperationType::NumericOperation" << " ";
                break;
                case DDS_OperationType::UpDownEnumsOperation:
                o << "DDS_OperationType::UpDownEnumsOperation" << " ";
                break;
            }
            return o;
        }

        std::ostream& operator << (std::ostream& o,const DDS_OprationStatus& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case DDS_OprationStatus::None:
                o << "DDS_OprationStatus::None" << " ";
                break;
                case DDS_OprationStatus::NotExecuted:
                o << "DDS_OprationStatus::NotExecuted" << " ";
                break;
                case DDS_OprationStatus::InProcess:
                o << "DDS_OprationStatus::InProcess" << " ";
                break;
                case DDS_OprationStatus::FinishedSuccessfully:
                o << "DDS_OprationStatus::FinishedSuccessfully" << " ";
                break;
                case DDS_OprationStatus::Failure:
                o << "DDS_OprationStatus::Failure" << " ";
                break;
                case DDS_OprationStatus::Timeout:
                o << "DDS_OprationStatus::Timeout" << " ";
                break;
                case DDS_OprationStatus::Stoped:
                o << "DDS_OprationStatus::Stoped" << " ";
                break;
            }
            return o;
        }

        // ---- DDS_BaseRequestMessage: 

        DDS_BaseRequestMessage::DDS_BaseRequestMessage()  {
        }   

        DDS_BaseRequestMessage::DDS_BaseRequestMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_BaseRequestMessage::DDS_BaseRequestMessage(DDS_BaseRequestMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        {
        } 

        DDS_BaseRequestMessage& DDS_BaseRequestMessage::operator=(DDS_BaseRequestMessage&&  other_) OMG_NOEXCEPT {
            DDS_BaseRequestMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_BaseRequestMessage::swap(DDS_BaseRequestMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
        }  

        bool DDS_BaseRequestMessage::operator == (const DDS_BaseRequestMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            return true;
        }
        bool DDS_BaseRequestMessage::operator != (const DDS_BaseRequestMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_BaseRequestMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId() ;
            o <<"]";
            return o;
        }

    } // namespace DDSCommon  

    namespace DDSInfrastarcture {

        // ---- DDS_SectionWaypoint: 

        DDS_SectionWaypoint::DDS_SectionWaypoint() :
            m_PervWaypintId_ (0) ,
            m_WaypointIndex_ (0)  {
        }   

        DDS_SectionWaypoint::DDS_SectionWaypoint (
            double Longitude,
            double Latitude,
            double Altitude,
            uint16_t WaypointId,
            uint8_t WaypointCriticalLevel,
            int32_t PervWaypintId,
            int32_t WaypointIndex)
            :
                DDS_GRI::DDSCommon::DDS_WayPoint(Longitude,Latitude,Altitude,WaypointId,WaypointCriticalLevel ),
                m_PervWaypintId_( PervWaypintId ),
                m_WaypointIndex_( WaypointIndex ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_SectionWaypoint::DDS_SectionWaypoint(DDS_SectionWaypoint&& other_) OMG_NOEXCEPT  : 
        DDS_GRI::DDSCommon::DDS_WayPoint(std::move(other_)),
        m_PervWaypintId_ (std::move(other_.m_PervWaypintId_))
        ,
        m_WaypointIndex_ (std::move(other_.m_WaypointIndex_))
        {
        } 

        DDS_SectionWaypoint& DDS_SectionWaypoint::operator=(DDS_SectionWaypoint&&  other_) OMG_NOEXCEPT {
            DDS_SectionWaypoint tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_SectionWaypoint::swap(DDS_SectionWaypoint& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            DDS_GRI::DDSCommon::DDS_WayPoint::swap(other_);
            swap(m_PervWaypintId_, other_.m_PervWaypintId_);
            swap(m_WaypointIndex_, other_.m_WaypointIndex_);
        }  

        bool DDS_SectionWaypoint::operator == (const DDS_SectionWaypoint& other_) const {
            if (!DDS_GRI::DDSCommon::DDS_WayPoint::operator == (other_)){
                return false;
            }
            if (m_PervWaypintId_ != other_.m_PervWaypintId_) {
                return false;
            }
            if (m_WaypointIndex_ != other_.m_WaypointIndex_) {
                return false;
            }
            return true;
        }
        bool DDS_SectionWaypoint::operator != (const DDS_SectionWaypoint& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_SectionWaypoint& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << static_cast<const DDS_GRI::DDSCommon::DDS_WayPoint &>(sample);
            o << "PervWaypintId: " << sample.PervWaypintId()<<", ";
            o << "WaypointIndex: " << sample.WaypointIndex() ;
            o <<"]";
            return o;
        }

        // ---- DDS_WaypointBehaviorType: 

        DDS_WaypointBehaviorType::DDS_WaypointBehaviorType() :
            m_BehaviorType_ (0) ,
            m_Value_ (0.0)  {
        }   

        DDS_WaypointBehaviorType::DDS_WaypointBehaviorType (
            int32_t BehaviorType,
            double Value)
            :
                m_BehaviorType_( BehaviorType ),
                m_Value_( Value ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_WaypointBehaviorType::DDS_WaypointBehaviorType(DDS_WaypointBehaviorType&& other_) OMG_NOEXCEPT  :m_BehaviorType_ (std::move(other_.m_BehaviorType_))
        ,
        m_Value_ (std::move(other_.m_Value_))
        {
        } 

        DDS_WaypointBehaviorType& DDS_WaypointBehaviorType::operator=(DDS_WaypointBehaviorType&&  other_) OMG_NOEXCEPT {
            DDS_WaypointBehaviorType tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_WaypointBehaviorType::swap(DDS_WaypointBehaviorType& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_BehaviorType_, other_.m_BehaviorType_);
            swap(m_Value_, other_.m_Value_);
        }  

        bool DDS_WaypointBehaviorType::operator == (const DDS_WaypointBehaviorType& other_) const {
            if (m_BehaviorType_ != other_.m_BehaviorType_) {
                return false;
            }
            if (m_Value_ != other_.m_Value_) {
                return false;
            }
            return true;
        }
        bool DDS_WaypointBehaviorType::operator != (const DDS_WaypointBehaviorType& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_WaypointBehaviorType& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "BehaviorType: " << sample.BehaviorType()<<", ";
            o << "Value: " << std::setprecision(15) <<sample.Value() ;
            o <<"]";
            return o;
        }

        // ---- DDS_WaypointBehaviors: 

        DDS_WaypointBehaviors::DDS_WaypointBehaviors() :
            m_WaypointId_ (0)  {
        }   

        DDS_WaypointBehaviors::DDS_WaypointBehaviors (
            uint16_t WaypointId,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) >& Behaviors)
            :
                m_WaypointId_( WaypointId ),
                m_Behaviors_( Behaviors ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_WaypointBehaviors::DDS_WaypointBehaviors(DDS_WaypointBehaviors&& other_) OMG_NOEXCEPT  :m_WaypointId_ (std::move(other_.m_WaypointId_))
        ,
        m_Behaviors_ (std::move(other_.m_Behaviors_))
        {
        } 

        DDS_WaypointBehaviors& DDS_WaypointBehaviors::operator=(DDS_WaypointBehaviors&&  other_) OMG_NOEXCEPT {
            DDS_WaypointBehaviors tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_WaypointBehaviors::swap(DDS_WaypointBehaviors& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_WaypointId_, other_.m_WaypointId_);
            swap(m_Behaviors_, other_.m_Behaviors_);
        }  

        bool DDS_WaypointBehaviors::operator == (const DDS_WaypointBehaviors& other_) const {
            if (m_WaypointId_ != other_.m_WaypointId_) {
                return false;
            }
            if (m_Behaviors_ != other_.m_Behaviors_) {
                return false;
            }
            return true;
        }
        bool DDS_WaypointBehaviors::operator != (const DDS_WaypointBehaviors& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_WaypointBehaviors& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "WaypointId: " << sample.WaypointId()<<", ";
            o << "Behaviors: " << sample.Behaviors() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ItemDescrpition: 

        DDS_ItemDescrpition::DDS_ItemDescrpition() :
            m_RefClientSideId_ ("") ,
            m_Createion_ ("") ,
            m_ModificationTime_ (0ll) ,
            m_Creator_ ("") ,
            m_IsReservedItem_ (0) ,
            m_IsSave_ (0) ,
            m_ItemId_ (0) ,
            m_VehicleType_ ("")  {
                const wchar_t m_Name__VALUE_[] = {0};
            const wchar_t m_Description__VALUE_[] = {0};
            m_Name_ = std::wstring(m_Name__VALUE_);
            m_Description_ = std::wstring(m_Description__VALUE_);
        }   

        DDS_ItemDescrpition::DDS_ItemDescrpition (
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
            const std::string& VehicleType)
            :
                m_RefClientSideId_( RefClientSideId ),
                m_Name_( Name ),
                m_Createion_( Createion ),
                m_ModificationTime_( ModificationTime ),
                m_Creator_( Creator ),
                m_Description_( Description ),
                m_MissionElementType_( MissionElementType ),
                m_IsReservedItem_( IsReservedItem ),
                m_IsSave_( IsSave ),
                m_ItemId_( ItemId ),
                m_VehicleType_( VehicleType ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ItemDescrpition::DDS_ItemDescrpition(DDS_ItemDescrpition&& other_) OMG_NOEXCEPT  :m_RefClientSideId_ (std::move(other_.m_RefClientSideId_))
        ,
        m_Name_ (std::move(other_.m_Name_))
        ,
        m_Createion_ (std::move(other_.m_Createion_))
        ,
        m_ModificationTime_ (std::move(other_.m_ModificationTime_))
        ,
        m_Creator_ (std::move(other_.m_Creator_))
        ,
        m_Description_ (std::move(other_.m_Description_))
        ,
        m_MissionElementType_ (std::move(other_.m_MissionElementType_))
        ,
        m_IsReservedItem_ (std::move(other_.m_IsReservedItem_))
        ,
        m_IsSave_ (std::move(other_.m_IsSave_))
        ,
        m_ItemId_ (std::move(other_.m_ItemId_))
        ,
        m_VehicleType_ (std::move(other_.m_VehicleType_))
        {
        } 

        DDS_ItemDescrpition& DDS_ItemDescrpition::operator=(DDS_ItemDescrpition&&  other_) OMG_NOEXCEPT {
            DDS_ItemDescrpition tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ItemDescrpition::swap(DDS_ItemDescrpition& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_RefClientSideId_, other_.m_RefClientSideId_);
            swap(m_Name_, other_.m_Name_);
            swap(m_Createion_, other_.m_Createion_);
            swap(m_ModificationTime_, other_.m_ModificationTime_);
            swap(m_Creator_, other_.m_Creator_);
            swap(m_Description_, other_.m_Description_);
            swap(m_MissionElementType_, other_.m_MissionElementType_);
            swap(m_IsReservedItem_, other_.m_IsReservedItem_);
            swap(m_IsSave_, other_.m_IsSave_);
            swap(m_ItemId_, other_.m_ItemId_);
            swap(m_VehicleType_, other_.m_VehicleType_);
        }  

        bool DDS_ItemDescrpition::operator == (const DDS_ItemDescrpition& other_) const {
            if (m_RefClientSideId_ != other_.m_RefClientSideId_) {
                return false;
            }
            if (m_Name_ != other_.m_Name_) {
                return false;
            }
            if (m_Createion_ != other_.m_Createion_) {
                return false;
            }
            if (m_ModificationTime_ != other_.m_ModificationTime_) {
                return false;
            }
            if (m_Creator_ != other_.m_Creator_) {
                return false;
            }
            if (m_Description_ != other_.m_Description_) {
                return false;
            }
            if (m_MissionElementType_ != other_.m_MissionElementType_) {
                return false;
            }
            if (m_IsReservedItem_ != other_.m_IsReservedItem_) {
                return false;
            }
            if (m_IsSave_ != other_.m_IsSave_) {
                return false;
            }
            if (m_ItemId_ != other_.m_ItemId_) {
                return false;
            }
            if (m_VehicleType_ != other_.m_VehicleType_) {
                return false;
            }
            return true;
        }
        bool DDS_ItemDescrpition::operator != (const DDS_ItemDescrpition& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ItemDescrpition& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "RefClientSideId: " << sample.RefClientSideId()<<", ";
            o << "Name: " << sample.Name()<<", ";
            o << "Createion: " << sample.Createion()<<", ";
            o << "ModificationTime: " << sample.ModificationTime()<<", ";
            o << "Creator: " << sample.Creator()<<", ";
            o << "Description: " << sample.Description()<<", ";
            o << "MissionElementType: " << sample.MissionElementType()<<", ";
            o << "IsReservedItem: " << sample.IsReservedItem()<<", ";
            o << "IsSave: " << sample.IsSave()<<", ";
            o << "ItemId: " << sample.ItemId()<<", ";
            o << "VehicleType: " << sample.VehicleType() ;
            o <<"]";
            return o;
        }

        // ---- DDS_BaseItem: 

        DDS_BaseItem::DDS_BaseItem() :
            m_ClientSideId_ ("") ,
            m_ItemId_ (0) ,
            m_ModificationId_ ("") ,
            m_Action_ (0) ,
            m_Assignment_ (0)  {
        }   

        DDS_BaseItem::DDS_BaseItem (
            const std::string& ClientSideId,
            uint16_t ItemId,
            const std::string& ModificationId,
            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
            uint8_t Action,
            const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition,
            uint16_t Assignment)
            :
                m_ClientSideId_( ClientSideId ),
                m_ItemId_( ItemId ),
                m_ModificationId_( ModificationId ),
                m_ItemType_( ItemType ),
                m_Action_( Action ),
                m_ItemDescrpition_( ItemDescrpition ),
                m_Assignment_( Assignment ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_BaseItem::DDS_BaseItem(DDS_BaseItem&& other_) OMG_NOEXCEPT  :m_ClientSideId_ (std::move(other_.m_ClientSideId_))
        ,
        m_ItemId_ (std::move(other_.m_ItemId_))
        ,
        m_ModificationId_ (std::move(other_.m_ModificationId_))
        ,
        m_ItemType_ (std::move(other_.m_ItemType_))
        ,
        m_Action_ (std::move(other_.m_Action_))
        ,
        m_ItemDescrpition_ (std::move(other_.m_ItemDescrpition_))
        ,
        m_Assignment_ (std::move(other_.m_Assignment_))
        {
        } 

        DDS_BaseItem& DDS_BaseItem::operator=(DDS_BaseItem&&  other_) OMG_NOEXCEPT {
            DDS_BaseItem tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_BaseItem::swap(DDS_BaseItem& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_ClientSideId_, other_.m_ClientSideId_);
            swap(m_ItemId_, other_.m_ItemId_);
            swap(m_ModificationId_, other_.m_ModificationId_);
            swap(m_ItemType_, other_.m_ItemType_);
            swap(m_Action_, other_.m_Action_);
            swap(m_ItemDescrpition_, other_.m_ItemDescrpition_);
            swap(m_Assignment_, other_.m_Assignment_);
        }  

        bool DDS_BaseItem::operator == (const DDS_BaseItem& other_) const {
            if (m_ClientSideId_ != other_.m_ClientSideId_) {
                return false;
            }
            if (m_ItemId_ != other_.m_ItemId_) {
                return false;
            }
            if (m_ModificationId_ != other_.m_ModificationId_) {
                return false;
            }
            if (m_ItemType_ != other_.m_ItemType_) {
                return false;
            }
            if (m_Action_ != other_.m_Action_) {
                return false;
            }
            if (m_ItemDescrpition_ != other_.m_ItemDescrpition_) {
                return false;
            }
            if (m_Assignment_ != other_.m_Assignment_) {
                return false;
            }
            return true;
        }
        bool DDS_BaseItem::operator != (const DDS_BaseItem& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_BaseItem& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "ClientSideId: " << sample.ClientSideId()<<", ";
            o << "ItemId: " << sample.ItemId()<<", ";
            o << "ModificationId: " << sample.ModificationId()<<", ";
            o << "ItemType: " << sample.ItemType()<<", ";
            o << "Action: <" << std::hex<<(int)sample.Action() <<", ";
            o << "ItemDescrpition: " << sample.ItemDescrpition()<<", ";
            o << "Assignment: " << sample.Assignment() ;
            o <<"]";
            return o;
        }

        // ---- DDS_Way: 

        DDS_Way::DDS_Way() :
            m_Stam_ (0)  {
        }   

        DDS_Way::DDS_Way (
            const std::string& ClientSideId,
            uint16_t ItemId,
            const std::string& ModificationId,
            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
            uint8_t Action,
            const DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& ItemDescrpition,
            uint16_t Assignment,
            uint8_t Stam)
            :
                DDS_GRI::DDSInfrastarcture::DDS_BaseItem(ClientSideId,ItemId,ModificationId,ItemType,Action,ItemDescrpition,Assignment ),
                m_Stam_( Stam ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_Way::DDS_Way(DDS_Way&& other_) OMG_NOEXCEPT  : 
        DDS_GRI::DDSInfrastarcture::DDS_BaseItem(std::move(other_)),
        m_Stam_ (std::move(other_.m_Stam_))
        {
        } 

        DDS_Way& DDS_Way::operator=(DDS_Way&&  other_) OMG_NOEXCEPT {
            DDS_Way tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_Way::swap(DDS_Way& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            DDS_GRI::DDSInfrastarcture::DDS_BaseItem::swap(other_);
            swap(m_Stam_, other_.m_Stam_);
        }  

        bool DDS_Way::operator == (const DDS_Way& other_) const {
            if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItem::operator == (other_)){
                return false;
            }
            if (m_Stam_ != other_.m_Stam_) {
                return false;
            }
            return true;
        }
        bool DDS_Way::operator != (const DDS_Way& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_Way& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << static_cast<const DDS_GRI::DDSInfrastarcture::DDS_BaseItem &>(sample);
            o << "Stam: <" << std::hex<<(int)sample.Stam()  ;
            o <<"]";
            return o;
        }

        // ---- DDS_ClientServerWayMessage: 

        DDS_ClientServerWayMessage::DDS_ClientServerWayMessage()  {
        }   

        DDS_ClientServerWayMessage::DDS_ClientServerWayMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSInfrastarcture::DDS_Way& Item)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Item_( Item ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ClientServerWayMessage::DDS_ClientServerWayMessage(DDS_ClientServerWayMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Item_ (std::move(other_.m_Item_))
        {
        } 

        DDS_ClientServerWayMessage& DDS_ClientServerWayMessage::operator=(DDS_ClientServerWayMessage&&  other_) OMG_NOEXCEPT {
            DDS_ClientServerWayMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ClientServerWayMessage::swap(DDS_ClientServerWayMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Item_, other_.m_Item_);
        }  

        bool DDS_ClientServerWayMessage::operator == (const DDS_ClientServerWayMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_Item_ != other_.m_Item_) {
                return false;
            }
            return true;
        }
        bool DDS_ClientServerWayMessage::operator != (const DDS_ClientServerWayMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ClientServerWayMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Item: " << sample.Item() ;
            o <<"]";
            return o;
        }

        // ---- DDS_Section: 

        DDS_Section::DDS_Section() :
            m_WayId_ ("") ,
            m_Speed_ (0.0) ,
            m_Direction_ (0) ,
            m_Width_ (0.0)  {
        }   

        DDS_Section::DDS_Section (
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
            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior)
            :
                DDS_GRI::DDSInfrastarcture::DDS_BaseItem(ClientSideId,ItemId,ModificationId,ItemType,Action,ItemDescrpition,Assignment ),
                m_WayId_( WayId ),
                m_Waypoints_( Waypoints ),
                m_Speed_( Speed ),
                m_Direction_( Direction ),
                m_Width_( Width ),
                m_WaypointsBehavior_( WaypointsBehavior ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_Section::DDS_Section(DDS_Section&& other_) OMG_NOEXCEPT  : 
        DDS_GRI::DDSInfrastarcture::DDS_BaseItem(std::move(other_)),
        m_WayId_ (std::move(other_.m_WayId_))
        ,
        m_Waypoints_ (std::move(other_.m_Waypoints_))
        ,
        m_Speed_ (std::move(other_.m_Speed_))
        ,
        m_Direction_ (std::move(other_.m_Direction_))
        ,
        m_Width_ (std::move(other_.m_Width_))
        ,
        m_WaypointsBehavior_ (std::move(other_.m_WaypointsBehavior_))
        {
        } 

        DDS_Section& DDS_Section::operator=(DDS_Section&&  other_) OMG_NOEXCEPT {
            DDS_Section tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_Section::swap(DDS_Section& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            DDS_GRI::DDSInfrastarcture::DDS_BaseItem::swap(other_);
            swap(m_WayId_, other_.m_WayId_);
            swap(m_Waypoints_, other_.m_Waypoints_);
            swap(m_Speed_, other_.m_Speed_);
            swap(m_Direction_, other_.m_Direction_);
            swap(m_Width_, other_.m_Width_);
            swap(m_WaypointsBehavior_, other_.m_WaypointsBehavior_);
        }  

        bool DDS_Section::operator == (const DDS_Section& other_) const {
            if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItem::operator == (other_)){
                return false;
            }
            if (m_WayId_ != other_.m_WayId_) {
                return false;
            }
            if (m_Waypoints_ != other_.m_Waypoints_) {
                return false;
            }
            if (m_Speed_ != other_.m_Speed_) {
                return false;
            }
            if (m_Direction_ != other_.m_Direction_) {
                return false;
            }
            if (m_Width_ != other_.m_Width_) {
                return false;
            }
            if (m_WaypointsBehavior_ != other_.m_WaypointsBehavior_) {
                return false;
            }
            return true;
        }
        bool DDS_Section::operator != (const DDS_Section& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_Section& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << static_cast<const DDS_GRI::DDSInfrastarcture::DDS_BaseItem &>(sample);
            o << "WayId: " << sample.WayId()<<", ";
            o << "Waypoints: " << sample.Waypoints()<<", ";
            o << "Speed: " << std::setprecision(15) <<sample.Speed()<<", ";
            o << "Direction: <" << std::hex<<(int)sample.Direction() <<", ";
            o << "Width: " << std::setprecision(15) <<sample.Width()<<", ";
            o << "WaypointsBehavior: " << sample.WaypointsBehavior() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ClientServerSectionMessage: 

        DDS_ClientServerSectionMessage::DDS_ClientServerSectionMessage()  {
        }   

        DDS_ClientServerSectionMessage::DDS_ClientServerSectionMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSInfrastarcture::DDS_Section& Item)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Item_( Item ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ClientServerSectionMessage::DDS_ClientServerSectionMessage(DDS_ClientServerSectionMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Item_ (std::move(other_.m_Item_))
        {
        } 

        DDS_ClientServerSectionMessage& DDS_ClientServerSectionMessage::operator=(DDS_ClientServerSectionMessage&&  other_) OMG_NOEXCEPT {
            DDS_ClientServerSectionMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ClientServerSectionMessage::swap(DDS_ClientServerSectionMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Item_, other_.m_Item_);
        }  

        bool DDS_ClientServerSectionMessage::operator == (const DDS_ClientServerSectionMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_Item_ != other_.m_Item_) {
                return false;
            }
            return true;
        }
        bool DDS_ClientServerSectionMessage::operator != (const DDS_ClientServerSectionMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ClientServerSectionMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Item: " << sample.Item() ;
            o <<"]";
            return o;
        }

        // ---- DDS_BaseRouteProperty: 

        DDS_BaseRouteProperty::DDS_BaseRouteProperty() :
            m_PathWidth_ (0) ,
            m_MotionRadius_ (0) ,
            m_RequiredRadiusOfCurvature_ (0) ,
            m_WaypointType_ (0)  {
        }   

        DDS_BaseRouteProperty::DDS_BaseRouteProperty (
            uint16_t PathWidth,
            uint16_t MotionRadius,
            uint16_t RequiredRadiusOfCurvature,
            uint8_t WaypointType)
            :
                m_PathWidth_( PathWidth ),
                m_MotionRadius_( MotionRadius ),
                m_RequiredRadiusOfCurvature_( RequiredRadiusOfCurvature ),
                m_WaypointType_( WaypointType ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_BaseRouteProperty::DDS_BaseRouteProperty(DDS_BaseRouteProperty&& other_) OMG_NOEXCEPT  :m_PathWidth_ (std::move(other_.m_PathWidth_))
        ,
        m_MotionRadius_ (std::move(other_.m_MotionRadius_))
        ,
        m_RequiredRadiusOfCurvature_ (std::move(other_.m_RequiredRadiusOfCurvature_))
        ,
        m_WaypointType_ (std::move(other_.m_WaypointType_))
        {
        } 

        DDS_BaseRouteProperty& DDS_BaseRouteProperty::operator=(DDS_BaseRouteProperty&&  other_) OMG_NOEXCEPT {
            DDS_BaseRouteProperty tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_BaseRouteProperty::swap(DDS_BaseRouteProperty& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PathWidth_, other_.m_PathWidth_);
            swap(m_MotionRadius_, other_.m_MotionRadius_);
            swap(m_RequiredRadiusOfCurvature_, other_.m_RequiredRadiusOfCurvature_);
            swap(m_WaypointType_, other_.m_WaypointType_);
        }  

        bool DDS_BaseRouteProperty::operator == (const DDS_BaseRouteProperty& other_) const {
            if (m_PathWidth_ != other_.m_PathWidth_) {
                return false;
            }
            if (m_MotionRadius_ != other_.m_MotionRadius_) {
                return false;
            }
            if (m_RequiredRadiusOfCurvature_ != other_.m_RequiredRadiusOfCurvature_) {
                return false;
            }
            if (m_WaypointType_ != other_.m_WaypointType_) {
                return false;
            }
            return true;
        }
        bool DDS_BaseRouteProperty::operator != (const DDS_BaseRouteProperty& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_BaseRouteProperty& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PathWidth: " << sample.PathWidth()<<", ";
            o << "MotionRadius: " << sample.MotionRadius()<<", ";
            o << "RequiredRadiusOfCurvature: " << sample.RequiredRadiusOfCurvature()<<", ";
            o << "WaypointType: <" << std::hex<<(int)sample.WaypointType()  ;
            o <<"]";
            return o;
        }

        // ---- DDS_Route: 

        DDS_Route::DDS_Route()  {
        }   

        DDS_Route::DDS_Route (
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
            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 >& WaypointsBehavior)
            :
                DDS_GRI::DDSInfrastarcture::DDS_BaseItem(ClientSideId,ItemId,ModificationId,ItemType,Action,ItemDescrpition,Assignment ),
                m_BaseRouteProperties_( BaseRouteProperties ),
                m_Sections_( Sections ),
                m_Waypoints_( Waypoints ),
                m_WaypointsBehavior_( WaypointsBehavior ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_Route::DDS_Route(DDS_Route&& other_) OMG_NOEXCEPT  : 
        DDS_GRI::DDSInfrastarcture::DDS_BaseItem(std::move(other_)),
        m_BaseRouteProperties_ (std::move(other_.m_BaseRouteProperties_))
        ,
        m_Sections_ (std::move(other_.m_Sections_))
        ,
        m_Waypoints_ (std::move(other_.m_Waypoints_))
        ,
        m_WaypointsBehavior_ (std::move(other_.m_WaypointsBehavior_))
        {
        } 

        DDS_Route& DDS_Route::operator=(DDS_Route&&  other_) OMG_NOEXCEPT {
            DDS_Route tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_Route::swap(DDS_Route& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            DDS_GRI::DDSInfrastarcture::DDS_BaseItem::swap(other_);
            swap(m_BaseRouteProperties_, other_.m_BaseRouteProperties_);
            swap(m_Sections_, other_.m_Sections_);
            swap(m_Waypoints_, other_.m_Waypoints_);
            swap(m_WaypointsBehavior_, other_.m_WaypointsBehavior_);
        }  

        bool DDS_Route::operator == (const DDS_Route& other_) const {
            if (!DDS_GRI::DDSInfrastarcture::DDS_BaseItem::operator == (other_)){
                return false;
            }
            if (m_BaseRouteProperties_ != other_.m_BaseRouteProperties_) {
                return false;
            }
            if (m_Sections_ != other_.m_Sections_) {
                return false;
            }
            if (m_Waypoints_ != other_.m_Waypoints_) {
                return false;
            }
            if (m_WaypointsBehavior_ != other_.m_WaypointsBehavior_) {
                return false;
            }
            return true;
        }
        bool DDS_Route::operator != (const DDS_Route& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_Route& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << static_cast<const DDS_GRI::DDSInfrastarcture::DDS_BaseItem &>(sample);
            o << "BaseRouteProperties: " << sample.BaseRouteProperties()<<", ";
            o << "Sections: " << sample.Sections()<<", ";
            o << "Waypoints: " << sample.Waypoints()<<", ";
            o << "WaypointsBehavior: " << sample.WaypointsBehavior() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ClientServerRouteMessage: 

        DDS_ClientServerRouteMessage::DDS_ClientServerRouteMessage()  {
        }   

        DDS_ClientServerRouteMessage::DDS_ClientServerRouteMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSInfrastarcture::DDS_Route& Item)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Item_( Item ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ClientServerRouteMessage::DDS_ClientServerRouteMessage(DDS_ClientServerRouteMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Item_ (std::move(other_.m_Item_))
        {
        } 

        DDS_ClientServerRouteMessage& DDS_ClientServerRouteMessage::operator=(DDS_ClientServerRouteMessage&&  other_) OMG_NOEXCEPT {
            DDS_ClientServerRouteMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ClientServerRouteMessage::swap(DDS_ClientServerRouteMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Item_, other_.m_Item_);
        }  

        bool DDS_ClientServerRouteMessage::operator == (const DDS_ClientServerRouteMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_Item_ != other_.m_Item_) {
                return false;
            }
            return true;
        }
        bool DDS_ClientServerRouteMessage::operator != (const DDS_ClientServerRouteMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ClientServerRouteMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Item: " << sample.Item() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ClientServerRequestItemsDiscrptionByTypeMessage: 

        DDS_ClientServerRequestItemsDiscrptionByTypeMessage::DDS_ClientServerRequestItemsDiscrptionByTypeMessage()  {
        }   

        DDS_ClientServerRequestItemsDiscrptionByTypeMessage::DDS_ClientServerRequestItemsDiscrptionByTypeMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType)
            :
                m_SourceId_( SourceId ),
                m_ItemType_( ItemType ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ClientServerRequestItemsDiscrptionByTypeMessage::DDS_ClientServerRequestItemsDiscrptionByTypeMessage(DDS_ClientServerRequestItemsDiscrptionByTypeMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_ItemType_ (std::move(other_.m_ItemType_))
        {
        } 

        DDS_ClientServerRequestItemsDiscrptionByTypeMessage& DDS_ClientServerRequestItemsDiscrptionByTypeMessage::operator=(DDS_ClientServerRequestItemsDiscrptionByTypeMessage&&  other_) OMG_NOEXCEPT {
            DDS_ClientServerRequestItemsDiscrptionByTypeMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ClientServerRequestItemsDiscrptionByTypeMessage::swap(DDS_ClientServerRequestItemsDiscrptionByTypeMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_ItemType_, other_.m_ItemType_);
        }  

        bool DDS_ClientServerRequestItemsDiscrptionByTypeMessage::operator == (const DDS_ClientServerRequestItemsDiscrptionByTypeMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_ItemType_ != other_.m_ItemType_) {
                return false;
            }
            return true;
        }
        bool DDS_ClientServerRequestItemsDiscrptionByTypeMessage::operator != (const DDS_ClientServerRequestItemsDiscrptionByTypeMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "ItemType: " << sample.ItemType() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ClientServerResponseItemsDiscrptionMessage: 

        DDS_ClientServerResponseItemsDiscrptionMessage::DDS_ClientServerResponseItemsDiscrptionMessage()  {
        }   

        DDS_ClientServerResponseItemsDiscrptionMessage::DDS_ClientServerResponseItemsDiscrptionMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSCommon::DDS_ItemType& ItemType,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 >& ItemDescrpitions)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_ItemType_( ItemType ),
                m_ItemDescrpitions_( ItemDescrpitions ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ClientServerResponseItemsDiscrptionMessage::DDS_ClientServerResponseItemsDiscrptionMessage(DDS_ClientServerResponseItemsDiscrptionMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_ItemType_ (std::move(other_.m_ItemType_))
        ,
        m_ItemDescrpitions_ (std::move(other_.m_ItemDescrpitions_))
        {
        } 

        DDS_ClientServerResponseItemsDiscrptionMessage& DDS_ClientServerResponseItemsDiscrptionMessage::operator=(DDS_ClientServerResponseItemsDiscrptionMessage&&  other_) OMG_NOEXCEPT {
            DDS_ClientServerResponseItemsDiscrptionMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ClientServerResponseItemsDiscrptionMessage::swap(DDS_ClientServerResponseItemsDiscrptionMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_ItemType_, other_.m_ItemType_);
            swap(m_ItemDescrpitions_, other_.m_ItemDescrpitions_);
        }  

        bool DDS_ClientServerResponseItemsDiscrptionMessage::operator == (const DDS_ClientServerResponseItemsDiscrptionMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_ItemType_ != other_.m_ItemType_) {
                return false;
            }
            if (m_ItemDescrpitions_ != other_.m_ItemDescrpitions_) {
                return false;
            }
            return true;
        }
        bool DDS_ClientServerResponseItemsDiscrptionMessage::operator != (const DDS_ClientServerResponseItemsDiscrptionMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ClientServerResponseItemsDiscrptionMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "ItemType: " << sample.ItemType()<<", ";
            o << "ItemDescrpitions: " << sample.ItemDescrpitions() ;
            o <<"]";
            return o;
        }

    } // namespace DDSInfrastarcture  

    namespace DDSExternalSystem {

        // ---- ExtendedGeoPoint: 

        ExtendedGeoPoint::ExtendedGeoPoint()  {
        }   

        ExtendedGeoPoint::ExtendedGeoPoint (
            const DDS_GRI::DDSCommon::DDS_GeoPoint& Point,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) >& Behaviors)
            :
                m_Point_( Point ),
                m_Behaviors_( Behaviors ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ExtendedGeoPoint::ExtendedGeoPoint(ExtendedGeoPoint&& other_) OMG_NOEXCEPT  :m_Point_ (std::move(other_.m_Point_))
        ,
        m_Behaviors_ (std::move(other_.m_Behaviors_))
        {
        } 

        ExtendedGeoPoint& ExtendedGeoPoint::operator=(ExtendedGeoPoint&&  other_) OMG_NOEXCEPT {
            ExtendedGeoPoint tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void ExtendedGeoPoint::swap(ExtendedGeoPoint& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Point_, other_.m_Point_);
            swap(m_Behaviors_, other_.m_Behaviors_);
        }  

        bool ExtendedGeoPoint::operator == (const ExtendedGeoPoint& other_) const {
            if (m_Point_ != other_.m_Point_) {
                return false;
            }
            if (m_Behaviors_ != other_.m_Behaviors_) {
                return false;
            }
            return true;
        }
        bool ExtendedGeoPoint::operator != (const ExtendedGeoPoint& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const ExtendedGeoPoint& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Point: " << sample.Point()<<", ";
            o << "Behaviors: " << sample.Behaviors() ;
            o <<"]";
            return o;
        }

        // ---- ExtendedGeoPointArray: 

        ExtendedGeoPointArray::ExtendedGeoPointArray()  {
        }   

        ExtendedGeoPointArray::ExtendedGeoPointArray (
            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) >& Points)
            :
                m_Points_( Points ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ExtendedGeoPointArray::ExtendedGeoPointArray(ExtendedGeoPointArray&& other_) OMG_NOEXCEPT  :m_Points_ (std::move(other_.m_Points_))
        {
        } 

        ExtendedGeoPointArray& ExtendedGeoPointArray::operator=(ExtendedGeoPointArray&&  other_) OMG_NOEXCEPT {
            ExtendedGeoPointArray tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void ExtendedGeoPointArray::swap(ExtendedGeoPointArray& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_Points_, other_.m_Points_);
        }  

        bool ExtendedGeoPointArray::operator == (const ExtendedGeoPointArray& other_) const {
            if (m_Points_ != other_.m_Points_) {
                return false;
            }
            return true;
        }
        bool ExtendedGeoPointArray::operator != (const ExtendedGeoPointArray& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const ExtendedGeoPointArray& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "Points: " << sample.Points() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ExternalMissionData: 

        DDS_ExternalMissionData::DDS_ExternalMissionData() :
            m_MissionType_ (0)  {
        }   

        DDS_ExternalMissionData::DDS_ExternalMissionData (
            const DDS_GRI::DDSCommon::DDS_Identifier& VehicleId,
            uint8_t MissionType,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) >& Polyline,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) >& Polygone,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) >& Points)
            :
                m_VehicleId_( VehicleId ),
                m_MissionType_( MissionType ),
                m_Polyline_( Polyline ),
                m_Polygone_( Polygone ),
                m_Points_( Points ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ExternalMissionData::DDS_ExternalMissionData(DDS_ExternalMissionData&& other_) OMG_NOEXCEPT  :m_VehicleId_ (std::move(other_.m_VehicleId_))
        ,
        m_MissionType_ (std::move(other_.m_MissionType_))
        ,
        m_Polyline_ (std::move(other_.m_Polyline_))
        ,
        m_Polygone_ (std::move(other_.m_Polygone_))
        ,
        m_Points_ (std::move(other_.m_Points_))
        {
        } 

        DDS_ExternalMissionData& DDS_ExternalMissionData::operator=(DDS_ExternalMissionData&&  other_) OMG_NOEXCEPT {
            DDS_ExternalMissionData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ExternalMissionData::swap(DDS_ExternalMissionData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_VehicleId_, other_.m_VehicleId_);
            swap(m_MissionType_, other_.m_MissionType_);
            swap(m_Polyline_, other_.m_Polyline_);
            swap(m_Polygone_, other_.m_Polygone_);
            swap(m_Points_, other_.m_Points_);
        }  

        bool DDS_ExternalMissionData::operator == (const DDS_ExternalMissionData& other_) const {
            if (m_VehicleId_ != other_.m_VehicleId_) {
                return false;
            }
            if (m_MissionType_ != other_.m_MissionType_) {
                return false;
            }
            if (m_Polyline_ != other_.m_Polyline_) {
                return false;
            }
            if (m_Polygone_ != other_.m_Polygone_) {
                return false;
            }
            if (m_Points_ != other_.m_Points_) {
                return false;
            }
            return true;
        }
        bool DDS_ExternalMissionData::operator != (const DDS_ExternalMissionData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ExternalMissionData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "VehicleId: " << sample.VehicleId()<<", ";
            o << "MissionType: <" << std::hex<<(int)sample.MissionType() <<", ";
            o << "Polyline: " << sample.Polyline()<<", ";
            o << "Polygone: " << sample.Polygone()<<", ";
            o << "Points: " << sample.Points() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ExternalMissionMessage: 

        DDS_ExternalMissionMessage::DDS_ExternalMissionMessage() :
            m_RequestId_ ("")  {
        }   

        DDS_ExternalMissionMessage::DDS_ExternalMissionMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& MissionData)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_MissionData_( MissionData ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ExternalMissionMessage::DDS_ExternalMissionMessage(DDS_ExternalMissionMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_MissionData_ (std::move(other_.m_MissionData_))
        {
        } 

        DDS_ExternalMissionMessage& DDS_ExternalMissionMessage::operator=(DDS_ExternalMissionMessage&&  other_) OMG_NOEXCEPT {
            DDS_ExternalMissionMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ExternalMissionMessage::swap(DDS_ExternalMissionMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_MissionData_, other_.m_MissionData_);
        }  

        bool DDS_ExternalMissionMessage::operator == (const DDS_ExternalMissionMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_RequestId_ != other_.m_RequestId_) {
                return false;
            }
            if (m_MissionData_ != other_.m_MissionData_) {
                return false;
            }
            return true;
        }
        bool DDS_ExternalMissionMessage::operator != (const DDS_ExternalMissionMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ExternalMissionMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "RequestId: " << sample.RequestId()<<", ";
            o << "MissionData: " << sample.MissionData() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ExternalMissionResponseData: 

        DDS_ExternalMissionResponseData::DDS_ExternalMissionResponseData() :
            m_RequestId_ ("") ,
            m_IsSucceed_ (0) ,
            m_MissionId_ ("")  {
        }   

        DDS_ExternalMissionResponseData::DDS_ExternalMissionResponseData (
            const std::string& RequestId,
            bool IsSucceed,
            const std::string& MissionId)
            :
                m_RequestId_( RequestId ),
                m_IsSucceed_( IsSucceed ),
                m_MissionId_( MissionId ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ExternalMissionResponseData::DDS_ExternalMissionResponseData(DDS_ExternalMissionResponseData&& other_) OMG_NOEXCEPT  :m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_IsSucceed_ (std::move(other_.m_IsSucceed_))
        ,
        m_MissionId_ (std::move(other_.m_MissionId_))
        {
        } 

        DDS_ExternalMissionResponseData& DDS_ExternalMissionResponseData::operator=(DDS_ExternalMissionResponseData&&  other_) OMG_NOEXCEPT {
            DDS_ExternalMissionResponseData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ExternalMissionResponseData::swap(DDS_ExternalMissionResponseData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_IsSucceed_, other_.m_IsSucceed_);
            swap(m_MissionId_, other_.m_MissionId_);
        }  

        bool DDS_ExternalMissionResponseData::operator == (const DDS_ExternalMissionResponseData& other_) const {
            if (m_RequestId_ != other_.m_RequestId_) {
                return false;
            }
            if (m_IsSucceed_ != other_.m_IsSucceed_) {
                return false;
            }
            if (m_MissionId_ != other_.m_MissionId_) {
                return false;
            }
            return true;
        }
        bool DDS_ExternalMissionResponseData::operator != (const DDS_ExternalMissionResponseData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ExternalMissionResponseData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "RequestId: " << sample.RequestId()<<", ";
            o << "IsSucceed: " << sample.IsSucceed()<<", ";
            o << "MissionId: " << sample.MissionId() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ExternalMissionResponseMessage: 

        DDS_ExternalMissionResponseMessage::DDS_ExternalMissionResponseMessage()  {
        }   

        DDS_ExternalMissionResponseMessage::DDS_ExternalMissionResponseMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ExternalMissionResponseMessage::DDS_ExternalMissionResponseMessage(DDS_ExternalMissionResponseMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_ExternalMissionResponseMessage& DDS_ExternalMissionResponseMessage::operator=(DDS_ExternalMissionResponseMessage&&  other_) OMG_NOEXCEPT {
            DDS_ExternalMissionResponseMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ExternalMissionResponseMessage::swap(DDS_ExternalMissionResponseMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_ExternalMissionResponseMessage::operator == (const DDS_ExternalMissionResponseMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_Data_ != other_.m_Data_) {
                return false;
            }
            return true;
        }
        bool DDS_ExternalMissionResponseMessage::operator != (const DDS_ExternalMissionResponseMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ExternalMissionResponseMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Data: " << sample.Data() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ActivateMissionCommandData: 

        DDS_ActivateMissionCommandData::DDS_ActivateMissionCommandData() :
            m_MissionId_ ("")  {
        }   

        DDS_ActivateMissionCommandData::DDS_ActivateMissionCommandData (
            const std::string& MissionId)
            :
                m_MissionId_( MissionId ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ActivateMissionCommandData::DDS_ActivateMissionCommandData(DDS_ActivateMissionCommandData&& other_) OMG_NOEXCEPT  :m_MissionId_ (std::move(other_.m_MissionId_))
        {
        } 

        DDS_ActivateMissionCommandData& DDS_ActivateMissionCommandData::operator=(DDS_ActivateMissionCommandData&&  other_) OMG_NOEXCEPT {
            DDS_ActivateMissionCommandData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ActivateMissionCommandData::swap(DDS_ActivateMissionCommandData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_MissionId_, other_.m_MissionId_);
        }  

        bool DDS_ActivateMissionCommandData::operator == (const DDS_ActivateMissionCommandData& other_) const {
            if (m_MissionId_ != other_.m_MissionId_) {
                return false;
            }
            return true;
        }
        bool DDS_ActivateMissionCommandData::operator != (const DDS_ActivateMissionCommandData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ActivateMissionCommandData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "MissionId: " << sample.MissionId() ;
            o <<"]";
            return o;
        }

        // ---- DDS_ActivateMissionCommandMessage: 

        DDS_ActivateMissionCommandMessage::DDS_ActivateMissionCommandMessage()  {
        }   

        DDS_ActivateMissionCommandMessage::DDS_ActivateMissionCommandMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_ActivateMissionCommandMessage::DDS_ActivateMissionCommandMessage(DDS_ActivateMissionCommandMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_ActivateMissionCommandMessage& DDS_ActivateMissionCommandMessage::operator=(DDS_ActivateMissionCommandMessage&&  other_) OMG_NOEXCEPT {
            DDS_ActivateMissionCommandMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_ActivateMissionCommandMessage::swap(DDS_ActivateMissionCommandMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_ActivateMissionCommandMessage::operator == (const DDS_ActivateMissionCommandMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_Data_ != other_.m_Data_) {
                return false;
            }
            return true;
        }
        bool DDS_ActivateMissionCommandMessage::operator != (const DDS_ActivateMissionCommandMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_ActivateMissionCommandMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Data: " << sample.Data() ;
            o <<"]";
            return o;
        }

        // ---- DDS_AddRegionData: 

        DDS_AddRegionData::DDS_AddRegionData() :
            m_MissionId_ ("") ,
            m_PolygonType_ (0)  {
        }   

        DDS_AddRegionData::DDS_AddRegionData (
            const std::string& MissionId,
            uint8_t PolygonType,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) >& Polygon)
            :
                m_MissionId_( MissionId ),
                m_PolygonType_( PolygonType ),
                m_Polygon_( Polygon ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_AddRegionData::DDS_AddRegionData(DDS_AddRegionData&& other_) OMG_NOEXCEPT  :m_MissionId_ (std::move(other_.m_MissionId_))
        ,
        m_PolygonType_ (std::move(other_.m_PolygonType_))
        ,
        m_Polygon_ (std::move(other_.m_Polygon_))
        {
        } 

        DDS_AddRegionData& DDS_AddRegionData::operator=(DDS_AddRegionData&&  other_) OMG_NOEXCEPT {
            DDS_AddRegionData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_AddRegionData::swap(DDS_AddRegionData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_MissionId_, other_.m_MissionId_);
            swap(m_PolygonType_, other_.m_PolygonType_);
            swap(m_Polygon_, other_.m_Polygon_);
        }  

        bool DDS_AddRegionData::operator == (const DDS_AddRegionData& other_) const {
            if (m_MissionId_ != other_.m_MissionId_) {
                return false;
            }
            if (m_PolygonType_ != other_.m_PolygonType_) {
                return false;
            }
            if (m_Polygon_ != other_.m_Polygon_) {
                return false;
            }
            return true;
        }
        bool DDS_AddRegionData::operator != (const DDS_AddRegionData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_AddRegionData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "MissionId: " << sample.MissionId()<<", ";
            o << "PolygonType: <" << std::hex<<(int)sample.PolygonType() <<", ";
            o << "Polygon: " << sample.Polygon() ;
            o <<"]";
            return o;
        }

        // ---- DDS_AddRegionDataMessage: 

        DDS_AddRegionDataMessage::DDS_AddRegionDataMessage() :
            m_RequestId_ ("")  {
        }   

        DDS_AddRegionDataMessage::DDS_AddRegionDataMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const DDS_GRI::DDSExternalSystem::DDS_AddRegionData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_AddRegionDataMessage::DDS_AddRegionDataMessage(DDS_AddRegionDataMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_AddRegionDataMessage& DDS_AddRegionDataMessage::operator=(DDS_AddRegionDataMessage&&  other_) OMG_NOEXCEPT {
            DDS_AddRegionDataMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_AddRegionDataMessage::swap(DDS_AddRegionDataMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_AddRegionDataMessage::operator == (const DDS_AddRegionDataMessage& other_) const {
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
        bool DDS_AddRegionDataMessage::operator != (const DDS_AddRegionDataMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_AddRegionDataMessage& sample)
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

        // ---- DDS_RegionResponseData: 

        DDS_RegionResponseData::DDS_RegionResponseData() :
            m_RequestId_ ("") ,
            m_MissionId_ ("") ,
            m_RegionId_ ("") ,
            m_Action_ (0) ,
            m_IsSucceed_ (0)  {
        }   

        DDS_RegionResponseData::DDS_RegionResponseData (
            const std::string& RequestId,
            const std::string& MissionId,
            const std::string& RegionId,
            uint8_t Action,
            bool IsSucceed)
            :
                m_RequestId_( RequestId ),
                m_MissionId_( MissionId ),
                m_RegionId_( RegionId ),
                m_Action_( Action ),
                m_IsSucceed_( IsSucceed ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_RegionResponseData::DDS_RegionResponseData(DDS_RegionResponseData&& other_) OMG_NOEXCEPT  :m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_MissionId_ (std::move(other_.m_MissionId_))
        ,
        m_RegionId_ (std::move(other_.m_RegionId_))
        ,
        m_Action_ (std::move(other_.m_Action_))
        ,
        m_IsSucceed_ (std::move(other_.m_IsSucceed_))
        {
        } 

        DDS_RegionResponseData& DDS_RegionResponseData::operator=(DDS_RegionResponseData&&  other_) OMG_NOEXCEPT {
            DDS_RegionResponseData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_RegionResponseData::swap(DDS_RegionResponseData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_MissionId_, other_.m_MissionId_);
            swap(m_RegionId_, other_.m_RegionId_);
            swap(m_Action_, other_.m_Action_);
            swap(m_IsSucceed_, other_.m_IsSucceed_);
        }  

        bool DDS_RegionResponseData::operator == (const DDS_RegionResponseData& other_) const {
            if (m_RequestId_ != other_.m_RequestId_) {
                return false;
            }
            if (m_MissionId_ != other_.m_MissionId_) {
                return false;
            }
            if (m_RegionId_ != other_.m_RegionId_) {
                return false;
            }
            if (m_Action_ != other_.m_Action_) {
                return false;
            }
            if (m_IsSucceed_ != other_.m_IsSucceed_) {
                return false;
            }
            return true;
        }
        bool DDS_RegionResponseData::operator != (const DDS_RegionResponseData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_RegionResponseData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "RequestId: " << sample.RequestId()<<", ";
            o << "MissionId: " << sample.MissionId()<<", ";
            o << "RegionId: " << sample.RegionId()<<", ";
            o << "Action: <" << std::hex<<(int)sample.Action() <<", ";
            o << "IsSucceed: " << sample.IsSucceed() ;
            o <<"]";
            return o;
        }

        // ---- DDS_RegionResponseMessage: 

        DDS_RegionResponseMessage::DDS_RegionResponseMessage()  {
        }   

        DDS_RegionResponseMessage::DDS_RegionResponseMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_RegionResponseMessage::DDS_RegionResponseMessage(DDS_RegionResponseMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_RegionResponseMessage& DDS_RegionResponseMessage::operator=(DDS_RegionResponseMessage&&  other_) OMG_NOEXCEPT {
            DDS_RegionResponseMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_RegionResponseMessage::swap(DDS_RegionResponseMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_RegionResponseMessage::operator == (const DDS_RegionResponseMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_Data_ != other_.m_Data_) {
                return false;
            }
            return true;
        }
        bool DDS_RegionResponseMessage::operator != (const DDS_RegionResponseMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_RegionResponseMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Data: " << sample.Data() ;
            o <<"]";
            return o;
        }

        // ---- DDS_RemoveRegionData: 

        DDS_RemoveRegionData::DDS_RemoveRegionData() :
            m_MissionId_ ("")  {
        }   

        DDS_RemoveRegionData::DDS_RemoveRegionData (
            const std::string& MissionId,
            const ::rti::core::bounded_sequence< std::string, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) >& RegionsToRemove)
            :
                m_MissionId_( MissionId ),
                m_RegionsToRemove_( RegionsToRemove ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_RemoveRegionData::DDS_RemoveRegionData(DDS_RemoveRegionData&& other_) OMG_NOEXCEPT  :m_MissionId_ (std::move(other_.m_MissionId_))
        ,
        m_RegionsToRemove_ (std::move(other_.m_RegionsToRemove_))
        {
        } 

        DDS_RemoveRegionData& DDS_RemoveRegionData::operator=(DDS_RemoveRegionData&&  other_) OMG_NOEXCEPT {
            DDS_RemoveRegionData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_RemoveRegionData::swap(DDS_RemoveRegionData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_MissionId_, other_.m_MissionId_);
            swap(m_RegionsToRemove_, other_.m_RegionsToRemove_);
        }  

        bool DDS_RemoveRegionData::operator == (const DDS_RemoveRegionData& other_) const {
            if (m_MissionId_ != other_.m_MissionId_) {
                return false;
            }
            if (m_RegionsToRemove_ != other_.m_RegionsToRemove_) {
                return false;
            }
            return true;
        }
        bool DDS_RemoveRegionData::operator != (const DDS_RemoveRegionData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_RemoveRegionData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "MissionId: " << sample.MissionId()<<", ";
            o << "RegionsToRemove: " << sample.RegionsToRemove() ;
            o <<"]";
            return o;
        }

        // ---- DDS_RemoveRegionMessage: 

        DDS_RemoveRegionMessage::DDS_RemoveRegionMessage() :
            m_RequestId_ ("")  {
        }   

        DDS_RemoveRegionMessage::DDS_RemoveRegionMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_RemoveRegionMessage::DDS_RemoveRegionMessage(DDS_RemoveRegionMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_RemoveRegionMessage& DDS_RemoveRegionMessage::operator=(DDS_RemoveRegionMessage&&  other_) OMG_NOEXCEPT {
            DDS_RemoveRegionMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_RemoveRegionMessage::swap(DDS_RemoveRegionMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_RemoveRegionMessage::operator == (const DDS_RemoveRegionMessage& other_) const {
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
        bool DDS_RemoveRegionMessage::operator != (const DDS_RemoveRegionMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_RemoveRegionMessage& sample)
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

    } // namespace DDSExternalSystem  

    namespace DDSCamera {

        // ---- DDS_CameraCapabilitiesMessage: 

        DDS_CameraCapabilitiesMessage::DDS_CameraCapabilitiesMessage()  {
        }   

        DDS_CameraCapabilitiesMessage::DDS_CameraCapabilitiesMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const DDS_GRI::DDSCommon::DDS_Identifier& CameraID,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 >& Parameters)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_CameraID_( CameraID ),
                m_Parameters_( Parameters ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_CameraCapabilitiesMessage::DDS_CameraCapabilitiesMessage(DDS_CameraCapabilitiesMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_CameraID_ (std::move(other_.m_CameraID_))
        ,
        m_Parameters_ (std::move(other_.m_Parameters_))
        {
        } 

        DDS_CameraCapabilitiesMessage& DDS_CameraCapabilitiesMessage::operator=(DDS_CameraCapabilitiesMessage&&  other_) OMG_NOEXCEPT {
            DDS_CameraCapabilitiesMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_CameraCapabilitiesMessage::swap(DDS_CameraCapabilitiesMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_CameraID_, other_.m_CameraID_);
            swap(m_Parameters_, other_.m_Parameters_);
        }  

        bool DDS_CameraCapabilitiesMessage::operator == (const DDS_CameraCapabilitiesMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_CameraID_ != other_.m_CameraID_) {
                return false;
            }
            if (m_Parameters_ != other_.m_Parameters_) {
                return false;
            }
            return true;
        }
        bool DDS_CameraCapabilitiesMessage::operator != (const DDS_CameraCapabilitiesMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_CameraCapabilitiesMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "CameraID: " << sample.CameraID()<<", ";
            o << "Parameters: " << sample.Parameters() ;
            o <<"]";
            return o;
        }

    } // namespace DDSCamera  

    namespace DDSGpp {

        // ---- DDS_GlobalPathQueryData: 

        DDS_GlobalPathQueryData::DDS_GlobalPathQueryData() :
            m_MaxNumOfPath_ (0) ,
            m_MaxDistanceToPathInMeters_ (0.0)  {
        }   

        DDS_GlobalPathQueryData::DDS_GlobalPathQueryData (
            const DDS_GRI::DDSCommon::DDS_LogicPoint& PointFrom,
            const DDS_GRI::DDSCommon::DDS_LogicPoint& PointTo,
            int32_t MaxNumOfPath,
            double MaxDistanceToPathInMeters)
            :
                m_PointFrom_( PointFrom ),
                m_PointTo_( PointTo ),
                m_MaxNumOfPath_( MaxNumOfPath ),
                m_MaxDistanceToPathInMeters_( MaxDistanceToPathInMeters ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GlobalPathQueryData::DDS_GlobalPathQueryData(DDS_GlobalPathQueryData&& other_) OMG_NOEXCEPT  :m_PointFrom_ (std::move(other_.m_PointFrom_))
        ,
        m_PointTo_ (std::move(other_.m_PointTo_))
        ,
        m_MaxNumOfPath_ (std::move(other_.m_MaxNumOfPath_))
        ,
        m_MaxDistanceToPathInMeters_ (std::move(other_.m_MaxDistanceToPathInMeters_))
        {
        } 

        DDS_GlobalPathQueryData& DDS_GlobalPathQueryData::operator=(DDS_GlobalPathQueryData&&  other_) OMG_NOEXCEPT {
            DDS_GlobalPathQueryData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GlobalPathQueryData::swap(DDS_GlobalPathQueryData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PointFrom_, other_.m_PointFrom_);
            swap(m_PointTo_, other_.m_PointTo_);
            swap(m_MaxNumOfPath_, other_.m_MaxNumOfPath_);
            swap(m_MaxDistanceToPathInMeters_, other_.m_MaxDistanceToPathInMeters_);
        }  

        bool DDS_GlobalPathQueryData::operator == (const DDS_GlobalPathQueryData& other_) const {
            if (m_PointFrom_ != other_.m_PointFrom_) {
                return false;
            }
            if (m_PointTo_ != other_.m_PointTo_) {
                return false;
            }
            if (m_MaxNumOfPath_ != other_.m_MaxNumOfPath_) {
                return false;
            }
            if (m_MaxDistanceToPathInMeters_ != other_.m_MaxDistanceToPathInMeters_) {
                return false;
            }
            return true;
        }
        bool DDS_GlobalPathQueryData::operator != (const DDS_GlobalPathQueryData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GlobalPathQueryData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PointFrom: " << sample.PointFrom()<<", ";
            o << "PointTo: " << sample.PointTo()<<", ";
            o << "MaxNumOfPath: " << sample.MaxNumOfPath()<<", ";
            o << "MaxDistanceToPathInMeters: " << std::setprecision(15) <<sample.MaxDistanceToPathInMeters() ;
            o <<"]";
            return o;
        }

        // ---- DDS_GlobalPathQueryMessage: 

        DDS_GlobalPathQueryMessage::DDS_GlobalPathQueryMessage() :
            m_RequestId_ ("")  {
        }   

        DDS_GlobalPathQueryMessage::DDS_GlobalPathQueryMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GlobalPathQueryMessage::DDS_GlobalPathQueryMessage(DDS_GlobalPathQueryMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_GlobalPathQueryMessage& DDS_GlobalPathQueryMessage::operator=(DDS_GlobalPathQueryMessage&&  other_) OMG_NOEXCEPT {
            DDS_GlobalPathQueryMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GlobalPathQueryMessage::swap(DDS_GlobalPathQueryMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_GlobalPathQueryMessage::operator == (const DDS_GlobalPathQueryMessage& other_) const {
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
        bool DDS_GlobalPathQueryMessage::operator != (const DDS_GlobalPathQueryMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GlobalPathQueryMessage& sample)
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

        // ---- DDS_GlobalPath: 

        DDS_GlobalPath::DDS_GlobalPath() :
            m_PathId_ (0)  {
        }   

        DDS_GlobalPath::DDS_GlobalPath (
            int32_t PathId,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) >& Path)
            :
                m_PathId_( PathId ),
                m_Path_( Path ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GlobalPath::DDS_GlobalPath(DDS_GlobalPath&& other_) OMG_NOEXCEPT  :m_PathId_ (std::move(other_.m_PathId_))
        ,
        m_Path_ (std::move(other_.m_Path_))
        {
        } 

        DDS_GlobalPath& DDS_GlobalPath::operator=(DDS_GlobalPath&&  other_) OMG_NOEXCEPT {
            DDS_GlobalPath tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GlobalPath::swap(DDS_GlobalPath& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PathId_, other_.m_PathId_);
            swap(m_Path_, other_.m_Path_);
        }  

        bool DDS_GlobalPath::operator == (const DDS_GlobalPath& other_) const {
            if (m_PathId_ != other_.m_PathId_) {
                return false;
            }
            if (m_Path_ != other_.m_Path_) {
                return false;
            }
            return true;
        }
        bool DDS_GlobalPath::operator != (const DDS_GlobalPath& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GlobalPath& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PathId: " << sample.PathId()<<", ";
            o << "Path: " << sample.Path() ;
            o <<"]";
            return o;
        }

        // ---- DDS_GlobalPathReportData: 

        DDS_GlobalPathReportData::DDS_GlobalPathReportData() :
            m_RequestId_ ("")  {
        }   

        DDS_GlobalPathReportData::DDS_GlobalPathReportData (
            const std::string& RequestId,
            const ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) >& GlobalPathList)
            :
                m_RequestId_( RequestId ),
                m_GlobalPathList_( GlobalPathList ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GlobalPathReportData::DDS_GlobalPathReportData(DDS_GlobalPathReportData&& other_) OMG_NOEXCEPT  :m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_GlobalPathList_ (std::move(other_.m_GlobalPathList_))
        {
        } 

        DDS_GlobalPathReportData& DDS_GlobalPathReportData::operator=(DDS_GlobalPathReportData&&  other_) OMG_NOEXCEPT {
            DDS_GlobalPathReportData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GlobalPathReportData::swap(DDS_GlobalPathReportData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_GlobalPathList_, other_.m_GlobalPathList_);
        }  

        bool DDS_GlobalPathReportData::operator == (const DDS_GlobalPathReportData& other_) const {
            if (m_RequestId_ != other_.m_RequestId_) {
                return false;
            }
            if (m_GlobalPathList_ != other_.m_GlobalPathList_) {
                return false;
            }
            return true;
        }
        bool DDS_GlobalPathReportData::operator != (const DDS_GlobalPathReportData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GlobalPathReportData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "RequestId: " << sample.RequestId()<<", ";
            o << "GlobalPathList: " << sample.GlobalPathList() ;
            o <<"]";
            return o;
        }

        // ---- DDS_GlobalPathReportMessage: 

        DDS_GlobalPathReportMessage::DDS_GlobalPathReportMessage() :
            m_RequestId_ ("")  {
        }   

        DDS_GlobalPathReportMessage::DDS_GlobalPathReportMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const DDS_GRI::DDSGpp::DDS_GlobalPathReportData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        DDS_GlobalPathReportMessage::DDS_GlobalPathReportMessage(DDS_GlobalPathReportMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        DDS_GlobalPathReportMessage& DDS_GlobalPathReportMessage::operator=(DDS_GlobalPathReportMessage&&  other_) OMG_NOEXCEPT {
            DDS_GlobalPathReportMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void DDS_GlobalPathReportMessage::swap(DDS_GlobalPathReportMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool DDS_GlobalPathReportMessage::operator == (const DDS_GlobalPathReportMessage& other_) const {
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
        bool DDS_GlobalPathReportMessage::operator != (const DDS_GlobalPathReportMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const DDS_GlobalPathReportMessage& sample)
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

    } // namespace DDSGpp  

} // namespace DDS_GRI  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::String200_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode String200_g_tc_string;

                static DDS_TypeCode String200_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::String200", /* Name */
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
                    }}; /* Type code for  String200 */

                if (is_initialized) {
                    return &String200_g_tc;
                }

                String200_g_tc_string = initialize_string_typecode((200));

                String200_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                String200_g_tc._data._typeCode =  (RTICdrTypeCode *)&String200_g_tc_string;

                /* Initialize the values for member annotations. */
                String200_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                String200_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                String200_g_tc._data._sampleAccessInfo = sample_access_info();
                String200_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &String200_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo String200_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo String200_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &String200_g_sampleAccessInfo;
                }

                String200_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                String200_g_sampleAccessInfo.memberAccessInfos = 
                String200_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::String200);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        String200_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        String200_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                String200_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                String200_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::String200 >;

                String200_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &String200_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin String200_g_typePlugin = 
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

                return &String200_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::String200_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::String100_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode String100_g_tc_string;

                static DDS_TypeCode String100_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::String100", /* Name */
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
                    }}; /* Type code for  String100 */

                if (is_initialized) {
                    return &String100_g_tc;
                }

                String100_g_tc_string = initialize_string_typecode((100));

                String100_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                String100_g_tc._data._typeCode =  (RTICdrTypeCode *)&String100_g_tc_string;

                /* Initialize the values for member annotations. */
                String100_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                String100_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                String100_g_tc._data._sampleAccessInfo = sample_access_info();
                String100_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &String100_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo String100_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo String100_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &String100_g_sampleAccessInfo;
                }

                String100_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                String100_g_sampleAccessInfo.memberAccessInfos = 
                String100_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::String100);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        String100_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        String100_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                String100_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                String100_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::String100 >;

                String100_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &String100_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin String100_g_typePlugin = 
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

                return &String100_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::String100_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::String100_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::String50_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode String50_g_tc_string;

                static DDS_TypeCode String50_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::String50", /* Name */
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
                    }}; /* Type code for  String50 */

                if (is_initialized) {
                    return &String50_g_tc;
                }

                String50_g_tc_string = initialize_string_typecode((50));

                String50_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                String50_g_tc._data._typeCode =  (RTICdrTypeCode *)&String50_g_tc_string;

                /* Initialize the values for member annotations. */
                String50_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                String50_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                String50_g_tc._data._sampleAccessInfo = sample_access_info();
                String50_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &String50_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo String50_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo String50_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &String50_g_sampleAccessInfo;
                }

                String50_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                String50_g_sampleAccessInfo.memberAccessInfos = 
                String50_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::String50);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        String50_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        String50_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                String50_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                String50_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::String50 >;

                String50_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &String50_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin String50_g_typePlugin = 
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

                return &String50_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::String50_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::String50_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::String20_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode String20_g_tc_string;

                static DDS_TypeCode String20_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::String20", /* Name */
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
                    }}; /* Type code for  String20 */

                if (is_initialized) {
                    return &String20_g_tc;
                }

                String20_g_tc_string = initialize_string_typecode((20));

                String20_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                String20_g_tc._data._typeCode =  (RTICdrTypeCode *)&String20_g_tc_string;

                /* Initialize the values for member annotations. */
                String20_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                String20_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                String20_g_tc._data._sampleAccessInfo = sample_access_info();
                String20_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &String20_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo String20_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo String20_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &String20_g_sampleAccessInfo;
                }

                String20_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                String20_g_sampleAccessInfo.memberAccessInfos = 
                String20_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::String20);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        String20_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        String20_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                String20_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                String20_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::String20 >;

                String20_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &String20_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin String20_g_typePlugin = 
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

                return &String20_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::String20_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::String20_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::WString200_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WString200_g_tc_string;

                static const DDS_Wchar WString200_default_wstring_value[] = {0};

                static DDS_TypeCode WString200_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::WString200", /* Name */
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
                    }}; /* Type code for  WString200 */

                if (is_initialized) {
                    return &WString200_g_tc;
                }

                WString200_g_tc_string = initialize_wstring_typecode((200));

                WString200_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WString200_g_tc._data._typeCode =  (RTICdrTypeCode *)&WString200_g_tc_string;

                /* Initialize the values for member annotations. */
                WString200_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_WSTRING;
                WString200_g_tc._data._annotations._defaultValue._u.wstring_value = (DDS_Wchar *) WString200_default_wstring_value;

                WString200_g_tc._data._sampleAccessInfo = sample_access_info();
                WString200_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WString200_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WString200_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WString200_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WString200_g_sampleAccessInfo;
                }

                WString200_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WString200_g_sampleAccessInfo.memberAccessInfos = 
                WString200_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::WString200);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WString200_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WString200_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WString200_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WString200_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::WString200 >;

                WString200_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WString200_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WString200_g_typePlugin = 
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

                return &WString200_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::WString200_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::WString200_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::WString100_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WString100_g_tc_string;

                static const DDS_Wchar WString100_default_wstring_value[] = {0};

                static DDS_TypeCode WString100_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::WString100", /* Name */
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
                    }}; /* Type code for  WString100 */

                if (is_initialized) {
                    return &WString100_g_tc;
                }

                WString100_g_tc_string = initialize_wstring_typecode((100));

                WString100_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WString100_g_tc._data._typeCode =  (RTICdrTypeCode *)&WString100_g_tc_string;

                /* Initialize the values for member annotations. */
                WString100_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_WSTRING;
                WString100_g_tc._data._annotations._defaultValue._u.wstring_value = (DDS_Wchar *) WString100_default_wstring_value;

                WString100_g_tc._data._sampleAccessInfo = sample_access_info();
                WString100_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WString100_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WString100_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WString100_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WString100_g_sampleAccessInfo;
                }

                WString100_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WString100_g_sampleAccessInfo.memberAccessInfos = 
                WString100_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::WString100);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WString100_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WString100_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WString100_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WString100_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::WString100 >;

                WString100_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WString100_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WString100_g_typePlugin = 
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

                return &WString100_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::WString100_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::WString100_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::WString50_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WString50_g_tc_string;

                static const DDS_Wchar WString50_default_wstring_value[] = {0};

                static DDS_TypeCode WString50_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::WString50", /* Name */
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
                    }}; /* Type code for  WString50 */

                if (is_initialized) {
                    return &WString50_g_tc;
                }

                WString50_g_tc_string = initialize_wstring_typecode((50));

                WString50_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WString50_g_tc._data._typeCode =  (RTICdrTypeCode *)&WString50_g_tc_string;

                /* Initialize the values for member annotations. */
                WString50_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_WSTRING;
                WString50_g_tc._data._annotations._defaultValue._u.wstring_value = (DDS_Wchar *) WString50_default_wstring_value;

                WString50_g_tc._data._sampleAccessInfo = sample_access_info();
                WString50_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WString50_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WString50_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WString50_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WString50_g_sampleAccessInfo;
                }

                WString50_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WString50_g_sampleAccessInfo.memberAccessInfos = 
                WString50_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::WString50);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WString50_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WString50_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WString50_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WString50_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::WString50 >;

                WString50_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WString50_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WString50_g_typePlugin = 
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

                return &WString50_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::WString50_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::WString50_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::WString20_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WString20_g_tc_string;

                static const DDS_Wchar WString20_default_wstring_value[] = {0};

                static DDS_TypeCode WString20_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::WString20", /* Name */
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
                    }}; /* Type code for  WString20 */

                if (is_initialized) {
                    return &WString20_g_tc;
                }

                WString20_g_tc_string = initialize_wstring_typecode((20));

                WString20_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WString20_g_tc._data._typeCode =  (RTICdrTypeCode *)&WString20_g_tc_string;

                /* Initialize the values for member annotations. */
                WString20_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_WSTRING;
                WString20_g_tc._data._annotations._defaultValue._u.wstring_value = (DDS_Wchar *) WString20_default_wstring_value;

                WString20_g_tc._data._sampleAccessInfo = sample_access_info();
                WString20_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WString20_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WString20_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WString20_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WString20_g_sampleAccessInfo;
                }

                WString20_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WString20_g_sampleAccessInfo.memberAccessInfos = 
                WString20_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::WString20);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WString20_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WString20_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WString20_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WString20_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::WString20 >;

                WString20_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WString20_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WString20_g_typePlugin = 
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

                return &WString20_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::WString20_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::WString20_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_GUID_g_tc_string;

                static DDS_TypeCode DDS_GUID_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::DDS_GUID", /* Name */
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
                    }}; /* Type code for  DDS_GUID */

                if (is_initialized) {
                    return &DDS_GUID_g_tc;
                }

                DDS_GUID_g_tc_string = initialize_string_typecode(((DDS_GRI::DDSCommon::GUID_LEN)));

                DDS_GUID_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GUID_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_GUID_g_tc_string;

                /* Initialize the values for member annotations. */
                DDS_GUID_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_GUID_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_GUID_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GUID_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GUID_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DDS_GUID_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GUID_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GUID_g_sampleAccessInfo;
                }

                DDS_GUID_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DDS_GUID_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GUID_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_GUID);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GUID_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GUID_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GUID_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GUID_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_GUID >;

                DDS_GUID_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GUID_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GUID_g_typePlugin = 
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

                return &DDS_GUID_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_FileTimeUTC_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_FileTimeUTC_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::DDS_FileTimeUTC", /* Name */
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
                    }}; /* Type code for  DDS_FileTimeUTC */

                if (is_initialized) {
                    return &DDS_FileTimeUTC_g_tc;
                }

                DDS_FileTimeUTC_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_FileTimeUTC_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong;

                /* Initialize the values for member annotations. */
                DDS_FileTimeUTC_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                DDS_FileTimeUTC_g_tc._data._annotations._defaultValue._u.long_long_value = 0ll;
                DDS_FileTimeUTC_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                DDS_FileTimeUTC_g_tc._data._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                DDS_FileTimeUTC_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                DDS_FileTimeUTC_g_tc._data._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

                DDS_FileTimeUTC_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_FileTimeUTC_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_FileTimeUTC_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DDS_FileTimeUTC_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_FileTimeUTC_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_FileTimeUTC_g_sampleAccessInfo;
                }

                DDS_FileTimeUTC_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DDS_FileTimeUTC_g_sampleAccessInfo.memberAccessInfos = 
                DDS_FileTimeUTC_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_FileTimeUTC);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_FileTimeUTC_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_FileTimeUTC_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_FileTimeUTC_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_FileTimeUTC_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_FileTimeUTC >;

                DDS_FileTimeUTC_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_FileTimeUTC_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_FileTimeUTC_g_typePlugin = 
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

                return &DDS_FileTimeUTC_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::DDS_FileTimeUTC_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_FileTimeUTC_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::T_Int32_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode T_Int32_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::T_Int32", /* Name */
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
                    }}; /* Type code for  T_Int32 */

                if (is_initialized) {
                    return &T_Int32_g_tc;
                }

                T_Int32_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                T_Int32_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                T_Int32_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                T_Int32_g_tc._data._annotations._defaultValue._u.long_value = 0;
                T_Int32_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
                T_Int32_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                T_Int32_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                T_Int32_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                T_Int32_g_tc._data._sampleAccessInfo = sample_access_info();
                T_Int32_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &T_Int32_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo T_Int32_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo T_Int32_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &T_Int32_g_sampleAccessInfo;
                }

                T_Int32_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                T_Int32_g_sampleAccessInfo.memberAccessInfos = 
                T_Int32_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::T_Int32);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        T_Int32_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        T_Int32_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                T_Int32_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                T_Int32_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::T_Int32 >;

                T_Int32_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &T_Int32_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin T_Int32_g_typePlugin = 
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

                return &T_Int32_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::T_Int32_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::T_Int32_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::T_Int64_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode T_Int64_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"DDS_GRI::DDSCommon::T_Int64", /* Name */
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
                    }}; /* Type code for  T_Int64 */

                if (is_initialized) {
                    return &T_Int64_g_tc;
                }

                T_Int64_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                T_Int64_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong;

                /* Initialize the values for member annotations. */
                T_Int64_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                T_Int64_g_tc._data._annotations._defaultValue._u.long_long_value = 0ll;
                T_Int64_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                T_Int64_g_tc._data._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                T_Int64_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                T_Int64_g_tc._data._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

                T_Int64_g_tc._data._sampleAccessInfo = sample_access_info();
                T_Int64_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &T_Int64_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo T_Int64_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo T_Int64_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &T_Int64_g_sampleAccessInfo;
                }

                T_Int64_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                T_Int64_g_sampleAccessInfo.memberAccessInfos = 
                T_Int64_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::T_Int64);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        T_Int64_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        T_Int64_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                T_Int64_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                T_Int64_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::T_Int64 >;

                T_Int64_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &T_Int64_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin T_Int64_g_typePlugin = 
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

                return &T_Int64_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< DDS_GRI::DDSCommon::T_Int64_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::T_Int64_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::T_DateTimeType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member T_DateTimeType_g_tc_members[2]=
                {

                    {
                        (char *)"A_second",/* Member name */
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
                        (char *)"A_nanoseconds",/* Member name */
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

                static DDS_TypeCode T_DateTimeType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::T_DateTimeType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        T_DateTimeType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for T_DateTimeType*/

                if (is_initialized) {
                    return &T_DateTimeType_g_tc;
                }

                T_DateTimeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                T_DateTimeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::T_Int64_AliasTag_t>::get().native();
                T_DateTimeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::T_Int32_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                T_DateTimeType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                T_DateTimeType_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
                T_DateTimeType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                T_DateTimeType_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                T_DateTimeType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                T_DateTimeType_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

                T_DateTimeType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                T_DateTimeType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                T_DateTimeType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                T_DateTimeType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                T_DateTimeType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                T_DateTimeType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                T_DateTimeType_g_tc._data._sampleAccessInfo = sample_access_info();
                T_DateTimeType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &T_DateTimeType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::T_DateTimeType *sample;

                static RTIXCdrMemberAccessInfo T_DateTimeType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo T_DateTimeType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &T_DateTimeType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::T_DateTimeType);
                if (sample == NULL) {
                    return NULL;
                }

                T_DateTimeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->A_second() - (char *)sample);

                T_DateTimeType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->A_nanoseconds() - (char *)sample);

                T_DateTimeType_g_sampleAccessInfo.memberAccessInfos = 
                T_DateTimeType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::T_DateTimeType);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        T_DateTimeType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        T_DateTimeType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                T_DateTimeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                T_DateTimeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::T_DateTimeType >;

                T_DateTimeType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &T_DateTimeType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin T_DateTimeType_g_typePlugin = 
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

                return &T_DateTimeType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::T_DateTimeType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::T_DateTimeType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_ValueTypeEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ValueTypeEnum_g_tc_members[15]=
                {

                    {
                        (char *)"None",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::None, 
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
                        (char *)"Bool",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Bool, 
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
                        (char *)"Byte",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Byte, 
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
                        (char *)"Char",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Char, 
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
                        (char *)"Decimal",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Decimal, 
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
                        (char *)"Double",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Double, 
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
                        (char *)"Float",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Float, 
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
                        (char *)"Int",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Int, 
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
                        (char *)"Long",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Long, 
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
                        (char *)"Sbyte",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Sbyte, 
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
                        (char *)"Short",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Short, 
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
                        (char *)"Uint",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Uint, 
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
                        (char *)"Ulong",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Ulong, 
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
                        (char *)"Ushort",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::Ushort, 
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
                        (char *)"String",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_ValueTypeEnum::String, 
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

                static DDS_TypeCode DDS_ValueTypeEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_ValueTypeEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        DDS_ValueTypeEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ValueTypeEnum*/

                if (is_initialized) {
                    return &DDS_ValueTypeEnum_g_tc;
                }

                DDS_ValueTypeEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DDS_ValueTypeEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DDS_ValueTypeEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DDS_ValueTypeEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ValueTypeEnum_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ValueTypeEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DDS_ValueTypeEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ValueTypeEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ValueTypeEnum_g_sampleAccessInfo;
                }

                DDS_ValueTypeEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DDS_ValueTypeEnum_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ValueTypeEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_ValueTypeEnum);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ValueTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ValueTypeEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ValueTypeEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ValueTypeEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_ValueTypeEnum >;

                DDS_ValueTypeEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ValueTypeEnum_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ValueTypeEnum_g_typePlugin = 
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

                return &DDS_ValueTypeEnum_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DDS_GRI::DDSCommon::DDS_ValueTypeEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_ValueTypeEnum >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_AttributeValue > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_AttributeValue_g_tc_members[4]=
                {

                    {
                        (char *)"Name",/* Member name */
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
                        (char *)"Value",/* Member name */
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
                        (char *)"ValueType",/* Member name */
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
                        (char *)"IsChanged",/* Member name */
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

                static DDS_TypeCode DDS_AttributeValue_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_AttributeValue", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_AttributeValue_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_AttributeValue*/

                if (is_initialized) {
                    return &DDS_AttributeValue_g_tc;
                }

                DDS_AttributeValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_AttributeValue_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String20_AliasTag_t>::get().native();
                DDS_AttributeValue_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String20_AliasTag_t>::get().native();
                DDS_AttributeValue_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_ValueTypeEnum>::get().native();
                DDS_AttributeValue_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                DDS_AttributeValue_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_AttributeValue_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_AttributeValue_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_AttributeValue_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_AttributeValue_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DDS_AttributeValue_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                DDS_AttributeValue_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DDS_AttributeValue_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                DDS_AttributeValue_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_AttributeValue_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_AttributeValue_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_AttributeValue *sample;

                static RTIXCdrMemberAccessInfo DDS_AttributeValue_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_AttributeValue_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_AttributeValue_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_AttributeValue);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_AttributeValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Name() - (char *)sample);

                DDS_AttributeValue_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Value() - (char *)sample);

                DDS_AttributeValue_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ValueType() - (char *)sample);

                DDS_AttributeValue_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IsChanged() - (char *)sample);

                DDS_AttributeValue_g_sampleAccessInfo.memberAccessInfos = 
                DDS_AttributeValue_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_AttributeValue);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_AttributeValue_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_AttributeValue_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_AttributeValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_AttributeValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_AttributeValue >;

                DDS_AttributeValue_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_AttributeValue_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_AttributeValue_g_typePlugin = 
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

                return &DDS_AttributeValue_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_AttributeValue >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_AttributeValue >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_Identifier > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_Identifier_g_tc_members[2]=
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
                        (char *)"Type",/* Member name */
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

                static DDS_TypeCode DDS_Identifier_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_Identifier", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_Identifier_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_Identifier*/

                if (is_initialized) {
                    return &DDS_Identifier_g_tc;
                }

                DDS_Identifier_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_Identifier_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_Identifier_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String50_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DDS_Identifier_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_Identifier_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                DDS_Identifier_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_Identifier_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_Identifier_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_Identifier_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_Identifier_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_Identifier_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_Identifier_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_Identifier_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_Identifier_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_Identifier *sample;

                static RTIXCdrMemberAccessInfo DDS_Identifier_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_Identifier_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_Identifier_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_Identifier);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_Identifier_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Id() - (char *)sample);

                DDS_Identifier_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Type() - (char *)sample);

                DDS_Identifier_g_sampleAccessInfo.memberAccessInfos = 
                DDS_Identifier_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_Identifier);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_Identifier_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_Identifier_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_Identifier_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_Identifier_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_Identifier >;

                DDS_Identifier_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_Identifier_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_Identifier_g_typePlugin = 
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

                return &DDS_Identifier_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_Identifier >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_GuidIdentifierPair_g_tc_members[2]=
                {

                    {
                        (char *)"Guid",/* Member name */
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
                        (char *)"Id",/* Member name */
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

                static DDS_TypeCode DDS_GuidIdentifierPair_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_GuidIdentifierPair", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_GuidIdentifierPair_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GuidIdentifierPair*/

                if (is_initialized) {
                    return &DDS_GuidIdentifierPair_g_tc;
                }

                DDS_GuidIdentifierPair_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GuidIdentifierPair_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_GuidIdentifierPair_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();

                /* Initialize the values for member annotations. */
                DDS_GuidIdentifierPair_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_GuidIdentifierPair_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_GuidIdentifierPair_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GuidIdentifierPair_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GuidIdentifierPair_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_GuidIdentifierPair *sample;

                static RTIXCdrMemberAccessInfo DDS_GuidIdentifierPair_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GuidIdentifierPair_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GuidIdentifierPair_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_GuidIdentifierPair);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GuidIdentifierPair_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Guid() - (char *)sample);

                DDS_GuidIdentifierPair_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Id() - (char *)sample);

                DDS_GuidIdentifierPair_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GuidIdentifierPair_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GuidIdentifierPair_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GuidIdentifierPair_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GuidIdentifierPair_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GuidIdentifierPair_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >;

                DDS_GuidIdentifierPair_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GuidIdentifierPair_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GuidIdentifierPair_g_typePlugin = 
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

                return &DDS_GuidIdentifierPair_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_LogicPoint > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_LogicPoint_g_tc_members[2]=
                {

                    {
                        (char *)"X",/* Member name */
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
                        (char *)"Y",/* Member name */
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

                static DDS_TypeCode DDS_LogicPoint_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_LogicPoint", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_LogicPoint_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_LogicPoint*/

                if (is_initialized) {
                    return &DDS_LogicPoint_g_tc;
                }

                DDS_LogicPoint_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_LogicPoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_LogicPoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DDS_LogicPoint_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_LogicPoint_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DDS_LogicPoint_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_LogicPoint_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_LogicPoint_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_LogicPoint_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_LogicPoint_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_LogicPoint_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DDS_LogicPoint_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_LogicPoint_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_LogicPoint_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_LogicPoint_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_LogicPoint_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_LogicPoint_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_LogicPoint_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_LogicPoint *sample;

                static RTIXCdrMemberAccessInfo DDS_LogicPoint_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_LogicPoint_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_LogicPoint_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_LogicPoint);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_LogicPoint_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->X() - (char *)sample);

                DDS_LogicPoint_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Y() - (char *)sample);

                DDS_LogicPoint_g_sampleAccessInfo.memberAccessInfos = 
                DDS_LogicPoint_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_LogicPoint);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_LogicPoint_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_LogicPoint_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_LogicPoint_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_LogicPoint_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_LogicPoint >;

                DDS_LogicPoint_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_LogicPoint_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_LogicPoint_g_typePlugin = 
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

                return &DDS_LogicPoint_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_LogicPoint >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_LogicPoint >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_GeoPoint > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_GeoPoint_g_tc_members[4]=
                {

                    {
                        (char *)"Longitude",/* Member name */
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
                        (char *)"Latitude",/* Member name */
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
                        (char *)"Altitude",/* Member name */
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
                        (char *)"GeoPointId",/* Member name */
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

                static DDS_TypeCode DDS_GeoPoint_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_GeoPoint", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_GeoPoint_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GeoPoint*/

                if (is_initialized) {
                    return &DDS_GeoPoint_g_tc;
                }

                DDS_GeoPoint_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GeoPoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_GeoPoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_GeoPoint_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_GeoPoint_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                /* Initialize the values for member annotations. */
                DDS_GeoPoint_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DDS_GeoPoint_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_GeoPoint_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_GeoPoint_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DDS_GeoPoint_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_GeoPoint_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_GeoPoint_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DDS_GeoPoint_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_GeoPoint_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoPoint_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_GeoPoint_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_GeoPoint_g_tc_members[3]._annotations._defaultValue._u.ushort_value = 0;
                DDS_GeoPoint_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_GeoPoint_g_tc_members[3]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_GeoPoint_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_GeoPoint_g_tc_members[3]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_GeoPoint_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GeoPoint_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GeoPoint_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_GeoPoint *sample;

                static RTIXCdrMemberAccessInfo DDS_GeoPoint_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GeoPoint_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GeoPoint_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_GeoPoint);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GeoPoint_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Longitude() - (char *)sample);

                DDS_GeoPoint_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Latitude() - (char *)sample);

                DDS_GeoPoint_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Altitude() - (char *)sample);

                DDS_GeoPoint_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GeoPointId() - (char *)sample);

                DDS_GeoPoint_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GeoPoint_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_GeoPoint);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GeoPoint_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GeoPoint_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GeoPoint_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GeoPoint_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_GeoPoint >;

                DDS_GeoPoint_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GeoPoint_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GeoPoint_g_typePlugin = 
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

                return &DDS_GeoPoint_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_GeoPoint >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_GeoCircle > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_GeoCircle_g_tc_members[2]=
                {

                    {
                        (char *)"Radius",/* Member name */
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
                        (char *)"Center",/* Member name */
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

                static DDS_TypeCode DDS_GeoCircle_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_GeoCircle", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_GeoCircle_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GeoCircle*/

                if (is_initialized) {
                    return &DDS_GeoCircle_g_tc;
                }

                DDS_GeoCircle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GeoCircle_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_GeoCircle_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint>::get().native();

                /* Initialize the values for member annotations. */
                DDS_GeoCircle_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoCircle_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DDS_GeoCircle_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoCircle_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_GeoCircle_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GeoCircle_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_GeoCircle_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GeoCircle_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GeoCircle_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_GeoCircle *sample;

                static RTIXCdrMemberAccessInfo DDS_GeoCircle_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GeoCircle_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GeoCircle_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_GeoCircle);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GeoCircle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Radius() - (char *)sample);

                DDS_GeoCircle_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Center() - (char *)sample);

                DDS_GeoCircle_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GeoCircle_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_GeoCircle);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GeoCircle_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GeoCircle_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GeoCircle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GeoCircle_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_GeoCircle >;

                DDS_GeoCircle_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GeoCircle_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GeoCircle_g_typePlugin = 
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

                return &DDS_GeoCircle_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_GeoCircle >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_GeoCircle >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_WayPoint > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_WayPoint_g_tc_members[5]=
                {

                    {
                        (char *)"Longitude",/* Member name */
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
                        (char *)"Latitude",/* Member name */
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
                        (char *)"Altitude",/* Member name */
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
                        (char *)"WaypointId",/* Member name */
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
                    }, 
                    {
                        (char *)"WaypointCriticalLevel",/* Member name */
                        {
                            4,/* Representation ID */
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

                static DDS_TypeCode DDS_WayPoint_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_WayPoint", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DDS_WayPoint_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_WayPoint*/

                if (is_initialized) {
                    return &DDS_WayPoint_g_tc;
                }

                DDS_WayPoint_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_WayPoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_WayPoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_WayPoint_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_WayPoint_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_WayPoint_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                DDS_WayPoint_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DDS_WayPoint_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_WayPoint_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_WayPoint_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DDS_WayPoint_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_WayPoint_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_WayPoint_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DDS_WayPoint_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_WayPoint_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WayPoint_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_WayPoint_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_WayPoint_g_tc_members[3]._annotations._defaultValue._u.ushort_value = 0;
                DDS_WayPoint_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_WayPoint_g_tc_members[3]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_WayPoint_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_WayPoint_g_tc_members[3]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_WayPoint_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_WayPoint_g_tc_members[4]._annotations._defaultValue._u.octet_value = 0;
                DDS_WayPoint_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_WayPoint_g_tc_members[4]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_WayPoint_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_WayPoint_g_tc_members[4]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_WayPoint_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_WayPoint_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_WayPoint_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_WayPoint *sample;

                static RTIXCdrMemberAccessInfo DDS_WayPoint_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_WayPoint_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_WayPoint_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_WayPoint);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_WayPoint_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Longitude() - (char *)sample);

                DDS_WayPoint_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Latitude() - (char *)sample);

                DDS_WayPoint_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Altitude() - (char *)sample);

                DDS_WayPoint_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointId() - (char *)sample);

                DDS_WayPoint_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointCriticalLevel() - (char *)sample);

                DDS_WayPoint_g_sampleAccessInfo.memberAccessInfos = 
                DDS_WayPoint_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_WayPoint);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_WayPoint_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_WayPoint_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_WayPoint_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_WayPoint_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_WayPoint >;

                DDS_WayPoint_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_WayPoint_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_WayPoint_g_typePlugin = 
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

                return &DDS_WayPoint_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_WayPoint >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_WayPoint >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_String50DoublePair > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_String50DoublePair_g_tc_members[2]=
                {

                    {
                        (char *)"Key",/* Member name */
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
                        (char *)"Value",/* Member name */
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

                static DDS_TypeCode DDS_String50DoublePair_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_String50DoublePair", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_String50DoublePair_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_String50DoublePair*/

                if (is_initialized) {
                    return &DDS_String50DoublePair_g_tc;
                }

                DDS_String50DoublePair_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_String50DoublePair_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String50_AliasTag_t>::get().native();
                DDS_String50DoublePair_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DDS_String50DoublePair_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_String50DoublePair_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_String50DoublePair_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_String50DoublePair_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DDS_String50DoublePair_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_String50DoublePair_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_String50DoublePair_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_String50DoublePair_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_String50DoublePair_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_String50DoublePair_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_String50DoublePair_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_String50DoublePair *sample;

                static RTIXCdrMemberAccessInfo DDS_String50DoublePair_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_String50DoublePair_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_String50DoublePair_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_String50DoublePair);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_String50DoublePair_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Key() - (char *)sample);

                DDS_String50DoublePair_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Value() - (char *)sample);

                DDS_String50DoublePair_g_sampleAccessInfo.memberAccessInfos = 
                DDS_String50DoublePair_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_String50DoublePair);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_String50DoublePair_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_String50DoublePair_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_String50DoublePair_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_String50DoublePair_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_String50DoublePair >;

                DDS_String50DoublePair_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_String50DoublePair_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_String50DoublePair_g_typePlugin = 
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

                return &DDS_String50DoublePair_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_String50DoublePair >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_String50DoublePair >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_RangeDescription > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_RangeDescription_g_tc_members[2]=
                {

                    {
                        (char *)"Minimum",/* Member name */
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
                        (char *)"Maximum",/* Member name */
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

                static DDS_TypeCode DDS_RangeDescription_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_RangeDescription", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_RangeDescription_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_RangeDescription*/

                if (is_initialized) {
                    return &DDS_RangeDescription_g_tc;
                }

                DDS_RangeDescription_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_RangeDescription_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_RangeDescription_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DDS_RangeDescription_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_RangeDescription_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                DDS_RangeDescription_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_RangeDescription_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_RangeDescription_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_RangeDescription_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_RangeDescription_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_RangeDescription_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DDS_RangeDescription_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_RangeDescription_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_RangeDescription_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_RangeDescription_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_RangeDescription_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_RangeDescription_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_RangeDescription_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_RangeDescription *sample;

                static RTIXCdrMemberAccessInfo DDS_RangeDescription_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_RangeDescription_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_RangeDescription_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_RangeDescription);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_RangeDescription_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Minimum() - (char *)sample);

                DDS_RangeDescription_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Maximum() - (char *)sample);

                DDS_RangeDescription_g_sampleAccessInfo.memberAccessInfos = 
                DDS_RangeDescription_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_RangeDescription);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_RangeDescription_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_RangeDescription_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_RangeDescription_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_RangeDescription_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_RangeDescription >;

                DDS_RangeDescription_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_RangeDescription_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_RangeDescription_g_typePlugin = 
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

                return &DDS_RangeDescription_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_RangeDescription >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_RangeDescription >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_ItemType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ItemType_g_tc_members[2]=
                {

                    {
                        (char *)"Type",/* Member name */
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
                        (char *)"Subtype",/* Member name */
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

                static DDS_TypeCode DDS_ItemType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_ItemType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_ItemType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ItemType*/

                if (is_initialized) {
                    return &DDS_ItemType_g_tc;
                }

                DDS_ItemType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ItemType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_ItemType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                DDS_ItemType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_ItemType_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                DDS_ItemType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_ItemType_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_ItemType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_ItemType_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_ItemType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_ItemType_g_tc_members[1]._annotations._defaultValue._u.octet_value = 0;
                DDS_ItemType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_ItemType_g_tc_members[1]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_ItemType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_ItemType_g_tc_members[1]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_ItemType_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ItemType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ItemType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_ItemType *sample;

                static RTIXCdrMemberAccessInfo DDS_ItemType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ItemType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ItemType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_ItemType);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ItemType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Type() - (char *)sample);

                DDS_ItemType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Subtype() - (char *)sample);

                DDS_ItemType_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ItemType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_ItemType);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ItemType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ItemType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ItemType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ItemType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_ItemType >;

                DDS_ItemType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ItemType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ItemType_g_typePlugin = 
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

                return &DDS_ItemType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_ItemType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_ItemType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_Visibility > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_Visibility_g_tc_members[3]=
                {

                    {
                        (char *)"Visible",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_Visibility::Visible, 
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
                        (char *)"Hidden",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_Visibility::Hidden, 
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
                        (char *)"Collapsed",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_Visibility::Collapsed, 
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

                static DDS_TypeCode DDS_Visibility_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_Visibility", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_Visibility_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_Visibility*/

                if (is_initialized) {
                    return &DDS_Visibility_g_tc;
                }

                DDS_Visibility_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DDS_Visibility_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DDS_Visibility_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DDS_Visibility_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_Visibility_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_Visibility_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DDS_Visibility_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_Visibility_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_Visibility_g_sampleAccessInfo;
                }

                DDS_Visibility_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DDS_Visibility_g_sampleAccessInfo.memberAccessInfos = 
                DDS_Visibility_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_Visibility);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_Visibility_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_Visibility_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_Visibility_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_Visibility_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_Visibility >;

                DDS_Visibility_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_Visibility_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_Visibility_g_typePlugin = 
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

                return &DDS_Visibility_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DDS_GRI::DDSCommon::DDS_Visibility >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_Visibility >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_OperationType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_OperationType_g_tc_members[4]=
                {

                    {
                        (char *)"OnOffOperation",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OperationType::OnOffOperation, 
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
                        (char *)"EnumsOperation",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OperationType::EnumsOperation, 
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
                        (char *)"NumericOperation",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OperationType::NumericOperation, 
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
                        (char *)"UpDownEnumsOperation",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OperationType::UpDownEnumsOperation, 
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

                static DDS_TypeCode DDS_OperationType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_OperationType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_OperationType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_OperationType*/

                if (is_initialized) {
                    return &DDS_OperationType_g_tc;
                }

                DDS_OperationType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DDS_OperationType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DDS_OperationType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DDS_OperationType_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_OperationType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_OperationType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DDS_OperationType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_OperationType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_OperationType_g_sampleAccessInfo;
                }

                DDS_OperationType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DDS_OperationType_g_sampleAccessInfo.memberAccessInfos = 
                DDS_OperationType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_OperationType);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_OperationType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_OperationType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_OperationType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_OperationType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_OperationType >;

                DDS_OperationType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_OperationType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_OperationType_g_typePlugin = 
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

                return &DDS_OperationType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DDS_GRI::DDSCommon::DDS_OperationType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_OperationType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_OprationStatus > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_OprationStatus_g_tc_members[7]=
                {

                    {
                        (char *)"None",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::None, 
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
                        (char *)"NotExecuted",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::NotExecuted, 
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
                        (char *)"InProcess",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::InProcess, 
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
                        (char *)"FinishedSuccessfully",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::FinishedSuccessfully, 
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
                        (char *)"Failure",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::Failure, 
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
                        (char *)"Timeout",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::Timeout, 
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
                        (char *)"Stoped",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DDS_GRI::DDSCommon::DDS_OprationStatus::Stoped, 
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

                static DDS_TypeCode DDS_OprationStatus_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_OprationStatus", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        DDS_OprationStatus_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_OprationStatus*/

                if (is_initialized) {
                    return &DDS_OprationStatus_g_tc;
                }

                DDS_OprationStatus_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DDS_OprationStatus_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DDS_OprationStatus_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DDS_OprationStatus_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_OprationStatus_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_OprationStatus_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DDS_OprationStatus_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_OprationStatus_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_OprationStatus_g_sampleAccessInfo;
                }

                DDS_OprationStatus_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DDS_OprationStatus_g_sampleAccessInfo.memberAccessInfos = 
                DDS_OprationStatus_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_OprationStatus);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_OprationStatus_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_OprationStatus_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_OprationStatus_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_OprationStatus_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_OprationStatus >;

                DDS_OprationStatus_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_OprationStatus_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_OprationStatus_g_typePlugin = 
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

                return &DDS_OprationStatus_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DDS_GRI::DDSCommon::DDS_OprationStatus >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_OprationStatus >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCommon::DDS_BaseRequestMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_BaseRequestMessage_g_tc_members[2]=
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
                    }
                };

                static DDS_TypeCode DDS_BaseRequestMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCommon::DDS_BaseRequestMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_BaseRequestMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_BaseRequestMessage*/

                if (is_initialized) {
                    return &DDS_BaseRequestMessage_g_tc;
                }

                DDS_BaseRequestMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_BaseRequestMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_BaseRequestMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();

                /* Initialize the values for member annotations. */

                DDS_BaseRequestMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_BaseRequestMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_BaseRequestMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCommon::DDS_BaseRequestMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_BaseRequestMessage_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_BaseRequestMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_BaseRequestMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCommon::DDS_BaseRequestMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_BaseRequestMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_BaseRequestMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_BaseRequestMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_BaseRequestMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCommon::DDS_BaseRequestMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_BaseRequestMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_BaseRequestMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_BaseRequestMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_BaseRequestMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >;

                DDS_BaseRequestMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_BaseRequestMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_BaseRequestMessage_g_typePlugin = 
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

                return &DDS_BaseRequestMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_SectionWaypoint_g_tc_members[2]=
                {

                    {
                        (char *)"PervWaypintId",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"WaypointIndex",/* Member name */
                        {
                            6,/* Representation ID */
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

                static DDS_TypeCode DDS_SectionWaypoint_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_SectionWaypoint_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_SectionWaypoint*/

                if (is_initialized) {
                    return &DDS_SectionWaypoint_g_tc;
                }

                DDS_SectionWaypoint_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_SectionWaypoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DDS_SectionWaypoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                DDS_SectionWaypoint_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DDS_SectionWaypoint_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DDS_SectionWaypoint_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DDS_SectionWaypoint_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DDS_SectionWaypoint_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DDS_SectionWaypoint_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DDS_SectionWaypoint_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DDS_SectionWaypoint_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                DDS_SectionWaypoint_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DDS_SectionWaypoint_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DDS_SectionWaypoint_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DDS_SectionWaypoint_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DDS_SectionWaypoint_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_WayPoint >::get().native(); /* Base class */

                DDS_SectionWaypoint_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_SectionWaypoint_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_SectionWaypoint_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint *sample;

                static RTIXCdrMemberAccessInfo DDS_SectionWaypoint_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_SectionWaypoint_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_SectionWaypoint_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_SectionWaypoint_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PervWaypintId() - (char *)sample);

                DDS_SectionWaypoint_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointIndex() - (char *)sample);

                DDS_SectionWaypoint_g_sampleAccessInfo.memberAccessInfos = 
                DDS_SectionWaypoint_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_SectionWaypoint_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_SectionWaypoint_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_SectionWaypoint_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_SectionWaypoint_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >;

                DDS_SectionWaypoint_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_SectionWaypoint_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_SectionWaypoint_g_typePlugin = 
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

                return &DDS_SectionWaypoint_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_WaypointBehaviorType_g_tc_members[2]=
                {

                    {
                        (char *)"BehaviorType",/* Member name */
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
                        (char *)"Value",/* Member name */
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

                static DDS_TypeCode DDS_WaypointBehaviorType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_WaypointBehaviorType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_WaypointBehaviorType*/

                if (is_initialized) {
                    return &DDS_WaypointBehaviorType_g_tc;
                }

                DDS_WaypointBehaviorType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_WaypointBehaviorType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DDS_WaypointBehaviorType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                DDS_WaypointBehaviorType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DDS_WaypointBehaviorType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DDS_WaypointBehaviorType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DDS_WaypointBehaviorType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DDS_WaypointBehaviorType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DDS_WaypointBehaviorType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DDS_WaypointBehaviorType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WaypointBehaviorType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                DDS_WaypointBehaviorType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WaypointBehaviorType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_WaypointBehaviorType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_WaypointBehaviorType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_WaypointBehaviorType_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_WaypointBehaviorType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_WaypointBehaviorType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType *sample;

                static RTIXCdrMemberAccessInfo DDS_WaypointBehaviorType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_WaypointBehaviorType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_WaypointBehaviorType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_WaypointBehaviorType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BehaviorType() - (char *)sample);

                DDS_WaypointBehaviorType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Value() - (char *)sample);

                DDS_WaypointBehaviorType_g_sampleAccessInfo.memberAccessInfos = 
                DDS_WaypointBehaviorType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_WaypointBehaviorType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_WaypointBehaviorType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_WaypointBehaviorType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_WaypointBehaviorType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >;

                DDS_WaypointBehaviorType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_WaypointBehaviorType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_WaypointBehaviorType_g_typePlugin = 
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

                return &DDS_WaypointBehaviorType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_WaypointBehaviors_g_tc_Behaviors_sequence;

                static DDS_TypeCode_Member DDS_WaypointBehaviors_g_tc_members[2]=
                {

                    {
                        (char *)"WaypointId",/* Member name */
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
                        (char *)"Behaviors",/* Member name */
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

                static DDS_TypeCode DDS_WaypointBehaviors_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_WaypointBehaviors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_WaypointBehaviors*/

                if (is_initialized) {
                    return &DDS_WaypointBehaviors_g_tc;
                }

                DDS_WaypointBehaviors_g_tc_Behaviors_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS) > >(((DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS)));

                DDS_WaypointBehaviors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_WaypointBehaviors_g_tc_Behaviors_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType>::get().native();
                DDS_WaypointBehaviors_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_WaypointBehaviors_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DDS_WaypointBehaviors_g_tc_Behaviors_sequence;

                /* Initialize the values for member annotations. */
                DDS_WaypointBehaviors_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_WaypointBehaviors_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                DDS_WaypointBehaviors_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_WaypointBehaviors_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_WaypointBehaviors_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_WaypointBehaviors_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_WaypointBehaviors_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_WaypointBehaviors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_WaypointBehaviors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors *sample;

                static RTIXCdrMemberAccessInfo DDS_WaypointBehaviors_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_WaypointBehaviors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_WaypointBehaviors_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_WaypointBehaviors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointId() - (char *)sample);

                DDS_WaypointBehaviors_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Behaviors() - (char *)sample);

                DDS_WaypointBehaviors_g_sampleAccessInfo.memberAccessInfos = 
                DDS_WaypointBehaviors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_WaypointBehaviors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_WaypointBehaviors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_WaypointBehaviors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_WaypointBehaviors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >;

                DDS_WaypointBehaviors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_WaypointBehaviors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_WaypointBehaviors_g_typePlugin = 
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

                return &DDS_WaypointBehaviors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static const DDS_Wchar Name_default_wstring_value[] = {0};
                static const DDS_Wchar Description_default_wstring_value[] = {0};

                static DDS_TypeCode_Member DDS_ItemDescrpition_g_tc_members[11]=
                {

                    {
                        (char *)"RefClientSideId",/* Member name */
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
                        (char *)"Createion",/* Member name */
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
                        (char *)"ModificationTime",/* Member name */
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
                    }, 
                    {
                        (char *)"Creator",/* Member name */
                        {
                            4,/* Representation ID */
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
                        (char *)"Description",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"MissionElementType",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"IsReservedItem",/* Member name */
                        {
                            7,/* Representation ID */
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
                        (char *)"IsSave",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"ItemId",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"VehicleType",/* Member name */
                        {
                            10,/* Representation ID */
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

                static DDS_TypeCode DDS_ItemDescrpition_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        DDS_ItemDescrpition_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ItemDescrpition*/

                if (is_initialized) {
                    return &DDS_ItemDescrpition_g_tc;
                }

                DDS_ItemDescrpition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ItemDescrpition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_ItemDescrpition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::WString100_AliasTag_t>::get().native();
                DDS_ItemDescrpition_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String100_AliasTag_t>::get().native();
                DDS_ItemDescrpition_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_FileTimeUTC_AliasTag_t>::get().native();
                DDS_ItemDescrpition_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String100_AliasTag_t>::get().native();
                DDS_ItemDescrpition_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::WString200_AliasTag_t>::get().native();
                DDS_ItemDescrpition_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_ItemType>::get().native();
                DDS_ItemDescrpition_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DDS_ItemDescrpition_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DDS_ItemDescrpition_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_ItemDescrpition_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String20_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DDS_ItemDescrpition_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ItemDescrpition_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ItemDescrpition_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_WSTRING;
                DDS_ItemDescrpition_g_tc_members[1]._annotations._defaultValue._u.wstring_value = (DDS_Wchar *) Name_default_wstring_value;

                DDS_ItemDescrpition_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ItemDescrpition_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ItemDescrpition_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                DDS_ItemDescrpition_g_tc_members[3]._annotations._defaultValue._u.long_long_value = 0ll;
                DDS_ItemDescrpition_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                DDS_ItemDescrpition_g_tc_members[3]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                DDS_ItemDescrpition_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                DDS_ItemDescrpition_g_tc_members[3]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

                DDS_ItemDescrpition_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ItemDescrpition_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ItemDescrpition_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_WSTRING;
                DDS_ItemDescrpition_g_tc_members[5]._annotations._defaultValue._u.wstring_value = (DDS_Wchar *) Description_default_wstring_value;

                DDS_ItemDescrpition_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DDS_ItemDescrpition_g_tc_members[7]._annotations._defaultValue._u.boolean_value = 0;

                DDS_ItemDescrpition_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DDS_ItemDescrpition_g_tc_members[8]._annotations._defaultValue._u.boolean_value = 0;

                DDS_ItemDescrpition_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_ItemDescrpition_g_tc_members[9]._annotations._defaultValue._u.ushort_value = 0;
                DDS_ItemDescrpition_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_ItemDescrpition_g_tc_members[9]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_ItemDescrpition_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_ItemDescrpition_g_tc_members[9]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_ItemDescrpition_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ItemDescrpition_g_tc_members[10]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ItemDescrpition_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ItemDescrpition_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ItemDescrpition_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition *sample;

                static RTIXCdrMemberAccessInfo DDS_ItemDescrpition_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ItemDescrpition_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ItemDescrpition_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ItemDescrpition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RefClientSideId() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Name() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Createion() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ModificationTime() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Creator() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Description() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionElementType() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IsReservedItem() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IsSave() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemId() - (char *)sample);

                DDS_ItemDescrpition_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehicleType() - (char *)sample);

                DDS_ItemDescrpition_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ItemDescrpition_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ItemDescrpition_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ItemDescrpition_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ItemDescrpition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ItemDescrpition_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >;

                DDS_ItemDescrpition_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ItemDescrpition_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ItemDescrpition_g_typePlugin = 
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

                return &DDS_ItemDescrpition_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_BaseItem > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_BaseItem_g_tc_members[7]=
                {

                    {
                        (char *)"ClientSideId",/* Member name */
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
                        (char *)"ItemId",/* Member name */
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
                        (char *)"ModificationId",/* Member name */
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
                        (char *)"ItemType",/* Member name */
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
                    }, 
                    {
                        (char *)"Action",/* Member name */
                        {
                            4,/* Representation ID */
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
                        (char *)"ItemDescrpition",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"Assignment",/* Member name */
                        {
                            6,/* Representation ID */
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

                static DDS_TypeCode DDS_BaseItem_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_BaseItem", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        DDS_BaseItem_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_BaseItem*/

                if (is_initialized) {
                    return &DDS_BaseItem_g_tc;
                }

                DDS_BaseItem_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_BaseItem_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_BaseItem_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_BaseItem_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_BaseItem_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_ItemType>::get().native();
                DDS_BaseItem_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                DDS_BaseItem_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition>::get().native();
                DDS_BaseItem_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                /* Initialize the values for member annotations. */
                DDS_BaseItem_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_BaseItem_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_BaseItem_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseItem_g_tc_members[1]._annotations._defaultValue._u.ushort_value = 0;
                DDS_BaseItem_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseItem_g_tc_members[1]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_BaseItem_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseItem_g_tc_members[1]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_BaseItem_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_BaseItem_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_BaseItem_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_BaseItem_g_tc_members[4]._annotations._defaultValue._u.octet_value = 0;
                DDS_BaseItem_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_BaseItem_g_tc_members[4]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_BaseItem_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_BaseItem_g_tc_members[4]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_BaseItem_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseItem_g_tc_members[6]._annotations._defaultValue._u.ushort_value = 0;
                DDS_BaseItem_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseItem_g_tc_members[6]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_BaseItem_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseItem_g_tc_members[6]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_BaseItem_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_BaseItem_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_BaseItem_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_BaseItem *sample;

                static RTIXCdrMemberAccessInfo DDS_BaseItem_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_BaseItem_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_BaseItem_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_BaseItem);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_BaseItem_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ClientSideId() - (char *)sample);

                DDS_BaseItem_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemId() - (char *)sample);

                DDS_BaseItem_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ModificationId() - (char *)sample);

                DDS_BaseItem_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemType() - (char *)sample);

                DDS_BaseItem_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Action() - (char *)sample);

                DDS_BaseItem_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemDescrpition() - (char *)sample);

                DDS_BaseItem_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Assignment() - (char *)sample);

                DDS_BaseItem_g_sampleAccessInfo.memberAccessInfos = 
                DDS_BaseItem_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_BaseItem);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_BaseItem_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_BaseItem_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_BaseItem_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_BaseItem_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >;

                DDS_BaseItem_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_BaseItem_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_BaseItem_g_typePlugin = 
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

                return &DDS_BaseItem_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_Way > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_Way_g_tc_members[1]=
                {

                    {
                        (char *)"Stam",/* Member name */
                        {
                            7,/* Representation ID */
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

                static DDS_TypeCode DDS_Way_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_Way", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DDS_Way_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_Way*/

                if (is_initialized) {
                    return &DDS_Way_g_tc;
                }

                DDS_Way_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_Way_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                DDS_Way_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_Way_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                DDS_Way_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_Way_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_Way_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_Way_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_Way_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::get().native(); /* Base class */

                DDS_Way_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_Way_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_Way_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_Way *sample;

                static RTIXCdrMemberAccessInfo DDS_Way_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_Way_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_Way_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_Way);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_Way_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Stam() - (char *)sample);

                DDS_Way_g_sampleAccessInfo.memberAccessInfos = 
                DDS_Way_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_Way);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_Way_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_Way_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_Way_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_Way_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_Way >;

                DDS_Way_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_Way_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_Way_g_typePlugin = 
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

                return &DDS_Way_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Way >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_Way >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ClientServerWayMessage_g_tc_members[3]=
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
                        (char *)"Item",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DDS_ClientServerWayMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_ClientServerWayMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ClientServerWayMessage*/

                if (is_initialized) {
                    return &DDS_ClientServerWayMessage_g_tc;
                }

                DDS_ClientServerWayMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ClientServerWayMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerWayMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerWayMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Way>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ClientServerWayMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ClientServerWayMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ClientServerWayMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ClientServerWayMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ClientServerWayMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerWayMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ClientServerWayMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ClientServerWayMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ClientServerWayMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Item() - (char *)sample);

                DDS_ClientServerWayMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ClientServerWayMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ClientServerWayMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ClientServerWayMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ClientServerWayMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ClientServerWayMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >;

                DDS_ClientServerWayMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerWayMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ClientServerWayMessage_g_typePlugin = 
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

                return &DDS_ClientServerWayMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_Section > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_Section_g_tc_Waypoints_sequence;
                static DDS_TypeCode DDS_Section_g_tc_WaypointsBehavior_sequence;

                static DDS_TypeCode_Member DDS_Section_g_tc_members[6]=
                {

                    {
                        (char *)"WayId",/* Member name */
                        {
                            7,/* Representation ID */
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
                        (char *)"Waypoints",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"Speed",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"Direction",/* Member name */
                        {
                            10,/* Representation ID */
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
                        (char *)"Width",/* Member name */
                        {
                            11,/* Representation ID */
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
                        (char *)"WaypointsBehavior",/* Member name */
                        {
                            12,/* Representation ID */
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

                static DDS_TypeCode DDS_Section_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_Section", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        DDS_Section_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_Section*/

                if (is_initialized) {
                    return &DDS_Section_g_tc;
                }

                DDS_Section_g_tc_Waypoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 > >((100));
                DDS_Section_g_tc_WaypointsBehavior_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 > >((100));

                DDS_Section_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_Section_g_tc_Waypoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint>::get().native();
                DDS_Section_g_tc_WaypointsBehavior_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors>::get().native();
                DDS_Section_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_Section_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DDS_Section_g_tc_Waypoints_sequence;
                DDS_Section_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_Section_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                DDS_Section_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                DDS_Section_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& DDS_Section_g_tc_WaypointsBehavior_sequence;

                /* Initialize the values for member annotations. */
                DDS_Section_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_Section_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_Section_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_Section_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                DDS_Section_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_Section_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_Section_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_Section_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_Section_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_Section_g_tc_members[3]._annotations._defaultValue._u.octet_value = 0;
                DDS_Section_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_Section_g_tc_members[3]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_Section_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_Section_g_tc_members[3]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_Section_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_Section_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                DDS_Section_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_Section_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_Section_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_Section_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_Section_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::get().native(); /* Base class */

                DDS_Section_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_Section_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_Section_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_Section *sample;

                static RTIXCdrMemberAccessInfo DDS_Section_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_Section_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_Section_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_Section);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_Section_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WayId() - (char *)sample);

                DDS_Section_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Waypoints() - (char *)sample);

                DDS_Section_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Speed() - (char *)sample);

                DDS_Section_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Direction() - (char *)sample);

                DDS_Section_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Width() - (char *)sample);

                DDS_Section_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointsBehavior() - (char *)sample);

                DDS_Section_g_sampleAccessInfo.memberAccessInfos = 
                DDS_Section_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_Section);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_Section_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_Section_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_Section_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_Section_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_Section >;

                DDS_Section_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_Section_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_Section_g_typePlugin = 
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

                return &DDS_Section_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Section >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_Section >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ClientServerSectionMessage_g_tc_members[3]=
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
                        (char *)"Item",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DDS_ClientServerSectionMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_ClientServerSectionMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ClientServerSectionMessage*/

                if (is_initialized) {
                    return &DDS_ClientServerSectionMessage_g_tc;
                }

                DDS_ClientServerSectionMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ClientServerSectionMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerSectionMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerSectionMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Section>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ClientServerSectionMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ClientServerSectionMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ClientServerSectionMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ClientServerSectionMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ClientServerSectionMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerSectionMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ClientServerSectionMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ClientServerSectionMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ClientServerSectionMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Item() - (char *)sample);

                DDS_ClientServerSectionMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ClientServerSectionMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ClientServerSectionMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ClientServerSectionMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ClientServerSectionMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ClientServerSectionMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >;

                DDS_ClientServerSectionMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerSectionMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ClientServerSectionMessage_g_typePlugin = 
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

                return &DDS_ClientServerSectionMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_BaseRouteProperty_g_tc_members[4]=
                {

                    {
                        (char *)"PathWidth",/* Member name */
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
                        (char *)"MotionRadius",/* Member name */
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
                        (char *)"RequiredRadiusOfCurvature",/* Member name */
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
                        (char *)"WaypointType",/* Member name */
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

                static DDS_TypeCode DDS_BaseRouteProperty_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_BaseRouteProperty_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_BaseRouteProperty*/

                if (is_initialized) {
                    return &DDS_BaseRouteProperty_g_tc;
                }

                DDS_BaseRouteProperty_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_BaseRouteProperty_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_BaseRouteProperty_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_BaseRouteProperty_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                DDS_BaseRouteProperty_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                DDS_BaseRouteProperty_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                DDS_BaseRouteProperty_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_BaseRouteProperty_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_BaseRouteProperty_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[1]._annotations._defaultValue._u.ushort_value = 0;
                DDS_BaseRouteProperty_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[1]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_BaseRouteProperty_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[1]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_BaseRouteProperty_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[2]._annotations._defaultValue._u.ushort_value = 0;
                DDS_BaseRouteProperty_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[2]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                DDS_BaseRouteProperty_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                DDS_BaseRouteProperty_g_tc_members[2]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                DDS_BaseRouteProperty_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_BaseRouteProperty_g_tc_members[3]._annotations._defaultValue._u.octet_value = 0;
                DDS_BaseRouteProperty_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_BaseRouteProperty_g_tc_members[3]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_BaseRouteProperty_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_BaseRouteProperty_g_tc_members[3]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_BaseRouteProperty_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_BaseRouteProperty_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_BaseRouteProperty_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty *sample;

                static RTIXCdrMemberAccessInfo DDS_BaseRouteProperty_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_BaseRouteProperty_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_BaseRouteProperty_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_BaseRouteProperty_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathWidth() - (char *)sample);

                DDS_BaseRouteProperty_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MotionRadius() - (char *)sample);

                DDS_BaseRouteProperty_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequiredRadiusOfCurvature() - (char *)sample);

                DDS_BaseRouteProperty_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointType() - (char *)sample);

                DDS_BaseRouteProperty_g_sampleAccessInfo.memberAccessInfos = 
                DDS_BaseRouteProperty_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_BaseRouteProperty_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_BaseRouteProperty_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_BaseRouteProperty_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_BaseRouteProperty_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty >;

                DDS_BaseRouteProperty_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_BaseRouteProperty_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_BaseRouteProperty_g_typePlugin = 
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

                return &DDS_BaseRouteProperty_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_Route > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_Route_g_tc_Sections_sequence;
                static DDS_TypeCode DDS_Route_g_tc_Waypoints_sequence;
                static DDS_TypeCode DDS_Route_g_tc_WaypointsBehavior_sequence;

                static DDS_TypeCode_Member DDS_Route_g_tc_members[4]=
                {

                    {
                        (char *)"BaseRouteProperties",/* Member name */
                        {
                            7,/* Representation ID */
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
                        (char *)"Sections",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"Waypoints",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"WaypointsBehavior",/* Member name */
                        {
                            10,/* Representation ID */
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

                static DDS_TypeCode DDS_Route_g_tc =
                {{
                        DDS_TK_VALUE, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_Route", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_Route_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_Route*/

                if (is_initialized) {
                    return &DDS_Route_g_tc;
                }

                DDS_Route_g_tc_Sections_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GUID, 100 > >((100));
                DDS_Route_g_tc_Waypoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint, 100 > >((100));
                DDS_Route_g_tc_WaypointsBehavior_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors, 100 > >((100));

                DDS_Route_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_Route_g_tc_Sections_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_Route_g_tc_Waypoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint>::get().native();
                DDS_Route_g_tc_WaypointsBehavior_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors>::get().native();
                DDS_Route_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty>::get().native();
                DDS_Route_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DDS_Route_g_tc_Sections_sequence;
                DDS_Route_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& DDS_Route_g_tc_Waypoints_sequence;
                DDS_Route_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& DDS_Route_g_tc_WaypointsBehavior_sequence;

                /* Initialize the values for member annotations. */

                DDS_Route_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::get().native(); /* Base class */

                DDS_Route_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_Route_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_Route_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_Route *sample;

                static RTIXCdrMemberAccessInfo DDS_Route_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_Route_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_Route_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_Route);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_Route_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BaseRouteProperties() - (char *)sample);

                DDS_Route_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Sections() - (char *)sample);

                DDS_Route_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Waypoints() - (char *)sample);

                DDS_Route_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WaypointsBehavior() - (char *)sample);

                DDS_Route_g_sampleAccessInfo.memberAccessInfos = 
                DDS_Route_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_Route);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_Route_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_Route_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_Route_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_Route_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_Route >;

                DDS_Route_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_Route_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_Route_g_typePlugin = 
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

                return &DDS_Route_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Route >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_Route >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ClientServerRouteMessage_g_tc_members[3]=
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
                        (char *)"Item",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DDS_ClientServerRouteMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_ClientServerRouteMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ClientServerRouteMessage*/

                if (is_initialized) {
                    return &DDS_ClientServerRouteMessage_g_tc;
                }

                DDS_ClientServerRouteMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ClientServerRouteMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerRouteMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerRouteMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_Route>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ClientServerRouteMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ClientServerRouteMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ClientServerRouteMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ClientServerRouteMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ClientServerRouteMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerRouteMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ClientServerRouteMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ClientServerRouteMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ClientServerRouteMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Item() - (char *)sample);

                DDS_ClientServerRouteMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ClientServerRouteMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ClientServerRouteMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ClientServerRouteMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ClientServerRouteMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ClientServerRouteMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >;

                DDS_ClientServerRouteMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerRouteMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ClientServerRouteMessage_g_typePlugin = 
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

                return &DDS_ClientServerRouteMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc_members[2]=
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
                        (char *)"ItemType",/* Member name */
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
                    }
                };

                static DDS_TypeCode DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ClientServerRequestItemsDiscrptionByTypeMessage*/

                if (is_initialized) {
                    return &DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc;
                }

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_ItemType>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemType() - (char *)sample);

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >;

                DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_typePlugin = 
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

                return &DDS_ClientServerRequestItemsDiscrptionByTypeMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_ItemDescrpitions_sequence;

                static DDS_TypeCode_Member DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_members[4]=
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
                        (char *)"ItemType",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ItemDescrpitions",/* Member name */
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

                static DDS_TypeCode DDS_ClientServerResponseItemsDiscrptionMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ClientServerResponseItemsDiscrptionMessage*/

                if (is_initialized) {
                    return &DDS_ClientServerResponseItemsDiscrptionMessage_g_tc;
                }

                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_ItemDescrpitions_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition, 100 > >((100));

                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_ItemDescrpitions_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition>::get().native();
                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_ItemType>::get().native();
                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& DDS_ClientServerResponseItemsDiscrptionMessage_g_tc_ItemDescrpitions_sequence;

                /* Initialize the values for member annotations. */

                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ClientServerResponseItemsDiscrptionMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ClientServerResponseItemsDiscrptionMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ClientServerResponseItemsDiscrptionMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ClientServerResponseItemsDiscrptionMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ClientServerResponseItemsDiscrptionMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ClientServerResponseItemsDiscrptionMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemType() - (char *)sample);

                DDS_ClientServerResponseItemsDiscrptionMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ItemDescrpitions() - (char *)sample);

                DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ClientServerResponseItemsDiscrptionMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >;

                DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ClientServerResponseItemsDiscrptionMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ClientServerResponseItemsDiscrptionMessage_g_typePlugin = 
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

                return &DDS_ClientServerResponseItemsDiscrptionMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ExtendedGeoPoint_g_tc_Behaviors_sequence;

                static DDS_TypeCode_Member ExtendedGeoPoint_g_tc_members[2]=
                {

                    {
                        (char *)"Point",/* Member name */
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
                        (char *)"Behaviors",/* Member name */
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

                static DDS_TypeCode ExtendedGeoPoint_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::ExtendedGeoPoint", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ExtendedGeoPoint_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExtendedGeoPoint*/

                if (is_initialized) {
                    return &ExtendedGeoPoint_g_tc;
                }

                ExtendedGeoPoint_g_tc_Behaviors_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN)));

                ExtendedGeoPoint_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExtendedGeoPoint_g_tc_Behaviors_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType>::get().native();
                ExtendedGeoPoint_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint>::get().native();
                ExtendedGeoPoint_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ExtendedGeoPoint_g_tc_Behaviors_sequence;

                /* Initialize the values for member annotations. */

                ExtendedGeoPoint_g_tc._data._sampleAccessInfo = sample_access_info();
                ExtendedGeoPoint_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ExtendedGeoPoint_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::ExtendedGeoPoint *sample;

                static RTIXCdrMemberAccessInfo ExtendedGeoPoint_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExtendedGeoPoint_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExtendedGeoPoint_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::ExtendedGeoPoint);
                if (sample == NULL) {
                    return NULL;
                }

                ExtendedGeoPoint_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Point() - (char *)sample);

                ExtendedGeoPoint_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Behaviors() - (char *)sample);

                ExtendedGeoPoint_g_sampleAccessInfo.memberAccessInfos = 
                ExtendedGeoPoint_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::ExtendedGeoPoint);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        ExtendedGeoPoint_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        ExtendedGeoPoint_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExtendedGeoPoint_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExtendedGeoPoint_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >;

                ExtendedGeoPoint_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExtendedGeoPoint_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExtendedGeoPoint_g_typePlugin = 
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

                return &ExtendedGeoPoint_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ExtendedGeoPointArray_g_tc_Points_sequence;

                static DDS_TypeCode_Member ExtendedGeoPointArray_g_tc_members[1]=
                {

                    {
                        (char *)"Points",/* Member name */
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
                    }
                };

                static DDS_TypeCode ExtendedGeoPointArray_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ExtendedGeoPointArray_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ExtendedGeoPointArray*/

                if (is_initialized) {
                    return &ExtendedGeoPointArray_g_tc;
                }

                ExtendedGeoPointArray_g_tc_Points_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN)));

                ExtendedGeoPointArray_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ExtendedGeoPointArray_g_tc_Points_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint>::get().native();
                ExtendedGeoPointArray_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ExtendedGeoPointArray_g_tc_Points_sequence;

                /* Initialize the values for member annotations. */

                ExtendedGeoPointArray_g_tc._data._sampleAccessInfo = sample_access_info();
                ExtendedGeoPointArray_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ExtendedGeoPointArray_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray *sample;

                static RTIXCdrMemberAccessInfo ExtendedGeoPointArray_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ExtendedGeoPointArray_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ExtendedGeoPointArray_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray);
                if (sample == NULL) {
                    return NULL;
                }

                ExtendedGeoPointArray_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Points() - (char *)sample);

                ExtendedGeoPointArray_g_sampleAccessInfo.memberAccessInfos = 
                ExtendedGeoPointArray_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        ExtendedGeoPointArray_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        ExtendedGeoPointArray_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ExtendedGeoPointArray_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ExtendedGeoPointArray_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >;

                ExtendedGeoPointArray_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ExtendedGeoPointArray_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ExtendedGeoPointArray_g_typePlugin = 
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

                return &ExtendedGeoPointArray_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_ExternalMissionData_g_tc_Polyline_sequence;
                static DDS_TypeCode DDS_ExternalMissionData_g_tc_Polygone_sequence;
                static DDS_TypeCode DDS_ExternalMissionData_g_tc_Points_sequence;

                static DDS_TypeCode_Member DDS_ExternalMissionData_g_tc_members[5]=
                {

                    {
                        (char *)"VehicleId",/* Member name */
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
                        (char *)"MissionType",/* Member name */
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
                        (char *)"Polyline",/* Member name */
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
                        (char *)"Polygone",/* Member name */
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
                    }, 
                    {
                        (char *)"Points",/* Member name */
                        {
                            4,/* Representation ID */
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

                static DDS_TypeCode DDS_ExternalMissionData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DDS_ExternalMissionData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ExternalMissionData*/

                if (is_initialized) {
                    return &DDS_ExternalMissionData_g_tc;
                }

                DDS_ExternalMissionData_g_tc_Polyline_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN)));
                DDS_ExternalMissionData_g_tc_Polygone_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN)));
                DDS_ExternalMissionData_g_tc_Points_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint, (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN)));

                DDS_ExternalMissionData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ExternalMissionData_g_tc_Polyline_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray>::get().native();
                DDS_ExternalMissionData_g_tc_Polygone_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray>::get().native();
                DDS_ExternalMissionData_g_tc_Points_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint>::get().native();
                DDS_ExternalMissionData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ExternalMissionData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                DDS_ExternalMissionData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& DDS_ExternalMissionData_g_tc_Polyline_sequence;
                DDS_ExternalMissionData_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& DDS_ExternalMissionData_g_tc_Polygone_sequence;
                DDS_ExternalMissionData_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& DDS_ExternalMissionData_g_tc_Points_sequence;

                /* Initialize the values for member annotations. */

                DDS_ExternalMissionData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_ExternalMissionData_g_tc_members[1]._annotations._defaultValue._u.octet_value = 0;
                DDS_ExternalMissionData_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_ExternalMissionData_g_tc_members[1]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_ExternalMissionData_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_ExternalMissionData_g_tc_members[1]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_ExternalMissionData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ExternalMissionData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ExternalMissionData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData *sample;

                static RTIXCdrMemberAccessInfo DDS_ExternalMissionData_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ExternalMissionData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ExternalMissionData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehicleId() - (char *)sample);

                DDS_ExternalMissionData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionType() - (char *)sample);

                DDS_ExternalMissionData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Polyline() - (char *)sample);

                DDS_ExternalMissionData_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Polygone() - (char *)sample);

                DDS_ExternalMissionData_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Points() - (char *)sample);

                DDS_ExternalMissionData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ExternalMissionData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ExternalMissionData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ExternalMissionData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ExternalMissionData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ExternalMissionData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData >;

                DDS_ExternalMissionData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ExternalMissionData_g_typePlugin = 
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

                return &DDS_ExternalMissionData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ExternalMissionMessage_g_tc_members[4]=
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
                        (char *)"MissionData",/* Member name */
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

                static DDS_TypeCode DDS_ExternalMissionMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_ExternalMissionMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ExternalMissionMessage*/

                if (is_initialized) {
                    return &DDS_ExternalMissionMessage_g_tc;
                }

                DDS_ExternalMissionMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ExternalMissionMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ExternalMissionMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ExternalMissionMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_ExternalMissionMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ExternalMissionMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ExternalMissionMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ExternalMissionMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ExternalMissionMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ExternalMissionMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ExternalMissionMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ExternalMissionMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ExternalMissionMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ExternalMissionMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ExternalMissionMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_ExternalMissionMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionData() - (char *)sample);

                DDS_ExternalMissionMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ExternalMissionMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ExternalMissionMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ExternalMissionMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ExternalMissionMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ExternalMissionMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >;

                DDS_ExternalMissionMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ExternalMissionMessage_g_typePlugin = 
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

                return &DDS_ExternalMissionMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ExternalMissionResponseData_g_tc_members[3]=
                {

                    {
                        (char *)"RequestId",/* Member name */
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
                        (char *)"IsSucceed",/* Member name */
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
                        (char *)"MissionId",/* Member name */
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

                static DDS_TypeCode DDS_ExternalMissionResponseData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_ExternalMissionResponseData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ExternalMissionResponseData*/

                if (is_initialized) {
                    return &DDS_ExternalMissionResponseData_g_tc;
                }

                DDS_ExternalMissionResponseData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ExternalMissionResponseData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_ExternalMissionResponseData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                DDS_ExternalMissionResponseData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DDS_ExternalMissionResponseData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ExternalMissionResponseData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ExternalMissionResponseData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DDS_ExternalMissionResponseData_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                DDS_ExternalMissionResponseData_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ExternalMissionResponseData_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ExternalMissionResponseData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ExternalMissionResponseData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ExternalMissionResponseData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData *sample;

                static RTIXCdrMemberAccessInfo DDS_ExternalMissionResponseData_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ExternalMissionResponseData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionResponseData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ExternalMissionResponseData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_ExternalMissionResponseData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IsSucceed() - (char *)sample);

                DDS_ExternalMissionResponseData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionId() - (char *)sample);

                DDS_ExternalMissionResponseData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ExternalMissionResponseData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ExternalMissionResponseData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ExternalMissionResponseData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ExternalMissionResponseData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ExternalMissionResponseData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData >;

                DDS_ExternalMissionResponseData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionResponseData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ExternalMissionResponseData_g_typePlugin = 
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

                return &DDS_ExternalMissionResponseData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ExternalMissionResponseMessage_g_tc_members[3]=
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
                        (char *)"Data",/* Member name */
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

                static DDS_TypeCode DDS_ExternalMissionResponseMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_ExternalMissionResponseMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ExternalMissionResponseMessage*/

                if (is_initialized) {
                    return &DDS_ExternalMissionResponseMessage_g_tc;
                }

                DDS_ExternalMissionResponseMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ExternalMissionResponseMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ExternalMissionResponseMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ExternalMissionResponseMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ExternalMissionResponseMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ExternalMissionResponseMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ExternalMissionResponseMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ExternalMissionResponseMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ExternalMissionResponseMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionResponseMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ExternalMissionResponseMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ExternalMissionResponseMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ExternalMissionResponseMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_ExternalMissionResponseMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ExternalMissionResponseMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ExternalMissionResponseMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ExternalMissionResponseMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ExternalMissionResponseMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ExternalMissionResponseMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >;

                DDS_ExternalMissionResponseMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ExternalMissionResponseMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ExternalMissionResponseMessage_g_typePlugin = 
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

                return &DDS_ExternalMissionResponseMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ActivateMissionCommandData_g_tc_members[1]=
                {

                    {
                        (char *)"MissionId",/* Member name */
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
                    }
                };

                static DDS_TypeCode DDS_ActivateMissionCommandData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DDS_ActivateMissionCommandData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ActivateMissionCommandData*/

                if (is_initialized) {
                    return &DDS_ActivateMissionCommandData_g_tc;
                }

                DDS_ActivateMissionCommandData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ActivateMissionCommandData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                DDS_ActivateMissionCommandData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_ActivateMissionCommandData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_ActivateMissionCommandData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ActivateMissionCommandData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ActivateMissionCommandData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData *sample;

                static RTIXCdrMemberAccessInfo DDS_ActivateMissionCommandData_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ActivateMissionCommandData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ActivateMissionCommandData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ActivateMissionCommandData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionId() - (char *)sample);

                DDS_ActivateMissionCommandData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ActivateMissionCommandData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ActivateMissionCommandData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ActivateMissionCommandData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ActivateMissionCommandData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ActivateMissionCommandData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData >;

                DDS_ActivateMissionCommandData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ActivateMissionCommandData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ActivateMissionCommandData_g_typePlugin = 
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

                return &DDS_ActivateMissionCommandData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_ActivateMissionCommandMessage_g_tc_members[3]=
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
                        (char *)"Data",/* Member name */
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

                static DDS_TypeCode DDS_ActivateMissionCommandMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_ActivateMissionCommandMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_ActivateMissionCommandMessage*/

                if (is_initialized) {
                    return &DDS_ActivateMissionCommandMessage_g_tc;
                }

                DDS_ActivateMissionCommandMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_ActivateMissionCommandMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ActivateMissionCommandMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_ActivateMissionCommandMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_ActivateMissionCommandMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_ActivateMissionCommandMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_ActivateMissionCommandMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_ActivateMissionCommandMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_ActivateMissionCommandMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_ActivateMissionCommandMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_ActivateMissionCommandMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_ActivateMissionCommandMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_ActivateMissionCommandMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_ActivateMissionCommandMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_ActivateMissionCommandMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_ActivateMissionCommandMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_ActivateMissionCommandMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_ActivateMissionCommandMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_ActivateMissionCommandMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >;

                DDS_ActivateMissionCommandMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_ActivateMissionCommandMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_ActivateMissionCommandMessage_g_typePlugin = 
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

                return &DDS_ActivateMissionCommandMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_AddRegionData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_AddRegionData_g_tc_Polygon_sequence;

                static DDS_TypeCode_Member DDS_AddRegionData_g_tc_members[3]=
                {

                    {
                        (char *)"MissionId",/* Member name */
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
                        (char *)"PolygonType",/* Member name */
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
                        (char *)"Polygon",/* Member name */
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

                static DDS_TypeCode DDS_AddRegionData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_AddRegionData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_AddRegionData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_AddRegionData*/

                if (is_initialized) {
                    return &DDS_AddRegionData_g_tc;
                }

                DDS_AddRegionData_g_tc_Polygon_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN)));

                DDS_AddRegionData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_AddRegionData_g_tc_Polygon_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint>::get().native();
                DDS_AddRegionData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_AddRegionData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                DDS_AddRegionData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& DDS_AddRegionData_g_tc_Polygon_sequence;

                /* Initialize the values for member annotations. */
                DDS_AddRegionData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_AddRegionData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_AddRegionData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_AddRegionData_g_tc_members[1]._annotations._defaultValue._u.octet_value = 0;
                DDS_AddRegionData_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_AddRegionData_g_tc_members[1]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_AddRegionData_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_AddRegionData_g_tc_members[1]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_AddRegionData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_AddRegionData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_AddRegionData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_AddRegionData *sample;

                static RTIXCdrMemberAccessInfo DDS_AddRegionData_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_AddRegionData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_AddRegionData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_AddRegionData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_AddRegionData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionId() - (char *)sample);

                DDS_AddRegionData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PolygonType() - (char *)sample);

                DDS_AddRegionData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Polygon() - (char *)sample);

                DDS_AddRegionData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_AddRegionData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_AddRegionData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_AddRegionData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_AddRegionData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_AddRegionData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_AddRegionData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_AddRegionData >;

                DDS_AddRegionData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_AddRegionData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_AddRegionData_g_typePlugin = 
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

                return &DDS_AddRegionData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_AddRegionData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_AddRegionDataMessage_g_tc_members[4]=
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
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

                static DDS_TypeCode DDS_AddRegionDataMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_AddRegionDataMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_AddRegionDataMessage*/

                if (is_initialized) {
                    return &DDS_AddRegionDataMessage_g_tc;
                }

                DDS_AddRegionDataMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_AddRegionDataMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_AddRegionDataMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_AddRegionDataMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_AddRegionDataMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_AddRegionDataMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_AddRegionDataMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_AddRegionDataMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_AddRegionDataMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_AddRegionDataMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_AddRegionDataMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_AddRegionDataMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_AddRegionDataMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_AddRegionDataMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_AddRegionDataMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_AddRegionDataMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_AddRegionDataMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_AddRegionDataMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_AddRegionDataMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_AddRegionDataMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_AddRegionDataMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_AddRegionDataMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_AddRegionDataMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >;

                DDS_AddRegionDataMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_AddRegionDataMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_AddRegionDataMessage_g_typePlugin = 
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

                return &DDS_AddRegionDataMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_RegionResponseData_g_tc_members[5]=
                {

                    {
                        (char *)"RequestId",/* Member name */
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
                        (char *)"MissionId",/* Member name */
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
                        (char *)"RegionId",/* Member name */
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
                        (char *)"Action",/* Member name */
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
                    }, 
                    {
                        (char *)"IsSucceed",/* Member name */
                        {
                            4,/* Representation ID */
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

                static DDS_TypeCode DDS_RegionResponseData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_RegionResponseData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DDS_RegionResponseData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_RegionResponseData*/

                if (is_initialized) {
                    return &DDS_RegionResponseData_g_tc;
                }

                DDS_RegionResponseData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_RegionResponseData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_RegionResponseData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_RegionResponseData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_RegionResponseData_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                DDS_RegionResponseData_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                DDS_RegionResponseData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_RegionResponseData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_RegionResponseData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_RegionResponseData_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_RegionResponseData_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_RegionResponseData_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_RegionResponseData_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DDS_RegionResponseData_g_tc_members[3]._annotations._defaultValue._u.octet_value = 0;
                DDS_RegionResponseData_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DDS_RegionResponseData_g_tc_members[3]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DDS_RegionResponseData_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DDS_RegionResponseData_g_tc_members[3]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DDS_RegionResponseData_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                DDS_RegionResponseData_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                DDS_RegionResponseData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_RegionResponseData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_RegionResponseData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_RegionResponseData *sample;

                static RTIXCdrMemberAccessInfo DDS_RegionResponseData_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_RegionResponseData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_RegionResponseData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_RegionResponseData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_RegionResponseData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_RegionResponseData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionId() - (char *)sample);

                DDS_RegionResponseData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RegionId() - (char *)sample);

                DDS_RegionResponseData_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Action() - (char *)sample);

                DDS_RegionResponseData_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->IsSucceed() - (char *)sample);

                DDS_RegionResponseData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_RegionResponseData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_RegionResponseData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_RegionResponseData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_RegionResponseData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_RegionResponseData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_RegionResponseData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData >;

                DDS_RegionResponseData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_RegionResponseData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_RegionResponseData_g_typePlugin = 
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

                return &DDS_RegionResponseData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_RegionResponseMessage_g_tc_members[3]=
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
                        (char *)"Data",/* Member name */
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

                static DDS_TypeCode DDS_RegionResponseMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DDS_RegionResponseMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_RegionResponseMessage*/

                if (is_initialized) {
                    return &DDS_RegionResponseMessage_g_tc;
                }

                DDS_RegionResponseMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_RegionResponseMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_RegionResponseMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_RegionResponseMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_RegionResponseMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_RegionResponseMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_RegionResponseMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_RegionResponseMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_RegionResponseMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_RegionResponseMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_RegionResponseMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_RegionResponseMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_RegionResponseMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_RegionResponseMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_RegionResponseMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_RegionResponseMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_RegionResponseMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_RegionResponseMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_RegionResponseMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >;

                DDS_RegionResponseMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_RegionResponseMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_RegionResponseMessage_g_typePlugin = 
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

                return &DDS_RegionResponseMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_RemoveRegionData_g_tc_RegionsToRemove_sequence;

                static DDS_TypeCode_Member DDS_RemoveRegionData_g_tc_members[2]=
                {

                    {
                        (char *)"MissionId",/* Member name */
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
                        (char *)"RegionsToRemove",/* Member name */
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

                static DDS_TypeCode DDS_RemoveRegionData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_RemoveRegionData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_RemoveRegionData*/

                if (is_initialized) {
                    return &DDS_RemoveRegionData_g_tc;
                }

                DDS_RemoveRegionData_g_tc_RegionsToRemove_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GUID, (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN) > >(((DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN)));

                DDS_RemoveRegionData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_RemoveRegionData_g_tc_RegionsToRemove_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_RemoveRegionData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_RemoveRegionData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DDS_RemoveRegionData_g_tc_RegionsToRemove_sequence;

                /* Initialize the values for member annotations. */
                DDS_RemoveRegionData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_RemoveRegionData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_RemoveRegionData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_RemoveRegionData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_RemoveRegionData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData *sample;

                static RTIXCdrMemberAccessInfo DDS_RemoveRegionData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_RemoveRegionData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_RemoveRegionData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_RemoveRegionData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MissionId() - (char *)sample);

                DDS_RemoveRegionData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RegionsToRemove() - (char *)sample);

                DDS_RemoveRegionData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_RemoveRegionData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_RemoveRegionData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_RemoveRegionData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_RemoveRegionData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_RemoveRegionData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >;

                DDS_RemoveRegionData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_RemoveRegionData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_RemoveRegionData_g_typePlugin = 
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

                return &DDS_RemoveRegionData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_RemoveRegionMessage_g_tc_members[4]=
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
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

                static DDS_TypeCode DDS_RemoveRegionMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_RemoveRegionMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_RemoveRegionMessage*/

                if (is_initialized) {
                    return &DDS_RemoveRegionMessage_g_tc;
                }

                DDS_RemoveRegionMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_RemoveRegionMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_RemoveRegionMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_RemoveRegionMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_RemoveRegionMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_RemoveRegionMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_RemoveRegionMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_RemoveRegionMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_RemoveRegionMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_RemoveRegionMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_RemoveRegionMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_RemoveRegionMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_RemoveRegionMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_RemoveRegionMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_RemoveRegionMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_RemoveRegionMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_RemoveRegionMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_RemoveRegionMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_RemoveRegionMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_RemoveRegionMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_RemoveRegionMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_RemoveRegionMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_RemoveRegionMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >;

                DDS_RemoveRegionMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_RemoveRegionMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_RemoveRegionMessage_g_typePlugin = 
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

                return &DDS_RemoveRegionMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_CameraCapabilitiesMessage_g_tc_Parameters_sequence;

                static DDS_TypeCode_Member DDS_CameraCapabilitiesMessage_g_tc_members[4]=
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
                        (char *)"CameraID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Parameters",/* Member name */
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

                static DDS_TypeCode DDS_CameraCapabilitiesMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_CameraCapabilitiesMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_CameraCapabilitiesMessage*/

                if (is_initialized) {
                    return &DDS_CameraCapabilitiesMessage_g_tc;
                }

                DDS_CameraCapabilitiesMessage_g_tc_Parameters_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_String50DoublePair, 10 > >((10));

                DDS_CameraCapabilitiesMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_CameraCapabilitiesMessage_g_tc_Parameters_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_String50DoublePair>::get().native();
                DDS_CameraCapabilitiesMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_CameraCapabilitiesMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_CameraCapabilitiesMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_CameraCapabilitiesMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& DDS_CameraCapabilitiesMessage_g_tc_Parameters_sequence;

                /* Initialize the values for member annotations. */

                DDS_CameraCapabilitiesMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_CameraCapabilitiesMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_CameraCapabilitiesMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_CameraCapabilitiesMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_CameraCapabilitiesMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_CameraCapabilitiesMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_CameraCapabilitiesMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_CameraCapabilitiesMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_CameraCapabilitiesMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CameraID() - (char *)sample);

                DDS_CameraCapabilitiesMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Parameters() - (char *)sample);

                DDS_CameraCapabilitiesMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_CameraCapabilitiesMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_CameraCapabilitiesMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_CameraCapabilitiesMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_CameraCapabilitiesMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_CameraCapabilitiesMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >;

                DDS_CameraCapabilitiesMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_CameraCapabilitiesMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_CameraCapabilitiesMessage_g_typePlugin = 
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

                return &DDS_CameraCapabilitiesMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_GlobalPathQueryData_g_tc_members[4]=
                {

                    {
                        (char *)"PointFrom",/* Member name */
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
                        (char *)"PointTo",/* Member name */
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
                        (char *)"MaxNumOfPath",/* Member name */
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
                        (char *)"MaxDistanceToPathInMeters",/* Member name */
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

                static DDS_TypeCode DDS_GlobalPathQueryData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSGpp::DDS_GlobalPathQueryData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_GlobalPathQueryData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GlobalPathQueryData*/

                if (is_initialized) {
                    return &DDS_GlobalPathQueryData_g_tc;
                }

                DDS_GlobalPathQueryData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GlobalPathQueryData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_LogicPoint>::get().native();
                DDS_GlobalPathQueryData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_LogicPoint>::get().native();
                DDS_GlobalPathQueryData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DDS_GlobalPathQueryData_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */

                DDS_GlobalPathQueryData_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DDS_GlobalPathQueryData_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                DDS_GlobalPathQueryData_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DDS_GlobalPathQueryData_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DDS_GlobalPathQueryData_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DDS_GlobalPathQueryData_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DDS_GlobalPathQueryData_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GlobalPathQueryData_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                DDS_GlobalPathQueryData_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GlobalPathQueryData_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                DDS_GlobalPathQueryData_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                DDS_GlobalPathQueryData_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                DDS_GlobalPathQueryData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GlobalPathQueryData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GlobalPathQueryData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSGpp::DDS_GlobalPathQueryData *sample;

                static RTIXCdrMemberAccessInfo DDS_GlobalPathQueryData_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GlobalPathQueryData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathQueryData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSGpp::DDS_GlobalPathQueryData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GlobalPathQueryData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PointFrom() - (char *)sample);

                DDS_GlobalPathQueryData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PointTo() - (char *)sample);

                DDS_GlobalPathQueryData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MaxNumOfPath() - (char *)sample);

                DDS_GlobalPathQueryData_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MaxDistanceToPathInMeters() - (char *)sample);

                DDS_GlobalPathQueryData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GlobalPathQueryData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSGpp::DDS_GlobalPathQueryData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GlobalPathQueryData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GlobalPathQueryData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GlobalPathQueryData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GlobalPathQueryData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData >;

                DDS_GlobalPathQueryData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathQueryData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GlobalPathQueryData_g_typePlugin = 
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

                return &DDS_GlobalPathQueryData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_GlobalPathQueryMessage_g_tc_members[4]=
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

                static DDS_TypeCode DDS_GlobalPathQueryMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_GlobalPathQueryMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GlobalPathQueryMessage*/

                if (is_initialized) {
                    return &DDS_GlobalPathQueryMessage_g_tc;
                }

                DDS_GlobalPathQueryMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GlobalPathQueryMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_GlobalPathQueryMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_GlobalPathQueryMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_GlobalPathQueryMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_GlobalPathQueryMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_GlobalPathQueryMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_GlobalPathQueryMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GlobalPathQueryMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GlobalPathQueryMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_GlobalPathQueryMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GlobalPathQueryMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathQueryMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GlobalPathQueryMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_GlobalPathQueryMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_GlobalPathQueryMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_GlobalPathQueryMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_GlobalPathQueryMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GlobalPathQueryMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GlobalPathQueryMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GlobalPathQueryMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GlobalPathQueryMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GlobalPathQueryMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >;

                DDS_GlobalPathQueryMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathQueryMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GlobalPathQueryMessage_g_typePlugin = 
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

                return &DDS_GlobalPathQueryMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPath > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_GlobalPath_g_tc_Path_sequence;

                static DDS_TypeCode_Member DDS_GlobalPath_g_tc_members[2]=
                {

                    {
                        (char *)"PathId",/* Member name */
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
                        (char *)"Path",/* Member name */
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

                static DDS_TypeCode DDS_GlobalPath_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSGpp::DDS_GlobalPath", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_GlobalPath_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GlobalPath*/

                if (is_initialized) {
                    return &DDS_GlobalPath_g_tc;
                }

                DDS_GlobalPath_g_tc_Path_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_LogicPoint, (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH) > >(((DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH)));

                DDS_GlobalPath_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GlobalPath_g_tc_Path_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_LogicPoint>::get().native();
                DDS_GlobalPath_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DDS_GlobalPath_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DDS_GlobalPath_g_tc_Path_sequence;

                /* Initialize the values for member annotations. */
                DDS_GlobalPath_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DDS_GlobalPath_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DDS_GlobalPath_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DDS_GlobalPath_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DDS_GlobalPath_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DDS_GlobalPath_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DDS_GlobalPath_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GlobalPath_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GlobalPath_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSGpp::DDS_GlobalPath *sample;

                static RTIXCdrMemberAccessInfo DDS_GlobalPath_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GlobalPath_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPath_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSGpp::DDS_GlobalPath);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GlobalPath_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathId() - (char *)sample);

                DDS_GlobalPath_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Path() - (char *)sample);

                DDS_GlobalPath_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GlobalPath_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSGpp::DDS_GlobalPath);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GlobalPath_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GlobalPath_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GlobalPath_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GlobalPath_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSGpp::DDS_GlobalPath >;

                DDS_GlobalPath_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPath_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GlobalPath_g_typePlugin = 
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

                return &DDS_GlobalPath_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPath >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPath >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathReportData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DDS_GlobalPathReportData_g_tc_GlobalPathList_sequence;

                static DDS_TypeCode_Member DDS_GlobalPathReportData_g_tc_members[2]=
                {

                    {
                        (char *)"RequestId",/* Member name */
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
                        (char *)"GlobalPathList",/* Member name */
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

                static DDS_TypeCode DDS_GlobalPathReportData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSGpp::DDS_GlobalPathReportData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DDS_GlobalPathReportData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GlobalPathReportData*/

                if (is_initialized) {
                    return &DDS_GlobalPathReportData_g_tc;
                }

                DDS_GlobalPathReportData_g_tc_GlobalPathList_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSGpp::DDS_GlobalPath, (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH) > >(((DDS_GRI::DDSGpp::MAX_NUM_OF_PATH)));

                DDS_GlobalPathReportData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GlobalPathReportData_g_tc_GlobalPathList_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPath>::get().native();
                DDS_GlobalPathReportData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_GlobalPathReportData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DDS_GlobalPathReportData_g_tc_GlobalPathList_sequence;

                /* Initialize the values for member annotations. */
                DDS_GlobalPathReportData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_GlobalPathReportData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_GlobalPathReportData_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GlobalPathReportData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GlobalPathReportData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSGpp::DDS_GlobalPathReportData *sample;

                static RTIXCdrMemberAccessInfo DDS_GlobalPathReportData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GlobalPathReportData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathReportData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSGpp::DDS_GlobalPathReportData);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GlobalPathReportData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_GlobalPathReportData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->GlobalPathList() - (char *)sample);

                DDS_GlobalPathReportData_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GlobalPathReportData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSGpp::DDS_GlobalPathReportData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GlobalPathReportData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GlobalPathReportData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GlobalPathReportData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GlobalPathReportData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSGpp::DDS_GlobalPathReportData >;

                DDS_GlobalPathReportData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathReportData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GlobalPathReportData_g_typePlugin = 
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

                return &DDS_GlobalPathReportData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathReportData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DDS_GlobalPathReportMessage_g_tc_members[4]=
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

                static DDS_TypeCode DDS_GlobalPathReportMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DDS_GlobalPathReportMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DDS_GlobalPathReportMessage*/

                if (is_initialized) {
                    return &DDS_GlobalPathReportMessage_g_tc;
                }

                DDS_GlobalPathReportMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DDS_GlobalPathReportMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_GlobalPathReportMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                DDS_GlobalPathReportMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                DDS_GlobalPathReportMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportData>::get().native();

                /* Initialize the values for member annotations. */

                DDS_GlobalPathReportMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DDS_GlobalPathReportMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DDS_GlobalPathReportMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                DDS_GlobalPathReportMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DDS_GlobalPathReportMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage *sample;

                static RTIXCdrMemberAccessInfo DDS_GlobalPathReportMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DDS_GlobalPathReportMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathReportMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage);
                if (sample == NULL) {
                    return NULL;
                }

                DDS_GlobalPathReportMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                DDS_GlobalPathReportMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                DDS_GlobalPathReportMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                DDS_GlobalPathReportMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                DDS_GlobalPathReportMessage_g_sampleAccessInfo.memberAccessInfos = 
                DDS_GlobalPathReportMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DDS_GlobalPathReportMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DDS_GlobalPathReportMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DDS_GlobalPathReportMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DDS_GlobalPathReportMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >;

                DDS_GlobalPathReportMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DDS_GlobalPathReportMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DDS_GlobalPathReportMessage_g_typePlugin = 
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

                return &DDS_GlobalPathReportMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::get())));
        }

    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< DDS_GRI::DDSCommon::T_DateTimeType >::reset_sample(DDS_GRI::DDSCommon::T_DateTimeType& sample) 
        {
            sample.A_second(0ll);
            sample.A_nanoseconds(0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::T_DateTimeType >::allocate_sample(DDS_GRI::DDSCommon::T_DateTimeType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_AttributeValue >::reset_sample(DDS_GRI::DDSCommon::DDS_AttributeValue& sample) 
        {
            sample.Name("");
            sample.Value("");
            sample.ValueType(DDS_GRI::DDSCommon::DDS_ValueTypeEnum::None);
            sample.IsChanged(0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_AttributeValue >::allocate_sample(DDS_GRI::DDSCommon::DDS_AttributeValue& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Name(),  -1, 20);
            ::rti::topic::allocate_sample(sample.Value(),  -1, 20);
            ::rti::topic::allocate_sample(sample.ValueType(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_Identifier >::reset_sample(DDS_GRI::DDSCommon::DDS_Identifier& sample) 
        {
            sample.Id(0);
            sample.Type("");
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_Identifier >::allocate_sample(DDS_GRI::DDSCommon::DDS_Identifier& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Type(),  -1, 50);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_new,
                DDS_GRI::DDSCommon::DDS_GuidIdentifierPairPlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_GuidIdentifierPairPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_GuidIdentifierPairPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::from_cdr_buffer(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_GuidIdentifierPairPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSCommon::DDS_GuidIdentifierPair from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::reset_sample(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample) 
        {
            sample.Guid("");
            ::rti::topic::reset_sample(sample.Id());
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GuidIdentifierPair >::allocate_sample(DDS_GRI::DDSCommon::DDS_GuidIdentifierPair& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Guid(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Id(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_LogicPoint >::reset_sample(DDS_GRI::DDSCommon::DDS_LogicPoint& sample) 
        {
            sample.X(0.0);
            sample.Y(0.0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_LogicPoint >::allocate_sample(DDS_GRI::DDSCommon::DDS_LogicPoint& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GeoPoint >::reset_sample(DDS_GRI::DDSCommon::DDS_GeoPoint& sample) 
        {
            sample.Longitude(0.0);
            sample.Latitude(0.0);
            sample.Altitude(0.0);
            sample.GeoPointId(0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GeoPoint >::allocate_sample(DDS_GRI::DDSCommon::DDS_GeoPoint& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GeoCircle >::reset_sample(DDS_GRI::DDSCommon::DDS_GeoCircle& sample) 
        {
            sample.Radius(0.0);
            ::rti::topic::reset_sample(sample.Center());
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_GeoCircle >::allocate_sample(DDS_GRI::DDSCommon::DDS_GeoCircle& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Center(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_WayPoint >::reset_sample(DDS_GRI::DDSCommon::DDS_WayPoint& sample) 
        {
            sample.Longitude(0.0);
            sample.Latitude(0.0);
            sample.Altitude(0.0);
            sample.WaypointId(0);
            sample.WaypointCriticalLevel(0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_WayPoint >::allocate_sample(DDS_GRI::DDSCommon::DDS_WayPoint& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_String50DoublePair >::reset_sample(DDS_GRI::DDSCommon::DDS_String50DoublePair& sample) 
        {
            sample.Key("");
            sample.Value(0.0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_String50DoublePair >::allocate_sample(DDS_GRI::DDSCommon::DDS_String50DoublePair& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Key(),  -1, 50);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_RangeDescription >::reset_sample(DDS_GRI::DDSCommon::DDS_RangeDescription& sample) 
        {
            sample.Minimum(0.0);
            sample.Maximum(0.0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_RangeDescription >::allocate_sample(DDS_GRI::DDSCommon::DDS_RangeDescription& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_ItemType >::reset_sample(DDS_GRI::DDSCommon::DDS_ItemType& sample) 
        {
            sample.Type(0);
            sample.Subtype(0);
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_ItemType >::allocate_sample(DDS_GRI::DDSCommon::DDS_ItemType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_new,
                DDS_GRI::DDSCommon::DDS_BaseRequestMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_BaseRequestMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_BaseRequestMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::from_cdr_buffer(DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_BaseRequestMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSCommon::DDS_BaseRequestMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::reset_sample(DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
        }

        void topic_type_support< DDS_GRI::DDSCommon::DDS_BaseRequestMessage >::allocate_sample(DDS_GRI::DDSCommon::DDS_BaseRequestMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint& sample) 
        {
            // Initialize base
            topic_type_support< DDS_GRI::DDSCommon::DDS_WayPoint >::reset_sample(sample);

            sample.PervWaypintId(0);
            sample.WaypointIndex(0);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_SectionWaypoint& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            // Initialize base
            topic_type_support< DDS_GRI::DDSCommon::DDS_WayPoint >::allocate_sample(sample, -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType& sample) 
        {
            sample.BehaviorType(0);
            sample.Value(0.0);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviorType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors& sample) 
        {
            sample.WaypointId(0);
            ::rti::topic::reset_sample(sample.Behaviors());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_WaypointBehaviors& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Behaviors(),  (DDS_GRI::DDSInfrastarcture::MAX_LEN_OF_WAYPOINT_BEHAIVIORS), -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& sample) 
        {
            sample.RefClientSideId("");
            const wchar_t m_Name__VALUE_[] = {0};
            sample.Name(m_Name__VALUE_);
            sample.Createion("");
            sample.ModificationTime(0ll);
            sample.Creator("");
            const wchar_t m_Description__VALUE_[] = {0};
            sample.Description(m_Description__VALUE_);
            ::rti::topic::reset_sample(sample.MissionElementType());
            sample.IsReservedItem(0);
            sample.IsSave(0);
            sample.ItemId(0);
            sample.VehicleType("");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ItemDescrpition& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.RefClientSideId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Name(),  -1, 100);
            ::rti::topic::allocate_sample(sample.Createion(),  -1, 100);
            ::rti::topic::allocate_sample(sample.Creator(),  -1, 100);
            ::rti::topic::allocate_sample(sample.Description(),  -1, 200);
            ::rti::topic::allocate_sample(sample.MissionElementType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.VehicleType(),  -1, 20);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_BaseItemPlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_BaseItemPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_BaseItemPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_BaseItemPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_BaseItem from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample) 
        {
            sample.ClientSideId("");
            sample.ItemId(0);
            sample.ModificationId("");
            ::rti::topic::reset_sample(sample.ItemType());
            sample.Action(0);
            ::rti::topic::reset_sample(sample.ItemDescrpition());
            sample.Assignment(0);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseItem& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.ClientSideId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.ModificationId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.ItemType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ItemDescrpition(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Way >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_Way& sample) 
        {
            // Initialize base
            topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::reset_sample(sample);

            sample.Stam(0);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Way >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_Way& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            // Initialize base
            topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::allocate_sample(sample, -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ClientServerWayMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ClientServerWayMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ClientServerWayMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Item());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerWayMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Item(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Section >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_Section& sample) 
        {
            // Initialize base
            topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::reset_sample(sample);

            sample.WayId("");
            ::rti::topic::reset_sample(sample.Waypoints());
            sample.Speed(0.0);
            sample.Direction(0);
            sample.Width(0.0);
            ::rti::topic::reset_sample(sample.WaypointsBehavior());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Section >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_Section& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            // Initialize base
            topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::allocate_sample(sample, -1, -1);
            ::rti::topic::allocate_sample(sample.WayId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Waypoints(),  100, -1);
            ::rti::topic::allocate_sample(sample.WaypointsBehavior(),  100, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ClientServerSectionMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ClientServerSectionMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ClientServerSectionMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Item());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerSectionMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Item(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& sample) 
        {
            sample.PathWidth(0);
            sample.MotionRadius(0);
            sample.RequiredRadiusOfCurvature(0);
            sample.WaypointType(0);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_BaseRouteProperty& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Route >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_RoutePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Route >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_Route& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_RoutePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_RoutePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Route >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_Route& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_RoutePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_Route from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Route >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_Route& sample) 
        {
            // Initialize base
            topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::reset_sample(sample);

            ::rti::topic::reset_sample(sample.BaseRouteProperties());
            ::rti::topic::reset_sample(sample.Sections());
            ::rti::topic::reset_sample(sample.Waypoints());
            ::rti::topic::reset_sample(sample.WaypointsBehavior());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_Route >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_Route& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            // Initialize base
            topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_BaseItem >::allocate_sample(sample, -1, -1);
            ::rti::topic::allocate_sample(sample.BaseRouteProperties(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Sections(),  100, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Waypoints(),  100, -1);
            ::rti::topic::allocate_sample(sample.WaypointsBehavior(),  100, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ClientServerRouteMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ClientServerRouteMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ClientServerRouteMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Item());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRouteMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Item(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ClientServerRequestItemsDiscrptionByTypeMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.ItemType());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerRequestItemsDiscrptionByTypeMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ItemType(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_new,
                DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ClientServerResponseItemsDiscrptionMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::from_cdr_buffer(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ClientServerResponseItemsDiscrptionMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::reset_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.ItemType());
            ::rti::topic::reset_sample(sample.ItemDescrpitions());
        }

        void topic_type_support< DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage >::allocate_sample(DDS_GRI::DDSInfrastarcture::DDS_ClientServerResponseItemsDiscrptionMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ItemType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ItemDescrpitions(),  100, -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >::reset_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPoint& sample) 
        {
            ::rti::topic::reset_sample(sample.Point());
            ::rti::topic::reset_sample(sample.Behaviors());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::ExtendedGeoPoint >::allocate_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPoint& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Point(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Behaviors(),  (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_BEHEVIOR_ARRAY_MAX_LEN), -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >::reset_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray& sample) 
        {
            ::rti::topic::reset_sample(sample.Points());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray >::allocate_sample(DDS_GRI::DDSExternalSystem::ExtendedGeoPointArray& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Points(),  (DDS_GRI::DDSExternalSystem::EXTENDED_GEO_POINT_ARRAY_MAX_LEN), -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& sample) 
        {
            ::rti::topic::reset_sample(sample.VehicleId());
            sample.MissionType(0);
            ::rti::topic::reset_sample(sample.Polyline());
            ::rti::topic::reset_sample(sample.Polygone());
            ::rti::topic::reset_sample(sample.Points());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.VehicleId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Polyline(),  (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYLINE_MAX_LEN), -1);
            ::rti::topic::allocate_sample(sample.Polygone(),  (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POLYGONE_MAX_LEN), -1);
            ::rti::topic::allocate_sample(sample.Points(),  (DDS_GRI::DDSExternalSystem::EXTERNAL_MISSION_DATA_POINTS_MAX_LEN), -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ExternalMissionMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ExternalMissionMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ExternalMissionMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.MissionData());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.MissionData(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& sample) 
        {
            sample.RequestId("");
            sample.IsSucceed(0);
            sample.MissionId("");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.MissionId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ExternalMissionResponseMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ExternalMissionResponseMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ExternalMissionResponseMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ExternalMissionResponseMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& sample) 
        {
            sample.MissionId("");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.MissionId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_ActivateMissionCommandMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_ActivateMissionCommandMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_ActivateMissionCommandMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_ActivateMissionCommandMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionData >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionData& sample) 
        {
            sample.MissionId("");
            sample.PolygonType(0);
            ::rti::topic::reset_sample(sample.Polygon());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionData >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.MissionId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Polygon(),  (DDS_GRI::DDSExternalSystem::ADD_REGION_DATA_POLIGON_MAX_LEN), -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_AddRegionDataMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_AddRegionDataMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_AddRegionDataMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_AddRegionDataMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& sample) 
        {
            sample.RequestId("");
            sample.MissionId("");
            sample.RegionId("");
            sample.Action(0);
            sample.IsSucceed(0);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseData >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.MissionId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.RegionId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_RegionResponseMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_RegionResponseMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_RegionResponseMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RegionResponseMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_RemoveRegionDataPlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_RemoveRegionDataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_RemoveRegionDataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_RemoveRegionDataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample) 
        {
            sample.MissionId("");
            ::rti::topic::reset_sample(sample.RegionsToRemove());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.MissionId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.RegionsToRemove(),  (DDS_GRI::DDSExternalSystem::REMOVE_REGION_DATA_ARRAY_MAX_LEN), (DDS_GRI::DDSCommon::GUID_LEN));
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_new,
                DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_RemoveRegionMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_RemoveRegionMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::from_cdr_buffer(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_RemoveRegionMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::reset_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage >::allocate_sample(DDS_GRI::DDSExternalSystem::DDS_RemoveRegionMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_new,
                DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_CameraCapabilitiesMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_CameraCapabilitiesMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::from_cdr_buffer(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_CameraCapabilitiesMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::reset_sample(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.CameraID());
            ::rti::topic::reset_sample(sample.Parameters());
        }

        void topic_type_support< DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage >::allocate_sample(DDS_GRI::DDSCamera::DDS_CameraCapabilitiesMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.CameraID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Parameters(),  10, -1);
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData >::reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& sample) 
        {
            ::rti::topic::reset_sample(sample.PointFrom());
            ::rti::topic::reset_sample(sample.PointTo());
            sample.MaxNumOfPath(0);
            sample.MaxDistanceToPathInMeters(0.0);
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryData >::allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.PointFrom(),  -1, -1);
            ::rti::topic::allocate_sample(sample.PointTo(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_new,
                DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_GlobalPathQueryMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_GlobalPathQueryMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::from_cdr_buffer(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_GlobalPathQueryMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage >::allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathQueryMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPath >::reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPath& sample) 
        {
            sample.PathId(0);
            ::rti::topic::reset_sample(sample.Path());
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPath >::allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPath& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Path(),  (DDS_GRI::DDSGpp::MAX_POINTS_IN_GLOBAL_PATH), -1);
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportData >::reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportData& sample) 
        {
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.GlobalPathList());
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportData >::allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.GlobalPathList(),  (DDS_GRI::DDSGpp::MAX_NUM_OF_PATH), -1);
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_new,
                DDS_GRI::DDSGpp::DDS_GlobalPathReportMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DDS_GlobalPathReportMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DDS_GlobalPathReportMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::from_cdr_buffer(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DDS_GlobalPathReportMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage from cdr buffer");
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::reset_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage >::allocate_sample(DDS_GRI::DDSGpp::DDS_GlobalPathReportMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

    }
}  

