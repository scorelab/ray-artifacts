// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_COMMON_H_
#define MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_COMMON_H_

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
#include "mojo/services/navigation/interfaces/navigation.mojom-internal.h"
#include "mojo/public/interfaces/network/url_request.mojom-common.h"
namespace mojo {

// --- Interface Forward Declarations ---
class NavigatorHost;
class NavigatorHostRequestValidator;
class NavigatorHost_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---
  
enum class Target : int32_t {
  DEFAULT,
  SOURCE_NODE,
  NEW_NODE,
};

bool Target_IsValidValue(Target value);
  
std::ostream& operator<<(std::ostream& stream, const Target& val);

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class NavigatorHost_Base {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;

  using RequestValidator_ = NavigatorHostRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = NavigatorHost_Synchronous;
  enum class MessageOrdinals : uint32_t {
    RequestNavigate = 0,
    RequestNavigateHistory = 1,
    DidNavigateLocally = 2,
  };


  virtual ~NavigatorHost_Base() {}
};

}  // namespace internal

// Async interface declaration

class NavigatorHostProxy;
class NavigatorHostStub;
class NavigatorHost_Synchronous;

class NavigatorHostRequestValidator;

class NavigatorHost : public internal::NavigatorHost_Base {
 public:
  virtual ~NavigatorHost() override {}

  using Proxy_ = NavigatorHostProxy;
  using Stub_ = NavigatorHostStub;
  virtual void RequestNavigate(Target target, mojo::URLRequestPtr request) = 0;
  virtual void RequestNavigateHistory(int32_t delta) = 0;
  virtual void DidNavigateLocally(const mojo::String& url) = 0;
};

}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---
class NavigatorHostRequestValidator
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

// --- Struct serialization helpers ---

// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class NavigatorHost_RequestNavigate_Params;

using NavigatorHost_RequestNavigate_ParamsPtr = mojo::StructPtr<NavigatorHost_RequestNavigate_Params>;


size_t GetSerializedSize_(const NavigatorHost_RequestNavigate_Params& input);
mojo::internal::ValidationError Serialize_(
    NavigatorHost_RequestNavigate_Params* input,
    mojo::internal::Buffer* buffer,
    internal::NavigatorHost_RequestNavigate_Params_Data** output);
void Deserialize_(internal::NavigatorHost_RequestNavigate_Params_Data* input,
                  NavigatorHost_RequestNavigate_Params* output);

class NavigatorHost_RequestNavigate_Params {
 public:
  using Data_ = internal::NavigatorHost_RequestNavigate_Params_Data;

  static NavigatorHost_RequestNavigate_ParamsPtr New();

  template <typename U>
  static NavigatorHost_RequestNavigate_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<NavigatorHost_RequestNavigate_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NavigatorHost_RequestNavigate_Params>::Convert(*this);
  }

  NavigatorHost_RequestNavigate_Params();
  ~NavigatorHost_RequestNavigate_Params();
  
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


  bool Equals(const NavigatorHost_RequestNavigate_Params& other) const;

  Target target;
  mojo::URLRequestPtr request;
};




class NavigatorHost_RequestNavigateHistory_Params;

using NavigatorHost_RequestNavigateHistory_ParamsPtr = mojo::InlinedStructPtr<NavigatorHost_RequestNavigateHistory_Params>;


size_t GetSerializedSize_(const NavigatorHost_RequestNavigateHistory_Params& input);
mojo::internal::ValidationError Serialize_(
    NavigatorHost_RequestNavigateHistory_Params* input,
    mojo::internal::Buffer* buffer,
    internal::NavigatorHost_RequestNavigateHistory_Params_Data** output);
void Deserialize_(internal::NavigatorHost_RequestNavigateHistory_Params_Data* input,
                  NavigatorHost_RequestNavigateHistory_Params* output);

class NavigatorHost_RequestNavigateHistory_Params {
 public:
  using Data_ = internal::NavigatorHost_RequestNavigateHistory_Params_Data;

  static NavigatorHost_RequestNavigateHistory_ParamsPtr New();

  template <typename U>
  static NavigatorHost_RequestNavigateHistory_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<NavigatorHost_RequestNavigateHistory_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NavigatorHost_RequestNavigateHistory_Params>::Convert(*this);
  }

  NavigatorHost_RequestNavigateHistory_Params();
  ~NavigatorHost_RequestNavigateHistory_Params();
  
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


  NavigatorHost_RequestNavigateHistory_ParamsPtr Clone() const;
  bool Equals(const NavigatorHost_RequestNavigateHistory_Params& other) const;

  int32_t delta;
};




class NavigatorHost_DidNavigateLocally_Params;

using NavigatorHost_DidNavigateLocally_ParamsPtr = mojo::InlinedStructPtr<NavigatorHost_DidNavigateLocally_Params>;


size_t GetSerializedSize_(const NavigatorHost_DidNavigateLocally_Params& input);
mojo::internal::ValidationError Serialize_(
    NavigatorHost_DidNavigateLocally_Params* input,
    mojo::internal::Buffer* buffer,
    internal::NavigatorHost_DidNavigateLocally_Params_Data** output);
void Deserialize_(internal::NavigatorHost_DidNavigateLocally_Params_Data* input,
                  NavigatorHost_DidNavigateLocally_Params* output);

class NavigatorHost_DidNavigateLocally_Params {
 public:
  using Data_ = internal::NavigatorHost_DidNavigateLocally_Params_Data;

  static NavigatorHost_DidNavigateLocally_ParamsPtr New();

  template <typename U>
  static NavigatorHost_DidNavigateLocally_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<NavigatorHost_DidNavigateLocally_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NavigatorHost_DidNavigateLocally_Params>::Convert(*this);
  }

  NavigatorHost_DidNavigateLocally_Params();
  ~NavigatorHost_DidNavigateLocally_Params();
  
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


  NavigatorHost_DidNavigateLocally_ParamsPtr Clone() const;
  bool Equals(const NavigatorHost_DidNavigateLocally_Params& other) const;

  mojo::String url;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NAVIGATION_INTERFACES_NAVIGATION_MOJOM_COMMON_H_
