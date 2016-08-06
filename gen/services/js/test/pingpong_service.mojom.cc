// NOTE: This file was generated by the Mojo bindings generator.
#include "services/js/test/pingpong_service.mojom.h"

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
class PingPongService_PingTargetURL_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PingPongService_PingTargetURL_ForwardToCallback(
      const PingPongService::PingTargetURLCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PingPongService::PingTargetURLCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PingPongService_PingTargetURL_ForwardToCallback);
};
bool PingPongService_PingTargetURL_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PingPongService_PingTargetURL_ResponseParams_Data* params =
      reinterpret_cast<internal::PingPongService_PingTargetURL_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool p_ok {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_ok = params->ok;
  } while (false);
  callback_.Run(p_ok);
  return true;
}
class PingPongService_PingTargetService_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PingPongService_PingTargetService_ForwardToCallback(
      const PingPongService::PingTargetServiceCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PingPongService::PingTargetServiceCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PingPongService_PingTargetService_ForwardToCallback);
};
bool PingPongService_PingTargetService_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PingPongService_PingTargetService_ResponseParams_Data* params =
      reinterpret_cast<internal::PingPongService_PingTargetService_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool p_ok {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_ok = params->ok;
  } while (false);
  callback_.Run(p_ok);
  return true;
}

PingPongServiceProxy::PingPongServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PingPongServiceProxy::SetClient(
    mojo::InterfaceHandle<PingPongClient> in_client) {
  size_t size = sizeof(internal::PingPongService_SetClient_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::SetClient), size);

  internal::PingPongService_SetClient_Params_Data* params =
      internal::PingPongService_SetClient_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_client.Pass(),
                                        &params->client);
  if (!params->client.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid client in PingPongService.SetClient request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PingPongServiceProxy::Ping(
    uint16_t in_ping_value) {
  size_t size = sizeof(internal::PingPongService_Ping_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::Ping), size);

  internal::PingPongService_Ping_Params_Data* params =
      internal::PingPongService_Ping_Params_Data::New(builder.buffer());
  params->ping_value = in_ping_value;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PingPongServiceProxy::PingTargetURL(
    const mojo::String& in_url, uint16_t in_count, const PingTargetURLCallback& callback) {
  size_t size = sizeof(internal::PingPongService_PingTargetURL_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::PingTargetURL), size);

  internal::PingPongService_PingTargetURL_Params_Data* params =
      internal::PingPongService_PingTargetURL_Params_Data::New(builder.buffer());
  SerializeString_(in_url, builder.buffer(), &params->url.ptr);
  if (!params->url.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null url in PingPongService.PingTargetURL request");
  }
  params->count = in_count;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PingPongService_PingTargetURL_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PingPongServiceProxy::PingTargetService(
    mojo::InterfaceHandle<PingPongService> in_service, uint16_t in_count, const PingTargetServiceCallback& callback) {
  size_t size = sizeof(internal::PingPongService_PingTargetService_Params_Data);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::PingTargetService), size);

  internal::PingPongService_PingTargetService_Params_Data* params =
      internal::PingPongService_PingTargetService_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_service.Pass(),
                                        &params->service);
  if (!params->service.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid service in PingPongService.PingTargetService request");
  }
  params->count = in_count;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PingPongService_PingTargetService_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PingPongServiceProxy::GetPingPongService(
    mojo::InterfaceRequest<PingPongService> in_service) {
  size_t size = sizeof(internal::PingPongService_GetPingPongService_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::GetPingPongService), size);

  internal::PingPongService_GetPingPongService_Params_Data* params =
      internal::PingPongService_GetPingPongService_Params_Data::New(builder.buffer());
  params->service = in_service.PassMessagePipe().release();
  if (!params->service.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid service in PingPongService.GetPingPongService request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PingPongServiceProxy::Quit(
    ) {
  size_t size = sizeof(internal::PingPongService_Quit_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::Quit), size);

  internal::PingPongService_Quit_Params_Data* params =
      internal::PingPongService_Quit_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class PingPongService_PingTargetURL_ProxyToResponder
    : public PingPongService::PingTargetURLCallback::Runnable {
 public:
  ~PingPongService_PingTargetURL_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PingPongService::PingTargetURL(p_url, p_count, callback) "
        "was never run.";
  }

  PingPongService_PingTargetURL_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_ok) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PingPongService_PingTargetURL_ProxyToResponder);
};

void PingPongService_PingTargetURL_ProxyToResponder::Run(
    bool in_ok) const {
  size_t size = sizeof(internal::PingPongService_PingTargetURL_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::PingTargetURL), size, request_id_);
  internal::PingPongService_PingTargetURL_ResponseParams_Data* params =
      internal::PingPongService_PingTargetURL_ResponseParams_Data::New(builder.buffer());
  params->ok = in_ok;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class PingPongService_PingTargetService_ProxyToResponder
    : public PingPongService::PingTargetServiceCallback::Runnable {
 public:
  ~PingPongService_PingTargetService_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PingPongService::PingTargetService(p_service.Pass(), p_count, callback) "
        "was never run.";
  }

  PingPongService_PingTargetService_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_ok) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PingPongService_PingTargetService_ProxyToResponder);
};

void PingPongService_PingTargetService_ProxyToResponder::Run(
    bool in_ok) const {
  size_t size = sizeof(internal::PingPongService_PingTargetService_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::PingPongService_Base::MessageOrdinals::PingTargetService), size, request_id_);
  internal::PingPongService_PingTargetService_ResponseParams_Data* params =
      internal::PingPongService_PingTargetService_ResponseParams_Data::New(builder.buffer());
  params->ok = in_ok;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

PingPongServiceStub::PingPongServiceStub()
    : sink_(nullptr),
      control_message_handler_(PingPongService::Version_) {
}

PingPongServiceStub::~PingPongServiceStub() {}

bool PingPongServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::PingPongService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::PingPongService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::PingPongService_Base::MessageOrdinals::SetClient: {
      internal::PingPongService_SetClient_Params_Data* params =
          reinterpret_cast<internal::PingPongService_SetClient_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      mojo::InterfaceHandle<PingPongClient> p_client {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToHandle(&params->client, &p_client);
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->SetClient(p_client.Pass());
      return true;
    }
    case internal::PingPongService_Base::MessageOrdinals::Ping: {
      internal::PingPongService_Ping_Params_Data* params =
          reinterpret_cast<internal::PingPongService_Ping_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      uint16_t p_ping_value {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_ping_value = params->ping_value;
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->Ping(p_ping_value);
      return true;
    }
    case internal::PingPongService_Base::MessageOrdinals::PingTargetURL: {
      break;
    }
    case internal::PingPongService_Base::MessageOrdinals::PingTargetService: {
      break;
    }
    case internal::PingPongService_Base::MessageOrdinals::GetPingPongService: {
      internal::PingPongService_GetPingPongService_Params_Data* params =
          reinterpret_cast<internal::PingPongService_GetPingPongService_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      mojo::InterfaceRequest<PingPongService> p_service {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_service.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->service)));
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->GetPingPongService(p_service.Pass());
      return true;
    }
    case internal::PingPongService_Base::MessageOrdinals::Quit: {
      internal::PingPongService_Quit_Params_Data* params =
          reinterpret_cast<internal::PingPongService_Quit_Params_Data*>(
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

bool PingPongServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::PingPongService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::PingPongService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::PingPongService_Base::MessageOrdinals::SetClient: {
      break;
    }
    case internal::PingPongService_Base::MessageOrdinals::Ping: {
      break;
    }
    case internal::PingPongService_Base::MessageOrdinals::PingTargetURL: {
      internal::PingPongService_PingTargetURL_Params_Data* params =
          reinterpret_cast<internal::PingPongService_PingTargetURL_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      PingPongService::PingTargetURLCallback::Runnable* runnable =
          new PingPongService_PingTargetURL_ProxyToResponder(
              message->request_id(), responder);
      PingPongService::PingTargetURLCallback callback(runnable);
      
      mojo::String p_url {};
      uint16_t p_count {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        Deserialize_(params->url.ptr, &p_url);
        p_count = params->count;
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->PingTargetURL(p_url, p_count, callback);
      return true;
    }
    case internal::PingPongService_Base::MessageOrdinals::PingTargetService: {
      internal::PingPongService_PingTargetService_Params_Data* params =
          reinterpret_cast<internal::PingPongService_PingTargetService_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      PingPongService::PingTargetServiceCallback::Runnable* runnable =
          new PingPongService_PingTargetService_ProxyToResponder(
              message->request_id(), responder);
      PingPongService::PingTargetServiceCallback callback(runnable);
      
      mojo::InterfaceHandle<PingPongService> p_service {};
      uint16_t p_count {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToHandle(&params->service, &p_service);
        p_count = params->count;
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->PingTargetService(p_service.Pass(), p_count, callback);
      return true;
    }
    case internal::PingPongService_Base::MessageOrdinals::GetPingPongService: {
      break;
    }
    case internal::PingPongService_Base::MessageOrdinals::Quit: {
      break;
    }
  }
  return false;
}


PingPongClientProxy::PingPongClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PingPongClientProxy::Pong(
    uint16_t in_pong_value) {
  size_t size = sizeof(internal::PingPongClient_Pong_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::PingPongClient_Base::MessageOrdinals::Pong), size);

  internal::PingPongClient_Pong_Params_Data* params =
      internal::PingPongClient_Pong_Params_Data::New(builder.buffer());
  params->pong_value = in_pong_value;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

PingPongClientStub::PingPongClientStub()
    : sink_(nullptr),
      control_message_handler_(PingPongClient::Version_) {
}

PingPongClientStub::~PingPongClientStub() {}

bool PingPongClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::PingPongClient_Base::MessageOrdinals method_ordinal =
      static_cast<internal::PingPongClient_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::PingPongClient_Base::MessageOrdinals::Pong: {
      internal::PingPongClient_Pong_Params_Data* params =
          reinterpret_cast<internal::PingPongClient_Pong_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      uint16_t p_pong_value {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_pong_value = params->pong_value;
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->Pong(p_pong_value);
      return true;
    }
  }
  return false;
}

bool PingPongClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::PingPongClient_Base::MessageOrdinals method_ordinal =
      static_cast<internal::PingPongClient_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::PingPongClient_Base::MessageOrdinals::Pong: {
      break;
    }
  }
  return false;
}

}  // namespace js
