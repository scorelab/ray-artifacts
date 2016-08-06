// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_LOG_INTERFACES_ENTRY_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_LOG_INTERFACES_ENTRY_MOJOM_INTERNAL_H_

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
namespace log {

class Entry;


namespace internal {

class Entry_Data;



#pragma pack(push, 1)


class Entry_Data {
 public:
  static Entry_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t timestamp;
  int32_t log_level;
  uint32_t source_line;
  mojo::internal::StringPointer message;
  mojo::internal::StringPointer source_file;

 private:
  Entry_Data();
  ~Entry_Data() = delete;
};
static_assert(sizeof(Entry_Data) == 40,
              "Bad sizeof(Entry_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace log
}  // namespace mojo

#endif  // MOJO_SERVICES_LOG_INTERFACES_ENTRY_MOJOM_INTERNAL_H_