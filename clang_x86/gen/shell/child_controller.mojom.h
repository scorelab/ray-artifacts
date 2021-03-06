// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SHELL_CHILD_CONTROLLER_MOJOM_H_
#define SHELL_CHILD_CONTROLLER_MOJOM_H_

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
#include "shell/child_controller.mojom-common.h"
#include "mojo/public/interfaces/application/application.mojom.h"
namespace shell {

// --- Interface Forward Declarations ---

using ChildControllerPtr = mojo::InterfacePtr<ChildController>;


// --- Interface Proxies ---


class ChildControllerProxy
    : public ChildController,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ChildControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartApp(
      const mojo::String& app_path, mojo::InterfaceRequest<mojo::Application> application_request, const StartAppCallback& callback
  ) override;
  void ExitNow(
      int32_t exit_code
  ) override;
};


// --- Interface Stubs ---

class ChildControllerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ChildControllerStub();
  ~ChildControllerStub() override;
  void set_sink(ChildController* sink) { sink_ = sink; }
  ChildController* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ChildController* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace shell

#endif  // SHELL_CHILD_CONTROLLER_MOJOM_H_
