// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_H_
#define MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_H_

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
#include "mojo/services/navigation/interfaces/navigation.mojom-common.h"
#include "mojo/public/interfaces/network/url_request.mojom.h"
namespace mojo {

// --- Interface Forward Declarations ---

using NavigatorHostPtr = mojo::InterfacePtr<NavigatorHost>;


// --- Interface Proxies ---


class NavigatorHostProxy
    : public NavigatorHost,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit NavigatorHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNavigate(
      Target target, mojo::URLRequestPtr request
  ) override;
  void RequestNavigateHistory(
      int32_t delta
  ) override;
  void DidNavigateLocally(
      const mojo::String& url
  ) override;
};


// --- Interface Stubs ---

class NavigatorHostStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  NavigatorHostStub();
  ~NavigatorHostStub() override;
  void set_sink(NavigatorHost* sink) { sink_ = sink; }
  NavigatorHost* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  NavigatorHost* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_H_