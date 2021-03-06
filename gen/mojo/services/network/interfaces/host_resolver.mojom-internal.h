// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_HOST_RESOLVER_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_HOST_RESOLVER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/public/interfaces/network/network_error.mojom-internal.h"
#include "mojo/services/network/interfaces/net_address.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {



namespace internal {




#pragma pack(push, 1)



class HostResolver_GetHostAddresses_Params_Data {
 public:
  static HostResolver_GetHostAddresses_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer host;
  int32_t family;
  uint8_t padfinal_[4];

 private:
  HostResolver_GetHostAddresses_Params_Data();
  ~HostResolver_GetHostAddresses_Params_Data() = delete;
};
static_assert(sizeof(HostResolver_GetHostAddresses_Params_Data) == 24,
              "Bad sizeof(HostResolver_GetHostAddresses_Params_Data)");

class HostResolver_GetHostAddresses_ResponseParams_Data {
 public:
  static HostResolver_GetHostAddresses_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::ArrayPointer<mojo::internal::NetAddress_Data*> addresses;

 private:
  HostResolver_GetHostAddresses_ResponseParams_Data();
  ~HostResolver_GetHostAddresses_ResponseParams_Data() = delete;
};
static_assert(sizeof(HostResolver_GetHostAddresses_ResponseParams_Data) == 24,
              "Bad sizeof(HostResolver_GetHostAddresses_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_HOST_RESOLVER_MOJOM_INTERNAL_H_
