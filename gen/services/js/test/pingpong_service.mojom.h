// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_JS_TEST_PINGPONG_SERVICE_MOJOM_H_
#define SERVICES_JS_TEST_PINGPONG_SERVICE_MOJOM_H_

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
#include "services/js/test/pingpong_service.mojom-common.h"
namespace js {

// --- Interface Forward Declarations ---

using PingPongServicePtr = mojo::InterfacePtr<PingPongService>;

using PingPongClientPtr = mojo::InterfacePtr<PingPongClient>;


// --- Interface Proxies ---


class PingPongServiceProxy
    : public PingPongService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PingPongServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(
      mojo::InterfaceHandle<PingPongClient> client
  ) override;
  void Ping(
      uint16_t ping_value
  ) override;
  void PingTargetURL(
      const mojo::String& url, uint16_t count, const PingTargetURLCallback& callback
  ) override;
  void PingTargetService(
      mojo::InterfaceHandle<PingPongService> service, uint16_t count, const PingTargetServiceCallback& callback
  ) override;
  void GetPingPongService(
      mojo::InterfaceRequest<PingPongService> service
  ) override;
  void Quit(
      
  ) override;
};


class PingPongClientProxy
    : public PingPongClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PingPongClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void Pong(
      uint16_t pong_value
  ) override;
};


// --- Interface Stubs ---

class PingPongServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PingPongServiceStub();
  ~PingPongServiceStub() override;
  void set_sink(PingPongService* sink) { sink_ = sink; }
  PingPongService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PingPongService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class PingPongClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PingPongClientStub();
  ~PingPongClientStub() override;
  void set_sink(PingPongClient* sink) { sink_ = sink; }
  PingPongClient* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PingPongClient* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace js

#endif  // SERVICES_JS_TEST_PINGPONG_SERVICE_MOJOM_H_
