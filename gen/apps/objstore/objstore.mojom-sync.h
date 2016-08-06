// NOTE: This file was generated by the Mojo bindings generator.
#ifndef APPS_OBJSTORE_OBJSTORE_MOJOM_SYNC_H_
#define APPS_OBJSTORE_OBJSTORE_MOJOM_SYNC_H_

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
#include "apps/objstore/objstore.mojom-internal.h"
#include "apps/objstore/objstore.mojom-common.h"


namespace mojo {
namespace apps {

// --- Synchronous interface declaration ---

class ObjStore_SynchronousProxy;
class ObjStore_Synchronous
  : public internal::ObjStore_Base {
 public:
  virtual ~ObjStore_Synchronous() override {}
  
  using Proxy_ = ObjStore_SynchronousProxy;
  virtual bool BuildObject(
      int64_t in_object_id, int64_t in_size, mojo::ScopedSharedBufferHandle* out_buffer)= 0;
};

class ObjStore_SynchronousProxy
    : public ObjStore_Synchronous {
 public:
  explicit ObjStore_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool BuildObject(int64_t in_object_id, int64_t in_size, mojo::ScopedSharedBufferHandle* out_buffer) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace apps
}  // namespace mojo

#endif  // APPS_OBJSTORE_OBJSTORE_MOJOM_SYNC_H_