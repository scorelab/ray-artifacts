// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_DEVICE_INFO_INTERFACES_DEVICE_INFO_MOJOM_SYNC_H_
#define MOJO_SERVICES_DEVICE_INFO_INTERFACES_DEVICE_INFO_MOJOM_SYNC_H_

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
#include "mojo/services/device_info/interfaces/device_info.mojom-internal.h"
#include "mojo/services/device_info/interfaces/device_info.mojom-common.h"


namespace mojo {

// --- Synchronous interface declaration ---

class DeviceInfo_SynchronousProxy;
class DeviceInfo_Synchronous
  : public internal::DeviceInfo_Base {
 public:
  virtual ~DeviceInfo_Synchronous() override {}
  
  using Proxy_ = DeviceInfo_SynchronousProxy;
  virtual bool GetDeviceType(
      DeviceInfo::DeviceType* out_device_type)= 0;
};

class DeviceInfo_SynchronousProxy
    : public DeviceInfo_Synchronous {
 public:
  explicit DeviceInfo_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetDeviceType(DeviceInfo::DeviceType* out_device_type) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_DEVICE_INFO_INTERFACES_DEVICE_INFO_MOJOM_SYNC_H_
