

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WPSFull.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "WPSFull.hpp"
#include "WPSFullPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace WorldPerceptionModel {

    namespace WPS_BuildModel {

        // ---- WPS_BuildModelParameters: 

        WPS_BuildModelParameters::WPS_BuildModelParameters() :
            m_PathToFolder_ ("")  {
        }   

        WPS_BuildModelParameters::WPS_BuildModelParameters (
            const std::string& PathToFolder,
            const WorldPerceptionModel::RegionOfInterest_type& region_of_interest)
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
            m_request_(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type::BuildModelDense)  {
        }   

        WPS_BuildModelData::WPS_BuildModelData (
            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type& request,
            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& parameters)
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

        // ---- WPS_BuildModelMessage: 

        WPS_BuildModelMessage::WPS_BuildModelMessage() :
            m_RequestId_ ("")  {
        }   

        WPS_BuildModelMessage::WPS_BuildModelMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_BuildModelMessage::WPS_BuildModelMessage(WPS_BuildModelMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        WPS_BuildModelMessage& WPS_BuildModelMessage::operator=(WPS_BuildModelMessage&&  other_) OMG_NOEXCEPT {
            WPS_BuildModelMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_BuildModelMessage::swap(WPS_BuildModelMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool WPS_BuildModelMessage::operator == (const WPS_BuildModelMessage& other_) const {
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
        bool WPS_BuildModelMessage::operator != (const WPS_BuildModelMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_BuildModelMessage& sample)
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

        // ---- WPS_BuildModelReportMessage: 

        WPS_BuildModelReportMessage::WPS_BuildModelReportMessage() :
            m_BuildModelStatus_(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum::Idle) ,
            m_ModelQuality_ (0)  {
        }   

        WPS_BuildModelReportMessage::WPS_BuildModelReportMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum& BuildModelStatus,
            int32_t ModelQuality)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_BuildModelStatus_( BuildModelStatus ),
                m_ModelQuality_( ModelQuality ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_BuildModelReportMessage::WPS_BuildModelReportMessage(WPS_BuildModelReportMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_BuildModelStatus_ (std::move(other_.m_BuildModelStatus_))
        ,
        m_ModelQuality_ (std::move(other_.m_ModelQuality_))
        {
        } 

        WPS_BuildModelReportMessage& WPS_BuildModelReportMessage::operator=(WPS_BuildModelReportMessage&&  other_) OMG_NOEXCEPT {
            WPS_BuildModelReportMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_BuildModelReportMessage::swap(WPS_BuildModelReportMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_BuildModelStatus_, other_.m_BuildModelStatus_);
            swap(m_ModelQuality_, other_.m_ModelQuality_);
        }  

        bool WPS_BuildModelReportMessage::operator == (const WPS_BuildModelReportMessage& other_) const {
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
        bool WPS_BuildModelReportMessage::operator != (const WPS_BuildModelReportMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_BuildModelReportMessage& sample)
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

    } // namespace WPS_BuildModel  

    namespace WPS_DroneLocalizationReporting {

        // ---- WPS_DroneLocalizationParameters: 

        WPS_DroneLocalizationParameters::WPS_DroneLocalizationParameters() :
            m_PathToFolder_ ("") ,
            m_LiveVideoURL_ ("")  {
        }   

        WPS_DroneLocalizationParameters::WPS_DroneLocalizationParameters (
            const std::string& PathToFolder,
            const std::string& LiveVideoURL)
            :
                m_PathToFolder_( PathToFolder ),
                m_LiveVideoURL_( LiveVideoURL ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_DroneLocalizationParameters::WPS_DroneLocalizationParameters(WPS_DroneLocalizationParameters&& other_) OMG_NOEXCEPT  :m_PathToFolder_ (std::move(other_.m_PathToFolder_))
        ,
        m_LiveVideoURL_ (std::move(other_.m_LiveVideoURL_))
        {
        } 

        WPS_DroneLocalizationParameters& WPS_DroneLocalizationParameters::operator=(WPS_DroneLocalizationParameters&&  other_) OMG_NOEXCEPT {
            WPS_DroneLocalizationParameters tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_DroneLocalizationParameters::swap(WPS_DroneLocalizationParameters& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PathToFolder_, other_.m_PathToFolder_);
            swap(m_LiveVideoURL_, other_.m_LiveVideoURL_);
        }  

        bool WPS_DroneLocalizationParameters::operator == (const WPS_DroneLocalizationParameters& other_) const {
            if (m_PathToFolder_ != other_.m_PathToFolder_) {
                return false;
            }
            if (m_LiveVideoURL_ != other_.m_LiveVideoURL_) {
                return false;
            }
            return true;
        }
        bool WPS_DroneLocalizationParameters::operator != (const WPS_DroneLocalizationParameters& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationParameters& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PathToFolder: " << sample.PathToFolder()<<", ";
            o << "LiveVideoURL: " << sample.LiveVideoURL() ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationOperation_type& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_DroneLocalizationOperation_type::ReportDroneLocalization:
                o << "WPS_DroneLocalizationOperation_type::ReportDroneLocalization" << " ";
                break;
                case WPS_DroneLocalizationOperation_type::AbortDroneLocalization:
                o << "WPS_DroneLocalizationOperation_type::AbortDroneLocalization" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_DroneLocalizationData: 

        WPS_DroneLocalizationData::WPS_DroneLocalizationData() :
            m_request_(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type::ReportDroneLocalization)  {
        }   

        WPS_DroneLocalizationData::WPS_DroneLocalizationData (
            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type& request,
            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& parameters)
            :
                m_request_( request ),
                m_parameters_( parameters ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_DroneLocalizationData::WPS_DroneLocalizationData(WPS_DroneLocalizationData&& other_) OMG_NOEXCEPT  :m_request_ (std::move(other_.m_request_))
        ,
        m_parameters_ (std::move(other_.m_parameters_))
        {
        } 

        WPS_DroneLocalizationData& WPS_DroneLocalizationData::operator=(WPS_DroneLocalizationData&&  other_) OMG_NOEXCEPT {
            WPS_DroneLocalizationData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_DroneLocalizationData::swap(WPS_DroneLocalizationData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_request_, other_.m_request_);
            swap(m_parameters_, other_.m_parameters_);
        }  

        bool WPS_DroneLocalizationData::operator == (const WPS_DroneLocalizationData& other_) const {
            if (m_request_ != other_.m_request_) {
                return false;
            }
            if (m_parameters_ != other_.m_parameters_) {
                return false;
            }
            return true;
        }
        bool WPS_DroneLocalizationData::operator != (const WPS_DroneLocalizationData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "request: " << sample.request()<<", ";
            o << "parameters: " << sample.parameters() ;
            o <<"]";
            return o;
        }

        // ---- WPS_DroneLocalizationMessage: 

        WPS_DroneLocalizationMessage::WPS_DroneLocalizationMessage() :
            m_RequestId_ ("")  {
        }   

        WPS_DroneLocalizationMessage::WPS_DroneLocalizationMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_DroneLocalizationMessage::WPS_DroneLocalizationMessage(WPS_DroneLocalizationMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        WPS_DroneLocalizationMessage& WPS_DroneLocalizationMessage::operator=(WPS_DroneLocalizationMessage&&  other_) OMG_NOEXCEPT {
            WPS_DroneLocalizationMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_DroneLocalizationMessage::swap(WPS_DroneLocalizationMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool WPS_DroneLocalizationMessage::operator == (const WPS_DroneLocalizationMessage& other_) const {
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
        bool WPS_DroneLocalizationMessage::operator != (const WPS_DroneLocalizationMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationMessage& sample)
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

        std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationStatusEnum& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_DroneLocalizationStatusEnum::Idle:
                o << "WPS_DroneLocalizationStatusEnum::Idle" << " ";
                break;
                case WPS_DroneLocalizationStatusEnum::Reporting:
                o << "WPS_DroneLocalizationStatusEnum::Reporting" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_DroneLocalizationReportMessage: 

        WPS_DroneLocalizationReportMessage::WPS_DroneLocalizationReportMessage() :
            m_DroneLocalizationStatus_(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum::Idle) ,
            m_docked_ (0)  {
        }   

        WPS_DroneLocalizationReportMessage::WPS_DroneLocalizationReportMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum& DroneLocalizationStatus,
            bool docked)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_DroneLocalizationStatus_( DroneLocalizationStatus ),
                m_docked_( docked ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_DroneLocalizationReportMessage::WPS_DroneLocalizationReportMessage(WPS_DroneLocalizationReportMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_DroneLocalizationStatus_ (std::move(other_.m_DroneLocalizationStatus_))
        ,
        m_docked_ (std::move(other_.m_docked_))
        {
        } 

        WPS_DroneLocalizationReportMessage& WPS_DroneLocalizationReportMessage::operator=(WPS_DroneLocalizationReportMessage&&  other_) OMG_NOEXCEPT {
            WPS_DroneLocalizationReportMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_DroneLocalizationReportMessage::swap(WPS_DroneLocalizationReportMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_DroneLocalizationStatus_, other_.m_DroneLocalizationStatus_);
            swap(m_docked_, other_.m_docked_);
        }  

        bool WPS_DroneLocalizationReportMessage::operator == (const WPS_DroneLocalizationReportMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_DroneLocalizationStatus_ != other_.m_DroneLocalizationStatus_) {
                return false;
            }
            if (m_docked_ != other_.m_docked_) {
                return false;
            }
            return true;
        }
        bool WPS_DroneLocalizationReportMessage::operator != (const WPS_DroneLocalizationReportMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_DroneLocalizationReportMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "DroneLocalizationStatus: " << sample.DroneLocalizationStatus()<<", ";
            o << "docked: " << sample.docked() ;
            o <<"]";
            return o;
        }

    } // namespace WPS_DroneLocalizationReporting  

    namespace WPS_UTMVehicleLocalizationReporting {

        // ---- WPS_PositionOrientation: 

        WPS_PositionOrientation::WPS_PositionOrientation() :
            m_x_ (0.0) ,
            m_y_ (0.0) ,
            m_z_ (0.0) ,
            m_pitch_ (0.0) ,
            m_roll_ (0.0) ,
            m_yaw_ (0.0)  {
        }   

        WPS_PositionOrientation::WPS_PositionOrientation (
            double x,
            double y,
            double z,
            double pitch,
            double roll,
            double yaw)
            :
                m_x_( x ),
                m_y_( y ),
                m_z_( z ),
                m_pitch_( pitch ),
                m_roll_( roll ),
                m_yaw_( yaw ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_PositionOrientation::WPS_PositionOrientation(WPS_PositionOrientation&& other_) OMG_NOEXCEPT  :m_x_ (std::move(other_.m_x_))
        ,
        m_y_ (std::move(other_.m_y_))
        ,
        m_z_ (std::move(other_.m_z_))
        ,
        m_pitch_ (std::move(other_.m_pitch_))
        ,
        m_roll_ (std::move(other_.m_roll_))
        ,
        m_yaw_ (std::move(other_.m_yaw_))
        {
        } 

        WPS_PositionOrientation& WPS_PositionOrientation::operator=(WPS_PositionOrientation&&  other_) OMG_NOEXCEPT {
            WPS_PositionOrientation tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_PositionOrientation::swap(WPS_PositionOrientation& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_x_, other_.m_x_);
            swap(m_y_, other_.m_y_);
            swap(m_z_, other_.m_z_);
            swap(m_pitch_, other_.m_pitch_);
            swap(m_roll_, other_.m_roll_);
            swap(m_yaw_, other_.m_yaw_);
        }  

        bool WPS_PositionOrientation::operator == (const WPS_PositionOrientation& other_) const {
            if (m_x_ != other_.m_x_) {
                return false;
            }
            if (m_y_ != other_.m_y_) {
                return false;
            }
            if (m_z_ != other_.m_z_) {
                return false;
            }
            if (m_pitch_ != other_.m_pitch_) {
                return false;
            }
            if (m_roll_ != other_.m_roll_) {
                return false;
            }
            if (m_yaw_ != other_.m_yaw_) {
                return false;
            }
            return true;
        }
        bool WPS_PositionOrientation::operator != (const WPS_PositionOrientation& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_PositionOrientation& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "x: " << std::setprecision(15) <<sample.x()<<", ";
            o << "y: " << std::setprecision(15) <<sample.y()<<", ";
            o << "z: " << std::setprecision(15) <<sample.z()<<", ";
            o << "pitch: " << std::setprecision(15) <<sample.pitch()<<", ";
            o << "roll: " << std::setprecision(15) <<sample.roll()<<", ";
            o << "yaw: " << std::setprecision(15) <<sample.yaw() ;
            o <<"]";
            return o;
        }

        // ---- WPS_UTMVehicleLocalizationParameters: 

        WPS_UTMVehicleLocalizationParameters::WPS_UTMVehicleLocalizationParameters() :
            m_PathToFolder_ ("") ,
            m_LiveVideoURL_ ("")  {
        }   

        WPS_UTMVehicleLocalizationParameters::WPS_UTMVehicleLocalizationParameters (
            const std::string& PathToFolder,
            const std::string& LiveVideoURL)
            :
                m_PathToFolder_( PathToFolder ),
                m_LiveVideoURL_( LiveVideoURL ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_UTMVehicleLocalizationParameters::WPS_UTMVehicleLocalizationParameters(WPS_UTMVehicleLocalizationParameters&& other_) OMG_NOEXCEPT  :m_PathToFolder_ (std::move(other_.m_PathToFolder_))
        ,
        m_LiveVideoURL_ (std::move(other_.m_LiveVideoURL_))
        {
        } 

        WPS_UTMVehicleLocalizationParameters& WPS_UTMVehicleLocalizationParameters::operator=(WPS_UTMVehicleLocalizationParameters&&  other_) OMG_NOEXCEPT {
            WPS_UTMVehicleLocalizationParameters tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_UTMVehicleLocalizationParameters::swap(WPS_UTMVehicleLocalizationParameters& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PathToFolder_, other_.m_PathToFolder_);
            swap(m_LiveVideoURL_, other_.m_LiveVideoURL_);
        }  

        bool WPS_UTMVehicleLocalizationParameters::operator == (const WPS_UTMVehicleLocalizationParameters& other_) const {
            if (m_PathToFolder_ != other_.m_PathToFolder_) {
                return false;
            }
            if (m_LiveVideoURL_ != other_.m_LiveVideoURL_) {
                return false;
            }
            return true;
        }
        bool WPS_UTMVehicleLocalizationParameters::operator != (const WPS_UTMVehicleLocalizationParameters& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationParameters& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PathToFolder: " << sample.PathToFolder()<<", ";
            o << "LiveVideoURL: " << sample.LiveVideoURL() ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationOperation_type& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_UTMVehicleLocalizationOperation_type::ReportUTMCenterFrameLocalization:
                o << "WPS_UTMVehicleLocalizationOperation_type::ReportUTMCenterFrameLocalization" << " ";
                break;
                case WPS_UTMVehicleLocalizationOperation_type::ReportVehicleOrientation:
                o << "WPS_UTMVehicleLocalizationOperation_type::ReportVehicleOrientation" << " ";
                break;
                case WPS_UTMVehicleLocalizationOperation_type::AbortAllReporting:
                o << "WPS_UTMVehicleLocalizationOperation_type::AbortAllReporting" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_UTMVehicleLocalizationData: 

        WPS_UTMVehicleLocalizationData::WPS_UTMVehicleLocalizationData() :
            m_request_(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type::ReportUTMCenterFrameLocalization)  {
        }   

        WPS_UTMVehicleLocalizationData::WPS_UTMVehicleLocalizationData (
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type& request,
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& parameters)
            :
                m_request_( request ),
                m_parameters_( parameters ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_UTMVehicleLocalizationData::WPS_UTMVehicleLocalizationData(WPS_UTMVehicleLocalizationData&& other_) OMG_NOEXCEPT  :m_request_ (std::move(other_.m_request_))
        ,
        m_parameters_ (std::move(other_.m_parameters_))
        {
        } 

        WPS_UTMVehicleLocalizationData& WPS_UTMVehicleLocalizationData::operator=(WPS_UTMVehicleLocalizationData&&  other_) OMG_NOEXCEPT {
            WPS_UTMVehicleLocalizationData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_UTMVehicleLocalizationData::swap(WPS_UTMVehicleLocalizationData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_request_, other_.m_request_);
            swap(m_parameters_, other_.m_parameters_);
        }  

        bool WPS_UTMVehicleLocalizationData::operator == (const WPS_UTMVehicleLocalizationData& other_) const {
            if (m_request_ != other_.m_request_) {
                return false;
            }
            if (m_parameters_ != other_.m_parameters_) {
                return false;
            }
            return true;
        }
        bool WPS_UTMVehicleLocalizationData::operator != (const WPS_UTMVehicleLocalizationData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "request: " << sample.request()<<", ";
            o << "parameters: " << sample.parameters() ;
            o <<"]";
            return o;
        }

        // ---- WPS_UTMVehicleLocalizationMessage: 

        WPS_UTMVehicleLocalizationMessage::WPS_UTMVehicleLocalizationMessage() :
            m_RequestId_ ("")  {
        }   

        WPS_UTMVehicleLocalizationMessage::WPS_UTMVehicleLocalizationMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_UTMVehicleLocalizationMessage::WPS_UTMVehicleLocalizationMessage(WPS_UTMVehicleLocalizationMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        WPS_UTMVehicleLocalizationMessage& WPS_UTMVehicleLocalizationMessage::operator=(WPS_UTMVehicleLocalizationMessage&&  other_) OMG_NOEXCEPT {
            WPS_UTMVehicleLocalizationMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_UTMVehicleLocalizationMessage::swap(WPS_UTMVehicleLocalizationMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool WPS_UTMVehicleLocalizationMessage::operator == (const WPS_UTMVehicleLocalizationMessage& other_) const {
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
        bool WPS_UTMVehicleLocalizationMessage::operator != (const WPS_UTMVehicleLocalizationMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationMessage& sample)
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

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationStatusEnum& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_UTMVehicleLocalizationStatusEnum::Idle:
                o << "WPS_UTMVehicleLocalizationStatusEnum::Idle" << " ";
                break;
                case WPS_UTMVehicleLocalizationStatusEnum::Reporting:
                o << "WPS_UTMVehicleLocalizationStatusEnum::Reporting" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_UTMVehicleLocalizationReportData: 

        WPS_UTMVehicleLocalizationReportData::WPS_UTMVehicleLocalizationReportData() :
            m_DroneLocalizationStatus_(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum::Idle) ,
            m_docked_ (0)  {
        }   

        WPS_UTMVehicleLocalizationReportData::WPS_UTMVehicleLocalizationReportData (
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum& DroneLocalizationStatus,
            bool docked,
            const DDS_GRI::DDSCommon::DDS_GeoPoint& UTMCenterFrame,
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& VehiclePosOrient,
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type& RelevantFrames)
            :
                m_DroneLocalizationStatus_( DroneLocalizationStatus ),
                m_docked_( docked ),
                m_UTMCenterFrame_( UTMCenterFrame ),
                m_VehiclePosOrient_( VehiclePosOrient ),
                m_RelevantFrames_( RelevantFrames ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_UTMVehicleLocalizationReportData::WPS_UTMVehicleLocalizationReportData(WPS_UTMVehicleLocalizationReportData&& other_) OMG_NOEXCEPT  :m_DroneLocalizationStatus_ (std::move(other_.m_DroneLocalizationStatus_))
        ,
        m_docked_ (std::move(other_.m_docked_))
        ,
        m_UTMCenterFrame_ (std::move(other_.m_UTMCenterFrame_))
        ,
        m_VehiclePosOrient_ (std::move(other_.m_VehiclePosOrient_))
        ,
        m_RelevantFrames_ (std::move(other_.m_RelevantFrames_))
        {
        } 

        WPS_UTMVehicleLocalizationReportData& WPS_UTMVehicleLocalizationReportData::operator=(WPS_UTMVehicleLocalizationReportData&&  other_) OMG_NOEXCEPT {
            WPS_UTMVehicleLocalizationReportData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_UTMVehicleLocalizationReportData::swap(WPS_UTMVehicleLocalizationReportData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_DroneLocalizationStatus_, other_.m_DroneLocalizationStatus_);
            swap(m_docked_, other_.m_docked_);
            swap(m_UTMCenterFrame_, other_.m_UTMCenterFrame_);
            swap(m_VehiclePosOrient_, other_.m_VehiclePosOrient_);
            swap(m_RelevantFrames_, other_.m_RelevantFrames_);
        }  

        bool WPS_UTMVehicleLocalizationReportData::operator == (const WPS_UTMVehicleLocalizationReportData& other_) const {
            if (m_DroneLocalizationStatus_ != other_.m_DroneLocalizationStatus_) {
                return false;
            }
            if (m_docked_ != other_.m_docked_) {
                return false;
            }
            if (m_UTMCenterFrame_ != other_.m_UTMCenterFrame_) {
                return false;
            }
            if (m_VehiclePosOrient_ != other_.m_VehiclePosOrient_) {
                return false;
            }
            if (m_RelevantFrames_ != other_.m_RelevantFrames_) {
                return false;
            }
            return true;
        }
        bool WPS_UTMVehicleLocalizationReportData::operator != (const WPS_UTMVehicleLocalizationReportData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationReportData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "DroneLocalizationStatus: " << sample.DroneLocalizationStatus()<<", ";
            o << "docked: " << sample.docked()<<", ";
            o << "UTMCenterFrame: " << sample.UTMCenterFrame()<<", ";
            o << "VehiclePosOrient: " << sample.VehiclePosOrient()<<", ";
            o << "RelevantFrames: " << sample.RelevantFrames() ;
            o <<"]";
            return o;
        }

        // ---- WPS_UTMVehicleLocalizationReportMessage: 

        WPS_UTMVehicleLocalizationReportMessage::WPS_UTMVehicleLocalizationReportMessage()  {
        }   

        WPS_UTMVehicleLocalizationReportMessage::WPS_UTMVehicleLocalizationReportMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_UTMVehicleLocalizationReportMessage::WPS_UTMVehicleLocalizationReportMessage(WPS_UTMVehicleLocalizationReportMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        WPS_UTMVehicleLocalizationReportMessage& WPS_UTMVehicleLocalizationReportMessage::operator=(WPS_UTMVehicleLocalizationReportMessage&&  other_) OMG_NOEXCEPT {
            WPS_UTMVehicleLocalizationReportMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_UTMVehicleLocalizationReportMessage::swap(WPS_UTMVehicleLocalizationReportMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool WPS_UTMVehicleLocalizationReportMessage::operator == (const WPS_UTMVehicleLocalizationReportMessage& other_) const {
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
        bool WPS_UTMVehicleLocalizationReportMessage::operator != (const WPS_UTMVehicleLocalizationReportMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_UTMVehicleLocalizationReportMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "Data: " << sample.Data() ;
            o <<"]";
            return o;
        }

    } // namespace WPS_UTMVehicleLocalizationReporting  

    namespace WPS_ModelDifferences {

        // ---- WPS_ModelDifferencesParameters: 

        WPS_ModelDifferencesParameters::WPS_ModelDifferencesParameters() :
            m_PathToFolder_Old_ ("") ,
            m_PathToFolder_New_ ("")  {
        }   

        WPS_ModelDifferencesParameters::WPS_ModelDifferencesParameters (
            const std::string& PathToFolder_Old,
            const std::string& PathToFolder_New,
            const WorldPerceptionModel::RegionOfInterest_type& region_of_interest)
            :
                m_PathToFolder_Old_( PathToFolder_Old ),
                m_PathToFolder_New_( PathToFolder_New ),
                m_region_of_interest_( region_of_interest ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_ModelDifferencesParameters::WPS_ModelDifferencesParameters(WPS_ModelDifferencesParameters&& other_) OMG_NOEXCEPT  :m_PathToFolder_Old_ (std::move(other_.m_PathToFolder_Old_))
        ,
        m_PathToFolder_New_ (std::move(other_.m_PathToFolder_New_))
        ,
        m_region_of_interest_ (std::move(other_.m_region_of_interest_))
        {
        } 

        WPS_ModelDifferencesParameters& WPS_ModelDifferencesParameters::operator=(WPS_ModelDifferencesParameters&&  other_) OMG_NOEXCEPT {
            WPS_ModelDifferencesParameters tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_ModelDifferencesParameters::swap(WPS_ModelDifferencesParameters& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_PathToFolder_Old_, other_.m_PathToFolder_Old_);
            swap(m_PathToFolder_New_, other_.m_PathToFolder_New_);
            swap(m_region_of_interest_, other_.m_region_of_interest_);
        }  

        bool WPS_ModelDifferencesParameters::operator == (const WPS_ModelDifferencesParameters& other_) const {
            if (m_PathToFolder_Old_ != other_.m_PathToFolder_Old_) {
                return false;
            }
            if (m_PathToFolder_New_ != other_.m_PathToFolder_New_) {
                return false;
            }
            if (m_region_of_interest_ != other_.m_region_of_interest_) {
                return false;
            }
            return true;
        }
        bool WPS_ModelDifferencesParameters::operator != (const WPS_ModelDifferencesParameters& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesParameters& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "PathToFolder_Old: " << sample.PathToFolder_Old()<<", ";
            o << "PathToFolder_New: " << sample.PathToFolder_New()<<", ";
            o << "region_of_interest: " << sample.region_of_interest() ;
            o <<"]";
            return o;
        }

        std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesOperation_type& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_ModelDifferencesOperation_type::CheckModelDifferences:
                o << "WPS_ModelDifferencesOperation_type::CheckModelDifferences" << " ";
                break;
                case WPS_ModelDifferencesOperation_type::AbortCheckModel:
                o << "WPS_ModelDifferencesOperation_type::AbortCheckModel" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_ModelDifferencesData: 

        WPS_ModelDifferencesData::WPS_ModelDifferencesData() :
            m_request_(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type::CheckModelDifferences)  {
        }   

        WPS_ModelDifferencesData::WPS_ModelDifferencesData (
            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type& request,
            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& parameters)
            :
                m_request_( request ),
                m_parameters_( parameters ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_ModelDifferencesData::WPS_ModelDifferencesData(WPS_ModelDifferencesData&& other_) OMG_NOEXCEPT  :m_request_ (std::move(other_.m_request_))
        ,
        m_parameters_ (std::move(other_.m_parameters_))
        {
        } 

        WPS_ModelDifferencesData& WPS_ModelDifferencesData::operator=(WPS_ModelDifferencesData&&  other_) OMG_NOEXCEPT {
            WPS_ModelDifferencesData tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_ModelDifferencesData::swap(WPS_ModelDifferencesData& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_request_, other_.m_request_);
            swap(m_parameters_, other_.m_parameters_);
        }  

        bool WPS_ModelDifferencesData::operator == (const WPS_ModelDifferencesData& other_) const {
            if (m_request_ != other_.m_request_) {
                return false;
            }
            if (m_parameters_ != other_.m_parameters_) {
                return false;
            }
            return true;
        }
        bool WPS_ModelDifferencesData::operator != (const WPS_ModelDifferencesData& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesData& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "request: " << sample.request()<<", ";
            o << "parameters: " << sample.parameters() ;
            o <<"]";
            return o;
        }

        // ---- WPS_ModelDifferencesMessage: 

        WPS_ModelDifferencesMessage::WPS_ModelDifferencesMessage() :
            m_RequestId_ ("")  {
        }   

        WPS_ModelDifferencesMessage::WPS_ModelDifferencesMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const std::string& RequestId,
            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& Data)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_RequestId_( RequestId ),
                m_Data_( Data ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_ModelDifferencesMessage::WPS_ModelDifferencesMessage(WPS_ModelDifferencesMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_RequestId_ (std::move(other_.m_RequestId_))
        ,
        m_Data_ (std::move(other_.m_Data_))
        {
        } 

        WPS_ModelDifferencesMessage& WPS_ModelDifferencesMessage::operator=(WPS_ModelDifferencesMessage&&  other_) OMG_NOEXCEPT {
            WPS_ModelDifferencesMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_ModelDifferencesMessage::swap(WPS_ModelDifferencesMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_RequestId_, other_.m_RequestId_);
            swap(m_Data_, other_.m_Data_);
        }  

        bool WPS_ModelDifferencesMessage::operator == (const WPS_ModelDifferencesMessage& other_) const {
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
        bool WPS_ModelDifferencesMessage::operator != (const WPS_ModelDifferencesMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesMessage& sample)
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

        std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesStatusEnum& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            switch(sample.underlying()){
                case WPS_ModelDifferencesStatusEnum::Idle:
                o << "WPS_ModelDifferencesStatusEnum::Idle" << " ";
                break;
                case WPS_ModelDifferencesStatusEnum::InProgess:
                o << "WPS_ModelDifferencesStatusEnum::InProgess" << " ";
                break;
                case WPS_ModelDifferencesStatusEnum::Aborted:
                o << "WPS_ModelDifferencesStatusEnum::Aborted" << " ";
                break;
                case WPS_ModelDifferencesStatusEnum::Completed:
                o << "WPS_ModelDifferencesStatusEnum::Completed" << " ";
                break;
            }
            return o;
        }

        // ---- WPS_ModelDifferencesReportMessage: 

        WPS_ModelDifferencesReportMessage::WPS_ModelDifferencesReportMessage() :
            m_ModelDifferencesStatus_(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum::Idle)  {
        }   

        WPS_ModelDifferencesReportMessage::WPS_ModelDifferencesReportMessage (
            const DDS_GRI::DDSCommon::DDS_Identifier& SourceId,
            const DDS_GRI::DDSCommon::DDS_Identifier& DestinationId,
            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum& ModelDifferencesStatus)
            :
                m_SourceId_( SourceId ),
                m_DestinationId_( DestinationId ),
                m_ModelDifferencesStatus_( ModelDifferencesStatus ) {
        }

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        WPS_ModelDifferencesReportMessage::WPS_ModelDifferencesReportMessage(WPS_ModelDifferencesReportMessage&& other_) OMG_NOEXCEPT  :m_SourceId_ (std::move(other_.m_SourceId_))
        ,
        m_DestinationId_ (std::move(other_.m_DestinationId_))
        ,
        m_ModelDifferencesStatus_ (std::move(other_.m_ModelDifferencesStatus_))
        {
        } 

        WPS_ModelDifferencesReportMessage& WPS_ModelDifferencesReportMessage::operator=(WPS_ModelDifferencesReportMessage&&  other_) OMG_NOEXCEPT {
            WPS_ModelDifferencesReportMessage tmp(std::move(other_));
            swap(tmp); 
            return *this;
        }
        #endif
        #endif   

        void WPS_ModelDifferencesReportMessage::swap(WPS_ModelDifferencesReportMessage& other_)  OMG_NOEXCEPT 
        {
            using std::swap;
            swap(m_SourceId_, other_.m_SourceId_);
            swap(m_DestinationId_, other_.m_DestinationId_);
            swap(m_ModelDifferencesStatus_, other_.m_ModelDifferencesStatus_);
        }  

        bool WPS_ModelDifferencesReportMessage::operator == (const WPS_ModelDifferencesReportMessage& other_) const {
            if (m_SourceId_ != other_.m_SourceId_) {
                return false;
            }
            if (m_DestinationId_ != other_.m_DestinationId_) {
                return false;
            }
            if (m_ModelDifferencesStatus_ != other_.m_ModelDifferencesStatus_) {
                return false;
            }
            return true;
        }
        bool WPS_ModelDifferencesReportMessage::operator != (const WPS_ModelDifferencesReportMessage& other_) const {
            return !this->operator ==(other_);
        }

        std::ostream& operator << (std::ostream& o,const WPS_ModelDifferencesReportMessage& sample)
        {
            ::rti::util::StreamFlagSaver flag_saver (o);
            o <<"[";
            o << "SourceId: " << sample.SourceId()<<", ";
            o << "DestinationId: " << sample.DestinationId()<<", ";
            o << "ModelDifferencesStatus: " << sample.ModelDifferencesStatus() ;
            o <<"]";
            return o;
        }

    } // namespace WPS_ModelDifferences  

} // namespace WorldPerceptionModel  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::RegionOfInterest_type_AliasTag_t > {
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
                        (char *)"WorldPerceptionModel::RegionOfInterest_type", /* Name */
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

                RegionOfInterest_type_g_tc_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_GeoPoint, (WorldPerceptionModel::MAX_POINTS_IN_REGION_OF_INTEREST) > >(((WorldPerceptionModel::MAX_POINTS_IN_REGION_OF_INTEREST)));

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
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::RegionOfInterest_type);

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
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::RegionOfInterest_type >;

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

        const ::dds::core::xtypes::AliasType& dynamic_type< WorldPerceptionModel::RegionOfInterest_type_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::RegionOfInterest_type_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters > {
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
                        (char *)"WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters", /* Name */
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
                WPS_BuildModelParameters_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::RegionOfInterest_type_AliasTag_t>::get().native();

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

                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters *sample;

                static RTIXCdrMemberAccessInfo WPS_BuildModelParameters_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelParameters_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelParameters_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters);
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
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters);

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
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters >;

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

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type > {
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
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type::BuildModelDense, 
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
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type::AbortBuildModel, 
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
                        (char *)"WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type", /* Name */
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
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type);

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
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData > {
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
                        (char *)"WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData", /* Name */
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

                WPS_BuildModelData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type>::get().native();
                WPS_BuildModelData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters>::get().native();

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

                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData *sample;

                static RTIXCdrMemberAccessInfo WPS_BuildModelData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData);
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
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData);

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
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData >;

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

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_BuildModelMessage_g_tc_members[4]=
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

                static DDS_TypeCode WPS_BuildModelMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_BuildModelMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_BuildModelMessage*/

                if (is_initialized) {
                    return &WPS_BuildModelMessage_g_tc;
                }

                WPS_BuildModelMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_BuildModelMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_BuildModelMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_BuildModelMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                WPS_BuildModelMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData>::get().native();

                /* Initialize the values for member annotations. */

                WPS_BuildModelMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_BuildModelMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_BuildModelMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_BuildModelMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_BuildModelMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_BuildModelMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_BuildModelMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_BuildModelMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_BuildModelMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                WPS_BuildModelMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                WPS_BuildModelMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_BuildModelMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_BuildModelMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_BuildModelMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_BuildModelMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_BuildModelMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >;

                WPS_BuildModelMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_BuildModelMessage_g_typePlugin = 
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

                return &WPS_BuildModelMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum > {
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
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum::Idle, 
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
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum::InProgess, 
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
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum::Aborted, 
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
                        WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum::Completed, 
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
                        (char *)"WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum", /* Name */
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
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum);

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
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum >;

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

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_BuildModelReportMessage_g_tc_members[4]=
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

                static DDS_TypeCode WPS_BuildModelReportMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_BuildModelReportMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_BuildModelReportMessage*/

                if (is_initialized) {
                    return &WPS_BuildModelReportMessage_g_tc;
                }

                WPS_BuildModelReportMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_BuildModelReportMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_BuildModelReportMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_BuildModelReportMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum>::get().native();
                WPS_BuildModelReportMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */

                WPS_BuildModelReportMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_BuildModelReportMessage_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_BuildModelReportMessage_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                WPS_BuildModelReportMessage_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                WPS_BuildModelReportMessage_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                WPS_BuildModelReportMessage_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                WPS_BuildModelReportMessage_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                WPS_BuildModelReportMessage_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                WPS_BuildModelReportMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_BuildModelReportMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_BuildModelReportMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_BuildModelReportMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_BuildModelReportMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelReportMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_BuildModelReportMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_BuildModelReportMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_BuildModelReportMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BuildModelStatus() - (char *)sample);

                WPS_BuildModelReportMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ModelQuality() - (char *)sample);

                WPS_BuildModelReportMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_BuildModelReportMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_BuildModelReportMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_BuildModelReportMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_BuildModelReportMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_BuildModelReportMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >;

                WPS_BuildModelReportMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_BuildModelReportMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_BuildModelReportMessage_g_typePlugin = 
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

                return &WPS_BuildModelReportMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_DroneLocalizationParameters_g_tc_members[2]=
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
                        (char *)"LiveVideoURL",/* Member name */
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

                static DDS_TypeCode WPS_DroneLocalizationParameters_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_DroneLocalizationParameters_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_DroneLocalizationParameters*/

                if (is_initialized) {
                    return &WPS_DroneLocalizationParameters_g_tc;
                }

                WPS_DroneLocalizationParameters_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_DroneLocalizationParameters_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();
                WPS_DroneLocalizationParameters_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WPS_DroneLocalizationParameters_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_DroneLocalizationParameters_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_DroneLocalizationParameters_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_DroneLocalizationParameters_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_DroneLocalizationParameters_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_DroneLocalizationParameters_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_DroneLocalizationParameters_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters *sample;

                static RTIXCdrMemberAccessInfo WPS_DroneLocalizationParameters_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_DroneLocalizationParameters_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationParameters_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_DroneLocalizationParameters_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathToFolder() - (char *)sample);

                WPS_DroneLocalizationParameters_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LiveVideoURL() - (char *)sample);

                WPS_DroneLocalizationParameters_g_sampleAccessInfo.memberAccessInfos = 
                WPS_DroneLocalizationParameters_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_DroneLocalizationParameters_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_DroneLocalizationParameters_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_DroneLocalizationParameters_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_DroneLocalizationParameters_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters >;

                WPS_DroneLocalizationParameters_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationParameters_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_DroneLocalizationParameters_g_typePlugin = 
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

                return &WPS_DroneLocalizationParameters_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_DroneLocalizationOperation_type_g_tc_members[2]=
                {

                    {
                        (char *)"ReportDroneLocalization",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type::ReportDroneLocalization, 
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
                        (char *)"AbortDroneLocalization",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type::AbortDroneLocalization, 
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

                static DDS_TypeCode WPS_DroneLocalizationOperation_type_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_DroneLocalizationOperation_type_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_DroneLocalizationOperation_type*/

                if (is_initialized) {
                    return &WPS_DroneLocalizationOperation_type_g_tc;
                }

                WPS_DroneLocalizationOperation_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_DroneLocalizationOperation_type_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_DroneLocalizationOperation_type_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_DroneLocalizationOperation_type_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_DroneLocalizationOperation_type_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_DroneLocalizationOperation_type_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_DroneLocalizationOperation_type_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_DroneLocalizationOperation_type_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationOperation_type_g_sampleAccessInfo;
                }

                WPS_DroneLocalizationOperation_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_DroneLocalizationOperation_type_g_sampleAccessInfo.memberAccessInfos = 
                WPS_DroneLocalizationOperation_type_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_DroneLocalizationOperation_type_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_DroneLocalizationOperation_type_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_DroneLocalizationOperation_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_DroneLocalizationOperation_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type >;

                WPS_DroneLocalizationOperation_type_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationOperation_type_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_DroneLocalizationOperation_type_g_typePlugin = 
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

                return &WPS_DroneLocalizationOperation_type_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_DroneLocalizationData_g_tc_members[2]=
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

                static DDS_TypeCode WPS_DroneLocalizationData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_DroneLocalizationData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_DroneLocalizationData*/

                if (is_initialized) {
                    return &WPS_DroneLocalizationData_g_tc;
                }

                WPS_DroneLocalizationData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_DroneLocalizationData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type>::get().native();
                WPS_DroneLocalizationData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters>::get().native();

                /* Initialize the values for member annotations. */
                WPS_DroneLocalizationData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_DroneLocalizationData_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_DroneLocalizationData_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_DroneLocalizationData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_DroneLocalizationData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData *sample;

                static RTIXCdrMemberAccessInfo WPS_DroneLocalizationData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_DroneLocalizationData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_DroneLocalizationData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->request() - (char *)sample);

                WPS_DroneLocalizationData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->parameters() - (char *)sample);

                WPS_DroneLocalizationData_g_sampleAccessInfo.memberAccessInfos = 
                WPS_DroneLocalizationData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_DroneLocalizationData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_DroneLocalizationData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_DroneLocalizationData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_DroneLocalizationData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData >;

                WPS_DroneLocalizationData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_DroneLocalizationData_g_typePlugin = 
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

                return &WPS_DroneLocalizationData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_DroneLocalizationMessage_g_tc_members[4]=
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

                static DDS_TypeCode WPS_DroneLocalizationMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_DroneLocalizationMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_DroneLocalizationMessage*/

                if (is_initialized) {
                    return &WPS_DroneLocalizationMessage_g_tc;
                }

                WPS_DroneLocalizationMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_DroneLocalizationMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_DroneLocalizationMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_DroneLocalizationMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                WPS_DroneLocalizationMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData>::get().native();

                /* Initialize the values for member annotations. */

                WPS_DroneLocalizationMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_DroneLocalizationMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_DroneLocalizationMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_DroneLocalizationMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_DroneLocalizationMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_DroneLocalizationMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_DroneLocalizationMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_DroneLocalizationMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_DroneLocalizationMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_DroneLocalizationMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                WPS_DroneLocalizationMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                WPS_DroneLocalizationMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_DroneLocalizationMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_DroneLocalizationMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_DroneLocalizationMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_DroneLocalizationMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_DroneLocalizationMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >;

                WPS_DroneLocalizationMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_DroneLocalizationMessage_g_typePlugin = 
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

                return &WPS_DroneLocalizationMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_DroneLocalizationStatusEnum_g_tc_members[2]=
                {

                    {
                        (char *)"Idle",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum::Idle, 
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
                        (char *)"Reporting",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum::Reporting, 
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

                static DDS_TypeCode WPS_DroneLocalizationStatusEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_DroneLocalizationStatusEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_DroneLocalizationStatusEnum*/

                if (is_initialized) {
                    return &WPS_DroneLocalizationStatusEnum_g_tc;
                }

                WPS_DroneLocalizationStatusEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_DroneLocalizationStatusEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_DroneLocalizationStatusEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_DroneLocalizationStatusEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_DroneLocalizationStatusEnum_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_DroneLocalizationStatusEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_DroneLocalizationStatusEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo;
                }

                WPS_DroneLocalizationStatusEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo.memberAccessInfos = 
                WPS_DroneLocalizationStatusEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum >;

                WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationStatusEnum_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_DroneLocalizationStatusEnum_g_typePlugin = 
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

                return &WPS_DroneLocalizationStatusEnum_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_DroneLocalizationReportMessage_g_tc_members[4]=
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
                        (char *)"DroneLocalizationStatus",/* Member name */
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
                        (char *)"docked",/* Member name */
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

                static DDS_TypeCode WPS_DroneLocalizationReportMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_DroneLocalizationReportMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_DroneLocalizationReportMessage*/

                if (is_initialized) {
                    return &WPS_DroneLocalizationReportMessage_g_tc;
                }

                WPS_DroneLocalizationReportMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_DroneLocalizationReportMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_DroneLocalizationReportMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_DroneLocalizationReportMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum>::get().native();
                WPS_DroneLocalizationReportMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */

                WPS_DroneLocalizationReportMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_DroneLocalizationReportMessage_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_DroneLocalizationReportMessage_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                WPS_DroneLocalizationReportMessage_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                WPS_DroneLocalizationReportMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_DroneLocalizationReportMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_DroneLocalizationReportMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_DroneLocalizationReportMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_DroneLocalizationReportMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationReportMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_DroneLocalizationReportMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_DroneLocalizationReportMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_DroneLocalizationReportMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DroneLocalizationStatus() - (char *)sample);

                WPS_DroneLocalizationReportMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->docked() - (char *)sample);

                WPS_DroneLocalizationReportMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_DroneLocalizationReportMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_DroneLocalizationReportMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_DroneLocalizationReportMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_DroneLocalizationReportMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_DroneLocalizationReportMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >;

                WPS_DroneLocalizationReportMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_DroneLocalizationReportMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_DroneLocalizationReportMessage_g_typePlugin = 
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

                return &WPS_DroneLocalizationReportMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RelevantLinkedFrames_type_g_tc_sequence;

                static DDS_TypeCode RelevantLinkedFrames_type_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type", /* Name */
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
                    }}; /* Type code for  RelevantLinkedFrames_type */

                if (is_initialized) {
                    return &RelevantLinkedFrames_type_g_tc;
                }

                RelevantLinkedFrames_type_g_tc_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< DDS_GRI::DDSCommon::DDS_FileTimeUTC, (WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::MAX_LINKED_FRAMES) > >(((WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::MAX_LINKED_FRAMES)));

                RelevantLinkedFrames_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RelevantLinkedFrames_type_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_FileTimeUTC_AliasTag_t>::get().native();
                RelevantLinkedFrames_type_g_tc._data._typeCode =  (RTICdrTypeCode *)& RelevantLinkedFrames_type_g_tc_sequence;

                /* Initialize the values for member annotations. */

                RelevantLinkedFrames_type_g_tc._data._sampleAccessInfo = sample_access_info();
                RelevantLinkedFrames_type_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RelevantLinkedFrames_type_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo RelevantLinkedFrames_type_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RelevantLinkedFrames_type_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RelevantLinkedFrames_type_g_sampleAccessInfo;
                }

                RelevantLinkedFrames_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                RelevantLinkedFrames_type_g_sampleAccessInfo.memberAccessInfos = 
                RelevantLinkedFrames_type_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        RelevantLinkedFrames_type_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        RelevantLinkedFrames_type_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RelevantLinkedFrames_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RelevantLinkedFrames_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type >;

                RelevantLinkedFrames_type_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RelevantLinkedFrames_type_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RelevantLinkedFrames_type_g_typePlugin = 
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

                return &RelevantLinkedFrames_type_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_PositionOrientation_g_tc_members[6]=
                {

                    {
                        (char *)"x",/* Member name */
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
                        (char *)"y",/* Member name */
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
                        (char *)"z",/* Member name */
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
                        (char *)"pitch",/* Member name */
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
                        (char *)"roll",/* Member name */
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
                        (char *)"yaw",/* Member name */
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
                    }
                };

                static DDS_TypeCode WPS_PositionOrientation_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        WPS_PositionOrientation_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_PositionOrientation*/

                if (is_initialized) {
                    return &WPS_PositionOrientation_g_tc;
                }

                WPS_PositionOrientation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_PositionOrientation_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                WPS_PositionOrientation_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                WPS_PositionOrientation_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                WPS_PositionOrientation_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                WPS_PositionOrientation_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                WPS_PositionOrientation_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                WPS_PositionOrientation_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                WPS_PositionOrientation_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WPS_PositionOrientation_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WPS_PositionOrientation_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                WPS_PositionOrientation_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WPS_PositionOrientation_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WPS_PositionOrientation_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                WPS_PositionOrientation_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WPS_PositionOrientation_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WPS_PositionOrientation_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                WPS_PositionOrientation_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WPS_PositionOrientation_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WPS_PositionOrientation_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                WPS_PositionOrientation_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WPS_PositionOrientation_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WPS_PositionOrientation_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                WPS_PositionOrientation_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                WPS_PositionOrientation_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WPS_PositionOrientation_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                WPS_PositionOrientation_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_PositionOrientation_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_PositionOrientation_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation *sample;

                static RTIXCdrMemberAccessInfo WPS_PositionOrientation_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_PositionOrientation_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_PositionOrientation_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_PositionOrientation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                WPS_PositionOrientation_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                WPS_PositionOrientation_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->z() - (char *)sample);

                WPS_PositionOrientation_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitch() - (char *)sample);

                WPS_PositionOrientation_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->roll() - (char *)sample);

                WPS_PositionOrientation_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yaw() - (char *)sample);

                WPS_PositionOrientation_g_sampleAccessInfo.memberAccessInfos = 
                WPS_PositionOrientation_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_PositionOrientation_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_PositionOrientation_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_PositionOrientation_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_PositionOrientation_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >;

                WPS_PositionOrientation_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_PositionOrientation_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_PositionOrientation_g_typePlugin = 
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

                return &WPS_PositionOrientation_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationParameters_g_tc_members[2]=
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
                        (char *)"LiveVideoURL",/* Member name */
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationParameters_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_UTMVehicleLocalizationParameters_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationParameters*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationParameters_g_tc;
                }

                WPS_UTMVehicleLocalizationParameters_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_UTMVehicleLocalizationParameters_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();
                WPS_UTMVehicleLocalizationParameters_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WPS_UTMVehicleLocalizationParameters_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_UTMVehicleLocalizationParameters_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_UTMVehicleLocalizationParameters_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_UTMVehicleLocalizationParameters_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_UTMVehicleLocalizationParameters_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationParameters_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationParameters_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters *sample;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationParameters_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_UTMVehicleLocalizationParameters_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathToFolder() - (char *)sample);

                WPS_UTMVehicleLocalizationParameters_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LiveVideoURL() - (char *)sample);

                WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationParameters_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters >;

                WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationParameters_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationParameters_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationParameters_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationOperation_type_g_tc_members[3]=
                {

                    {
                        (char *)"ReportUTMCenterFrameLocalization",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type::ReportUTMCenterFrameLocalization, 
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
                        (char *)"ReportVehicleOrientation",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type::ReportVehicleOrientation, 
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
                        (char *)"AbortAllReporting",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type::AbortAllReporting, 
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationOperation_type_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        WPS_UTMVehicleLocalizationOperation_type_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationOperation_type*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationOperation_type_g_tc;
                }

                WPS_UTMVehicleLocalizationOperation_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_UTMVehicleLocalizationOperation_type_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_UTMVehicleLocalizationOperation_type_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_UTMVehicleLocalizationOperation_type_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationOperation_type_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationOperation_type_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationOperation_type_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo;
                }

                WPS_UTMVehicleLocalizationOperation_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationOperation_type_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type >;

                WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationOperation_type_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationOperation_type_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationOperation_type_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationData_g_tc_members[2]=
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_UTMVehicleLocalizationData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationData*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationData_g_tc;
                }

                WPS_UTMVehicleLocalizationData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_UTMVehicleLocalizationData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type>::get().native();
                WPS_UTMVehicleLocalizationData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters>::get().native();

                /* Initialize the values for member annotations. */
                WPS_UTMVehicleLocalizationData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_UTMVehicleLocalizationData_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_UTMVehicleLocalizationData_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData *sample;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_UTMVehicleLocalizationData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->request() - (char *)sample);

                WPS_UTMVehicleLocalizationData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->parameters() - (char *)sample);

                WPS_UTMVehicleLocalizationData_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData >;

                WPS_UTMVehicleLocalizationData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationData_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationMessage_g_tc_members[4]=
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_UTMVehicleLocalizationMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationMessage*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationMessage_g_tc;
                }

                WPS_UTMVehicleLocalizationMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_UTMVehicleLocalizationMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_UTMVehicleLocalizationMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_UTMVehicleLocalizationMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                WPS_UTMVehicleLocalizationMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData>::get().native();

                /* Initialize the values for member annotations. */

                WPS_UTMVehicleLocalizationMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_UTMVehicleLocalizationMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_UTMVehicleLocalizationMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_UTMVehicleLocalizationMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_UTMVehicleLocalizationMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_UTMVehicleLocalizationMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                WPS_UTMVehicleLocalizationMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >;

                WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationMessage_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationStatusEnum_g_tc_members[2]=
                {

                    {
                        (char *)"Idle",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum::Idle, 
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
                        (char *)"Reporting",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum::Reporting, 
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationStatusEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_UTMVehicleLocalizationStatusEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationStatusEnum*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationStatusEnum_g_tc;
                }

                WPS_UTMVehicleLocalizationStatusEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_UTMVehicleLocalizationStatusEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_UTMVehicleLocalizationStatusEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_UTMVehicleLocalizationStatusEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationStatusEnum_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationStatusEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationStatusEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo;
                }

                WPS_UTMVehicleLocalizationStatusEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationStatusEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum >;

                WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationStatusEnum_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationStatusEnum_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationStatusEnum_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationReportData_g_tc_members[5]=
                {

                    {
                        (char *)"DroneLocalizationStatus",/* Member name */
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
                        (char *)"docked",/* Member name */
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
                        (char *)"UTMCenterFrame",/* Member name */
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
                        (char *)"VehiclePosOrient",/* Member name */
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
                        (char *)"RelevantFrames",/* Member name */
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationReportData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        WPS_UTMVehicleLocalizationReportData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationReportData*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationReportData_g_tc;
                }

                WPS_UTMVehicleLocalizationReportData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_UTMVehicleLocalizationReportData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum>::get().native();
                WPS_UTMVehicleLocalizationReportData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                WPS_UTMVehicleLocalizationReportData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GeoPoint>::get().native();
                WPS_UTMVehicleLocalizationReportData_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation>::get().native();
                WPS_UTMVehicleLocalizationReportData_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::RelevantLinkedFrames_type_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WPS_UTMVehicleLocalizationReportData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_UTMVehicleLocalizationReportData_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_UTMVehicleLocalizationReportData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                WPS_UTMVehicleLocalizationReportData_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                WPS_UTMVehicleLocalizationReportData_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationReportData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationReportData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData *sample;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DroneLocalizationStatus() - (char *)sample);

                WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->docked() - (char *)sample);

                WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->UTMCenterFrame() - (char *)sample);

                WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehiclePosOrient() - (char *)sample);

                WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RelevantFrames() - (char *)sample);

                WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationReportData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData >;

                WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationReportData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationReportData_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationReportData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_UTMVehicleLocalizationReportMessage_g_tc_members[3]=
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

                static DDS_TypeCode WPS_UTMVehicleLocalizationReportMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        WPS_UTMVehicleLocalizationReportMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_UTMVehicleLocalizationReportMessage*/

                if (is_initialized) {
                    return &WPS_UTMVehicleLocalizationReportMessage_g_tc;
                }

                WPS_UTMVehicleLocalizationReportMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_UTMVehicleLocalizationReportMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_UTMVehicleLocalizationReportMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_UTMVehicleLocalizationReportMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData>::get().native();

                /* Initialize the values for member annotations. */

                WPS_UTMVehicleLocalizationReportMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_UTMVehicleLocalizationReportMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_UTMVehicleLocalizationReportMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_UTMVehicleLocalizationReportMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_UTMVehicleLocalizationReportMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_UTMVehicleLocalizationReportMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_UTMVehicleLocalizationReportMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_UTMVehicleLocalizationReportMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >;

                WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_UTMVehicleLocalizationReportMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_UTMVehicleLocalizationReportMessage_g_typePlugin = 
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

                return &WPS_UTMVehicleLocalizationReportMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_ModelDifferencesParameters_g_tc_members[3]=
                {

                    {
                        (char *)"PathToFolder_Old",/* Member name */
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
                        (char *)"PathToFolder_New",/* Member name */
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
                        (char *)"region_of_interest",/* Member name */
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

                static DDS_TypeCode WPS_ModelDifferencesParameters_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        WPS_ModelDifferencesParameters_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_ModelDifferencesParameters*/

                if (is_initialized) {
                    return &WPS_ModelDifferencesParameters_g_tc;
                }

                WPS_ModelDifferencesParameters_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_ModelDifferencesParameters_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();
                WPS_ModelDifferencesParameters_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::String200_AliasTag_t>::get().native();
                WPS_ModelDifferencesParameters_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::RegionOfInterest_type_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                WPS_ModelDifferencesParameters_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_ModelDifferencesParameters_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_ModelDifferencesParameters_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_ModelDifferencesParameters_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_ModelDifferencesParameters_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_ModelDifferencesParameters_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_ModelDifferencesParameters_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters *sample;

                static RTIXCdrMemberAccessInfo WPS_ModelDifferencesParameters_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_ModelDifferencesParameters_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesParameters_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_ModelDifferencesParameters_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathToFolder_Old() - (char *)sample);

                WPS_ModelDifferencesParameters_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PathToFolder_New() - (char *)sample);

                WPS_ModelDifferencesParameters_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->region_of_interest() - (char *)sample);

                WPS_ModelDifferencesParameters_g_sampleAccessInfo.memberAccessInfos = 
                WPS_ModelDifferencesParameters_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_ModelDifferencesParameters_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_ModelDifferencesParameters_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_ModelDifferencesParameters_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_ModelDifferencesParameters_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters >;

                WPS_ModelDifferencesParameters_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesParameters_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_ModelDifferencesParameters_g_typePlugin = 
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

                return &WPS_ModelDifferencesParameters_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_ModelDifferencesOperation_type_g_tc_members[2]=
                {

                    {
                        (char *)"CheckModelDifferences",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type::CheckModelDifferences, 
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
                        (char *)"AbortCheckModel",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type::AbortCheckModel, 
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

                static DDS_TypeCode WPS_ModelDifferencesOperation_type_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_ModelDifferencesOperation_type_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_ModelDifferencesOperation_type*/

                if (is_initialized) {
                    return &WPS_ModelDifferencesOperation_type_g_tc;
                }

                WPS_ModelDifferencesOperation_type_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_ModelDifferencesOperation_type_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_ModelDifferencesOperation_type_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_ModelDifferencesOperation_type_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_ModelDifferencesOperation_type_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_ModelDifferencesOperation_type_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_ModelDifferencesOperation_type_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_ModelDifferencesOperation_type_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesOperation_type_g_sampleAccessInfo;
                }

                WPS_ModelDifferencesOperation_type_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_ModelDifferencesOperation_type_g_sampleAccessInfo.memberAccessInfos = 
                WPS_ModelDifferencesOperation_type_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_ModelDifferencesOperation_type_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_ModelDifferencesOperation_type_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_ModelDifferencesOperation_type_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_ModelDifferencesOperation_type_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type >;

                WPS_ModelDifferencesOperation_type_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesOperation_type_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_ModelDifferencesOperation_type_g_typePlugin = 
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

                return &WPS_ModelDifferencesOperation_type_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_ModelDifferencesData_g_tc_members[2]=
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

                static DDS_TypeCode WPS_ModelDifferencesData_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WPS_ModelDifferencesData_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_ModelDifferencesData*/

                if (is_initialized) {
                    return &WPS_ModelDifferencesData_g_tc;
                }

                WPS_ModelDifferencesData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_ModelDifferencesData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type>::get().native();
                WPS_ModelDifferencesData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters>::get().native();

                /* Initialize the values for member annotations. */
                WPS_ModelDifferencesData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_ModelDifferencesData_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_ModelDifferencesData_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_ModelDifferencesData_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_ModelDifferencesData_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData *sample;

                static RTIXCdrMemberAccessInfo WPS_ModelDifferencesData_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_ModelDifferencesData_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesData_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_ModelDifferencesData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->request() - (char *)sample);

                WPS_ModelDifferencesData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->parameters() - (char *)sample);

                WPS_ModelDifferencesData_g_sampleAccessInfo.memberAccessInfos = 
                WPS_ModelDifferencesData_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_ModelDifferencesData_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_ModelDifferencesData_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_ModelDifferencesData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_ModelDifferencesData_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData >;

                WPS_ModelDifferencesData_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesData_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_ModelDifferencesData_g_typePlugin = 
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

                return &WPS_ModelDifferencesData_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_ModelDifferencesMessage_g_tc_members[4]=
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

                static DDS_TypeCode WPS_ModelDifferencesMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_ModelDifferencesMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_ModelDifferencesMessage*/

                if (is_initialized) {
                    return &WPS_ModelDifferencesMessage_g_tc;
                }

                WPS_ModelDifferencesMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_ModelDifferencesMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_ModelDifferencesMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_ModelDifferencesMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_GUID_AliasTag_t>::get().native();
                WPS_ModelDifferencesMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData>::get().native();

                /* Initialize the values for member annotations. */

                WPS_ModelDifferencesMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WPS_ModelDifferencesMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WPS_ModelDifferencesMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_ModelDifferencesMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_ModelDifferencesMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_ModelDifferencesMessage_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_ModelDifferencesMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_ModelDifferencesMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_ModelDifferencesMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_ModelDifferencesMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RequestId() - (char *)sample);

                WPS_ModelDifferencesMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                WPS_ModelDifferencesMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_ModelDifferencesMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_ModelDifferencesMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_ModelDifferencesMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_ModelDifferencesMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_ModelDifferencesMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >;

                WPS_ModelDifferencesMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_ModelDifferencesMessage_g_typePlugin = 
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

                return &WPS_ModelDifferencesMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_ModelDifferencesStatusEnum_g_tc_members[4]=
                {

                    {
                        (char *)"Idle",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum::Idle, 
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
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum::InProgess, 
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
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum::Aborted, 
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
                        WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum::Completed, 
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

                static DDS_TypeCode WPS_ModelDifferencesStatusEnum_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WPS_ModelDifferencesStatusEnum_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_ModelDifferencesStatusEnum*/

                if (is_initialized) {
                    return &WPS_ModelDifferencesStatusEnum_g_tc;
                }

                WPS_ModelDifferencesStatusEnum_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WPS_ModelDifferencesStatusEnum_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_ModelDifferencesStatusEnum_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WPS_ModelDifferencesStatusEnum_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_ModelDifferencesStatusEnum_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_ModelDifferencesStatusEnum_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WPS_ModelDifferencesStatusEnum_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo;
                }

                WPS_ModelDifferencesStatusEnum_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo.memberAccessInfos = 
                WPS_ModelDifferencesStatusEnum_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum >;

                WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesStatusEnum_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_ModelDifferencesStatusEnum_g_typePlugin = 
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

                return &WPS_ModelDifferencesStatusEnum_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WPS_ModelDifferencesReportMessage_g_tc_members[3]=
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
                        (char *)"ModelDifferencesStatus",/* Member name */
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

                static DDS_TypeCode WPS_ModelDifferencesReportMessage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        WPS_ModelDifferencesReportMessage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WPS_ModelDifferencesReportMessage*/

                if (is_initialized) {
                    return &WPS_ModelDifferencesReportMessage_g_tc;
                }

                WPS_ModelDifferencesReportMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WPS_ModelDifferencesReportMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_ModelDifferencesReportMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DDS_GRI::DDSCommon::DDS_Identifier>::get().native();
                WPS_ModelDifferencesReportMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum>::get().native();

                /* Initialize the values for member annotations. */

                WPS_ModelDifferencesReportMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WPS_ModelDifferencesReportMessage_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WPS_ModelDifferencesReportMessage_g_tc._data._sampleAccessInfo = sample_access_info();
                WPS_ModelDifferencesReportMessage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WPS_ModelDifferencesReportMessage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage *sample;

                static RTIXCdrMemberAccessInfo WPS_ModelDifferencesReportMessage_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WPS_ModelDifferencesReportMessage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesReportMessage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage);
                if (sample == NULL) {
                    return NULL;
                }

                WPS_ModelDifferencesReportMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SourceId() - (char *)sample);

                WPS_ModelDifferencesReportMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DestinationId() - (char *)sample);

                WPS_ModelDifferencesReportMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ModelDifferencesStatus() - (char *)sample);

                WPS_ModelDifferencesReportMessage_g_sampleAccessInfo.memberAccessInfos = 
                WPS_ModelDifferencesReportMessage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        WPS_ModelDifferencesReportMessage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        WPS_ModelDifferencesReportMessage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WPS_ModelDifferencesReportMessage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WPS_ModelDifferencesReportMessage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >;

                WPS_ModelDifferencesReportMessage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WPS_ModelDifferencesReportMessage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WPS_ModelDifferencesReportMessage_g_typePlugin = 
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

                return &WPS_ModelDifferencesReportMessage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::get())));
        }

    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters >::reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& sample) 
        {
            sample.PathToFolder("");
            ::rti::topic::reset_sample(sample.region_of_interest());
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters >::allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelParameters& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.PathToFolder(),  -1, 200);
            ::rti::topic::allocate_sample(sample.region_of_interest(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData >::reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& sample) 
        {
            sample.request(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelOperation_type::BuildModelDense);
            ::rti::topic::reset_sample(sample.parameters());
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData >::allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.request(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parameters(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_new,
                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_BuildModelMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_BuildModelMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage >::allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_new,
                WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_BuildModelReportMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_BuildModelReportMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::reset_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.BuildModelStatus(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelStatusEnum::Idle);
            sample.ModelQuality(0);
        }

        void topic_type_support< WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage >::allocate_sample(WorldPerceptionModel::WPS_BuildModel::WPS_BuildModelReportMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.BuildModelStatus(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters >::reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& sample) 
        {
            sample.PathToFolder("");
            sample.LiveVideoURL("");
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters >::allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationParameters& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.PathToFolder(),  -1, 200);
            ::rti::topic::allocate_sample(sample.LiveVideoURL(),  -1, 200);
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData >::reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& sample) 
        {
            sample.request(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationOperation_type::ReportDroneLocalization);
            ::rti::topic::reset_sample(sample.parameters());
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData >::allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.request(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parameters(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_new,
                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_DroneLocalizationMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_DroneLocalizationMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_DroneLocalizationMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage >::allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_new,
                WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_DroneLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_DroneLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_DroneLocalizationReportMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::reset_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.DroneLocalizationStatus(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationStatusEnum::Idle);
            sample.docked(0);
        }

        void topic_type_support< WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage >::allocate_sample(WorldPerceptionModel::WPS_DroneLocalizationReporting::WPS_DroneLocalizationReportMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DroneLocalizationStatus(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientationPlugin_new,
                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientationPlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_PositionOrientationPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_PositionOrientationPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >::from_cdr_buffer(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_PositionOrientationPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >::reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& sample) 
        {
            sample.x(0.0);
            sample.y(0.0);
            sample.z(0.0);
            sample.pitch(0.0);
            sample.roll(0.0);
            sample.yaw(0.0);
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation >::allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_PositionOrientation& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters >::reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& sample) 
        {
            sample.PathToFolder("");
            sample.LiveVideoURL("");
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters >::allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationParameters& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.PathToFolder(),  -1, 200);
            ::rti::topic::allocate_sample(sample.LiveVideoURL(),  -1, 200);
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData >::reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& sample) 
        {
            sample.request(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationOperation_type::ReportUTMCenterFrameLocalization);
            ::rti::topic::reset_sample(sample.parameters());
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData >::allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.request(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parameters(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_new,
                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_UTMVehicleLocalizationMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_UTMVehicleLocalizationMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_UTMVehicleLocalizationMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage >::allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData >::reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& sample) 
        {
            sample.DroneLocalizationStatus(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationStatusEnum::Idle);
            sample.docked(0);
            ::rti::topic::reset_sample(sample.UTMCenterFrame());
            ::rti::topic::reset_sample(sample.VehiclePosOrient());
            ::rti::topic::reset_sample(sample.RelevantFrames());
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData >::allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.DroneLocalizationStatus(),  -1, -1);
            ::rti::topic::allocate_sample(sample.UTMCenterFrame(),  -1, -1);
            ::rti::topic::allocate_sample(sample.VehiclePosOrient(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RelevantFrames(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_new,
                WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_UTMVehicleLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_UTMVehicleLocalizationReportMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_UTMVehicleLocalizationReportMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::reset_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage >::allocate_sample(WorldPerceptionModel::WPS_UTMVehicleLocalizationReporting::WPS_UTMVehicleLocalizationReportMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters >::reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& sample) 
        {
            sample.PathToFolder_Old("");
            sample.PathToFolder_New("");
            ::rti::topic::reset_sample(sample.region_of_interest());
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters >::allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesParameters& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.PathToFolder_Old(),  -1, 200);
            ::rti::topic::allocate_sample(sample.PathToFolder_New(),  -1, 200);
            ::rti::topic::allocate_sample(sample.region_of_interest(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData >::reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& sample) 
        {
            sample.request(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesOperation_type::CheckModelDifferences);
            ::rti::topic::reset_sample(sample.parameters());
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData >::allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.request(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parameters(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_new,
                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_ModelDifferencesMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_ModelDifferencesMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_ModelDifferencesMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.RequestId("");
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage >::allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RequestId(),  -1, (DDS_GRI::DDSCommon::GUID_LEN));
            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_new,
                WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessagePlugin_delete);
        }

        std::vector<char>& topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WPS_ModelDifferencesReportMessagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WPS_ModelDifferencesReportMessagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::from_cdr_buffer(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WPS_ModelDifferencesReportMessagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage from cdr buffer");
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::reset_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample) 
        {
            ::rti::topic::reset_sample(sample.SourceId());
            ::rti::topic::reset_sample(sample.DestinationId());
            sample.ModelDifferencesStatus(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesStatusEnum::Idle);
        }

        void topic_type_support< WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage >::allocate_sample(WorldPerceptionModel::WPS_ModelDifferences::WPS_ModelDifferencesReportMessage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.SourceId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.DestinationId(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ModelDifferencesStatus(),  -1, -1);
        }

    }
}  

