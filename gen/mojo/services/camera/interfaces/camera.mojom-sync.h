// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_CAMERA_INTERFACES_CAMERA_MOJOM_SYNC_H_
#define MOJO_SERVICES_CAMERA_INTERFACES_CAMERA_MOJOM_SYNC_H_

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
#include "mojo/services/camera/interfaces/camera.mojom-internal.h"
#include "mojo/services/camera/interfaces/camera.mojom-common.h"


namespace mojo {

// --- Synchronous interface declaration ---

class CameraRollService_SynchronousProxy;
class CameraRollService_Synchronous
  : public internal::CameraRollService_Base {
 public:
  virtual ~CameraRollService_Synchronous() override {}
  
  using Proxy_ = CameraRollService_SynchronousProxy;
  virtual bool Update(
      )const= 0;
  virtual bool GetCount(
      uint32_t* out_num_photos)= 0;
  virtual bool GetPhoto(
      uint32_t in_index, PhotoPtr* out_photo)= 0;
};

class CameraRollService_SynchronousProxy
    : public CameraRollService_Synchronous {
 public:
  explicit CameraRollService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool Update() const  override;
  bool GetCount(uint32_t* out_num_photos) override;
  bool GetPhoto(uint32_t in_index, PhotoPtr* out_photo) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class CameraService_SynchronousProxy;
class CameraService_Synchronous
  : public internal::CameraService_Base {
 public:
  virtual ~CameraService_Synchronous() override {}
  
  using Proxy_ = CameraService_SynchronousProxy;
  virtual bool GetLatestFrame(
      mojo::ScopedDataPipeConsumerHandle* out_content)= 0;
};

class CameraService_SynchronousProxy
    : public CameraService_Synchronous {
 public:
  explicit CameraService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetLatestFrame(mojo::ScopedDataPipeConsumerHandle* out_content) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_CAMERA_INTERFACES_CAMERA_MOJOM_SYNC_H_
