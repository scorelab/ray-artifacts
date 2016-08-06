// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_AUTHENTICATION_AUTHENTICATION_IMPL_DB_MOJOM_INTERNAL_H_
#define SERVICES_AUTHENTICATION_AUTHENTICATION_IMPL_DB_MOJOM_INTERNAL_H_

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
namespace authentication {

class Db;


namespace internal {

class Db_Data;



#pragma pack(push, 1)


class Db_Data {
 public:
  static Db_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t pad0_[4];
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, mojo::internal::String_Data*>> last_selected_accounts;

 private:
  Db_Data();
  ~Db_Data() = delete;
};
static_assert(sizeof(Db_Data) == 24,
              "Bad sizeof(Db_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace authentication

#endif  // SERVICES_AUTHENTICATION_AUTHENTICATION_IMPL_DB_MOJOM_INTERNAL_H_
