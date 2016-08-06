// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/sensors/interfaces/sensors.mojom-sync.h"

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
#include "mojo/services/sensors/interfaces/sensors.mojom-internal.h"
#include "mojo/services/sensors/interfaces/sensors.mojom-common.h"
namespace sensors {

// --- Interface definitions ---
SensorListener_SynchronousProxy::SensorListener_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool SensorListener_SynchronousProxy::OnAccuracyChanged(int32_t in_accuracy) const  {
  size_t size = sizeof(internal::SensorListener_OnAccuracyChanged_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::SensorListener_Base::MessageOrdinals::OnAccuracyChanged);
  mojo::MessageBuilder builder(msg_name, size);

  internal::SensorListener_OnAccuracyChanged_Params_Data* out_params =
      internal::SensorListener_OnAccuracyChanged_Params_Data::New(builder.buffer());
  out_params->accuracy = in_accuracy;
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool SensorListener_SynchronousProxy::OnSensorChanged(SensorDataPtr in_data) const  {
  size_t size = sizeof(internal::SensorListener_OnSensorChanged_Params_Data);
  size += in_data.is_null()
              ? 0
              : GetSerializedSize_(*in_data);

  auto msg_name = static_cast<uint32_t>(internal::SensorListener_Base::MessageOrdinals::OnSensorChanged);
  mojo::MessageBuilder builder(msg_name, size);

  internal::SensorListener_OnSensorChanged_Params_Data* out_params =
      internal::SensorListener_OnSensorChanged_Params_Data::New(builder.buffer());
  {Serialize_(in_data.get(),
               builder.buffer(),
               &out_params->data.ptr);
  }
  if (!out_params->data.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null data in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}SensorService_SynchronousProxy::SensorService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool SensorService_SynchronousProxy::AddListener(SensorType in_type, mojo::InterfaceHandle<SensorListener> in_listener) const  {
  size_t size = sizeof(internal::SensorService_AddListener_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::SensorService_Base::MessageOrdinals::AddListener);
  mojo::MessageBuilder builder(msg_name, size);

  internal::SensorService_AddListener_Params_Data* out_params =
      internal::SensorService_AddListener_Params_Data::New(builder.buffer());
  out_params->type =
    static_cast<int32_t>(in_type);
  mojo::internal::InterfaceHandleToData(in_listener.Pass(),
                                        &out_params->listener);
  if (!out_params->listener.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid listener in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
}  // namespace sensors

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
