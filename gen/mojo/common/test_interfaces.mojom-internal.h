// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_COMMON_TEST_INTERFACES_MOJOM_INTERNAL_H_
#define MOJO_COMMON_TEST_INTERFACES_MOJOM_INTERNAL_H_

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
namespace common {
namespace tests {



namespace internal {




#pragma pack(push, 1)



class Dummy_Foo_Params_Data {
 public:
  static Dummy_Foo_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  Dummy_Foo_Params_Data();
  ~Dummy_Foo_Params_Data() = delete;
};
static_assert(sizeof(Dummy_Foo_Params_Data) == 8,
              "Bad sizeof(Dummy_Foo_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace tests
}  // namespace common
}  // namespace mojo

#endif  // MOJO_COMMON_TEST_INTERFACES_MOJOM_INTERNAL_H_