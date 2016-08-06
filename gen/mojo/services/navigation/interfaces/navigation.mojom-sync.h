// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_SYNC_H_
#define MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_SYNC_H_

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
#include "mojo/services/navigation/interfaces/navigation.mojom-internal.h"
#include "mojo/services/navigation/interfaces/navigation.mojom-common.h"
#include "mojo/public/interfaces/network/url_request.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class NavigatorHost_SynchronousProxy;
class NavigatorHost_Synchronous
  : public internal::NavigatorHost_Base {
 public:
  virtual ~NavigatorHost_Synchronous() override {}
  
  using Proxy_ = NavigatorHost_SynchronousProxy;
  virtual bool RequestNavigate(
      Target in_target, mojo::URLRequestPtr in_request)const= 0;
  virtual bool RequestNavigateHistory(
      int32_t in_delta)const= 0;
  virtual bool DidNavigateLocally(
      const mojo::String& in_url)const= 0;
};

class NavigatorHost_SynchronousProxy
    : public NavigatorHost_Synchronous {
 public:
  explicit NavigatorHost_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool RequestNavigate(Target in_target, mojo::URLRequestPtr in_request) const  override;
  bool RequestNavigateHistory(int32_t in_delta) const  override;
  bool DidNavigateLocally(const mojo::String& in_url) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_SYNC_H_
