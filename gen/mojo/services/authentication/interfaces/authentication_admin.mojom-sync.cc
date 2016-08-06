// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/authentication/interfaces/authentication_admin.mojom-sync.h"

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
#include "mojo/services/authentication/interfaces/authentication_admin.mojom-internal.h"
#include "mojo/services/authentication/interfaces/authentication_admin.mojom-common.h"
namespace authentication {

// --- Interface definitions ---
AuthenticationAdminService_SynchronousProxy::AuthenticationAdminService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool AuthenticationAdminService_SynchronousProxy::GetOAuth2DeviceCode(mojo::Array<mojo::String> in_scopes, mojo::String* out_verification_url, mojo::String* out_device_code, mojo::String* out_user_code, mojo::String* out_error) {
  size_t size = sizeof(internal::AuthenticationAdminService_GetOAuth2DeviceCode_Params_Data);
  size += GetSerializedSize_(in_scopes);

  auto msg_name = static_cast<uint32_t>(internal::AuthenticationAdminService_Base::MessageOrdinals::GetOAuth2DeviceCode);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::AuthenticationAdminService_GetOAuth2DeviceCode_Params_Data* out_params =
      internal::AuthenticationAdminService_GetOAuth2DeviceCode_Params_Data::New(builder.buffer());
  {
    const mojo::internal::ArrayValidateParams scopes_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));mojo::SerializeArray_(&in_scopes, builder.buffer(), &out_params->scopes.ptr,
                          &scopes_validate_params);
  }
  if (!out_params->scopes.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null scopes in {{interface.name}}::{{method.name}}");
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
  
  internal::AuthenticationAdminService_GetOAuth2DeviceCode_ResponseParams_Data*
      response_params = reinterpret_cast<internal::AuthenticationAdminService_GetOAuth2DeviceCode_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    Deserialize_(response_params->verification_url.ptr, &(*out_verification_url));
    Deserialize_(response_params->device_code.ptr, &(*out_device_code));
    Deserialize_(response_params->user_code.ptr, &(*out_user_code));
    Deserialize_(response_params->error.ptr, &(*out_error));
  } while (false);
  return true;
}
bool AuthenticationAdminService_SynchronousProxy::AddAccount(const mojo::String& in_device_code, mojo::String* out_username, mojo::String* out_error) {
  size_t size = sizeof(internal::AuthenticationAdminService_AddAccount_Params_Data);
  size += GetSerializedSize_(in_device_code);

  auto msg_name = static_cast<uint32_t>(internal::AuthenticationAdminService_Base::MessageOrdinals::AddAccount);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::AuthenticationAdminService_AddAccount_Params_Data* out_params =
      internal::AuthenticationAdminService_AddAccount_Params_Data::New(builder.buffer());
  SerializeString_(in_device_code, builder.buffer(), &out_params->device_code.ptr);
  if (!out_params->device_code.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null device_code in {{interface.name}}::{{method.name}}");
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
  
  internal::AuthenticationAdminService_AddAccount_ResponseParams_Data*
      response_params = reinterpret_cast<internal::AuthenticationAdminService_AddAccount_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    Deserialize_(response_params->username.ptr, &(*out_username));
    Deserialize_(response_params->error.ptr, &(*out_error));
  } while (false);
  return true;
}
bool AuthenticationAdminService_SynchronousProxy::GetAllUsers(mojo::Array<mojo::String>* out_usernames, mojo::String* out_error) {
  size_t size = sizeof(internal::AuthenticationAdminService_GetAllUsers_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::AuthenticationAdminService_Base::MessageOrdinals::GetAllUsers);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::AuthenticationAdminService_GetAllUsers_Params_Data* out_params =
      internal::AuthenticationAdminService_GetAllUsers_Params_Data::New(builder.buffer());
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
  
  internal::AuthenticationAdminService_GetAllUsers_ResponseParams_Data*
      response_params = reinterpret_cast<internal::AuthenticationAdminService_GetAllUsers_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    Deserialize_(response_params->usernames.ptr, &(*out_usernames));
    Deserialize_(response_params->error.ptr, &(*out_error));
  } while (false);
  return true;
}
}  // namespace authentication

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
