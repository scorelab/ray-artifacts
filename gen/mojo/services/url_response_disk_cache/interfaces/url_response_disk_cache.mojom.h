// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_URL_RESPONSE_DISK_CACHE_INTERFACES_URL_RESPONSE_DISK_CACHE_MOJOM_H_
#define MOJO_SERVICES_URL_RESPONSE_DISK_CACHE_INTERFACES_URL_RESPONSE_DISK_CACHE_MOJOM_H_

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
#include "mojo/services/url_response_disk_cache/interfaces/url_response_disk_cache.mojom-common.h"
#include "mojo/public/interfaces/network/url_response.mojom.h"
namespace mojo {

// --- Interface Forward Declarations ---

using URLResponseDiskCachePtr = mojo::InterfacePtr<URLResponseDiskCache>;


// --- Interface Proxies ---


class URLResponseDiskCacheProxy
    : public URLResponseDiskCache,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit URLResponseDiskCacheProxy(mojo::MessageReceiverWithResponder* receiver);
  void Get(
      const mojo::String& url, const GetCallback& callback
  ) override;
  void Validate(
      const mojo::String& url
  ) override;
  void Update(
      mojo::URLResponsePtr response
  ) override;
  void UpdateAndGet(
      mojo::URLResponsePtr response, const UpdateAndGetCallback& callback
  ) override;
  void UpdateAndGetExtracted(
      mojo::URLResponsePtr response, const UpdateAndGetExtractedCallback& callback
  ) override;
};


// --- Interface Stubs ---

class URLResponseDiskCacheStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  URLResponseDiskCacheStub();
  ~URLResponseDiskCacheStub() override;
  void set_sink(URLResponseDiskCache* sink) { sink_ = sink; }
  URLResponseDiskCache* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  URLResponseDiskCache* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_URL_RESPONSE_DISK_CACHE_INTERFACES_URL_RESPONSE_DISK_CACHE_MOJOM_H_
