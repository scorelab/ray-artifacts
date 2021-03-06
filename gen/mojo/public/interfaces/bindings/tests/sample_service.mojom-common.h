// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-common.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-common.h"
namespace sample {

// --- Interface Forward Declarations ---
class Service;
class ServiceRequestValidator;
class ServiceResponseValidator;
class Service_Synchronous;
class Port;
class PortRequestValidator;
class Port_Synchronous;

// --- Struct Forward Declarations ---
class Bar;

using BarPtr = mojo::InlinedStructPtr<Bar>;


class Foo;

using FooPtr = mojo::StructPtr<Foo>;


class DefaultsTest;

using DefaultsTestPtr = mojo::StructPtr<DefaultsTest>;


class StructWithHoleV1;

using StructWithHoleV1Ptr = mojo::InlinedStructPtr<StructWithHoleV1>;


class StructWithHoleV2;

using StructWithHoleV2Ptr = mojo::InlinedStructPtr<StructWithHoleV2>;


class NonNullableMapStruct;

using NonNullableMapStructPtr = mojo::StructPtr<NonNullableMapStruct>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---
const uint8_t kTwelve = 12U;

// --- Interface declarations ---
namespace internal {
class Service_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = ServiceRequestValidator;
  using ResponseValidator_ = ServiceResponseValidator;
  using Synchronous_ = Service_Synchronous;
  enum class MessageOrdinals : uint32_t {
    Frobinate = 0,
    GetPort = 1,
  };

  
  enum class BazOptions : int32_t {
    REGULAR = 0,
    EXTRA,
  };
  
  static bool BazOptions_IsValidValue(BazOptions value);
  static const uint8_t kFavoriteBaz = 1U;

  virtual ~Service_Base() {}
};

}  // namespace internal

// Async interface declaration

class ServiceProxy;
class ServiceStub;
class Service_Synchronous;

class ServiceRequestValidator;
class ServiceResponseValidator;

class Service : public internal::Service_Base {
 public:
  virtual ~Service() override {}

  using Proxy_ = ServiceProxy;
  using Stub_ = ServiceStub;
  using FrobinateCallback = mojo::Callback<void(int32_t)>;
  virtual void Frobinate(FooPtr foo, Service::BazOptions baz, mojo::InterfaceHandle<Port> port, const FrobinateCallback& callback) = 0;
  virtual void GetPort(mojo::InterfaceRequest<Port> port) = 0;
};

namespace internal {
class Port_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = PortRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = Port_Synchronous;
  enum class MessageOrdinals : uint32_t {
    PostMessage = 0,
  };


  virtual ~Port_Base() {}
};

}  // namespace internal

// Async interface declaration

class PortProxy;
class PortStub;
class Port_Synchronous;

class PortRequestValidator;

class Port : public internal::Port_Base {
 public:
  virtual ~Port() override {}

  using Proxy_ = PortProxy;
  using Stub_ = PortStub;
  virtual void PostMessage(const mojo::String& message_text, mojo::InterfaceHandle<Port> port) = 0;
};

}  // namespace sample

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<sample::BarPtr, true, false> {
  using DataType = sample::internal::Bar_Data*;
};
template <>
struct WrapperTraits<sample::FooPtr, true, false> {
  using DataType = sample::internal::Foo_Data*;
};
template <>
struct WrapperTraits<sample::DefaultsTestPtr, true, false> {
  using DataType = sample::internal::DefaultsTest_Data*;
};
template <>
struct WrapperTraits<sample::StructWithHoleV1Ptr, true, false> {
  using DataType = sample::internal::StructWithHoleV1_Data*;
};
template <>
struct WrapperTraits<sample::StructWithHoleV2Ptr, true, false> {
  using DataType = sample::internal::StructWithHoleV2_Data*;
};
template <>
struct WrapperTraits<sample::NonNullableMapStructPtr, true, false> {
  using DataType = sample::internal::NonNullableMapStruct_Data*;
};

}  // internal
}  // mojo
namespace sample {

// --- Interface Request Validators ---
class ServiceRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};

class PortRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface Response Validators ---
class ServiceResponseValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface enum operators ---
  
std::ostream& operator<<(std::ostream& stream,
                         const internal::Service_Base::BazOptions& val);

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---
class Bar {
 public:
  using Data_ = internal::Bar_Data;
  enum class Type : int32_t {
    VERTICAL = 1,
    HORIZONTAL,
    BOTH,
    INVALID,
  };
  
  static bool Type_IsValidValue(Type value);

  static BarPtr New();

  template <typename U>
  static BarPtr From(const U& u) {
    return mojo::TypeConverter<BarPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Bar>::Convert(*this);
  }

  Bar();
  ~Bar();
  
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


  BarPtr Clone() const;
  bool Equals(const Bar& other) const;

  uint8_t alpha;
  uint8_t beta;
  uint8_t gamma;
  Bar::Type type;
};

  
std::ostream& operator<<(std::ostream& stream,
                         const Bar::Type& val);

class StructWithHoleV1 {
 public:
  using Data_ = internal::StructWithHoleV1_Data;

  static StructWithHoleV1Ptr New();

  template <typename U>
  static StructWithHoleV1Ptr From(const U& u) {
    return mojo::TypeConverter<StructWithHoleV1Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithHoleV1>::Convert(*this);
  }

  StructWithHoleV1();
  ~StructWithHoleV1();
  
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


  StructWithHoleV1Ptr Clone() const;
  bool Equals(const StructWithHoleV1& other) const;

  int32_t v1;
  int64_t v2;
};


class StructWithHoleV2 {
 public:
  using Data_ = internal::StructWithHoleV2_Data;

  static StructWithHoleV2Ptr New();

  template <typename U>
  static StructWithHoleV2Ptr From(const U& u) {
    return mojo::TypeConverter<StructWithHoleV2Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithHoleV2>::Convert(*this);
  }

  StructWithHoleV2();
  ~StructWithHoleV2();
  
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


  StructWithHoleV2Ptr Clone() const;
  bool Equals(const StructWithHoleV2& other) const;

  int32_t v1;
  int64_t v2;
  int32_t v3;
};



// --- Non-inlined structs ---
class Foo {
 public:
  using Data_ = internal::Foo_Data;
  static const char* kFooby;

  static FooPtr New();

  template <typename U>
  static FooPtr From(const U& u) {
    return mojo::TypeConverter<FooPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Foo>::Convert(*this);
  }

  Foo();
  ~Foo();
  
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


  bool Equals(const Foo& other) const;

  mojo::String name;
  int32_t x;
  int32_t y;
  bool a;
  bool b;
  bool c;
  BarPtr bar;
  mojo::Array<BarPtr> extra_bars;
  mojo::Array<uint8_t> data;
  mojo::ScopedMessagePipeHandle source;
  mojo::Array<mojo::ScopedDataPipeConsumerHandle> input_streams;
  mojo::Array<mojo::ScopedDataPipeProducerHandle> output_streams;
  mojo::Array<mojo::Array<bool> > array_of_array_of_bools;
  mojo::Array<mojo::Array<mojo::Array<mojo::String> > > multi_array_of_strings;
  mojo::Array<bool> array_of_bools;
};


class DefaultsTest {
 public:
  using Data_ = internal::DefaultsTest_Data;

  static DefaultsTestPtr New();

  template <typename U>
  static DefaultsTestPtr From(const U& u) {
    return mojo::TypeConverter<DefaultsTestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DefaultsTest>::Convert(*this);
  }

  DefaultsTest();
  ~DefaultsTest();
  
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


  DefaultsTestPtr Clone() const;
  bool Equals(const DefaultsTest& other) const;

  int8_t a0;
  uint8_t a1;
  int16_t a2;
  uint16_t a3;
  int32_t a4;
  uint32_t a5;
  int64_t a6;
  uint64_t a7;
  int32_t a8;
  int32_t a9;
  int32_t a10;
  bool a11;
  bool a12;
  float a13;
  double a14;
  double a15;
  double a16;
  double a17;
  mojo::Array<uint8_t> a18;
  mojo::String a19;
  Bar::Type a20;
  imported::PointPtr a21;
  imported::ThingPtr a22;
  uint64_t a23;
  int64_t a24;
  int64_t a25;
  double a26;
  double a27;
  double a28;
  float a29;
  float a30;
  float a31;
};


class NonNullableMapStruct {
 public:
  using Data_ = internal::NonNullableMapStruct_Data;

  static NonNullableMapStructPtr New();

  template <typename U>
  static NonNullableMapStructPtr From(const U& u) {
    return mojo::TypeConverter<NonNullableMapStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NonNullableMapStruct>::Convert(*this);
  }

  NonNullableMapStruct();
  ~NonNullableMapStruct();
  
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


  NonNullableMapStructPtr Clone() const;
  bool Equals(const NonNullableMapStruct& other) const;

  mojo::Map<mojo::String, mojo::String> map_field;
};



// --- Struct serialization helpers ---
size_t GetSerializedSize_(const Bar& input);
mojo::internal::ValidationError Serialize_(
    Bar* input,
    mojo::internal::Buffer* buffer,
    internal::Bar_Data** output);
void Deserialize_(internal::Bar_Data* input,
                  Bar* output);

size_t GetSerializedSize_(const Foo& input);
mojo::internal::ValidationError Serialize_(
    Foo* input,
    mojo::internal::Buffer* buffer,
    internal::Foo_Data** output);
void Deserialize_(internal::Foo_Data* input,
                  Foo* output);

size_t GetSerializedSize_(const DefaultsTest& input);
mojo::internal::ValidationError Serialize_(
    DefaultsTest* input,
    mojo::internal::Buffer* buffer,
    internal::DefaultsTest_Data** output);
void Deserialize_(internal::DefaultsTest_Data* input,
                  DefaultsTest* output);

size_t GetSerializedSize_(const StructWithHoleV1& input);
mojo::internal::ValidationError Serialize_(
    StructWithHoleV1* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithHoleV1_Data** output);
void Deserialize_(internal::StructWithHoleV1_Data* input,
                  StructWithHoleV1* output);

size_t GetSerializedSize_(const StructWithHoleV2& input);
mojo::internal::ValidationError Serialize_(
    StructWithHoleV2* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithHoleV2_Data** output);
void Deserialize_(internal::StructWithHoleV2_Data* input,
                  StructWithHoleV2* output);

size_t GetSerializedSize_(const NonNullableMapStruct& input);
mojo::internal::ValidationError Serialize_(
    NonNullableMapStruct* input,
    mojo::internal::Buffer* buffer,
    internal::NonNullableMapStruct_Data** output);
void Deserialize_(internal::NonNullableMapStruct_Data* input,
                  NonNullableMapStruct* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class Service_Frobinate_Params;

using Service_Frobinate_ParamsPtr = mojo::StructPtr<Service_Frobinate_Params>;


size_t GetSerializedSize_(const Service_Frobinate_Params& input);
mojo::internal::ValidationError Serialize_(
    Service_Frobinate_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Service_Frobinate_Params_Data** output);
void Deserialize_(internal::Service_Frobinate_Params_Data* input,
                  Service_Frobinate_Params* output);

class Service_Frobinate_Params {
 public:
  using Data_ = internal::Service_Frobinate_Params_Data;

  static Service_Frobinate_ParamsPtr New();

  template <typename U>
  static Service_Frobinate_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Service_Frobinate_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Service_Frobinate_Params>::Convert(*this);
  }

  Service_Frobinate_Params();
  ~Service_Frobinate_Params();
  
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


  bool Equals(const Service_Frobinate_Params& other) const;

  FooPtr foo;
  Service::BazOptions baz;
  mojo::InterfaceHandle<Port> port;
};



class Service_Frobinate_ResponseParams;

using Service_Frobinate_ResponseParamsPtr = mojo::InlinedStructPtr<Service_Frobinate_ResponseParams>;


size_t GetSerializedSize_(const Service_Frobinate_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    Service_Frobinate_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::Service_Frobinate_ResponseParams_Data** output);
void Deserialize_(internal::Service_Frobinate_ResponseParams_Data* input,
                  Service_Frobinate_ResponseParams* output);

class Service_Frobinate_ResponseParams {
 public:
  using Data_ = internal::Service_Frobinate_ResponseParams_Data;

  static Service_Frobinate_ResponseParamsPtr New();

  template <typename U>
  static Service_Frobinate_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<Service_Frobinate_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Service_Frobinate_ResponseParams>::Convert(*this);
  }

  Service_Frobinate_ResponseParams();
  ~Service_Frobinate_ResponseParams();
  
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


  Service_Frobinate_ResponseParamsPtr Clone() const;
  bool Equals(const Service_Frobinate_ResponseParams& other) const;

  int32_t result;
};



class Service_GetPort_Params;

using Service_GetPort_ParamsPtr = mojo::StructPtr<Service_GetPort_Params>;


size_t GetSerializedSize_(const Service_GetPort_Params& input);
mojo::internal::ValidationError Serialize_(
    Service_GetPort_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Service_GetPort_Params_Data** output);
void Deserialize_(internal::Service_GetPort_Params_Data* input,
                  Service_GetPort_Params* output);

class Service_GetPort_Params {
 public:
  using Data_ = internal::Service_GetPort_Params_Data;

  static Service_GetPort_ParamsPtr New();

  template <typename U>
  static Service_GetPort_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Service_GetPort_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Service_GetPort_Params>::Convert(*this);
  }

  Service_GetPort_Params();
  ~Service_GetPort_Params();
  
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


  bool Equals(const Service_GetPort_Params& other) const;

  mojo::InterfaceRequest<Port> port;
};



      

class Port_PostMessage_Params;

using Port_PostMessage_ParamsPtr = mojo::StructPtr<Port_PostMessage_Params>;


size_t GetSerializedSize_(const Port_PostMessage_Params& input);
mojo::internal::ValidationError Serialize_(
    Port_PostMessage_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Port_PostMessage_Params_Data** output);
void Deserialize_(internal::Port_PostMessage_Params_Data* input,
                  Port_PostMessage_Params* output);

class Port_PostMessage_Params {
 public:
  using Data_ = internal::Port_PostMessage_Params_Data;

  static Port_PostMessage_ParamsPtr New();

  template <typename U>
  static Port_PostMessage_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Port_PostMessage_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Port_PostMessage_Params>::Convert(*this);
  }

  Port_PostMessage_Params();
  ~Port_PostMessage_Params();
  
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


  bool Equals(const Port_PostMessage_Params& other) const;

  mojo::String message_text;
  mojo::InterfaceHandle<Port> port;
};



}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_COMMON_H_
