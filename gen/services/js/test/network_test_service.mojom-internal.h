// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_JS_TEST_NETWORK_TEST_SERVICE_MOJOM_INTERNAL_H_
#define SERVICES_JS_TEST_NETWORK_TEST_SERVICE_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace js {



namespace internal {




#pragma pack(push, 1)



class NetworkTestService_GetFileSize_Params_Data {
 public:
  static NetworkTestService_GetFileSize_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  NetworkTestService_GetFileSize_Params_Data();
  ~NetworkTestService_GetFileSize_Params_Data() = delete;
};
static_assert(sizeof(NetworkTestService_GetFileSize_Params_Data) == 16,
              "Bad sizeof(NetworkTestService_GetFileSize_Params_Data)");

class NetworkTestService_GetFileSize_ResponseParams_Data {
 public:
  static NetworkTestService_GetFileSize_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t ok : 1;
  uint8_t pad0_[7];
  uint64_t size;

 private:
  NetworkTestService_GetFileSize_ResponseParams_Data();
  ~NetworkTestService_GetFileSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkTestService_GetFileSize_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkTestService_GetFileSize_ResponseParams_Data)");


class NetworkTestService_Quit_Params_Data {
 public:
  static NetworkTestService_Quit_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  NetworkTestService_Quit_Params_Data();
  ~NetworkTestService_Quit_Params_Data() = delete;
};
static_assert(sizeof(NetworkTestService_Quit_Params_Data) == 8,
              "Bad sizeof(NetworkTestService_Quit_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace js

#endif  // SERVICES_JS_TEST_NETWORK_TEST_SERVICE_MOJOM_INTERNAL_H_
