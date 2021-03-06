// NOTE: This file was generated by the Mojo bindings generator.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/services/tracing/interfaces/tracing.mojom-sync.h"

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
#include "mojo/services/tracing/interfaces/tracing.mojom-internal.h"
#include "mojo/services/tracing/interfaces/tracing.mojom-common.h"
namespace tracing {

// --- Interface definitions ---
TraceProvider_SynchronousProxy::TraceProvider_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool TraceProvider_SynchronousProxy::StartTracing(const mojo::String& in_categories, mojo::InterfaceHandle<TraceRecorder> in_recorder) const  {
  size_t size = sizeof(internal::TraceProvider_StartTracing_Params_Data);
  size += GetSerializedSize_(in_categories);

  auto msg_name = static_cast<uint32_t>(internal::TraceProvider_Base::MessageOrdinals::StartTracing);
  mojo::MessageBuilder builder(msg_name, size);

  internal::TraceProvider_StartTracing_Params_Data* out_params =
      internal::TraceProvider_StartTracing_Params_Data::New(builder.buffer());
  SerializeString_(in_categories, builder.buffer(), &out_params->categories.ptr);
  if (!out_params->categories.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null categories in {{interface.name}}::{{method.name}}");
  }
  mojo::internal::InterfaceHandleToData(in_recorder.Pass(),
                                        &out_params->recorder);
  if (!out_params->recorder.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid recorder in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool TraceProvider_SynchronousProxy::StopTracing() const  {
  size_t size = sizeof(internal::TraceProvider_StopTracing_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TraceProvider_Base::MessageOrdinals::StopTracing);
  mojo::MessageBuilder builder(msg_name, size);

  internal::TraceProvider_StopTracing_Params_Data* out_params =
      internal::TraceProvider_StopTracing_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}TraceRecorder_SynchronousProxy::TraceRecorder_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool TraceRecorder_SynchronousProxy::Record(const mojo::String& in_json) const  {
  size_t size = sizeof(internal::TraceRecorder_Record_Params_Data);
  size += GetSerializedSize_(in_json);

  auto msg_name = static_cast<uint32_t>(internal::TraceRecorder_Base::MessageOrdinals::Record);
  mojo::MessageBuilder builder(msg_name, size);

  internal::TraceRecorder_Record_Params_Data* out_params =
      internal::TraceRecorder_Record_Params_Data::New(builder.buffer());
  SerializeString_(in_json, builder.buffer(), &out_params->json.ptr);
  if (!out_params->json.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null json in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}TraceCollector_SynchronousProxy::TraceCollector_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators)
          : connector_(connector), validators_(std::move(validators)) {
}


bool TraceCollector_SynchronousProxy::Start(mojo::ScopedDataPipeProducerHandle in_stream, const mojo::String& in_categories) const  {
  size_t size = sizeof(internal::TraceCollector_Start_Params_Data);
  size += GetSerializedSize_(in_categories);

  auto msg_name = static_cast<uint32_t>(internal::TraceCollector_Base::MessageOrdinals::Start);
  mojo::MessageBuilder builder(msg_name, size);

  internal::TraceCollector_Start_Params_Data* out_params =
      internal::TraceCollector_Start_Params_Data::New(builder.buffer());
  out_params->stream = in_stream.release();
  if (!out_params->stream.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid stream in {{interface.name}}::{{method.name}}");
  }
  SerializeString_(in_categories, builder.buffer(), &out_params->categories.ptr);
  if (!out_params->categories.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null categories in {{interface.name}}::{{method.name}}");
  }
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
bool TraceCollector_SynchronousProxy::StopAndFlush() const  {
  size_t size = sizeof(internal::TraceCollector_StopAndFlush_Params_Data);

  auto msg_name = static_cast<uint32_t>(internal::TraceCollector_Base::MessageOrdinals::StopAndFlush);
  mojo::MessageBuilder builder(msg_name, size);

  internal::TraceCollector_StopAndFlush_Params_Data* out_params =
      internal::TraceCollector_StopAndFlush_Params_Data::New(builder.buffer());
  out_params->EncodePointersAndHandles(builder.message()->mutable_handles());
  
  if (!connector_->Write(builder.message()))
    return false;
  return true;
}
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
