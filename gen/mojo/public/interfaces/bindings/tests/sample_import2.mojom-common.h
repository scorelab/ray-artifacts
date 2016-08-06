// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-common.h"
namespace imported {

// --- Interface Forward Declarations ---

// --- Struct Forward Declarations ---
class Size;

using SizePtr = mojo::InlinedStructPtr<Size>;


class Thing;

using ThingPtr = mojo::StructPtr<Thing>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---
  
enum class Color : int32_t {
  RED,
  BLACK,
};

bool Color_IsValidValue(Color value);
  
std::ostream& operator<<(std::ostream& stream, const Color& val);

// --- Constants ---

// --- Interface declarations ---
}  // namespace imported

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<imported::SizePtr, true, false> {
  using DataType = imported::internal::Size_Data*;
};
template <>
struct WrapperTraits<imported::ThingPtr, true, false> {
  using DataType = imported::internal::Thing_Data*;
};

}  // internal
}  // mojo
namespace imported {

// --- Interface Request Validators ---

// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---
class Size {
 public:
  using Data_ = internal::Size_Data;

  static SizePtr New();

  template <typename U>
  static SizePtr From(const U& u) {
    return mojo::TypeConverter<SizePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Size>::Convert(*this);
  }

  Size();
  ~Size();
  
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


  SizePtr Clone() const;
  bool Equals(const Size& other) const;

  int32_t width;
  int32_t height;
};



// --- Non-inlined structs ---
class Thing {
 public:
  using Data_ = internal::Thing_Data;

  static ThingPtr New();

  template <typename U>
  static ThingPtr From(const U& u) {
    return mojo::TypeConverter<ThingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Thing>::Convert(*this);
  }

  Thing();
  ~Thing();
  
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


  ThingPtr Clone() const;
  bool Equals(const Thing& other) const;

  imported::Shape shape;
  Color color;
  imported::PointPtr location;
  SizePtr size;
};



// --- Struct serialization helpers ---
size_t GetSerializedSize_(const Size& input);
mojo::internal::ValidationError Serialize_(
    Size* input,
    mojo::internal::Buffer* buffer,
    internal::Size_Data** output);
void Deserialize_(internal::Size_Data* input,
                  Size* output);

size_t GetSerializedSize_(const Thing& input);
mojo::internal::ValidationError Serialize_(
    Thing* input,
    mojo::internal::Buffer* buffer,
    internal::Thing_Data** output);
void Deserialize_(internal::Thing_Data* input,
                  Thing* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_COMMON_H_