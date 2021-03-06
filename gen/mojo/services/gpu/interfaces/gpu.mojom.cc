// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/gpu/interfaces/gpu.mojom.h"

#include <math.h>
#include <ostream>

#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/message_validation.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/logging.h"
namespace mojo {

// --- Interface definitions ---

GpuProxy::GpuProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void GpuProxy::CreateOffscreenGLES2Context(
    mojo::InterfaceRequest<mojo::CommandBuffer> in_gles2_client) {
  size_t size = sizeof(internal::Gpu_CreateOffscreenGLES2Context_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::Gpu_Base::MessageOrdinals::CreateOffscreenGLES2Context), size);

  internal::Gpu_CreateOffscreenGLES2Context_Params_Data* params =
      internal::Gpu_CreateOffscreenGLES2Context_Params_Data::New(builder.buffer());
  params->gles2_client = in_gles2_client.PassMessagePipe().release();
  if (!params->gles2_client.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid gles2_client in Gpu.CreateOffscreenGLES2Context request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

GpuStub::GpuStub()
    : sink_(nullptr),
      control_message_handler_(Gpu::Version_) {
}

GpuStub::~GpuStub() {}

bool GpuStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::Gpu_Base::MessageOrdinals method_ordinal =
      static_cast<internal::Gpu_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::Gpu_Base::MessageOrdinals::CreateOffscreenGLES2Context: {
      internal::Gpu_CreateOffscreenGLES2Context_Params_Data* params =
          reinterpret_cast<internal::Gpu_CreateOffscreenGLES2Context_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      mojo::InterfaceRequest<mojo::CommandBuffer> p_gles2_client {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_gles2_client.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->gles2_client)));
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->CreateOffscreenGLES2Context(p_gles2_client.Pass());
      return true;
    }
  }
  return false;
}

bool GpuStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::Gpu_Base::MessageOrdinals method_ordinal =
      static_cast<internal::Gpu_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::Gpu_Base::MessageOrdinals::CreateOffscreenGLES2Context: {
      break;
    }
  }
  return false;
}

}  // namespace mojo
