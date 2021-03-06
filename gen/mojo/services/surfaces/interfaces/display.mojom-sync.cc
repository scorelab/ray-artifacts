// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/surfaces/interfaces/display.mojom-sync.h"

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
#include "mojo/services/surfaces/interfaces/display.mojom-internal.h"
#include "mojo/services/surfaces/interfaces/display.mojom-common.h"
namespace mojo {

// --- Interface definitions ---
Display_SynchronousProxy::Display_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool Display_SynchronousProxy::SubmitFrame(mojo::FramePtr in_frame) {
  size_t size = sizeof(internal::Display_SubmitFrame_Params_Data);
  size += in_frame.is_null()
              ? 0
              : GetSerializedSize_(*in_frame);

  auto msg_name = static_cast<uint32_t>(internal::Display_Base::MessageOrdinals::SubmitFrame);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::Display_SubmitFrame_Params_Data* out_params =
      internal::Display_SubmitFrame_Params_Data::New(builder.buffer());
  {Serialize_(in_frame.get(),
               builder.buffer(),
               &out_params->frame.ptr);
  }
  if (!out_params->frame.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null frame in {{interface.name}}::{{method.name}}");
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
  
  internal::Display_SubmitFrame_ResponseParams_Data*
      response_params = reinterpret_cast<internal::Display_SubmitFrame_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
  } while (false);
  return true;
}DisplayFactory_SynchronousProxy::DisplayFactory_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool DisplayFactory_SynchronousProxy::Create(mojo::InterfaceHandle<mojo::ContextProvider> in_context_provider, mojo::InterfaceHandle<mojo::ResourceReturner> in_returner, mojo::InterfaceRequest<Display> in_display_request) const  {
  size_t size = sizeof(internal::DisplayFactory_Create_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::DisplayFactory_Base::MessageOrdinals::Create);
  mojo::MessageBuilder builder(msg_name, size);

  internal::DisplayFactory_Create_Params_Data* out_params =
      internal::DisplayFactory_Create_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_context_provider.Pass(),
                                        &out_params->context_provider);
  if (!out_params->context_provider.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid context_provider in {{interface.name}}::{{method.name}}");
  }
  mojo::internal::InterfaceHandleToData(in_returner.Pass(),
                                        &out_params->returner);
  out_params->display_request = in_display_request.PassMessagePipe().release();
  if (!out_params->display_request.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid display_request in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
