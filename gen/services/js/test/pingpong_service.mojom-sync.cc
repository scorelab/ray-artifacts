// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/js/test/pingpong_service.mojom-sync.h"

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
#include "services/js/test/pingpong_service.mojom-internal.h"
#include "services/js/test/pingpong_service.mojom-common.h"
namespace js {

// --- Interface definitions ---
PingPongService_SynchronousProxy::PingPongService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool PingPongService_SynchronousProxy::SetClient(mojo::InterfaceHandle<PingPongClient> in_client) const  {
  size_t size = sizeof(internal::PingPongService_SetClient_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::SetClient);
  mojo::MessageBuilder builder(msg_name, size);

  internal::PingPongService_SetClient_Params_Data* out_params =
      internal::PingPongService_SetClient_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_client.Pass(),
                                        &out_params->client);
  if (!out_params->client.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid client in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool PingPongService_SynchronousProxy::Ping(uint16_t in_ping_value) const  {
  size_t size = sizeof(internal::PingPongService_Ping_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::Ping);
  mojo::MessageBuilder builder(msg_name, size);

  internal::PingPongService_Ping_Params_Data* out_params =
      internal::PingPongService_Ping_Params_Data::New(builder.buffer());
  out_params->ping_value = in_ping_value;
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool PingPongService_SynchronousProxy::PingTargetURL(const mojo::String& in_url, uint16_t in_count, bool* out_ok) {
  size_t size = sizeof(internal::PingPongService_PingTargetURL_Params_Data);
  size += GetSerializedSize_(in_url);

  auto msg_name = static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::PingTargetURL);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::PingPongService_PingTargetURL_Params_Data* out_params =
      internal::PingPongService_PingTargetURL_Params_Data::New(builder.buffer());
  SerializeString_(in_url, builder.buffer(), &out_params->url.ptr);
  if (!out_params->url.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null url in {{interface.name}}::{{method.name}}");
  }
  out_params->count = in_count;
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
  
  internal::PingPongService_PingTargetURL_ResponseParams_Data*
      response_params = reinterpret_cast<internal::PingPongService_PingTargetURL_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_ok) = response_params->ok;
  } while (false);
  return true;
}
bool PingPongService_SynchronousProxy::PingTargetService(mojo::InterfaceHandle<PingPongService> in_service, uint16_t in_count, bool* out_ok) {
  size_t size = sizeof(internal::PingPongService_PingTargetService_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::PingTargetService);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::PingPongService_PingTargetService_Params_Data* out_params =
      internal::PingPongService_PingTargetService_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_service.Pass(),
                                        &out_params->service);
  if (!out_params->service.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid service in {{interface.name}}::{{method.name}}");
  }
  out_params->count = in_count;
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
  
  internal::PingPongService_PingTargetService_ResponseParams_Data*
      response_params = reinterpret_cast<internal::PingPongService_PingTargetService_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_ok) = response_params->ok;
  } while (false);
  return true;
}
bool PingPongService_SynchronousProxy::GetPingPongService(mojo::InterfaceRequest<PingPongService> in_service) const  {
  size_t size = sizeof(internal::PingPongService_GetPingPongService_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::GetPingPongService);
  mojo::MessageBuilder builder(msg_name, size);

  internal::PingPongService_GetPingPongService_Params_Data* out_params =
      internal::PingPongService_GetPingPongService_Params_Data::New(builder.buffer());
  out_params->service = in_service.PassMessagePipe().release();
  if (!out_params->service.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid service in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool PingPongService_SynchronousProxy::Quit() const  {
  size_t size = sizeof(internal::PingPongService_Quit_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::Quit);
  mojo::MessageBuilder builder(msg_name, size);

  internal::PingPongService_Quit_Params_Data* out_params =
      internal::PingPongService_Quit_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}PingPongClient_SynchronousProxy::PingPongClient_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool PingPongClient_SynchronousProxy::Pong(uint16_t in_pong_value) const  {
  size_t size = sizeof(internal::PingPongClient_Pong_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::PingPongClient_Base::MessageOrdinals::Pong);
  mojo::MessageBuilder builder(msg_name, size);

  internal::PingPongClient_Pong_Params_Data* out_params =
      internal::PingPongClient_Pong_Params_Data::New(builder.buffer());
  out_params->pong_value = in_pong_value;
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
}  // namespace js

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
