// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_JS_SYSTEM_TESTS_JS_TO_CPP_MOJOM_COMMON_H_
#define SERVICES_JS_SYSTEM_TESTS_JS_TO_CPP_MOJOM_COMMON_H_

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
#include "services/js/system/tests/js_to_cpp.mojom-internal.h"
namespace js_to_cpp {

// --- Interface Forward Declarations ---
class CppSide;
class CppSideRequestValidator;
class CppSide_Synchronous;
class JsSide;
class JsSideRequestValidator;
class JsSide_Synchronous;

// --- Struct Forward Declarations ---
class EchoArgs;

using EchoArgsPtr = mojo::StructPtr<EchoArgs>;


class EchoArgsList;

using EchoArgsListPtr = mojo::StructPtr<EchoArgsList>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class CppSide_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = CppSideRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = CppSide_Synchronous;
  enum class MessageOrdinals : uint32_t {
    StartTest = 88888888,
    TestFinished = 99999999,
    PingResponse = 100000000,
    EchoResponse = 100000001,
    BitFlipResponse = 100000002,
    BackPointerResponse = 100000003,
  };


  virtual ~CppSide_Base() {}
};

}  // namespace internal

// Async interface declaration

class CppSideProxy;
class CppSideStub;
class CppSide_Synchronous;

class CppSideRequestValidator;

class CppSide : public internal::CppSide_Base {
 public:
  virtual ~CppSide() override {}

  using Proxy_ = CppSideProxy;
  using Stub_ = CppSideStub;
  virtual void StartTest() = 0;
  virtual void TestFinished() = 0;
  virtual void PingResponse() = 0;
  virtual void EchoResponse(EchoArgsListPtr list) = 0;
  virtual void BitFlipResponse(EchoArgsListPtr arg) = 0;
  virtual void BackPointerResponse(EchoArgsListPtr arg) = 0;
};

namespace internal {
class JsSide_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = JsSideRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = JsSide_Synchronous;
  enum class MessageOrdinals : uint32_t {
    SetCppSide = 0,
    Ping = 1,
    Echo = 2,
    BitFlip = 3,
    BackPointer = 4,
  };


  virtual ~JsSide_Base() {}
};

}  // namespace internal

// Async interface declaration

class JsSideProxy;
class JsSideStub;
class JsSide_Synchronous;

class JsSideRequestValidator;

class JsSide : public internal::JsSide_Base {
 public:
  virtual ~JsSide() override {}

  using Proxy_ = JsSideProxy;
  using Stub_ = JsSideStub;
  virtual void SetCppSide(mojo::InterfaceHandle<CppSide> cpp) = 0;
  virtual void Ping() = 0;
  virtual void Echo(int32_t numIterations, EchoArgsPtr arg) = 0;
  virtual void BitFlip(EchoArgsPtr arg) = 0;
  virtual void BackPointer(EchoArgsPtr arg) = 0;
};

}  // namespace js_to_cpp

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<js_to_cpp::EchoArgsPtr, true, false> {
  using DataType = js_to_cpp::internal::EchoArgs_Data*;
};
template <>
struct WrapperTraits<js_to_cpp::EchoArgsListPtr, true, false> {
  using DataType = js_to_cpp::internal::EchoArgsList_Data*;
};

}  // internal
}  // mojo
namespace js_to_cpp {

// --- Interface Request Validators ---
class CppSideRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};

class JsSideRequestValidator
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

// --- Non-inlined structs ---
class EchoArgs {
 public:
  using Data_ = internal::EchoArgs_Data;

  static EchoArgsPtr New();

  template <typename U>
  static EchoArgsPtr From(const U& u) {
    return mojo::TypeConverter<EchoArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EchoArgs>::Convert(*this);
  }

  EchoArgs();
  ~EchoArgs();
  
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


  bool Equals(const EchoArgs& other) const;

  int64_t si64;
  int32_t si32;
  int16_t si16;
  int8_t si8;
  uint64_t ui64;
  uint32_t ui32;
  uint16_t ui16;
  uint8_t ui8;
  float float_val;
  float float_inf;
  float float_nan;
  double double_val;
  double double_inf;
  double double_nan;
  mojo::String name;
  mojo::Array<mojo::String> string_array;
  mojo::ScopedMessagePipeHandle message_handle;
  mojo::ScopedDataPipeConsumerHandle data_handle;
};


class EchoArgsList {
 public:
  using Data_ = internal::EchoArgsList_Data;

  static EchoArgsListPtr New();

  template <typename U>
  static EchoArgsListPtr From(const U& u) {
    return mojo::TypeConverter<EchoArgsListPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EchoArgsList>::Convert(*this);
  }

  EchoArgsList();
  ~EchoArgsList();
  
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


  bool Equals(const EchoArgsList& other) const;

  EchoArgsListPtr next;
  EchoArgsPtr item;
};



// --- Struct serialization helpers ---
size_t GetSerializedSize_(const EchoArgs& input);
mojo::internal::ValidationError Serialize_(
    EchoArgs* input,
    mojo::internal::Buffer* buffer,
    internal::EchoArgs_Data** output);
void Deserialize_(internal::EchoArgs_Data* input,
                  EchoArgs* output);

size_t GetSerializedSize_(const EchoArgsList& input);
mojo::internal::ValidationError Serialize_(
    EchoArgsList* input,
    mojo::internal::Buffer* buffer,
    internal::EchoArgsList_Data** output);
void Deserialize_(internal::EchoArgsList_Data* input,
                  EchoArgsList* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class CppSide_StartTest_Params;

using CppSide_StartTest_ParamsPtr = mojo::InlinedStructPtr<CppSide_StartTest_Params>;


size_t GetSerializedSize_(const CppSide_StartTest_Params& input);
mojo::internal::ValidationError Serialize_(
    CppSide_StartTest_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CppSide_StartTest_Params_Data** output);
void Deserialize_(internal::CppSide_StartTest_Params_Data* input,
                  CppSide_StartTest_Params* output);

class CppSide_StartTest_Params {
 public:
  using Data_ = internal::CppSide_StartTest_Params_Data;

  static CppSide_StartTest_ParamsPtr New();

  template <typename U>
  static CppSide_StartTest_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CppSide_StartTest_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CppSide_StartTest_Params>::Convert(*this);
  }

  CppSide_StartTest_Params();
  ~CppSide_StartTest_Params();
  
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


  CppSide_StartTest_ParamsPtr Clone() const;
  bool Equals(const CppSide_StartTest_Params& other) const;

};




class CppSide_TestFinished_Params;

using CppSide_TestFinished_ParamsPtr = mojo::InlinedStructPtr<CppSide_TestFinished_Params>;


size_t GetSerializedSize_(const CppSide_TestFinished_Params& input);
mojo::internal::ValidationError Serialize_(
    CppSide_TestFinished_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CppSide_TestFinished_Params_Data** output);
void Deserialize_(internal::CppSide_TestFinished_Params_Data* input,
                  CppSide_TestFinished_Params* output);

class CppSide_TestFinished_Params {
 public:
  using Data_ = internal::CppSide_TestFinished_Params_Data;

  static CppSide_TestFinished_ParamsPtr New();

  template <typename U>
  static CppSide_TestFinished_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CppSide_TestFinished_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CppSide_TestFinished_Params>::Convert(*this);
  }

  CppSide_TestFinished_Params();
  ~CppSide_TestFinished_Params();
  
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


  CppSide_TestFinished_ParamsPtr Clone() const;
  bool Equals(const CppSide_TestFinished_Params& other) const;

};




class CppSide_PingResponse_Params;

using CppSide_PingResponse_ParamsPtr = mojo::InlinedStructPtr<CppSide_PingResponse_Params>;


size_t GetSerializedSize_(const CppSide_PingResponse_Params& input);
mojo::internal::ValidationError Serialize_(
    CppSide_PingResponse_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CppSide_PingResponse_Params_Data** output);
void Deserialize_(internal::CppSide_PingResponse_Params_Data* input,
                  CppSide_PingResponse_Params* output);

class CppSide_PingResponse_Params {
 public:
  using Data_ = internal::CppSide_PingResponse_Params_Data;

  static CppSide_PingResponse_ParamsPtr New();

  template <typename U>
  static CppSide_PingResponse_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CppSide_PingResponse_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CppSide_PingResponse_Params>::Convert(*this);
  }

  CppSide_PingResponse_Params();
  ~CppSide_PingResponse_Params();
  
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


  CppSide_PingResponse_ParamsPtr Clone() const;
  bool Equals(const CppSide_PingResponse_Params& other) const;

};




class CppSide_EchoResponse_Params;

using CppSide_EchoResponse_ParamsPtr = mojo::StructPtr<CppSide_EchoResponse_Params>;


size_t GetSerializedSize_(const CppSide_EchoResponse_Params& input);
mojo::internal::ValidationError Serialize_(
    CppSide_EchoResponse_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CppSide_EchoResponse_Params_Data** output);
void Deserialize_(internal::CppSide_EchoResponse_Params_Data* input,
                  CppSide_EchoResponse_Params* output);

class CppSide_EchoResponse_Params {
 public:
  using Data_ = internal::CppSide_EchoResponse_Params_Data;

  static CppSide_EchoResponse_ParamsPtr New();

  template <typename U>
  static CppSide_EchoResponse_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CppSide_EchoResponse_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CppSide_EchoResponse_Params>::Convert(*this);
  }

  CppSide_EchoResponse_Params();
  ~CppSide_EchoResponse_Params();
  
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


  bool Equals(const CppSide_EchoResponse_Params& other) const;

  EchoArgsListPtr list;
};




class CppSide_BitFlipResponse_Params;

using CppSide_BitFlipResponse_ParamsPtr = mojo::StructPtr<CppSide_BitFlipResponse_Params>;


size_t GetSerializedSize_(const CppSide_BitFlipResponse_Params& input);
mojo::internal::ValidationError Serialize_(
    CppSide_BitFlipResponse_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CppSide_BitFlipResponse_Params_Data** output);
void Deserialize_(internal::CppSide_BitFlipResponse_Params_Data* input,
                  CppSide_BitFlipResponse_Params* output);

class CppSide_BitFlipResponse_Params {
 public:
  using Data_ = internal::CppSide_BitFlipResponse_Params_Data;

  static CppSide_BitFlipResponse_ParamsPtr New();

  template <typename U>
  static CppSide_BitFlipResponse_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CppSide_BitFlipResponse_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CppSide_BitFlipResponse_Params>::Convert(*this);
  }

  CppSide_BitFlipResponse_Params();
  ~CppSide_BitFlipResponse_Params();
  
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


  bool Equals(const CppSide_BitFlipResponse_Params& other) const;

  EchoArgsListPtr arg;
};




class CppSide_BackPointerResponse_Params;

using CppSide_BackPointerResponse_ParamsPtr = mojo::StructPtr<CppSide_BackPointerResponse_Params>;


size_t GetSerializedSize_(const CppSide_BackPointerResponse_Params& input);
mojo::internal::ValidationError Serialize_(
    CppSide_BackPointerResponse_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CppSide_BackPointerResponse_Params_Data** output);
void Deserialize_(internal::CppSide_BackPointerResponse_Params_Data* input,
                  CppSide_BackPointerResponse_Params* output);

class CppSide_BackPointerResponse_Params {
 public:
  using Data_ = internal::CppSide_BackPointerResponse_Params_Data;

  static CppSide_BackPointerResponse_ParamsPtr New();

  template <typename U>
  static CppSide_BackPointerResponse_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CppSide_BackPointerResponse_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CppSide_BackPointerResponse_Params>::Convert(*this);
  }

  CppSide_BackPointerResponse_Params();
  ~CppSide_BackPointerResponse_Params();
  
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


  bool Equals(const CppSide_BackPointerResponse_Params& other) const;

  EchoArgsListPtr arg;
};



      

class JsSide_SetCppSide_Params;

using JsSide_SetCppSide_ParamsPtr = mojo::StructPtr<JsSide_SetCppSide_Params>;


size_t GetSerializedSize_(const JsSide_SetCppSide_Params& input);
mojo::internal::ValidationError Serialize_(
    JsSide_SetCppSide_Params* input,
    mojo::internal::Buffer* buffer,
    internal::JsSide_SetCppSide_Params_Data** output);
void Deserialize_(internal::JsSide_SetCppSide_Params_Data* input,
                  JsSide_SetCppSide_Params* output);

class JsSide_SetCppSide_Params {
 public:
  using Data_ = internal::JsSide_SetCppSide_Params_Data;

  static JsSide_SetCppSide_ParamsPtr New();

  template <typename U>
  static JsSide_SetCppSide_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<JsSide_SetCppSide_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, JsSide_SetCppSide_Params>::Convert(*this);
  }

  JsSide_SetCppSide_Params();
  ~JsSide_SetCppSide_Params();
  
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


  bool Equals(const JsSide_SetCppSide_Params& other) const;

  mojo::InterfaceHandle<CppSide> cpp;
};




class JsSide_Ping_Params;

using JsSide_Ping_ParamsPtr = mojo::InlinedStructPtr<JsSide_Ping_Params>;


size_t GetSerializedSize_(const JsSide_Ping_Params& input);
mojo::internal::ValidationError Serialize_(
    JsSide_Ping_Params* input,
    mojo::internal::Buffer* buffer,
    internal::JsSide_Ping_Params_Data** output);
void Deserialize_(internal::JsSide_Ping_Params_Data* input,
                  JsSide_Ping_Params* output);

class JsSide_Ping_Params {
 public:
  using Data_ = internal::JsSide_Ping_Params_Data;

  static JsSide_Ping_ParamsPtr New();

  template <typename U>
  static JsSide_Ping_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<JsSide_Ping_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, JsSide_Ping_Params>::Convert(*this);
  }

  JsSide_Ping_Params();
  ~JsSide_Ping_Params();
  
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


  JsSide_Ping_ParamsPtr Clone() const;
  bool Equals(const JsSide_Ping_Params& other) const;

};




class JsSide_Echo_Params;

using JsSide_Echo_ParamsPtr = mojo::StructPtr<JsSide_Echo_Params>;


size_t GetSerializedSize_(const JsSide_Echo_Params& input);
mojo::internal::ValidationError Serialize_(
    JsSide_Echo_Params* input,
    mojo::internal::Buffer* buffer,
    internal::JsSide_Echo_Params_Data** output);
void Deserialize_(internal::JsSide_Echo_Params_Data* input,
                  JsSide_Echo_Params* output);

class JsSide_Echo_Params {
 public:
  using Data_ = internal::JsSide_Echo_Params_Data;

  static JsSide_Echo_ParamsPtr New();

  template <typename U>
  static JsSide_Echo_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<JsSide_Echo_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, JsSide_Echo_Params>::Convert(*this);
  }

  JsSide_Echo_Params();
  ~JsSide_Echo_Params();
  
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


  bool Equals(const JsSide_Echo_Params& other) const;

  int32_t numIterations;
  EchoArgsPtr arg;
};




class JsSide_BitFlip_Params;

using JsSide_BitFlip_ParamsPtr = mojo::StructPtr<JsSide_BitFlip_Params>;


size_t GetSerializedSize_(const JsSide_BitFlip_Params& input);
mojo::internal::ValidationError Serialize_(
    JsSide_BitFlip_Params* input,
    mojo::internal::Buffer* buffer,
    internal::JsSide_BitFlip_Params_Data** output);
void Deserialize_(internal::JsSide_BitFlip_Params_Data* input,
                  JsSide_BitFlip_Params* output);

class JsSide_BitFlip_Params {
 public:
  using Data_ = internal::JsSide_BitFlip_Params_Data;

  static JsSide_BitFlip_ParamsPtr New();

  template <typename U>
  static JsSide_BitFlip_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<JsSide_BitFlip_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, JsSide_BitFlip_Params>::Convert(*this);
  }

  JsSide_BitFlip_Params();
  ~JsSide_BitFlip_Params();
  
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


  bool Equals(const JsSide_BitFlip_Params& other) const;

  EchoArgsPtr arg;
};




class JsSide_BackPointer_Params;

using JsSide_BackPointer_ParamsPtr = mojo::StructPtr<JsSide_BackPointer_Params>;


size_t GetSerializedSize_(const JsSide_BackPointer_Params& input);
mojo::internal::ValidationError Serialize_(
    JsSide_BackPointer_Params* input,
    mojo::internal::Buffer* buffer,
    internal::JsSide_BackPointer_Params_Data** output);
void Deserialize_(internal::JsSide_BackPointer_Params_Data* input,
                  JsSide_BackPointer_Params* output);

class JsSide_BackPointer_Params {
 public:
  using Data_ = internal::JsSide_BackPointer_Params_Data;

  static JsSide_BackPointer_ParamsPtr New();

  template <typename U>
  static JsSide_BackPointer_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<JsSide_BackPointer_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, JsSide_BackPointer_Params>::Convert(*this);
  }

  JsSide_BackPointer_Params();
  ~JsSide_BackPointer_Params();
  
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


  bool Equals(const JsSide_BackPointer_Params& other) const;

  EchoArgsPtr arg;
};



}  // namespace js_to_cpp

#endif  // SERVICES_JS_SYSTEM_TESTS_JS_TO_CPP_MOJOM_COMMON_H_