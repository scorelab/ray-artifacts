// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_INCLUDED_UNIONS_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_INCLUDED_UNIONS_MOJOM_INTERNAL_H_

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
namespace test {


class IncludedUnion;

namespace internal {



class IncludedUnion_Data;

#pragma pack(push, 1)



class IncludedUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static IncludedUnion_Data* New(mojo::internal::Buffer* buf);
  IncludedUnion_Data();
  // Do nothing in the destructor since it won't be called.
  ~IncludedUnion_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class IncludedUnion_Tag : uint32_t {

    A,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    int8_t f_a;
    uint64_t unknown;
  };

  uint32_t size;
  IncludedUnion_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(IncludedUnion_Data) == 16,
              "Bad sizeof(IncludedUnion_Data)");
static_assert(sizeof(IncludedUnion_Data::Union_) == 8,
              "Bad sizeof(IncludedUnion_Data::Union_)");



#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_INCLUDED_UNIONS_MOJOM_INTERNAL_H_
