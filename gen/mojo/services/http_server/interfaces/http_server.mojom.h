// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_H_
#define MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_H_

#include <iosfwd>
#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/http_server/interfaces/http_server.mojom-common.h"
#include "mojo/services/http_server/interfaces/http_request.mojom.h"
#include "mojo/services/http_server/interfaces/http_response.mojom.h"
namespace http_server {

// --- Interface Forward Declarations ---

using HttpServerPtr = mojo::InterfacePtr<HttpServer>;

using HttpHandlerPtr = mojo::InterfacePtr<HttpHandler>;


// --- Interface Proxies ---


class HttpServerProxy
    : public HttpServer,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HttpServerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHandler(
      const mojo::String& pattern, mojo::InterfaceHandle<HttpHandler> handler, const SetHandlerCallback& callback
  ) override;
  void GetPort(
      const GetPortCallback& callback
  ) override;
};


class HttpHandlerProxy
    : public HttpHandler,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HttpHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void HandleRequest(
      http_server::HttpRequestPtr request, const HandleRequestCallback& callback
  ) override;
};


// --- Interface Stubs ---

class HttpServerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HttpServerStub();
  ~HttpServerStub() override;
  void set_sink(HttpServer* sink) { sink_ = sink; }
  HttpServer* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HttpServer* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class HttpHandlerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HttpHandlerStub();
  ~HttpHandlerStub() override;
  void set_sink(HttpHandler* sink) { sink_ = sink; }
  HttpHandler* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HttpHandler* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace http_server

#endif  // MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_H_
