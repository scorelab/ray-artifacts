// NOTE: This file was generated by the Mojo bindings generator.
#ifndef EXAMPLES_HELLO_MOJO_HELLO_MOJO_MOJOM_INTERNAL_H_
#define EXAMPLES_HELLO_MOJO_HELLO_MOJO_MOJOM_INTERNAL_H_

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
namespace examples {



namespace internal {




#pragma pack(push, 1)



class HelloMojo_Say_Params_Data {
 public:
  static HelloMojo_Say_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer request;

 private:
  HelloMojo_Say_Params_Data();
  ~HelloMojo_Say_Params_Data() = delete;
};
static_assert(sizeof(HelloMojo_Say_Params_Data) == 16,
              "Bad sizeof(HelloMojo_Say_Params_Data)");

class HelloMojo_Say_ResponseParams_Data {
 public:
  static HelloMojo_Say_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer response;

 private:
  HelloMojo_Say_ResponseParams_Data();
  ~HelloMojo_Say_ResponseParams_Data() = delete;
};
static_assert(sizeof(HelloMojo_Say_ResponseParams_Data) == 16,
              "Bad sizeof(HelloMojo_Say_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace examples

#endif  // EXAMPLES_HELLO_MOJO_HELLO_MOJO_MOJOM_INTERNAL_H_
