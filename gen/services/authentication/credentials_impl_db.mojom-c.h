// This file was auto-generated by the C bindings generator.

#ifndef SERVICES_AUTHENTICATION_CREDENTIALS_IMPL_DB_MOJOM_C_H_
#define SERVICES_AUTHENTICATION_CREDENTIALS_IMPL_DB_MOJOM_C_H_

#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

#include "mojo/public/c/bindings/array.h"
#include "mojo/public/c/bindings/buffer.h"
#include "mojo/public/c/bindings/interface.h"
#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/bindings/map.h"
#include "mojo/public/c/bindings/string.h"
#include "mojo/public/c/bindings/validation.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Forward declarations for structs.
struct authentication_Credentials;
union authentication_CredentialsPtr {
  struct authentication_Credentials* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union authentication_CredentialsPtr) == 8,
              "union authentication_CredentialsPtr must be 8 bytes");

struct authentication_CredentialStore;
union authentication_CredentialStorePtr {
  struct authentication_CredentialStore* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union authentication_CredentialStorePtr) == 8,
              "union authentication_CredentialStorePtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.
typedef uint32_t authentication_CredentialType;
enum authentication_CredentialType_Enum {
  authentication_CredentialType_DOWNSCOPED_OAUTH_REFRESH_TOKEN = 1,
  
  authentication_CredentialType__UNKNOWN__ = 0xFFFFFFFF,
};

typedef uint32_t authentication_AuthProvider;
enum authentication_AuthProvider_Enum {
  authentication_AuthProvider_GOOGLE = 1,
  
  authentication_AuthProvider__UNKNOWN__ = 0xFFFFFFFF,
};



// Union definitions.


// Struct definitions.
// -- authentication_Credentials --
// Enums
// Constants
// Struct definition
struct authentication_Credentials {
  struct MojomStructHeader header_;
  authentication_AuthProvider auth_provider;  // offset,bit = 0,0
  authentication_CredentialType credential_type;  // offset,bit = 4,0
  union MojomStringPtr token;  // offset,bit = 8,0
  union MojomStringPtr scopes;  // offset,bit = 16,0
  
};

struct authentication_Credentials* authentication_Credentials_New(struct MojomBuffer* in_buffer);

void authentication_Credentials_Init(
  struct authentication_Credentials* in_data);

void authentication_Credentials_CloseAllHandles(
  struct authentication_Credentials* in_data);

struct authentication_Credentials* authentication_Credentials_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_Credentials* in_data);

size_t authentication_Credentials_ComputeSerializedSize(
  const struct authentication_Credentials* in_data);

MojomValidationResult authentication_Credentials_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_Credentials_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_Credentials_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- authentication_CredentialStore --
// Enums
// Constants
// Struct definition
struct authentication_CredentialStore {
  struct MojomStructHeader header_;
  uint32_t version;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  union MojomMapPtr credentials;  // offset,bit = 8,0
  
};

struct authentication_CredentialStore* authentication_CredentialStore_New(struct MojomBuffer* in_buffer);

void authentication_CredentialStore_Init(
  struct authentication_CredentialStore* in_data);

void authentication_CredentialStore_CloseAllHandles(
  struct authentication_CredentialStore* in_data);

struct authentication_CredentialStore* authentication_CredentialStore_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_CredentialStore* in_data);

size_t authentication_CredentialStore_ComputeSerializedSize(
  const struct authentication_CredentialStore* in_data);

MojomValidationResult authentication_CredentialStore_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_CredentialStore_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_CredentialStore_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry authentication_Credentials__PointerTable[];
extern struct MojomPointerTableStructEntry authentication_CredentialStore__PointerTable[];


#endif  // SERVICES_AUTHENTICATION_CREDENTIALS_IMPL_DB_MOJOM_C_H_