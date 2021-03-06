// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/authentication/interfaces/authentication.mojom-sync.h"

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
#include "mojo/services/authentication/interfaces/authentication.mojom-internal.h"
#include "mojo/services/authentication/interfaces/authentication.mojom-common.h"
namespace authentication {

// --- Interface definitions ---
AuthenticationService_SynchronousProxy::AuthenticationService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool AuthenticationService_SynchronousProxy::SelectAccount(bool in_return_last_selected, mojo::String* out_username, mojo::String* out_error) {
  size_t size = sizeof(internal::AuthenticationService_SelectAccount_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::AuthenticationService_Base::MessageOrdinals::SelectAccount);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::AuthenticationService_SelectAccount_Params_Data* out_params =
      internal::AuthenticationService_SelectAccount_Params_Data::New(builder.buffer());
  out_params->return_last_selected = in_return_last_selected;
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
  
  internal::AuthenticationService_SelectAccount_ResponseParams_Data*
      response_params = reinterpret_cast<internal::AuthenticationService_SelectAccount_ResponseParams_Data*>(
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
bool AuthenticationService_SynchronousProxy::GetOAuth2Token(const mojo::String& in_username, mojo::Array<mojo::String> in_scopes, mojo::String* out_token, mojo::String* out_error) {
  size_t size = sizeof(internal::AuthenticationService_GetOAuth2Token_Params_Data);
  size += GetSerializedSize_(in_username);
  size += GetSerializedSize_(in_scopes);

  auto msg_name = static_cast<uint32_t>(internal::AuthenticationService_Base::MessageOrdinals::GetOAuth2Token);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::AuthenticationService_GetOAuth2Token_Params_Data* out_params =
      internal::AuthenticationService_GetOAuth2Token_Params_Data::New(builder.buffer());
  SerializeString_(in_username, builder.buffer(), &out_params->username.ptr);
  if (!out_params->username.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null username in {{interface.name}}::{{method.name}}");
  }
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
  
  internal::AuthenticationService_GetOAuth2Token_ResponseParams_Data*
      response_params = reinterpret_cast<internal::AuthenticationService_GetOAuth2Token_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    Deserialize_(response_params->token.ptr, &(*out_token));
    Deserialize_(response_params->error.ptr, &(*out_error));
  } while (false);
  return true;
}
bool AuthenticationService_SynchronousProxy::ClearOAuth2Token(const mojo::String& in_token) const  {
  size_t size = sizeof(internal::AuthenticationService_ClearOAuth2Token_Params_Data);
  size += GetSerializedSize_(in_token);

  auto msg_name = static_cast<uint32_t>(internal::AuthenticationService_Base::MessageOrdinals::ClearOAuth2Token);
  mojo::MessageBuilder builder(msg_name, size);

  internal::AuthenticationService_ClearOAuth2Token_Params_Data* out_params =
      internal::AuthenticationService_ClearOAuth2Token_Params_Data::New(builder.buffer());
  SerializeString_(in_token, builder.buffer(), &out_params->token.ptr);
  if (!out_params->token.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null token in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
}  // namespace authentication

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
