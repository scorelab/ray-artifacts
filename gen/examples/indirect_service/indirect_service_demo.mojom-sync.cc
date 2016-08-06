// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "examples/indirect_service/indirect_service_demo.mojom-sync.h"

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
#include "examples/indirect_service/indirect_service_demo.mojom-internal.h"
#include "examples/indirect_service/indirect_service_demo.mojom-common.h"
namespace mojo {
namespace examples {

// --- Interface definitions ---
IntegerService_SynchronousProxy::IntegerService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool IntegerService_SynchronousProxy::Increment(int32_t* out_value) {
  size_t size = sizeof(internal::IntegerService_Increment_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::IntegerService_Base::MessageOrdinals::Increment);
  mojo::RequestMessageBuilder builder(msg_name, size);

  internal::IntegerService_Increment_Params_Data* out_params =
      internal::IntegerService_Increment_Params_Data::New(builder.buffer());
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
  
  internal::IntegerService_Increment_ResponseParams_Data*
      response_params = reinterpret_cast<internal::IntegerService_Increment_ResponseParams_Data*>(
          response_msg.mutable_payload());
  response_params->DecodePointersAndHandles(response_msg.mutable_handles());
  
  do {
    // NOTE: The memory backing |response_params| may has be smaller than
    // |sizeof(*response_params)| if the message comes from an older version.
    (*out_value) = response_params->value;
  } while (false);
  return true;
}IndirectIntegerService_SynchronousProxy::IndirectIntegerService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool IndirectIntegerService_SynchronousProxy::Set(mojo::InterfaceHandle<IntegerService> in_service) const  {
  size_t size = sizeof(internal::IndirectIntegerService_Set_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::IndirectIntegerService_Base::MessageOrdinals::Set);
  mojo::MessageBuilder builder(msg_name, size);

  internal::IndirectIntegerService_Set_Params_Data* out_params =
      internal::IndirectIntegerService_Set_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_service.Pass(),
                                        &out_params->service);
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool IndirectIntegerService_SynchronousProxy::Get(mojo::InterfaceRequest<IntegerService> in_service) const  {
  size_t size = sizeof(internal::IndirectIntegerService_Get_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::IndirectIntegerService_Base::MessageOrdinals::Get);
  mojo::MessageBuilder builder(msg_name, size);

  internal::IndirectIntegerService_Get_Params_Data* out_params =
      internal::IndirectIntegerService_Get_Params_Data::New(builder.buffer());
  out_params->service = in_service.PassMessagePipe().release();
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
}  // namespace examples
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
