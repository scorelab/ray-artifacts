// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_ARRAYS_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_ARRAYS_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/bindings/tests/test_arrays.mojom-internal.h"
namespace mojo {
namespace test {

// --- Interface Forward Declarations ---
class TestInterface;
class TestInterfaceRequestValidator;
class TestInterface_Synchronous;

// --- Struct Forward Declarations ---
class StructWithInterface;

using StructWithInterfacePtr = mojo::StructPtr<StructWithInterface>;


class StructWithInterfaceArray;

using StructWithInterfaceArrayPtr = mojo::StructPtr<StructWithInterfaceArray>;


class StructWithDataPipeConsumers;

using StructWithDataPipeConsumersPtr = mojo::StructPtr<StructWithDataPipeConsumers>;


class StructWithDataPipeProducers;

using StructWithDataPipeProducersPtr = mojo::StructPtr<StructWithDataPipeProducers>;


class StructWithSharedBuffers;

using StructWithSharedBuffersPtr = mojo::StructPtr<StructWithSharedBuffers>;


class StructWithMessagePipes;

using StructWithMessagePipesPtr = mojo::StructPtr<StructWithMessagePipes>;


class StructWithHandles;

using StructWithHandlesPtr = mojo::StructPtr<StructWithHandles>;


class StructWithInterfaceRequests;

using StructWithInterfaceRequestsPtr = mojo::StructPtr<StructWithInterfaceRequests>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class TestInterface_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = TestInterfaceRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = TestInterface_Synchronous;
  enum class MessageOrdinals : uint32_t {
    Foo = 0,
  };


  virtual ~TestInterface_Base() {}
};

}  // namespace internal

// Async interface declaration

class TestInterfaceProxy;
class TestInterfaceStub;
class TestInterface_Synchronous;

class TestInterfaceRequestValidator;

class TestInterface : public internal::TestInterface_Base {
 public:
  virtual ~TestInterface() override {}

  using Proxy_ = TestInterfaceProxy;
  using Stub_ = TestInterfaceStub;
  virtual void Foo() = 0;
};

}  // namespace test
}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<mojo::test::StructWithInterfacePtr, true, false> {
  using DataType = mojo::test::internal::StructWithInterface_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithInterfaceArrayPtr, true, false> {
  using DataType = mojo::test::internal::StructWithInterfaceArray_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithDataPipeConsumersPtr, true, false> {
  using DataType = mojo::test::internal::StructWithDataPipeConsumers_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithDataPipeProducersPtr, true, false> {
  using DataType = mojo::test::internal::StructWithDataPipeProducers_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithSharedBuffersPtr, true, false> {
  using DataType = mojo::test::internal::StructWithSharedBuffers_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithMessagePipesPtr, true, false> {
  using DataType = mojo::test::internal::StructWithMessagePipes_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithHandlesPtr, true, false> {
  using DataType = mojo::test::internal::StructWithHandles_Data*;
};
template <>
struct WrapperTraits<mojo::test::StructWithInterfaceRequestsPtr, true, false> {
  using DataType = mojo::test::internal::StructWithInterfaceRequests_Data*;
};

}  // internal
}  // mojo
namespace mojo {
namespace test {

// --- Interface Request Validators ---
class TestInterfaceRequestValidator
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
class StructWithInterface {
 public:
  using Data_ = internal::StructWithInterface_Data;

  static StructWithInterfacePtr New();

  template <typename U>
  static StructWithInterfacePtr From(const U& u) {
    return mojo::TypeConverter<StructWithInterfacePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithInterface>::Convert(*this);
  }

  StructWithInterface();
  ~StructWithInterface();
  
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


  bool Equals(const StructWithInterface& other) const;

  mojo::InterfaceHandle<TestInterface> iptr;
};


class StructWithInterfaceArray {
 public:
  using Data_ = internal::StructWithInterfaceArray_Data;

  static StructWithInterfaceArrayPtr New();

  template <typename U>
  static StructWithInterfaceArrayPtr From(const U& u) {
    return mojo::TypeConverter<StructWithInterfaceArrayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithInterfaceArray>::Convert(*this);
  }

  StructWithInterfaceArray();
  ~StructWithInterfaceArray();
  
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


  bool Equals(const StructWithInterfaceArray& other) const;

  mojo::Array<StructWithInterfacePtr> structs_array;
  mojo::Array<StructWithInterfacePtr> structs_nullable_array;
  mojo::Array<StructWithInterfacePtr> nullable_structs_array;
  mojo::Array<StructWithInterfacePtr> nullable_structs_nullable_array;
};


class StructWithDataPipeConsumers {
 public:
  using Data_ = internal::StructWithDataPipeConsumers_Data;

  static StructWithDataPipeConsumersPtr New();

  template <typename U>
  static StructWithDataPipeConsumersPtr From(const U& u) {
    return mojo::TypeConverter<StructWithDataPipeConsumersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithDataPipeConsumers>::Convert(*this);
  }

  StructWithDataPipeConsumers();
  ~StructWithDataPipeConsumers();
  
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


  bool Equals(const StructWithDataPipeConsumers& other) const;

  mojo::Array<mojo::ScopedDataPipeConsumerHandle> handles_array;
  mojo::Array<mojo::ScopedDataPipeConsumerHandle> handles_nullable_array;
  mojo::Array<mojo::ScopedDataPipeConsumerHandle> nullable_handles_array;
  mojo::Array<mojo::ScopedDataPipeConsumerHandle> nullable_handles_nullable_array;
};


class StructWithDataPipeProducers {
 public:
  using Data_ = internal::StructWithDataPipeProducers_Data;

  static StructWithDataPipeProducersPtr New();

  template <typename U>
  static StructWithDataPipeProducersPtr From(const U& u) {
    return mojo::TypeConverter<StructWithDataPipeProducersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithDataPipeProducers>::Convert(*this);
  }

  StructWithDataPipeProducers();
  ~StructWithDataPipeProducers();
  
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


  bool Equals(const StructWithDataPipeProducers& other) const;

  mojo::Array<mojo::ScopedDataPipeProducerHandle> handles_array;
  mojo::Array<mojo::ScopedDataPipeProducerHandle> handles_nullable_array;
  mojo::Array<mojo::ScopedDataPipeProducerHandle> nullable_handles_array;
  mojo::Array<mojo::ScopedDataPipeProducerHandle> nullable_handles_nullable_array;
};


class StructWithSharedBuffers {
 public:
  using Data_ = internal::StructWithSharedBuffers_Data;

  static StructWithSharedBuffersPtr New();

  template <typename U>
  static StructWithSharedBuffersPtr From(const U& u) {
    return mojo::TypeConverter<StructWithSharedBuffersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithSharedBuffers>::Convert(*this);
  }

  StructWithSharedBuffers();
  ~StructWithSharedBuffers();
  
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


  bool Equals(const StructWithSharedBuffers& other) const;

  mojo::Array<mojo::ScopedSharedBufferHandle> handles_array;
  mojo::Array<mojo::ScopedSharedBufferHandle> handles_nullable_array;
  mojo::Array<mojo::ScopedSharedBufferHandle> nullable_handles_array;
  mojo::Array<mojo::ScopedSharedBufferHandle> nullable_handles_nullable_array;
};


class StructWithMessagePipes {
 public:
  using Data_ = internal::StructWithMessagePipes_Data;

  static StructWithMessagePipesPtr New();

  template <typename U>
  static StructWithMessagePipesPtr From(const U& u) {
    return mojo::TypeConverter<StructWithMessagePipesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithMessagePipes>::Convert(*this);
  }

  StructWithMessagePipes();
  ~StructWithMessagePipes();
  
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


  bool Equals(const StructWithMessagePipes& other) const;

  mojo::Array<mojo::ScopedMessagePipeHandle> handles_array;
  mojo::Array<mojo::ScopedMessagePipeHandle> handles_nullable_array;
  mojo::Array<mojo::ScopedMessagePipeHandle> nullable_handles_array;
  mojo::Array<mojo::ScopedMessagePipeHandle> nullable_handles_nullable_array;
};


class StructWithHandles {
 public:
  using Data_ = internal::StructWithHandles_Data;

  static StructWithHandlesPtr New();

  template <typename U>
  static StructWithHandlesPtr From(const U& u) {
    return mojo::TypeConverter<StructWithHandlesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithHandles>::Convert(*this);
  }

  StructWithHandles();
  ~StructWithHandles();
  
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


  bool Equals(const StructWithHandles& other) const;

  mojo::Array<mojo::ScopedHandle> handles_array;
  mojo::Array<mojo::ScopedHandle> handles_nullable_array;
  mojo::Array<mojo::ScopedHandle> nullable_handles_array;
  mojo::Array<mojo::ScopedHandle> nullable_handles_nullable_array;
};


class StructWithInterfaceRequests {
 public:
  using Data_ = internal::StructWithInterfaceRequests_Data;

  static StructWithInterfaceRequestsPtr New();

  template <typename U>
  static StructWithInterfaceRequestsPtr From(const U& u) {
    return mojo::TypeConverter<StructWithInterfaceRequestsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithInterfaceRequests>::Convert(*this);
  }

  StructWithInterfaceRequests();
  ~StructWithInterfaceRequests();
  
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


  bool Equals(const StructWithInterfaceRequests& other) const;

  mojo::Array<mojo::InterfaceRequest<TestInterface>> req_array;
  mojo::Array<mojo::InterfaceRequest<TestInterface>> req_nullable_array;
  mojo::Array<mojo::InterfaceRequest<TestInterface>> nullable_req_array;
  mojo::Array<mojo::InterfaceRequest<TestInterface>> nullable_req_nullable_array;
};



// --- Struct serialization helpers ---
size_t GetSerializedSize_(const StructWithInterface& input);
mojo::internal::ValidationError Serialize_(
    StructWithInterface* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithInterface_Data** output);
void Deserialize_(internal::StructWithInterface_Data* input,
                  StructWithInterface* output);

size_t GetSerializedSize_(const StructWithInterfaceArray& input);
mojo::internal::ValidationError Serialize_(
    StructWithInterfaceArray* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithInterfaceArray_Data** output);
void Deserialize_(internal::StructWithInterfaceArray_Data* input,
                  StructWithInterfaceArray* output);

size_t GetSerializedSize_(const StructWithDataPipeConsumers& input);
mojo::internal::ValidationError Serialize_(
    StructWithDataPipeConsumers* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithDataPipeConsumers_Data** output);
void Deserialize_(internal::StructWithDataPipeConsumers_Data* input,
                  StructWithDataPipeConsumers* output);

size_t GetSerializedSize_(const StructWithDataPipeProducers& input);
mojo::internal::ValidationError Serialize_(
    StructWithDataPipeProducers* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithDataPipeProducers_Data** output);
void Deserialize_(internal::StructWithDataPipeProducers_Data* input,
                  StructWithDataPipeProducers* output);

size_t GetSerializedSize_(const StructWithSharedBuffers& input);
mojo::internal::ValidationError Serialize_(
    StructWithSharedBuffers* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithSharedBuffers_Data** output);
void Deserialize_(internal::StructWithSharedBuffers_Data* input,
                  StructWithSharedBuffers* output);

size_t GetSerializedSize_(const StructWithMessagePipes& input);
mojo::internal::ValidationError Serialize_(
    StructWithMessagePipes* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithMessagePipes_Data** output);
void Deserialize_(internal::StructWithMessagePipes_Data* input,
                  StructWithMessagePipes* output);

size_t GetSerializedSize_(const StructWithHandles& input);
mojo::internal::ValidationError Serialize_(
    StructWithHandles* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithHandles_Data** output);
void Deserialize_(internal::StructWithHandles_Data* input,
                  StructWithHandles* output);

size_t GetSerializedSize_(const StructWithInterfaceRequests& input);
mojo::internal::ValidationError Serialize_(
    StructWithInterfaceRequests* input,
    mojo::internal::Buffer* buffer,
    internal::StructWithInterfaceRequests_Data** output);
void Deserialize_(internal::StructWithInterfaceRequests_Data* input,
                  StructWithInterfaceRequests* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class TestInterface_Foo_Params;

using TestInterface_Foo_ParamsPtr = mojo::InlinedStructPtr<TestInterface_Foo_Params>;


size_t GetSerializedSize_(const TestInterface_Foo_Params& input);
mojo::internal::ValidationError Serialize_(
    TestInterface_Foo_Params* input,
    mojo::internal::Buffer* buffer,
    internal::TestInterface_Foo_Params_Data** output);
void Deserialize_(internal::TestInterface_Foo_Params_Data* input,
                  TestInterface_Foo_Params* output);

class TestInterface_Foo_Params {
 public:
  using Data_ = internal::TestInterface_Foo_Params_Data;

  static TestInterface_Foo_ParamsPtr New();

  template <typename U>
  static TestInterface_Foo_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<TestInterface_Foo_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestInterface_Foo_Params>::Convert(*this);
  }

  TestInterface_Foo_Params();
  ~TestInterface_Foo_Params();
  
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


  TestInterface_Foo_ParamsPtr Clone() const;
  bool Equals(const TestInterface_Foo_Params& other) const;

};



}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_ARRAYS_MOJOM_COMMON_H_