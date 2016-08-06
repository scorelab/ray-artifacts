// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_GPU_INTERFACES_CONTEXT_PROVIDER_MOJOM_H_
#define MOJO_SERVICES_GPU_INTERFACES_CONTEXT_PROVIDER_MOJOM_H_

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
#include "mojo/services/gpu/interfaces/context_provider.mojom-common.h"
#include "mojo/services/gpu/interfaces/command_buffer.mojom.h"
#include "mojo/services/gpu/interfaces/viewport_parameter_listener.mojom.h"
namespace mojo {

// --- Interface Forward Declarations ---

using ContextProviderPtr = mojo::InterfacePtr<ContextProvider>;


// --- Interface Proxies ---


class ContextProviderProxy
    : public ContextProvider,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ContextProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Create(
      mojo::InterfaceHandle<mojo::ViewportParameterListener> viewport_parameter_listener, const CreateCallback& callback
  ) override;
};


// --- Interface Stubs ---

class ContextProviderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ContextProviderStub();
  ~ContextProviderStub() override;
  void set_sink(ContextProvider* sink) { sink_ = sink; }
  ContextProvider* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ContextProvider* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_GPU_INTERFACES_CONTEXT_PROVIDER_MOJOM_H_
