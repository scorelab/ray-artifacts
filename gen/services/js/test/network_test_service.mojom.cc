// NOTE: This file was generated by the Mojo bindings generator.
#include "services/js/test/network_test_service.mojom.h"

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
namespace js {

// --- Interface definitions ---
class NetworkTestService_GetFileSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkTestService_GetFileSize_ForwardToCallback(
      const NetworkTestService::GetFileSizeCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkTestService::GetFileSizeCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkTestService_GetFileSize_ForwardToCallback);
};
bool NetworkTestService_GetFileSize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NetworkTestService_GetFileSize_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkTestService_GetFileSize_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool p_ok {};
  uint64_t p_size {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_ok = params->ok;
    p_size = params->size;
  } while (false);
  callback_.Run(p_ok, p_size);
  return true;
}

NetworkTestServiceProxy::NetworkTestServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void NetworkTestServiceProxy::GetFileSize(
    const mojo::String& in_url, const GetFileSizeCallback& callback) {
  size_t size = sizeof(internal::NetworkTestService_GetFileSize_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::NetworkTestService_Base::MessageOrdinals::GetFileSize), size);

  internal::NetworkTestService_GetFileSize_Params_Data* params =
      internal::NetworkTestService_GetFileSize_Params_Data::New(builder.buffer());
  SerializeString_(in_url, builder.buffer(), &params->url.ptr);
  if (!params->url.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null url in NetworkTestService.GetFileSize request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NetworkTestService_GetFileSize_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void NetworkTestServiceProxy::Quit(
    ) {
  size_t size = sizeof(internal::NetworkTestService_Quit_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::NetworkTestService_Base::MessageOrdinals::Quit), size);

  internal::NetworkTestService_Quit_Params_Data* params =
      internal::NetworkTestService_Quit_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class NetworkTestService_GetFileSize_ProxyToResponder
    : public NetworkTestService::GetFileSizeCallback::Runnable {
 public:
  ~NetworkTestService_GetFileSize_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "NetworkTestService::GetFileSize(p_url, callback) "
        "was never run.";
  }

  NetworkTestService_GetFileSize_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_ok, uint64_t in_size) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkTestService_GetFileSize_ProxyToResponder);
};

void NetworkTestService_GetFileSize_ProxyToResponder::Run(
    bool in_ok, uint64_t in_size) const {
  size_t size = sizeof(internal::NetworkTestService_GetFileSize_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::NetworkTestService_Base::MessageOrdinals::GetFileSize), size, request_id_);
  internal::NetworkTestService_GetFileSize_ResponseParams_Data* params =
      internal::NetworkTestService_GetFileSize_ResponseParams_Data::New(builder.buffer());
  params->ok = in_ok;
  params->size = in_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

NetworkTestServiceStub::NetworkTestServiceStub()
    : sink_(nullptr),
      control_message_handler_(NetworkTestService::Version_) {
}

NetworkTestServiceStub::~NetworkTestServiceStub() {}

bool NetworkTestServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::NetworkTestService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::NetworkTestService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::NetworkTestService_Base::MessageOrdinals::GetFileSize: {
      break;
    }
    case internal::NetworkTestService_Base::MessageOrdinals::Quit: {
      internal::NetworkTestService_Quit_Params_Data* params =
          reinterpret_cast<internal::NetworkTestService_Quit_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->Quit();
      return true;
    }
  }
  return false;
}

bool NetworkTestServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::NetworkTestService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::NetworkTestService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::NetworkTestService_Base::MessageOrdinals::GetFileSize: {
      internal::NetworkTestService_GetFileSize_Params_Data* params =
          reinterpret_cast<internal::NetworkTestService_GetFileSize_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      NetworkTestService::GetFileSizeCallback::Runnable* runnable =
          new NetworkTestService_GetFileSize_ProxyToResponder(
              message->request_id(), responder);
      NetworkTestService::GetFileSizeCallback callback(runnable);
      
      mojo::String p_url {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        Deserialize_(params->url.ptr, &p_url);
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->GetFileSize(p_url, callback);
      return true;
    }
    case internal::NetworkTestService_Base::MessageOrdinals::Quit: {
      break;
    }
  }
  return false;
}

}  // namespace js