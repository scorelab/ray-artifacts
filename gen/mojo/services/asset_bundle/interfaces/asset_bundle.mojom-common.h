// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_ASSET_BUNDLE_INTERFACES_ASSET_BUNDLE_MOJOM_COMMON_H_
#define MOJO_SERVICES_ASSET_BUNDLE_INTERFACES_ASSET_BUNDLE_MOJOM_COMMON_H_

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
#include "mojo/services/asset_bundle/interfaces/asset_bundle.mojom-internal.h"
namespace mojo {
namespace asset_bundle {

// --- Interface Forward Declarations ---
class AssetBundle;
class AssetBundleRequestValidator;
class AssetBundleResponseValidator;
class AssetBundle_Synchronous;
class AssetUnpacker;
class AssetUnpackerRequestValidator;
class AssetUnpacker_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class AssetBundle_Base {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;

  using RequestValidator_ = AssetBundleRequestValidator;
  using ResponseValidator_ = AssetBundleResponseValidator;
  using Synchronous_ = AssetBundle_Synchronous;
  enum class MessageOrdinals : uint32_t {
    GetAsStream = 0,
  };


  virtual ~AssetBundle_Base() {}
};

}  // namespace internal

// Async interface declaration

class AssetBundleProxy;
class AssetBundleStub;
class AssetBundle_Synchronous;

class AssetBundleRequestValidator;
class AssetBundleResponseValidator;

class AssetBundle : public internal::AssetBundle_Base {
 public:
  virtual ~AssetBundle() override {}

  using Proxy_ = AssetBundleProxy;
  using Stub_ = AssetBundleStub;
  using GetAsStreamCallback = mojo::Callback<void(mojo::ScopedDataPipeConsumerHandle)>;
  virtual void GetAsStream(const mojo::String& asset_name, const GetAsStreamCallback& callback) = 0;
};

namespace internal {
class AssetUnpacker_Base {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;

  using RequestValidator_ = AssetUnpackerRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = AssetUnpacker_Synchronous;
  enum class MessageOrdinals : uint32_t {
    UnpackZipStream = 0,
  };


  virtual ~AssetUnpacker_Base() {}
};

}  // namespace internal

// Async interface declaration

class AssetUnpackerProxy;
class AssetUnpackerStub;
class AssetUnpacker_Synchronous;

class AssetUnpackerRequestValidator;

class AssetUnpacker : public internal::AssetUnpacker_Base {
 public:
  virtual ~AssetUnpacker() override {}

  using Proxy_ = AssetUnpackerProxy;
  using Stub_ = AssetUnpackerStub;
  virtual void UnpackZipStream(mojo::ScopedDataPipeConsumerHandle zipped_assets, mojo::InterfaceRequest<AssetBundle> asset_bundle) = 0;
};

}  // namespace asset_bundle
}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {
namespace asset_bundle {

// --- Interface Request Validators ---
class AssetBundleRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};

class AssetUnpackerRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface Response Validators ---
class AssetBundleResponseValidator
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
      

class AssetBundle_GetAsStream_Params;

using AssetBundle_GetAsStream_ParamsPtr = mojo::InlinedStructPtr<AssetBundle_GetAsStream_Params>;


size_t GetSerializedSize_(const AssetBundle_GetAsStream_Params& input);
mojo::internal::ValidationError Serialize_(
    AssetBundle_GetAsStream_Params* input,
    mojo::internal::Buffer* buffer,
    internal::AssetBundle_GetAsStream_Params_Data** output);
void Deserialize_(internal::AssetBundle_GetAsStream_Params_Data* input,
                  AssetBundle_GetAsStream_Params* output);

class AssetBundle_GetAsStream_Params {
 public:
  using Data_ = internal::AssetBundle_GetAsStream_Params_Data;

  static AssetBundle_GetAsStream_ParamsPtr New();

  template <typename U>
  static AssetBundle_GetAsStream_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<AssetBundle_GetAsStream_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AssetBundle_GetAsStream_Params>::Convert(*this);
  }

  AssetBundle_GetAsStream_Params();
  ~AssetBundle_GetAsStream_Params();
  
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


  AssetBundle_GetAsStream_ParamsPtr Clone() const;
  bool Equals(const AssetBundle_GetAsStream_Params& other) const;

  mojo::String asset_name;
};



class AssetBundle_GetAsStream_ResponseParams;

using AssetBundle_GetAsStream_ResponseParamsPtr = mojo::StructPtr<AssetBundle_GetAsStream_ResponseParams>;


size_t GetSerializedSize_(const AssetBundle_GetAsStream_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    AssetBundle_GetAsStream_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::AssetBundle_GetAsStream_ResponseParams_Data** output);
void Deserialize_(internal::AssetBundle_GetAsStream_ResponseParams_Data* input,
                  AssetBundle_GetAsStream_ResponseParams* output);

class AssetBundle_GetAsStream_ResponseParams {
 public:
  using Data_ = internal::AssetBundle_GetAsStream_ResponseParams_Data;

  static AssetBundle_GetAsStream_ResponseParamsPtr New();

  template <typename U>
  static AssetBundle_GetAsStream_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<AssetBundle_GetAsStream_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AssetBundle_GetAsStream_ResponseParams>::Convert(*this);
  }

  AssetBundle_GetAsStream_ResponseParams();
  ~AssetBundle_GetAsStream_ResponseParams();
  
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


  bool Equals(const AssetBundle_GetAsStream_ResponseParams& other) const;

  mojo::ScopedDataPipeConsumerHandle asset_data;
};


      

class AssetUnpacker_UnpackZipStream_Params;

using AssetUnpacker_UnpackZipStream_ParamsPtr = mojo::StructPtr<AssetUnpacker_UnpackZipStream_Params>;


size_t GetSerializedSize_(const AssetUnpacker_UnpackZipStream_Params& input);
mojo::internal::ValidationError Serialize_(
    AssetUnpacker_UnpackZipStream_Params* input,
    mojo::internal::Buffer* buffer,
    internal::AssetUnpacker_UnpackZipStream_Params_Data** output);
void Deserialize_(internal::AssetUnpacker_UnpackZipStream_Params_Data* input,
                  AssetUnpacker_UnpackZipStream_Params* output);

class AssetUnpacker_UnpackZipStream_Params {
 public:
  using Data_ = internal::AssetUnpacker_UnpackZipStream_Params_Data;

  static AssetUnpacker_UnpackZipStream_ParamsPtr New();

  template <typename U>
  static AssetUnpacker_UnpackZipStream_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<AssetUnpacker_UnpackZipStream_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AssetUnpacker_UnpackZipStream_Params>::Convert(*this);
  }

  AssetUnpacker_UnpackZipStream_Params();
  ~AssetUnpacker_UnpackZipStream_Params();
  
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


  bool Equals(const AssetUnpacker_UnpackZipStream_Params& other) const;

  mojo::ScopedDataPipeConsumerHandle zipped_assets;
  mojo::InterfaceRequest<AssetBundle> asset_bundle;
};



}  // namespace asset_bundle
}  // namespace mojo

#endif  // MOJO_SERVICES_ASSET_BUNDLE_INTERFACES_ASSET_BUNDLE_MOJOM_COMMON_H_
