// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_SYNC_H_
#define MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_SYNC_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/lib/synchronous_connector.h"
#include "mojo/services/http_server/interfaces/http_server.mojom-internal.h"
#include "mojo/services/http_server/interfaces/http_server.mojom-common.h"
#include "mojo/services/http_server/interfaces/http_request.mojom.h"
#include "mojo/services/http_server/interfaces/http_response.mojom.h"


namespace http_server {

// --- Synchronous interface declaration ---

class HttpServer_SynchronousProxy;
class HttpServer_Synchronous
  : public internal::HttpServer_Base {
 public:
  virtual ~HttpServer_Synchronous() override {}
  
  using Proxy_ = HttpServer_SynchronousProxy;
  virtual bool SetHandler(
      const mojo::String& in_pattern, mojo::InterfaceHandle<HttpHandler> in_handler, bool* out_success)= 0;
  virtual bool GetPort(
      uint16_t* out_port)= 0;
};

class HttpServer_SynchronousProxy
    : public HttpServer_Synchronous {
 public:
  explicit HttpServer_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool SetHandler(const mojo::String& in_pattern, mojo::InterfaceHandle<HttpHandler> in_handler, bool* out_success) override;
  bool GetPort(uint16_t* out_port) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class HttpHandler_SynchronousProxy;
class HttpHandler_Synchronous
  : public internal::HttpHandler_Base {
 public:
  virtual ~HttpHandler_Synchronous() override {}
  
  using Proxy_ = HttpHandler_SynchronousProxy;
  virtual bool HandleRequest(
      http_server::HttpRequestPtr in_request, http_server::HttpResponsePtr* out_response)= 0;
};

class HttpHandler_SynchronousProxy
    : public HttpHandler_Synchronous {
 public:
  explicit HttpHandler_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool HandleRequest(http_server::HttpRequestPtr in_request, http_server::HttpResponsePtr* out_response) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace http_server

#endif  // MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_SYNC_H_
