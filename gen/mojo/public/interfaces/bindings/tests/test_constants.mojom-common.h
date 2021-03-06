// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-internal.h"
namespace mojo {
namespace test {

// --- Interface Forward Declarations ---
class InterfaceWithConstants;
class InterfaceWithConstantsRequestValidator;
class InterfaceWithConstants_Synchronous;

// --- Struct Forward Declarations ---
class StructWithConstants;

using StructWithConstantsPtr = mojo::InlinedStructPtr<StructWithConstants>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---
const bool kBoolValue = true;
const int8_t kInt8Value = -2;
const uint8_t kUint8Value = 128U;
const int16_t kInt16Value = -233;
const uint16_t kUint16Value = 44204U;
const int32_t kInt32Value = -44204;
const uint32_t kUint32Value = 4294967295U;
const int64_t kInt64Value = -9223372036854775807;
const uint64_t kUint64Value = 9999999999999999999ULL;
extern const double kDoubleValue;
extern const double kDoubleInfinity;
extern const double kDoubleNegativeInfinity;
extern const double kDoubleNaN;
extern const float kFloatValue;
extern const float kFloatInfinity;
extern const float kFloatNegativeInfinity;
extern const float kFloatNaN;

// --- Interface declarations ---
namespace internal {
class InterfaceWithConstants_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = InterfaceWithConstantsRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = InterfaceWithConstants_Synchronous;
  enum class MessageOrdinals : uint32_t {
  };

  static const uint32_t kUint32Value = 20100722U;
  static const double kDoubleValue;

  virtual ~InterfaceWithConstants_Base() {}
};

}  // namespace internal

// Async interface declaration

class InterfaceWithConstantsProxy;
class InterfaceWithConstantsStub;
class InterfaceWithConstants_Synchronous;

class InterfaceWithConstantsRequestValidator;

class InterfaceWithConstants : public internal::InterfaceWithConstants_Base {
 public:
  virtual ~InterfaceWithConstants() override {}

  using Proxy_ = InterfaceWithConstantsProxy;
  using Stub_ = InterfaceWithConstantsStub;
};

}  // namespace test
}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<mojo::test::StructWithConstantsPtr, true, false> {
  using DataType = mojo::test::internal::StructWithConstants_Data*;
};

}  // internal
}  // mojo
namespace mojo {
namespace test {

// --- Interface Request Validators ---
class InterfaceWithConstantsRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---
class StructWithConstants {
 public:
  using Data_ = internal::StructWithConstants_Data;
  static const int8_t kInt8Value = 5;
  static const float kFloatValue;

  static StructWithConstantsPtr New();

  template <typename U>
  static StructWithConstantsPtr From(const U& u) {
    return mojo::TypeConverter<StructWithConstantsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithConstants>::Convert(*this);
  }

  StructWithConstants();
  ~StructWithConstants();
  
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


  StructWithConstantsPtr Clone() const;
  bool Equals(const StructWithConstants& other) const;

};



// --- Non-inlined structs ---

// --- Struct serialization helpers ---
size_t GetSerializedSize_(const StructWithConstants& input);
mojo::internal::ValidationError Serialize_(
    StructWithConstants* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithConstants_Data** output);
void Deserialize_(internal::StructWithConstants_Data* input,
                  StructWithConstants* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_COMMON_H_
