// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/terminal/interfaces/terminal.mojom-sync.h"

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
#include "mojo/services/terminal/interfaces/terminal.mojom-internal.h"
#include "mojo/services/terminal/interfaces/terminal.mojom-common.h"
namespace mojo {
namespace terminal {

// --- Interface definitions ---
Terminal_SynchronousProxy::Terminal_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool Terminal_SynchronousProxy::Connect(mojo::InterfaceRequest<mojo::files::File> in_terminal_file, bool in_force, mojo::files::Error* out_error) {
  size_t size = sizeof(internal::Terminal_Connect_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::Terminal_Base::MessageOrdinals::Connect);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Terminal_Connect_Params_Data* out_params =
      internal::Terminal_Connect_Params_Data::New(builder.buffer());
  out_params->terminal_file = in_terminal_file.PassMessagePipe().release();
  if (!out_params->terminal_file.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid terminal_file in {{interface.name}}::{{method.name}}");
  }
  out_params->force = in_force;
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
  
  internal::Terminal_Connect_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Terminal_Connect_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
  } while (false);
  return true;
}
bool Terminal_SynchronousProxy::ConnectToClient(mojo::InterfaceHandle<mojo::terminal::TerminalClient> in_terminal_client, bool in_force, mojo::files::Error* out_error) {
  size_t size = sizeof(internal::Terminal_ConnectToClient_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::Terminal_Base::MessageOrdinals::ConnectToClient);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Terminal_ConnectToClient_Params_Data* out_params =
      internal::Terminal_ConnectToClient_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_terminal_client.Pass(),
                                        &out_params->terminal_client);
  if (!out_params->terminal_client.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid terminal_client in {{interface.name}}::{{method.name}}");
  }
  out_params->force = in_force;
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
  
  internal::Terminal_ConnectToClient_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Terminal_ConnectToClient_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
  } while (false);
  return true;
}
bool Terminal_SynchronousProxy::GetSize(mojo::files::Error* out_error, uint32_t* out_rows, uint32_t* out_columns) {
  size_t size = sizeof(internal::Terminal_GetSize_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::Terminal_Base::MessageOrdinals::GetSize);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Terminal_GetSize_Params_Data* out_params =
      internal::Terminal_GetSize_Params_Data::New(builder.buffer());
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
  
  internal::Terminal_GetSize_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Terminal_GetSize_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
    (*out_rows) = response_params->rows;
    (*out_columns) = response_params->columns;
  } while (false);
  return true;
}
bool Terminal_SynchronousProxy::SetSize(uint32_t in_rows, uint32_t in_columns, bool in_reset, mojo::files::Error* out_error, uint32_t* out_rows, uint32_t* out_columns) {
  size_t size = sizeof(internal::Terminal_SetSize_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::Terminal_Base::MessageOrdinals::SetSize);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Terminal_SetSize_Params_Data* out_params =
      internal::Terminal_SetSize_Params_Data::New(builder.buffer());
  out_params->rows = in_rows;
  out_params->columns = in_columns;
  out_params->reset = in_reset;
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
  
  internal::Terminal_SetSize_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Terminal_SetSize_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
    (*out_rows) = response_params->rows;
    (*out_columns) = response_params->columns;
  } while (false);
  return true;
}
}  // namespace terminal
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
