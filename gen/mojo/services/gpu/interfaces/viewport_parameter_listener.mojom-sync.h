// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_GPU_INTERFACES_VIEWPORT_PARAMETER_LISTENER_MOJOM_SYNC_H_
#define MOJO_SERVICES_GPU_INTERFACES_VIEWPORT_PARAMETER_LISTENER_MOJOM_SYNC_H_

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
#include "mojo/services/gpu/interfaces/viewport_parameter_listener.mojom-internal.h"
#include "mojo/services/gpu/interfaces/viewport_parameter_listener.mojom-common.h"


namespace mojo {

// --- Synchronous interface declaration ---

class ViewportParameterListener_SynchronousProxy;
class ViewportParameterListener_Synchronous
  : public internal::ViewportParameterListener_Base {
 public:
  virtual ~ViewportParameterListener_Synchronous() override {}
  
  using Proxy_ = ViewportParameterListener_SynchronousProxy;
  virtual bool OnVSyncParametersUpdated(
      int64_t in_timebase, int64_t in_interval)const= 0;
};

class ViewportParameterListener_SynchronousProxy
    : public ViewportParameterListener_Synchronous {
 public:
  explicit ViewportParameterListener_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool OnVSyncParametersUpdated(int64_t in_timebase, int64_t in_interval) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_GPU_INTERFACES_VIEWPORT_PARAMETER_LISTENER_MOJOM_SYNC_H_
