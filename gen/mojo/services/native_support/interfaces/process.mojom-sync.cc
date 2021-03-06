// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/native_support/interfaces/process.mojom-sync.h"

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
#include "mojo/services/native_support/interfaces/process.mojom-internal.h"
#include "mojo/services/native_support/interfaces/process.mojom-common.h"
namespace native_support {

// --- Interface definitions ---
Process_SynchronousProxy::Process_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool Process_SynchronousProxy::Spawn(mojo::Array<uint8_t> in_path, mojo::Array<mojo::Array<uint8_t> > in_argv, mojo::Array<mojo::Array<uint8_t> > in_envp, mojo::InterfaceHandle<mojo::files::File> in_stdin_file, mojo::InterfaceHandle<mojo::files::File> in_stdout_file, mojo::InterfaceHandle<mojo::files::File> in_stderr_file, mojo::InterfaceRequest<ProcessController> in_process_controller, mojo::files::Error* out_error) {
  size_t size = sizeof(internal::Process_Spawn_Params_Data);
  size += GetSerializedSize_(in_path);
  size += GetSerializedSize_(in_argv);
  size += GetSerializedSize_(in_envp);

  auto msg_name = static_cast<uint32_t>(internal::Process_Base::MessageOrdinals::Spawn);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Process_Spawn_Params_Data* out_params =
      internal::Process_Spawn_Params_Data::New(builder.buffer());
  {
    const mojo::internal::ArrayValidateParams path_validate_params(
      0, false, nullptr);mojo::SerializeArray_(&in_path, builder.buffer(), &out_params->path.ptr,
                          &path_validate_params);
  }
  if (!out_params->path.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null path in {{interface.name}}::{{method.name}}");
  }
  {
    const mojo::internal::ArrayValidateParams argv_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));mojo::SerializeArray_(&in_argv, builder.buffer(), &out_params->argv.ptr,
                          &argv_validate_params);
  }
  {
    const mojo::internal::ArrayValidateParams envp_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));mojo::SerializeArray_(&in_envp, builder.buffer(), &out_params->envp.ptr,
                          &envp_validate_params);
  }
  mojo::internal::InterfaceHandleToData(in_stdin_file.Pass(),
                                        &out_params->stdin_file);
  mojo::internal::InterfaceHandleToData(in_stdout_file.Pass(),
                                        &out_params->stdout_file);
  mojo::internal::InterfaceHandleToData(in_stderr_file.Pass(),
                                        &out_params->stderr_file);
  out_params->process_controller = in_process_controller.PassMessagePipe().release();
  if (!out_params->process_controller.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid process_controller in {{interface.name}}::{{method.name}}");
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
  
  internal::Process_Spawn_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Process_Spawn_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
  } while (false);
  return true;
}
bool Process_SynchronousProxy::SpawnWithTerminal(mojo::Array<uint8_t> in_path, mojo::Array<mojo::Array<uint8_t> > in_argv, mojo::Array<mojo::Array<uint8_t> > in_envp, mojo::InterfaceHandle<mojo::files::File> in_terminal_file, mojo::InterfaceRequest<ProcessController> in_process_controller, mojo::files::Error* out_error) {
  size_t size = sizeof(internal::Process_SpawnWithTerminal_Params_Data);
  size += GetSerializedSize_(in_path);
  size += GetSerializedSize_(in_argv);
  size += GetSerializedSize_(in_envp);

  auto msg_name = static_cast<uint32_t>(internal::Process_Base::MessageOrdinals::SpawnWithTerminal);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Process_SpawnWithTerminal_Params_Data* out_params =
      internal::Process_SpawnWithTerminal_Params_Data::New(builder.buffer());
  {
    const mojo::internal::ArrayValidateParams path_validate_params(
      0, false, nullptr);mojo::SerializeArray_(&in_path, builder.buffer(), &out_params->path.ptr,
                          &path_validate_params);
  }
  if (!out_params->path.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null path in {{interface.name}}::{{method.name}}");
  }
  {
    const mojo::internal::ArrayValidateParams argv_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));mojo::SerializeArray_(&in_argv, builder.buffer(), &out_params->argv.ptr,
                          &argv_validate_params);
  }
  {
    const mojo::internal::ArrayValidateParams envp_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));mojo::SerializeArray_(&in_envp, builder.buffer(), &out_params->envp.ptr,
                          &envp_validate_params);
  }
  mojo::internal::InterfaceHandleToData(in_terminal_file.Pass(),
                                        &out_params->terminal_file);
  if (!out_params->terminal_file.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid terminal_file in {{interface.name}}::{{method.name}}");
  }
  out_params->process_controller = in_process_controller.PassMessagePipe().release();
  if (!out_params->process_controller.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid process_controller in {{interface.name}}::{{method.name}}");
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
  
  internal::Process_SpawnWithTerminal_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Process_SpawnWithTerminal_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
  } while (false);
  return true;
}ProcessController_SynchronousProxy::ProcessController_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool ProcessController_SynchronousProxy::Wait(mojo::files::Error* out_error, int32_t* out_exit_status) {
  size_t size = sizeof(internal::ProcessController_Wait_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::ProcessController_Base::MessageOrdinals::Wait);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::ProcessController_Wait_Params_Data* out_params =
      internal::ProcessController_Wait_Params_Data::New(builder.buffer());
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
  
  internal::ProcessController_Wait_ResponseParams_Data*
      response_params = reinterpret_cast<internal::ProcessController_Wait_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
    (*out_exit_status) = response_params->exit_status;
  } while (false);
  return true;
}
bool ProcessController_SynchronousProxy::Kill(int32_t in_signal, mojo::files::Error* out_error) {
  size_t size = sizeof(internal::ProcessController_Kill_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::ProcessController_Base::MessageOrdinals::Kill);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::ProcessController_Kill_Params_Data* out_params =
      internal::ProcessController_Kill_Params_Data::New(builder.buffer());
  out_params->signal = in_signal;
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
  
  internal::ProcessController_Kill_ResponseParams_Data*
      response_params = reinterpret_cast<internal::ProcessController_Kill_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_error) = static_cast<mojo::files::Error>(response_params->error);
  } while (false);
  return true;
}
}  // namespace native_support

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
