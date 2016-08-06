// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_LOCATION_INTERFACES_LOCATION_SERVICE_MOJOM_H_
#define MOJO_SERVICES_LOCATION_INTERFACES_LOCATION_SERVICE_MOJOM_H_

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
#include "mojo/services/location/interfaces/location_service.mojom-common.h"
#include "mojo/services/location/interfaces/location.mojom.h"
namespace mojo {

// --- Interface Forward Declarations ---

using LocationServicePtr = mojo::InterfacePtr<LocationService>;


// --- Interface Proxies ---


class LocationServiceProxy
    : public LocationService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit LocationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetNextLocation(
      LocationService::UpdatePriority priority, const GetNextLocationCallback& callback
  ) override;
};


// --- Interface Stubs ---

class LocationServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  LocationServiceStub();
  ~LocationServiceStub() override;
  void set_sink(LocationService* sink) { sink_ = sink; }
  LocationService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  LocationService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_LOCATION_INTERFACES_LOCATION_SERVICE_MOJOM_H_
