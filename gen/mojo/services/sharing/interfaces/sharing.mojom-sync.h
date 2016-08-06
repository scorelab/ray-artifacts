// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_SHARING_INTERFACES_SHARING_MOJOM_SYNC_H_
#define MOJO_SERVICES_SHARING_INTERFACES_SHARING_MOJOM_SYNC_H_

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
#include "mojo/services/sharing/interfaces/sharing.mojom-internal.h"
#include "mojo/services/sharing/interfaces/sharing.mojom-common.h"


namespace mojo {

// --- Synchronous interface declaration ---

class SharingService_SynchronousProxy;
class SharingService_Synchronous
  : public internal::SharingService_Base {
 public:
  virtual ~SharingService_Synchronous() override {}
  
  using Proxy_ = SharingService_SynchronousProxy;
  virtual bool ShareText(
      const mojo::String& in_text)const= 0;
};

class SharingService_SynchronousProxy
    : public SharingService_Synchronous {
 public:
  explicit SharingService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool ShareText(const mojo::String& in_text) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_SHARING_INTERFACES_SHARING_MOJOM_SYNC_H_
