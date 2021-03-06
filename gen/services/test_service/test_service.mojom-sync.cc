// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/test_service/test_service.mojom-sync.h"

#include <math.h>
#include <ostream>
#include <string>
#include <utility>

#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/message_validation.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/synchronous_connector.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/bindings/message.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "services/test_service/test_service.mojom-internal.h"
#include "services/test_service/test_service.mojom-common.h"
namespace mojo {
namespace test {

// --- Interface definitions ---
TestService_SynchronousProxy::TestService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool TestService_SynchronousProxy::Ping() {
  size_t size = sizeof(internal::TestService_Ping_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TestService_Base::MessageOrdinals::Ping);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TestService_Ping_Params_Data* out_params =
      internal::TestService_Ping_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  mojo::Message response_msg;
  if (!connector_->BlockingRead(&response_msg))
    return false; 
  
  // Validate the incoming message.
  std::string response_err;
  if (mojo::internal::RunValidatorsOnMessage(validators_, &response_msg,
                                             &response_err)
        != mojo::internal::ValidationError::NONE) {
    MOJO_LOG(WARNING) << response_err;
    return false;
  } 
  if (mojo::internal::ControlMessageHandler::IsControlMessage(&response_msg)) {
    MOJO_LOG(ERROR) << "Synchronous interface bindings currently don't support "
                       "interface control messages.";
    return false;
  }
  if (response_msg.name() != msg_name) {
    MOJO_LOG(ERROR) << "Expecting response for message = " << msg_name <<
                       ", but received message = " << response_msg.name();
    return false;
  }
  
  internal::TestService_Ping_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TestService_Ping_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
  } while (false);
  return true;
}
bool TestService_SynchronousProxy::ConnectToAppAndGetTime(const mojo::String& in_app_url, int64_t* out_time_usec) {
  size_t size = sizeof(internal::TestService_ConnectToAppAndGetTime_Params_Data);
  size += GetSerializedSize_(in_app_url);

  auto msg_name = static_cast<uint32_t>(internal::TestService_Base::MessageOrdinals::ConnectToAppAndGetTime);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TestService_ConnectToAppAndGetTime_Params_Data* out_params =
      internal::TestService_ConnectToAppAndGetTime_Params_Data::New(builder.buffer());
  SerializeString_(in_app_url, builder.buffer(), &out_params->app_url.ptr);
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  mojo::Message response_msg;
  if (!connector_->BlockingRead(&response_msg))
    return false; 
  
  // Validate the incoming message.
  std::string response_err;
  if (mojo::internal::RunValidatorsOnMessage(validators_, &response_msg,
                                             &response_err)
        != mojo::internal::ValidationError::NONE) {
    MOJO_LOG(WARNING) << response_err;
    return false;
  } 
  if (mojo::internal::ControlMessageHandler::IsControlMessage(&response_msg)) {
    MOJO_LOG(ERROR) << "Synchronous interface bindings currently don't support "
                       "interface control messages.";
    return false;
  }
  if (response_msg.name() != msg_name) {
    MOJO_LOG(ERROR) << "Expecting response for message = " << msg_name <<
                       ", but received message = " << response_msg.name();
    return false;
  }
  
  internal::TestService_ConnectToAppAndGetTime_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TestService_ConnectToAppAndGetTime_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_time_usec) = response_params->time_usec;
  } while (false);
  return true;
}
bool TestService_SynchronousProxy::StartTrackingRequests() {
  size_t size = sizeof(internal::TestService_StartTrackingRequests_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TestService_Base::MessageOrdinals::StartTrackingRequests);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TestService_StartTrackingRequests_Params_Data* out_params =
      internal::TestService_StartTrackingRequests_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  mojo::Message response_msg;
  if (!connector_->BlockingRead(&response_msg))
    return false; 
  
  // Validate the incoming message.
  std::string response_err;
  if (mojo::internal::RunValidatorsOnMessage(validators_, &response_msg,
                                             &response_err)
        != mojo::internal::ValidationError::NONE) {
    MOJO_LOG(WARNING) << response_err;
    return false;
  } 
  if (mojo::internal::ControlMessageHandler::IsControlMessage(&response_msg)) {
    MOJO_LOG(ERROR) << "Synchronous interface bindings currently don't support "
                       "interface control messages.";
    return false;
  }
  if (response_msg.name() != msg_name) {
    MOJO_LOG(ERROR) << "Expecting response for message = " << msg_name <<
                       ", but received message = " << response_msg.name();
    return false;
  }
  
  internal::TestService_StartTrackingRequests_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TestService_StartTrackingRequests_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
  } while (false);
  return true;
}TestTimeService_SynchronousProxy::TestTimeService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool TestTimeService_SynchronousProxy::GetPartyTime(int64_t* out_time_usec) {
  size_t size = sizeof(internal::TestTimeService_GetPartyTime_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TestTimeService_Base::MessageOrdinals::GetPartyTime);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TestTimeService_GetPartyTime_Params_Data* out_params =
      internal::TestTimeService_GetPartyTime_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  mojo::Message response_msg;
  if (!connector_->BlockingRead(&response_msg))
    return false; 
  
  // Validate the incoming message.
  std::string response_err;
  if (mojo::internal::RunValidatorsOnMessage(validators_, &response_msg,
                                             &response_err)
        != mojo::internal::ValidationError::NONE) {
    MOJO_LOG(WARNING) << response_err;
    return false;
  } 
  if (mojo::internal::ControlMessageHandler::IsControlMessage(&response_msg)) {
    MOJO_LOG(ERROR) << "Synchronous interface bindings currently don't support "
                       "interface control messages.";
    return false;
  }
  if (response_msg.name() != msg_name) {
    MOJO_LOG(ERROR) << "Expecting response for message = " << msg_name <<
                       ", but received message = " << response_msg.name();
    return false;
  }
  
  internal::TestTimeService_GetPartyTime_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TestTimeService_GetPartyTime_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_time_usec) = response_params->time_usec;
  } while (false);
  return true;
}
bool TestTimeService_SynchronousProxy::StartTrackingRequests() {
  size_t size = sizeof(internal::TestTimeService_StartTrackingRequests_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TestTimeService_Base::MessageOrdinals::StartTrackingRequests);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TestTimeService_StartTrackingRequests_Params_Data* out_params =
      internal::TestTimeService_StartTrackingRequests_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  mojo::Message response_msg;
  if (!connector_->BlockingRead(&response_msg))
    return false; 
  
  // Validate the incoming message.
  std::string response_err;
  if (mojo::internal::RunValidatorsOnMessage(validators_, &response_msg,
                                             &response_err)
        != mojo::internal::ValidationError::NONE) {
    MOJO_LOG(WARNING) << response_err;
    return false;
  } 
  if (mojo::internal::ControlMessageHandler::IsControlMessage(&response_msg)) {
    MOJO_LOG(ERROR) << "Synchronous interface bindings currently don't support "
                       "interface control messages.";
    return false;
  }
  if (response_msg.name() != msg_name) {
    MOJO_LOG(ERROR) << "Expecting response for message = " << msg_name <<
                       ", but received message = " << response_msg.name();
    return false;
  }
  
  internal::TestTimeService_StartTrackingRequests_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TestTimeService_StartTrackingRequests_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
  } while (false);
  return true;
}
}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
