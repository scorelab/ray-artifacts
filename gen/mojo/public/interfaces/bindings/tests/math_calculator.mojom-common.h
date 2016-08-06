// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom-internal.h"
namespace math {

// --- Interface Forward Declarations ---
class Calculator;
class CalculatorRequestValidator;
class CalculatorResponseValidator;
class Calculator_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class Calculator_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = CalculatorRequestValidator;
  using ResponseValidator_ = CalculatorResponseValidator;
  using Synchronous_ = Calculator_Synchronous;
  enum class MessageOrdinals : uint32_t {
    Clear = 0,
    Add = 1,
    Multiply = 2,
  };


  virtual ~Calculator_Base() {}
};

}  // namespace internal

// Async interface declaration

class CalculatorProxy;
class CalculatorStub;
class Calculator_Synchronous;

class CalculatorRequestValidator;
class CalculatorResponseValidator;

class Calculator : public internal::Calculator_Base {
 public:
  virtual ~Calculator() override {}

  using Proxy_ = CalculatorProxy;
  using Stub_ = CalculatorStub;
  using ClearCallback = mojo::Callback<void(double)>;
  virtual void Clear(const ClearCallback& callback) = 0;
  using AddCallback = mojo::Callback<void(double)>;
  virtual void Add(double value, const AddCallback& callback) = 0;
  using MultiplyCallback = mojo::Callback<void(double)>;
  virtual void Multiply(double value, const MultiplyCallback& callback) = 0;
};

}  // namespace math

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace math {

// --- Interface Request Validators ---
class CalculatorRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface Response Validators ---
class CalculatorResponseValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---

// --- Non-inlined structs ---

// --- Struct serialization helpers ---

// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class Calculator_Clear_Params;

using Calculator_Clear_ParamsPtr = mojo::InlinedStructPtr<Calculator_Clear_Params>;


size_t GetSerializedSize_(const Calculator_Clear_Params& input);
mojo::internal::ValidationError Serialize_(
    Calculator_Clear_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Calculator_Clear_Params_Data** output);
void Deserialize_(internal::Calculator_Clear_Params_Data* input,
                  Calculator_Clear_Params* output);

class Calculator_Clear_Params {
 public:
  using Data_ = internal::Calculator_Clear_Params_Data;

  static Calculator_Clear_ParamsPtr New();

  template <typename U>
  static Calculator_Clear_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Calculator_Clear_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Calculator_Clear_Params>::Convert(*this);
  }

  Calculator_Clear_Params();
  ~Calculator_Clear_Params();
  
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


  Calculator_Clear_ParamsPtr Clone() const;
  bool Equals(const Calculator_Clear_Params& other) const;

};



class Calculator_Clear_ResponseParams;

using Calculator_Clear_ResponseParamsPtr = mojo::InlinedStructPtr<Calculator_Clear_ResponseParams>;


size_t GetSerializedSize_(const Calculator_Clear_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    Calculator_Clear_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::Calculator_Clear_ResponseParams_Data** output);
void Deserialize_(internal::Calculator_Clear_ResponseParams_Data* input,
                  Calculator_Clear_ResponseParams* output);

class Calculator_Clear_ResponseParams {
 public:
  using Data_ = internal::Calculator_Clear_ResponseParams_Data;

  static Calculator_Clear_ResponseParamsPtr New();

  template <typename U>
  static Calculator_Clear_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<Calculator_Clear_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Calculator_Clear_ResponseParams>::Convert(*this);
  }

  Calculator_Clear_ResponseParams();
  ~Calculator_Clear_ResponseParams();
  
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


  Calculator_Clear_ResponseParamsPtr Clone() const;
  bool Equals(const Calculator_Clear_ResponseParams& other) const;

  double value;
};



class Calculator_Add_Params;

using Calculator_Add_ParamsPtr = mojo::InlinedStructPtr<Calculator_Add_Params>;


size_t GetSerializedSize_(const Calculator_Add_Params& input);
mojo::internal::ValidationError Serialize_(
    Calculator_Add_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Calculator_Add_Params_Data** output);
void Deserialize_(internal::Calculator_Add_Params_Data* input,
                  Calculator_Add_Params* output);

class Calculator_Add_Params {
 public:
  using Data_ = internal::Calculator_Add_Params_Data;

  static Calculator_Add_ParamsPtr New();

  template <typename U>
  static Calculator_Add_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Calculator_Add_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Calculator_Add_Params>::Convert(*this);
  }

  Calculator_Add_Params();
  ~Calculator_Add_Params();
  
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


  Calculator_Add_ParamsPtr Clone() const;
  bool Equals(const Calculator_Add_Params& other) const;

  double value;
};



class Calculator_Add_ResponseParams;

using Calculator_Add_ResponseParamsPtr = mojo::InlinedStructPtr<Calculator_Add_ResponseParams>;


size_t GetSerializedSize_(const Calculator_Add_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    Calculator_Add_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::Calculator_Add_ResponseParams_Data** output);
void Deserialize_(internal::Calculator_Add_ResponseParams_Data* input,
                  Calculator_Add_ResponseParams* output);

class Calculator_Add_ResponseParams {
 public:
  using Data_ = internal::Calculator_Add_ResponseParams_Data;

  static Calculator_Add_ResponseParamsPtr New();

  template <typename U>
  static Calculator_Add_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<Calculator_Add_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Calculator_Add_ResponseParams>::Convert(*this);
  }

  Calculator_Add_ResponseParams();
  ~Calculator_Add_ResponseParams();
  
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


  Calculator_Add_ResponseParamsPtr Clone() const;
  bool Equals(const Calculator_Add_ResponseParams& other) const;

  double value;
};



class Calculator_Multiply_Params;

using Calculator_Multiply_ParamsPtr = mojo::InlinedStructPtr<Calculator_Multiply_Params>;


size_t GetSerializedSize_(const Calculator_Multiply_Params& input);
mojo::internal::ValidationError Serialize_(
    Calculator_Multiply_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Calculator_Multiply_Params_Data** output);
void Deserialize_(internal::Calculator_Multiply_Params_Data* input,
                  Calculator_Multiply_Params* output);

class Calculator_Multiply_Params {
 public:
  using Data_ = internal::Calculator_Multiply_Params_Data;

  static Calculator_Multiply_ParamsPtr New();

  template <typename U>
  static Calculator_Multiply_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Calculator_Multiply_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Calculator_Multiply_Params>::Convert(*this);
  }

  Calculator_Multiply_Params();
  ~Calculator_Multiply_Params();
  
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


  Calculator_Multiply_ParamsPtr Clone() const;
  bool Equals(const Calculator_Multiply_Params& other) const;

  double value;
};



class Calculator_Multiply_ResponseParams;

using Calculator_Multiply_ResponseParamsPtr = mojo::InlinedStructPtr<Calculator_Multiply_ResponseParams>;


size_t GetSerializedSize_(const Calculator_Multiply_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    Calculator_Multiply_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::Calculator_Multiply_ResponseParams_Data** output);
void Deserialize_(internal::Calculator_Multiply_ResponseParams_Data* input,
                  Calculator_Multiply_ResponseParams* output);

class Calculator_Multiply_ResponseParams {
 public:
  using Data_ = internal::Calculator_Multiply_ResponseParams_Data;

  static Calculator_Multiply_ResponseParamsPtr New();

  template <typename U>
  static Calculator_Multiply_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<Calculator_Multiply_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Calculator_Multiply_ResponseParams>::Convert(*this);
  }

  Calculator_Multiply_ResponseParams();
  ~Calculator_Multiply_ResponseParams();
  
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


  Calculator_Multiply_ResponseParamsPtr Clone() const;
  bool Equals(const Calculator_Multiply_ResponseParams& other) const;

  double value;
};


}  // namespace math

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_COMMON_H_
