// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_INPUT_EVENTS_INTERFACES_INPUT_EVENTS_MOJOM_COMMON_H_
#define MOJO_SERVICES_INPUT_EVENTS_INTERFACES_INPUT_EVENTS_MOJOM_COMMON_H_

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
#include "mojo/services/input_events/interfaces/input_events.mojom-internal.h"
#include "mojo/services/geometry/interfaces/geometry.mojom-common.h"
#include "mojo/services/input_events/interfaces/input_event_constants.mojom-common.h"
#include "mojo/services/input_events/interfaces/input_key_codes.mojom-common.h"
namespace mojo {

// --- Interface Forward Declarations ---

// --- Struct Forward Declarations ---
class KeyData;

using KeyDataPtr = mojo::StructPtr<KeyData>;


class PointerData;

using PointerDataPtr = mojo::StructPtr<PointerData>;


class Event;

using EventPtr = mojo::StructPtr<Event>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<mojo::KeyDataPtr, true, false> {
  using DataType = mojo::internal::KeyData_Data*;
};
template <>
struct WrapperTraits<mojo::PointerDataPtr, true, false> {
  using DataType = mojo::internal::PointerData_Data*;
};
template <>
struct WrapperTraits<mojo::EventPtr, true, false> {
  using DataType = mojo::internal::Event_Data*;
};

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---

// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---

// --- Non-inlined structs ---
class KeyData {
 public:
  using Data_ = internal::KeyData_Data;

  static KeyDataPtr New();

  template <typename U>
  static KeyDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyData>::Convert(*this);
  }

  KeyData();
  ~KeyData();
  
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


  KeyDataPtr Clone() const;
  bool Equals(const KeyData& other) const;

  int32_t key_code;
  bool is_char;
  uint16_t character;
  mojo::KeyboardCode windows_key_code;
  int32_t native_key_code;
  uint16_t text;
  uint16_t unmodified_text;
};


class PointerData {
 public:
  using Data_ = internal::PointerData_Data;

  static PointerDataPtr New();

  template <typename U>
  static PointerDataPtr From(const U& u) {
    return mojo::TypeConverter<PointerDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerData>::Convert(*this);
  }

  PointerData();
  ~PointerData();
  
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


  PointerDataPtr Clone() const;
  bool Equals(const PointerData& other) const;

  int32_t pointer_id;
  mojo::PointerKind kind;
  float x;
  float y;
  float screen_x;
  float screen_y;
  float pressure;
  float radius_major;
  float radius_minor;
  float orientation;
  float horizontal_wheel;
  float vertical_wheel;
};


class Event {
 public:
  using Data_ = internal::Event_Data;

  static EventPtr New();

  template <typename U>
  static EventPtr From(const U& u) {
    return mojo::TypeConverter<EventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Event>::Convert(*this);
  }

  Event();
  ~Event();
  
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


  EventPtr Clone() const;
  bool Equals(const Event& other) const;

  mojo::EventType action;
  mojo::EventFlags flags;
  int64_t time_stamp;
  KeyDataPtr key_data;
  PointerDataPtr pointer_data;
};



// --- Struct serialization helpers ---
size_t GetSerializedSize_(const KeyData& input);
mojo::internal::ValidationError Serialize_(
    KeyData* input,
    mojo::internal::Buffer* buffer,
    internal::KeyData_Data** output);
void Deserialize_(internal::KeyData_Data* input,
                  KeyData* output);

size_t GetSerializedSize_(const PointerData& input);
mojo::internal::ValidationError Serialize_(
    PointerData* input,
    mojo::internal::Buffer* buffer,
    internal::PointerData_Data** output);
void Deserialize_(internal::PointerData_Data* input,
                  PointerData* output);

size_t GetSerializedSize_(const Event& input);
mojo::internal::ValidationError Serialize_(
    Event* input,
    mojo::internal::Buffer* buffer,
    internal::Event_Data** output);
void Deserialize_(internal::Event_Data* input,
                  Event* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
}  // namespace mojo

#endif  // MOJO_SERVICES_INPUT_EVENTS_INTERFACES_INPUT_EVENTS_MOJOM_COMMON_H_
