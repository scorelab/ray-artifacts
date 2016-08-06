// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/http_server/interfaces/http_server.mojom.h"

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
namespace http_server {

// --- Interface definitions ---
class HttpServer_SetHandler_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpServer_SetHandler_ForwardToCallback(
      const HttpServer::SetHandlerCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpServer::SetHandlerCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpServer_SetHandler_ForwardToCallback);
};
bool HttpServer_SetHandler_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpServer_SetHandler_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpServer_SetHandler_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool p_success {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_success = params->success;
  } while (false);
  callback_.Run(p_success);
  return true;
}
class HttpServer_GetPort_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpServer_GetPort_ForwardToCallback(
      const HttpServer::GetPortCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpServer::GetPortCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpServer_GetPort_ForwardToCallback);
};
bool HttpServer_GetPort_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpServer_GetPort_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpServer_GetPort_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  uint16_t p_port {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_port = params->port;
  } while (false);
  callback_.Run(p_port);
  return true;
}

HttpServerProxy::HttpServerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HttpServerProxy::SetHandler(
    const mojo::String& in_pattern, mojo::InterfaceHandle<HttpHandler> in_handler, const SetHandlerCallback& callback) {
  size_t size = sizeof(internal::HttpServer_SetHandler_Params_Data);
  size += GetSerializedSize_(in_pattern);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::HttpServer_Base::MessageOrdinals::SetHandler), size);

  internal::HttpServer_SetHandler_Params_Data* params =
      internal::HttpServer_SetHandler_Params_Data::New(builder.buffer());
  SerializeString_(in_pattern, builder.buffer(), &params->pattern.ptr);
  if (!params->pattern.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null pattern in HttpServer.SetHandler request");
  }
  mojo::internal::InterfaceHandleToData(in_handler.Pass(),
                                        &params->handler);
  if (!params->handler.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid handler in HttpServer.SetHandler request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpServer_SetHandler_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void HttpServerProxy::GetPort(
    const GetPortCallback& callback) {
  size_t size = sizeof(internal::HttpServer_GetPort_Params_Data);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::HttpServer_Base::MessageOrdinals::GetPort), size);

  internal::HttpServer_GetPort_Params_Data* params =
      internal::HttpServer_GetPort_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpServer_GetPort_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class HttpServer_SetHandler_ProxyToResponder
    : public HttpServer::SetHandlerCallback::Runnable {
 public:
  ~HttpServer_SetHandler_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpServer::SetHandler(p_pattern, p_handler.Pass(), callback) "
        "was never run.";
  }

  HttpServer_SetHandler_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpServer_SetHandler_ProxyToResponder);
};

void HttpServer_SetHandler_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::HttpServer_SetHandler_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::HttpServer_Base::MessageOrdinals::SetHandler), size, request_id_);
  internal::HttpServer_SetHandler_ResponseParams_Data* params =
      internal::HttpServer_SetHandler_ResponseParams_Data::New(builder.buffer());
  params->success = in_success;
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
class HttpServer_GetPort_ProxyToResponder
    : public HttpServer::GetPortCallback::Runnable {
 public:
  ~HttpServer_GetPort_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpServer::GetPort(callback) "
        "was never run.";
  }

  HttpServer_GetPort_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(uint16_t in_port) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpServer_GetPort_ProxyToResponder);
};

void HttpServer_GetPort_ProxyToResponder::Run(
    uint16_t in_port) const {
  size_t size = sizeof(internal::HttpServer_GetPort_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::HttpServer_Base::MessageOrdinals::GetPort), size, request_id_);
  internal::HttpServer_GetPort_ResponseParams_Data* params =
      internal::HttpServer_GetPort_ResponseParams_Data::New(builder.buffer());
  params->port = in_port;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

HttpServerStub::HttpServerStub()
    : sink_(nullptr),
      control_message_handler_(HttpServer::Version_) {
}

HttpServerStub::~HttpServerStub() {}

bool HttpServerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::HttpServer_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HttpServer_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HttpServer_Base::MessageOrdinals::SetHandler: {
      break;
    }
    case internal::HttpServer_Base::MessageOrdinals::GetPort: {
      break;
    }
  }
  return false;
}

bool HttpServerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::HttpServer_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HttpServer_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HttpServer_Base::MessageOrdinals::SetHandler: {
      internal::HttpServer_SetHandler_Params_Data* params =
          reinterpret_cast<internal::HttpServer_SetHandler_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      HttpServer::SetHandlerCallback::Runnable* runnable =
          new HttpServer_SetHandler_ProxyToResponder(
              message->request_id(), responder);
      HttpServer::SetHandlerCallback callback(runnable);
      
      mojo::String p_pattern {};
      mojo::InterfaceHandle<HttpHandler> p_handler {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        Deserialize_(params->pattern.ptr, &p_pattern);
        mojo::internal::InterfaceDataToHandle(&params->handler, &p_handler);
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->SetHandler(p_pattern, p_handler.Pass(), callback);
      return true;
    }
    case internal::HttpServer_Base::MessageOrdinals::GetPort: {
      internal::HttpServer_GetPort_Params_Data* params =
          reinterpret_cast<internal::HttpServer_GetPort_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      HttpServer::GetPortCallback::Runnable* runnable =
          new HttpServer_GetPort_ProxyToResponder(
              message->request_id(), responder);
      HttpServer::GetPortCallback callback(runnable);
      
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->GetPort(callback);
      return true;
    }
  }
  return false;
}

class HttpHandler_HandleRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpHandler_HandleRequest_ForwardToCallback(
      const HttpHandler::HandleRequestCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpHandler::HandleRequestCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpHandler_HandleRequest_ForwardToCallback);
};
bool HttpHandler_HandleRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpHandler_HandleRequest_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpHandler_HandleRequest_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  http_server::HttpResponsePtr p_response {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (params->response.ptr) {
      p_response = http_server::HttpResponse::New();
      Deserialize_(params->response.ptr, p_response.get());
    }
  } while (false);
  callback_.Run(p_response.Pass());
  return true;
}

HttpHandlerProxy::HttpHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HttpHandlerProxy::HandleRequest(
    http_server::HttpRequestPtr in_request, const HandleRequestCallback& callback) {
  size_t size = sizeof(internal::HttpHandler_HandleRequest_Params_Data);
  size += in_request.is_null()
              ? 0
              : GetSerializedSize_(*in_request);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::HttpHandler_Base::MessageOrdinals::HandleRequest), size);

  internal::HttpHandler_HandleRequest_Params_Data* params =
      internal::HttpHandler_HandleRequest_Params_Data::New(builder.buffer());
  {Serialize_(in_request.get(),
               builder.buffer(),
               &params->request.ptr);
  }
  if (!params->request.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null request in HttpHandler.HandleRequest request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpHandler_HandleRequest_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class HttpHandler_HandleRequest_ProxyToResponder
    : public HttpHandler::HandleRequestCallback::Runnable {
 public:
  ~HttpHandler_HandleRequest_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpHandler::HandleRequest(p_request.Pass(), callback) "
        "was never run.";
  }

  HttpHandler_HandleRequest_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(http_server::HttpResponsePtr in_response) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpHandler_HandleRequest_ProxyToResponder);
};

void HttpHandler_HandleRequest_ProxyToResponder::Run(
    http_server::HttpResponsePtr in_response) const {
  size_t size = sizeof(internal::HttpHandler_HandleRequest_ResponseParams_Data);
  size += in_response.is_null()
              ? 0
              : GetSerializedSize_(*in_response);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::HttpHandler_Base::MessageOrdinals::HandleRequest), size, request_id_);
  internal::HttpHandler_HandleRequest_ResponseParams_Data* params =
      internal::HttpHandler_HandleRequest_ResponseParams_Data::New(builder.buffer());
  {Serialize_(in_response.get(),
               builder.buffer(),
               &params->response.ptr);
  }
  if (!params->response.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null response in HttpHandler.HandleRequest response");
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

HttpHandlerStub::HttpHandlerStub()
    : sink_(nullptr),
      control_message_handler_(HttpHandler::Version_) {
}

HttpHandlerStub::~HttpHandlerStub() {}

bool HttpHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::HttpHandler_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HttpHandler_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HttpHandler_Base::MessageOrdinals::HandleRequest: {
      break;
    }
  }
  return false;
}

bool HttpHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::HttpHandler_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HttpHandler_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HttpHandler_Base::MessageOrdinals::HandleRequest: {
      internal::HttpHandler_HandleRequest_Params_Data* params =
          reinterpret_cast<internal::HttpHandler_HandleRequest_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      HttpHandler::HandleRequestCallback::Runnable* runnable =
          new HttpHandler_HandleRequest_ProxyToResponder(
              message->request_id(), responder);
      HttpHandler::HandleRequestCallback callback(runnable);
      
      http_server::HttpRequestPtr p_request {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (params->request.ptr) {
          p_request = http_server::HttpRequest::New();
          Deserialize_(params->request.ptr, p_request.get());
        }
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->HandleRequest(p_request.Pass(), callback);
      return true;
    }
  }
  return false;
}

}  // namespace http_server