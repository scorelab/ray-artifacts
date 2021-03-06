// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_LOG_INTERFACES_ENTRY_MOJOM_COMMON_H_
#define MOJO_SERVICES_LOG_INTERFACES_ENTRY_MOJOM_COMMON_H_

#include <stdint.h>
#include <iosfwd>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/log/interfaces/entry.mojom-internal.h"
namespace mojo {
namespace log {

// --- Interface Forward Declarations ---

// --- Struct Forward Declarations ---
class Entry;

using EntryPtr = mojo::StructPtr<Entry>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---
const int32_t kLogLevelVerbose = -1;
const int32_t kLogLevelInfo = 0;
const int32_t kLogLevelWarning = 1;
const int32_t kLogLevelError = 2;
const int32_t kLogLevelFatal = 3;

// --- Interface declarations ---
}  // namespace log
}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<mojo::log::EntryPtr, true, false> {
  using DataType = mojo::log::internal::Entry_Data*;
};

}  // internal
}  // mojo
namespace mojo {
namespace log {

// --- Interface Request Validators ---

// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---

// --- Non-inlined structs ---
class Entry {
 public:
  using Data_ = internal::Entry_Data;

  static EntryPtr New();

  template <typename U>
  static EntryPtr From(const U& u) {
    return mojo::TypeConverter<EntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Entry>::Convert(*this);
  }

  Entry();
  ~Entry();
  
  // Returns the number of bytes it would take to serialize this struct's data.
  size_t GetSerializedSize() const;

  // Returns true on successful serialization. On failure, part of the data may
  // be serialized, until the point of failure. This API does not support
  // serializing handles. If not null, |bytes_written| is set to the number of
  // bytes written to |buf|, even if this function return false. 
  //
  // TODO(vardhan): For now, we return true for success. Should we define a
  // public error type for serialization? Should we open up
  // internal::ValidationError?
  bool Serialize(void* buf, size_t buf_size, size_t* bytes_written = nullptr);

  // Deserializes the given |buf| of size |buf_size| representing a serialized
  // version of this struct. The buffer is validated before it is deserialized.
  // Returns true on successful deserialization.
  // TODO(vardhan): Recover the validation error if there is one?
  bool Deserialize(void* buf, size_t buf_size);

  // Deserializes the given |buf| representing a serialized version of this
  // struct. The buffer is NOT validated before it is deserialized, so the user
  // must be confident of its validity and that |buf| points to enough data to
  // finish deserializing.
  void DeserializeWithoutValidation(void* buf);


  EntryPtr Clone() const;
  bool Equals(const Entry& other) const;

  int64_t timestamp;
  int32_t log_level;
  mojo::String message;
  mojo::String source_file;
  uint32_t source_line;
};



// --- Struct serialization helpers ---
size_t GetSerializedSize_(const Entry& input);
mojo::internal::ValidationError Serialize_(
    Entry* input,
    mojo::internal::Buffer* buffer,
    internal::Entry_Data** output);
void Deserialize_(internal::Entry_Data* input,
                  Entry* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
}  // namespace log
}  // namespace mojo

#endif  // MOJO_SERVICES_LOG_INTERFACES_ENTRY_MOJOM_COMMON_H_
