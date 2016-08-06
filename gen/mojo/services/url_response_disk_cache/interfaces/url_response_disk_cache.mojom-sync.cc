// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/url_response_disk_cache/interfaces/url_response_disk_cache.mojom-sync.h"

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
#include "mojo/services/url_response_disk_cache/interfaces/url_response_disk_cache.mojom-internal.h"
#include "mojo/services/url_response_disk_cache/interfaces/url_response_disk_cache.mojom-common.h"
namespace mojo {

// --- Interface definitions ---
URLResponseDiskCache_SynchronousProxy::URLResponseDiskCache_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool URLResponseDiskCache_SynchronousProxy::Get(const mojo::String& in_url, mojo::URLResponsePtr* out_response, mojo::Array<uint8_t>* out_file_path, mojo::Array<uint8_t>* out_cache_dir_path) {
  size_t size = sizeof(internal::URLResponseDiskCache_Get_Params_Data);
  size += GetSerializedSize_(in_url);

  auto msg_name = static_cast<uint32_t>(internal::URLResponseDiskCache_Base::MessageOrdinals::Get);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::URLResponseDiskCache_Get_Params_Data* out_params =
      internal::URLResponseDiskCache_Get_Params_Data::New(builder.buffer());
  SerializeString_(in_url, builder.buffer(), &out_params->url.ptr);
  if (!out_params->url.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null url in {{interface.name}}::{{method.name}}");
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
  
  internal::URLResponseDiskCache_Get_ResponseParams_Data*
      response_params = reinterpret_cast<internal::URLResponseDiskCache_Get_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    if (response_params->response.ptr) {
      (*out_response) = mojo::URLResponse::New();
      Deserialize_(response_params->response.ptr, (*out_response).get());
    }
    Deserialize_(response_params->file_path.ptr, &(*out_file_path));
    Deserialize_(response_params->cache_dir_path.ptr, &(*out_cache_dir_path));
  } while (false);
  return true;
}
bool URLResponseDiskCache_SynchronousProxy::Validate(const mojo::String& in_url) const  {
  size_t size = sizeof(internal::URLResponseDiskCache_Validate_Params_Data);
  size += GetSerializedSize_(in_url);

  auto msg_name = static_cast<uint32_t>(internal::URLResponseDiskCache_Base::MessageOrdinals::Validate);
  mojo::MessageBuilder builder(msg_name, size);

  internal::URLResponseDiskCache_Validate_Params_Data* out_params =
      internal::URLResponseDiskCache_Validate_Params_Data::New(builder.buffer());
  SerializeString_(in_url, builder.buffer(), &out_params->url.ptr);
  if (!out_params->url.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null url in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool URLResponseDiskCache_SynchronousProxy::Update(mojo::URLResponsePtr in_response) const  {
  size_t size = sizeof(internal::URLResponseDiskCache_Update_Params_Data);
  size += in_response.is_null()
              ? 0
              : GetSerializedSize_(*in_response);

  auto msg_name = static_cast<uint32_t>(internal::URLResponseDiskCache_Base::MessageOrdinals::Update);
  mojo::MessageBuilder builder(msg_name, size);

  internal::URLResponseDiskCache_Update_Params_Data* out_params =
      internal::URLResponseDiskCache_Update_Params_Data::New(builder.buffer());
  {Serialize_(in_response.get(),
               builder.buffer(),
               &out_params->response.ptr);
  }
  if (!out_params->response.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null response in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool URLResponseDiskCache_SynchronousProxy::UpdateAndGet(mojo::URLResponsePtr in_response, mojo::Array<uint8_t>* out_file_path, mojo::Array<uint8_t>* out_cache_dir_path) {
  size_t size = sizeof(internal::URLResponseDiskCache_UpdateAndGet_Params_Data);
  size += in_response.is_null()
              ? 0
              : GetSerializedSize_(*in_response);

  auto msg_name = static_cast<uint32_t>(internal::URLResponseDiskCache_Base::MessageOrdinals::UpdateAndGet);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::URLResponseDiskCache_UpdateAndGet_Params_Data* out_params =
      internal::URLResponseDiskCache_UpdateAndGet_Params_Data::New(builder.buffer());
  {Serialize_(in_response.get(),
               builder.buffer(),
               &out_params->response.ptr);
  }
  if (!out_params->response.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null response in {{interface.name}}::{{method.name}}");
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
  
  internal::URLResponseDiskCache_UpdateAndGet_ResponseParams_Data*
      response_params = reinterpret_cast<internal::URLResponseDiskCache_UpdateAndGet_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    Deserialize_(response_params->file_path.ptr, &(*out_file_path));
    Deserialize_(response_params->cache_dir_path.ptr, &(*out_cache_dir_path));
  } while (false);
  return true;
}
bool URLResponseDiskCache_SynchronousProxy::UpdateAndGetExtracted(mojo::URLResponsePtr in_response, mojo::Array<uint8_t>* out_extracted_dir_path, mojo::Array<uint8_t>* out_cache_dir_path) {
  size_t size = sizeof(internal::URLResponseDiskCache_UpdateAndGetExtracted_Params_Data);
  size += in_response.is_null()
              ? 0
              : GetSerializedSize_(*in_response);

  auto msg_name = static_cast<uint32_t>(internal::URLResponseDiskCache_Base::MessageOrdinals::UpdateAndGetExtracted);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::URLResponseDiskCache_UpdateAndGetExtracted_Params_Data* out_params =
      internal::URLResponseDiskCache_UpdateAndGetExtracted_Params_Data::New(builder.buffer());
  {Serialize_(in_response.get(),
               builder.buffer(),
               &out_params->response.ptr);
  }
  if (!out_params->response.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null response in {{interface.name}}::{{method.name}}");
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
  
  internal::URLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Data*
      response_params = reinterpret_cast<internal::URLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    Deserialize_(response_params->extracted_dir_path.ptr, &(*out_extracted_dir_path));
    Deserialize_(response_params->cache_dir_path.ptr, &(*out_cache_dir_path));
  } while (false);
  return true;
}
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
