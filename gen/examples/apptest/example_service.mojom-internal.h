// NOTE: This file was generated by the Mojo bindings generator.
#ifndef EXAMPLES_APPTEST_EXAMPLE_SERVICE_MOJOM_INTERNAL_H_
#define EXAMPLES_APPTEST_EXAMPLE_SERVICE_MOJOM_INTERNAL_H_

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
namespace mojo {



namespace internal {




#pragma pack(push, 1)



class ExampleService_Ping_Params_Data {
 public:
  static ExampleService_Ping_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint16_t ping_value;
  uint8_t padfinal_[6];

 private:
  ExampleService_Ping_Params_Data();
  ~ExampleService_Ping_Params_Data() = delete;
};
static_assert(sizeof(ExampleService_Ping_Params_Data) == 16,
              "Bad sizeof(ExampleService_Ping_Params_Data)");

class ExampleService_Ping_ResponseParams_Data {
 public:
  static ExampleService_Ping_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint16_t pong_value;
  uint8_t padfinal_[6];

 private:
  ExampleService_Ping_ResponseParams_Data();
  ~ExampleService_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(ExampleService_Ping_ResponseParams_Data) == 16,
              "Bad sizeof(ExampleService_Ping_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // EXAMPLES_APPTEST_EXAMPLE_SERVICE_MOJOM_INTERNAL_H_
