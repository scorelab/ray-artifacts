// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/vsync/interfaces/vsync.mojom.h"

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
namespace vsync {

// --- Interface definitions ---
class VSyncProvider_AwaitVSync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VSyncProvider_AwaitVSync_ForwardToCallback(
      const VSyncProvider::AwaitVSyncCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VSyncProvider::AwaitVSyncCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(VSyncProvider_AwaitVSync_ForwardToCallback);
};
bool VSyncProvider_AwaitVSync_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VSyncProvider_AwaitVSync_ResponseParams_Data* params =
      reinterpret_cast<internal::VSyncProvider_AwaitVSync_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  int64_t p_time_stamp {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_time_stamp = params->time_stamp;
  } while (false);
  callback_.Run(p_time_stamp);
  return true;
}

VSyncProviderProxy::VSyncProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void VSyncProviderProxy::AwaitVSync(
    const AwaitVSyncCallback& callback) {
  size_t size = sizeof(internal::VSyncProvider_AwaitVSync_Params_Data);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::VSyncProvider_Base::MessageOrdinals::AwaitVSync), size);

  internal::VSyncProvider_AwaitVSync_Params_Data* params =
      internal::VSyncProvider_AwaitVSync_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VSyncProvider_AwaitVSync_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class VSyncProvider_AwaitVSync_ProxyToResponder
    : public VSyncProvider::AwaitVSyncCallback::Runnable {
 public:
  ~VSyncProvider_AwaitVSync_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "VSyncProvider::AwaitVSync(callback) "
        "was never run.";
  }

  VSyncProvider_AwaitVSync_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(int64_t in_time_stamp) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(VSyncProvider_AwaitVSync_ProxyToResponder);
};

void VSyncProvider_AwaitVSync_ProxyToResponder::Run(
    int64_t in_time_stamp) const {
  size_t size = sizeof(internal::VSyncProvider_AwaitVSync_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::VSyncProvider_Base::MessageOrdinals::AwaitVSync), size, request_id_);
  internal::VSyncProvider_AwaitVSync_ResponseParams_Data* params =
      internal::VSyncProvider_AwaitVSync_ResponseParams_Data::New(builder.buffer());
  params->time_stamp = in_time_stamp;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

VSyncProviderStub::VSyncProviderStub()
    : sink_(nullptr),
      control_message_handler_(VSyncProvider::Version_) {
}

VSyncProviderStub::~VSyncProviderStub() {}

bool VSyncProviderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::VSyncProvider_Base::MessageOrdinals method_ordinal =
      static_cast<internal::VSyncProvider_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::VSyncProvider_Base::MessageOrdinals::AwaitVSync: {
      break;
    }
  }
  return false;
}

bool VSyncProviderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::VSyncProvider_Base::MessageOrdinals method_ordinal =
      static_cast<internal::VSyncProvider_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::VSyncProvider_Base::MessageOrdinals::AwaitVSync: {
      internal::VSyncProvider_AwaitVSync_Params_Data* params =
          reinterpret_cast<internal::VSyncProvider_AwaitVSync_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      VSyncProvider::AwaitVSyncCallback::Runnable* runnable =
          new VSyncProvider_AwaitVSync_ProxyToResponder(
              message->request_id(), responder);
      VSyncProvider::AwaitVSyncCallback callback(runnable);
      
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->AwaitVSync(callback);
      return true;
    }
  }
  return false;
}

}  // namespace vsync
