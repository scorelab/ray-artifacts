// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_TRACING_INTERFACES_TRACE_PROVIDER_REGISTRY_MOJOM_SYNC_H_
#define MOJO_SERVICES_TRACING_INTERFACES_TRACE_PROVIDER_REGISTRY_MOJOM_SYNC_H_

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
#include "mojo/services/tracing/interfaces/trace_provider_registry.mojom-internal.h"
#include "mojo/services/tracing/interfaces/trace_provider_registry.mojom-common.h"
#include "mojo/services/tracing/interfaces/tracing.mojom.h"


namespace tracing {

// --- Synchronous interface declaration ---

class TraceProviderRegistry_SynchronousProxy;
class TraceProviderRegistry_Synchronous
  : public internal::TraceProviderRegistry_Base {
 public:
  virtual ~TraceProviderRegistry_Synchronous() override {}
  
  using Proxy_ = TraceProviderRegistry_SynchronousProxy;
  virtual bool RegisterTraceProvider(
      mojo::InterfaceHandle<tracing::TraceProvider> in_trace_provider)const= 0;
};

class TraceProviderRegistry_SynchronousProxy
    : public TraceProviderRegistry_Synchronous {
 public:
  explicit TraceProviderRegistry_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool RegisterTraceProvider(mojo::InterfaceHandle<tracing::TraceProvider> in_trace_provider) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace tracing

#endif  // MOJO_SERVICES_TRACING_INTERFACES_TRACE_PROVIDER_REGISTRY_MOJOM_SYNC_H_
