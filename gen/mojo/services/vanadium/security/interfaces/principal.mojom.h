// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_VANADIUM_SECURITY_INTERFACES_PRINCIPAL_MOJOM_H_
#define MOJO_SERVICES_VANADIUM_SECURITY_INTERFACES_PRINCIPAL_MOJOM_H_

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
#include "mojo/services/vanadium/security/interfaces/principal.mojom-common.h"
namespace vanadium {

// --- Interface Forward Declarations ---

using PrincipalServicePtr = mojo::InterfacePtr<PrincipalService>;


// --- Interface Proxies ---


class PrincipalServiceProxy
    : public PrincipalService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PrincipalServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Login(
      const LoginCallback& callback
  ) override;
  void Logout(
      
  ) override;
  void GetUser(
      AppInstanceNamePtr app, const GetUserCallback& callback
  ) override;
  void SetUser(
      UserPtr user, const SetUserCallback& callback
  ) override;
  void GetLoggedInUsers(
      const GetLoggedInUsersCallback& callback
  ) override;
};


// --- Interface Stubs ---

class PrincipalServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PrincipalServiceStub();
  ~PrincipalServiceStub() override;
  void set_sink(PrincipalService* sink) { sink_ = sink; }
  PrincipalService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PrincipalService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace vanadium

#endif  // MOJO_SERVICES_VANADIUM_SECURITY_INTERFACES_PRINCIPAL_MOJOM_H_
