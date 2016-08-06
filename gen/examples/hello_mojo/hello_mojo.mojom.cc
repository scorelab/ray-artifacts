// NOTE: This file was generated by the Mojo bindings generator.
#include "examples/hello_mojo/hello_mojo.mojom.h"

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
namespace examples {

// --- Interface definitions ---
class HelloMojo_Say_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HelloMojo_Say_ForwardToCallback(
      const HelloMojo::SayCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HelloMojo::SayCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HelloMojo_Say_ForwardToCallback);
};
bool HelloMojo_Say_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HelloMojo_Say_ResponseParams_Data* params =
      reinterpret_cast<internal::HelloMojo_Say_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  mojo::String p_response {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    Deserialize_(params->response.ptr, &p_response);
  } while (false);
  callback_.Run(p_response);
  return true;
}

HelloMojoProxy::HelloMojoProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HelloMojoProxy::Say(
    const mojo::String& in_request, const SayCallback& callback) {
  size_t size = sizeof(internal::HelloMojo_Say_Params_Data);
  size += GetSerializedSize_(in_request);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::HelloMojo_Base::MessageOrdinals::Say), size);

  internal::HelloMojo_Say_Params_Data* params =
      internal::HelloMojo_Say_Params_Data::New(builder.buffer());
  SerializeString_(in_request, builder.buffer(), &params->request.ptr);
  if (!params->request.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null request in HelloMojo.Say request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HelloMojo_Say_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class HelloMojo_Say_ProxyToResponder
    : public HelloMojo::SayCallback::Runnable {
 public:
  ~HelloMojo_Say_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HelloMojo::Say(p_request, callback) "
        "was never run.";
  }

  HelloMojo_Say_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(const mojo::String& in_response) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HelloMojo_Say_ProxyToResponder);
};

void HelloMojo_Say_ProxyToResponder::Run(
    const mojo::String& in_response) const {
  size_t size = sizeof(internal::HelloMojo_Say_ResponseParams_Data);
  size += GetSerializedSize_(in_response);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::HelloMojo_Base::MessageOrdinals::Say), size, request_id_);
  internal::HelloMojo_Say_ResponseParams_Data* params =
      internal::HelloMojo_Say_ResponseParams_Data::New(builder.buffer());
  SerializeString_(in_response, builder.buffer(), &params->response.ptr);
  if (!params->response.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null response in HelloMojo.Say response");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

HelloMojoStub::HelloMojoStub()
    : sink_(nullptr),
      control_message_handler_(HelloMojo::Version_) {
}

HelloMojoStub::~HelloMojoStub() {}

bool HelloMojoStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::HelloMojo_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HelloMojo_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HelloMojo_Base::MessageOrdinals::Say: {
      break;
    }
  }
  return false;
}

bool HelloMojoStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::HelloMojo_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HelloMojo_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HelloMojo_Base::MessageOrdinals::Say: {
      internal::HelloMojo_Say_Params_Data* params =
          reinterpret_cast<internal::HelloMojo_Say_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      HelloMojo::SayCallback::Runnable* runnable =
          new HelloMojo_Say_ProxyToResponder(
              message->request_id(), responder);
      HelloMojo::SayCallback callback(runnable);
      
      mojo::String p_request {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        Deserialize_(params->request.ptr, &p_request);
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->Say(p_request, callback);
      return true;
    }
  }
  return false;
}

}  // namespace examples