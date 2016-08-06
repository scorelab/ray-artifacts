// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_JS_TEST_PINGPONG_SERVICE_MOJOM_SYNC_H_
#define SERVICES_JS_TEST_PINGPONG_SERVICE_MOJOM_SYNC_H_

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
#include "services/js/test/pingpong_service.mojom-internal.h"
#include "services/js/test/pingpong_service.mojom-common.h"


namespace js {

// --- Synchronous interface declaration ---

class PingPongService_SynchronousProxy;
class PingPongService_Synchronous
  : public internal::PingPongService_Base {
 public:
  virtual ~PingPongService_Synchronous() override {}
  
  using Proxy_ = PingPongService_SynchronousProxy;
  virtual bool SetClient(
      mojo::InterfaceHandle<PingPongClient> in_client)const= 0;
  virtual bool Ping(
      uint16_t in_ping_value)const= 0;
  virtual bool PingTargetURL(
      const mojo::String& in_url, uint16_t in_count, bool* out_ok)= 0;
  virtual bool PingTargetService(
      mojo::InterfaceHandle<PingPongService> in_service, uint16_t in_count, bool* out_ok)= 0;
  virtual bool GetPingPongService(
      mojo::InterfaceRequest<PingPongService> in_service)const= 0;
  virtual bool Quit(
      )const= 0;
};

class PingPongService_SynchronousProxy
    : public PingPongService_Synchronous {
 public:
  explicit PingPongService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool SetClient(mojo::InterfaceHandle<PingPongClient> in_client) const  override;
  bool Ping(uint16_t in_ping_value) const  override;
  bool PingTargetURL(const mojo::String& in_url, uint16_t in_count, bool* out_ok) override;
  bool PingTargetService(mojo::InterfaceHandle<PingPongService> in_service, uint16_t in_count, bool* out_ok) override;
  bool GetPingPongService(mojo::InterfaceRequest<PingPongService> in_service) const  override;
  bool Quit() const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class PingPongClient_SynchronousProxy;
class PingPongClient_Synchronous
  : public internal::PingPongClient_Base {
 public:
  virtual ~PingPongClient_Synchronous() override {}
  
  using Proxy_ = PingPongClient_SynchronousProxy;
  virtual bool Pong(
      uint16_t in_pong_value)const= 0;
};

class PingPongClient_SynchronousProxy
    : public PingPongClient_Synchronous {
 public:
  explicit PingPongClient_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool Pong(uint16_t in_pong_value) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace js

#endif  // SERVICES_JS_TEST_PINGPONG_SERVICE_MOJOM_SYNC_H_
