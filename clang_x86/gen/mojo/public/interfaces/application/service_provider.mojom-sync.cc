// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/public/interfaces/application/service_provider.mojom-sync.h"

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
#include "mojo/public/interfaces/application/service_provider.mojom-internal.h"
#include "mojo/public/interfaces/application/service_provider.mojom-common.h"
namespace mojo {

// --- Interface definitions ---
ServiceProvider_SynchronousProxy::ServiceProvider_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool ServiceProvider_SynchronousProxy::ConnectToService(const mojo::String& in_interface_name, mojo::ScopedMessagePipeHandle in_pipe) const  {
  size_t size = sizeof(internal::ServiceProvider_ConnectToService_Params_Data);
  size += GetSerializedSize_(in_interface_name);

  auto msg_name = static_cast<uint32_t>(internal::ServiceProvider_Base::MessageOrdinals::ConnectToService);
  mojo::MessageBuilder builder(msg_name, size);

  internal::ServiceProvider_ConnectToService_Params_Data* out_params =
      internal::ServiceProvider_ConnectToService_Params_Data::New(builder.buffer());
  SerializeString_(in_interface_name, builder.buffer(), &out_params->interface_name.ptr);
  if (!out_params->interface_name.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null interface_name in {{interface.name}}::{{method.name}}");
  }
  out_params->pipe = in_pipe.release();
  if (!out_params->pipe.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid pipe in {{interface.name}}::{{method.name}}");
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