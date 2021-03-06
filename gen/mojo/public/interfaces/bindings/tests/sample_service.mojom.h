// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-common.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom.h"
namespace sample {

// --- Interface Forward Declarations ---

using ServicePtr = mojo::InterfacePtr<Service>;

using PortPtr = mojo::InterfacePtr<Port>;


// --- Interface Proxies ---


class ServiceProxy
    : public Service,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Frobinate(
      FooPtr foo, Service::BazOptions baz, mojo::InterfaceHandle<Port> port, const FrobinateCallback& callback
  ) override;
  void GetPort(
      mojo::InterfaceRequest<Port> port
  ) override;
};


class PortProxy
    : public Port,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PortProxy(mojo::MessageReceiverWithResponder* receiver);
  void PostMessage(
      const mojo::String& message_text, mojo::InterfaceHandle<Port> port
  ) override;
};


// --- Interface Stubs ---

class ServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ServiceStub();
  ~ServiceStub() override;
  void set_sink(Service* sink) { sink_ = sink; }
  Service* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Service* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class PortStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PortStub();
  ~PortStub() override;
  void set_sink(Port* sink) { sink_ = sink; }
  Port* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Port* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_H_
