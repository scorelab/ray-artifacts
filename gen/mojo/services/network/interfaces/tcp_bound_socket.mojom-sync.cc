// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-sync.h"

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
#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-internal.h"
#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-common.h"
namespace mojo {

// --- Interface definitions ---
TCPBoundSocket_SynchronousProxy::TCPBoundSocket_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool TCPBoundSocket_SynchronousProxy::StartListening(mojo::InterfaceRequest<mojo::TCPServerSocket> in_server, mojo::NetworkErrorPtr* out_result) {
  size_t size = sizeof(internal::TCPBoundSocket_StartListening_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TCPBoundSocket_Base::MessageOrdinals::StartListening);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TCPBoundSocket_StartListening_Params_Data* out_params =
      internal::TCPBoundSocket_StartListening_Params_Data::New(builder.buffer());
  out_params->server = in_server.PassMessagePipe().release();
  if (!out_params->server.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid server in {{interface.name}}::{{method.name}}");
  }
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
  
  internal::TCPBoundSocket_StartListening_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TCPBoundSocket_StartListening_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    if (response_params->result.ptr) {
      (*out_result) = mojo::NetworkError::New();
      Deserialize_(response_params->result.ptr, (*out_result).get());
    }
  } while (false);
  return true;
}
bool TCPBoundSocket_SynchronousProxy::Connect(mojo::NetAddressPtr in_remote_address, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, mojo::NetworkErrorPtr* out_result) {
  size_t size = sizeof(internal::TCPBoundSocket_Connect_Params_Data);
  size += in_remote_address.is_null()
              ? 0
              : GetSerializedSize_(*in_remote_address);

  auto msg_name = static_cast<uint32_t>(internal::TCPBoundSocket_Base::MessageOrdinals::Connect);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::TCPBoundSocket_Connect_Params_Data* out_params =
      internal::TCPBoundSocket_Connect_Params_Data::New(builder.buffer());
  {Serialize_(in_remote_address.get(),
               builder.buffer(),
               &out_params->remote_address.ptr);
  }
  if (!out_params->remote_address.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null remote_address in {{interface.name}}::{{method.name}}");
  }
  out_params->send_stream = in_send_stream.release();
  if (!out_params->send_stream.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid send_stream in {{interface.name}}::{{method.name}}");
  }
  out_params->receive_stream = in_receive_stream.release();
  if (!out_params->receive_stream.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid receive_stream in {{interface.name}}::{{method.name}}");
  }
  out_params->client_socket = in_client_socket.PassMessagePipe().release();
  if (!out_params->client_socket.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid client_socket in {{interface.name}}::{{method.name}}");
  }
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
  
  internal::TCPBoundSocket_Connect_ResponseParams_Data*
      response_params = reinterpret_cast<internal::TCPBoundSocket_Connect_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    if (response_params->result.ptr) {
      (*out_result) = mojo::NetworkError::New();
      Deserialize_(response_params->result.ptr, (*out_result).get());
    }
  } while (false);
  return true;
}
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
