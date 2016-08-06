// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/camera/interfaces/camera.mojom-sync.h"

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
#include "mojo/services/camera/interfaces/camera.mojom-internal.h"
#include "mojo/services/camera/interfaces/camera.mojom-common.h"
namespace mojo {

// --- Interface definitions ---
CameraRollService_SynchronousProxy::CameraRollService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool CameraRollService_SynchronousProxy::Update() const  {
  size_t size = sizeof(internal::CameraRollService_Update_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::CameraRollService_Base::MessageOrdinals::Update);
  mojo::MessageBuilder builder(msg_name, size);

  internal::CameraRollService_Update_Params_Data* out_params =
      internal::CameraRollService_Update_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool CameraRollService_SynchronousProxy::GetCount(uint32_t* out_num_photos) {
  size_t size = sizeof(internal::CameraRollService_GetCount_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::CameraRollService_Base::MessageOrdinals::GetCount);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::CameraRollService_GetCount_Params_Data* out_params =
      internal::CameraRollService_GetCount_Params_Data::New(builder.buffer());
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
  
  internal::CameraRollService_GetCount_ResponseParams_Data*
      response_params = reinterpret_cast<internal::CameraRollService_GetCount_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_num_photos) = response_params->num_photos;
  } while (false);
  return true;
}
bool CameraRollService_SynchronousProxy::GetPhoto(uint32_t in_index, PhotoPtr* out_photo) {
  size_t size = sizeof(internal::CameraRollService_GetPhoto_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::CameraRollService_Base::MessageOrdinals::GetPhoto);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::CameraRollService_GetPhoto_Params_Data* out_params =
      internal::CameraRollService_GetPhoto_Params_Data::New(builder.buffer());
  out_params->index = in_index;
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
  
  internal::CameraRollService_GetPhoto_ResponseParams_Data*
      response_params = reinterpret_cast<internal::CameraRollService_GetPhoto_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    if (response_params->photo.ptr) {
      (*out_photo) = Photo::New();
      Deserialize_(response_params->photo.ptr, (*out_photo).get());
    }
  } while (false);
  return true;
}CameraService_SynchronousProxy::CameraService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool CameraService_SynchronousProxy::GetLatestFrame(mojo::ScopedDataPipeConsumerHandle* out_content) {
  size_t size = sizeof(internal::CameraService_GetLatestFrame_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::CameraService_Base::MessageOrdinals::GetLatestFrame);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::CameraService_GetLatestFrame_Params_Data* out_params =
      internal::CameraService_GetLatestFrame_Params_Data::New(builder.buffer());
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
  
  internal::CameraService_GetLatestFrame_ResponseParams_Data*
      response_params = reinterpret_cast<internal::CameraService_GetLatestFrame_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_content).reset(mojo::internal::FetchAndReset(&response_params->content));
  } while (false);
  return true;
}
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
