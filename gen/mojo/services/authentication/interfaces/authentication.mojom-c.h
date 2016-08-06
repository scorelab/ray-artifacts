// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_AUTHENTICATION_INTERFACES_AUTHENTICATION_MOJOM_C_H_
#define MOJO_SERVICES_AUTHENTICATION_INTERFACES_AUTHENTICATION_MOJOM_C_H_

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
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- authentication_AuthenticationService ---
#define authentication_AuthenticationService__ServiceName ((const char*)"authentication::AuthenticationService")
#define authentication_AuthenticationService__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: SelectAccount

#define authentication_AuthenticationService_SelectAccount__Ordinal \
    ((uint32_t)0)
#define authentication_AuthenticationService_SelectAccount__MinVersion \
    ((uint32_t)0)

struct authentication_AuthenticationService_SelectAccount_Request;
// -- authentication_AuthenticationService_SelectAccount_Request --
// Enums
// Constants
// Struct definition
struct authentication_AuthenticationService_SelectAccount_Request {
  struct MojomStructHeader header_;
  bool return_last_selected : 1;  // offset,bit = 0,0
  
};

struct authentication_AuthenticationService_SelectAccount_Request* authentication_AuthenticationService_SelectAccount_Request_New(struct MojomBuffer* in_buffer);

void authentication_AuthenticationService_SelectAccount_Request_Init(
  struct authentication_AuthenticationService_SelectAccount_Request* in_data);

void authentication_AuthenticationService_SelectAccount_Request_CloseAllHandles(
  struct authentication_AuthenticationService_SelectAccount_Request* in_data);

struct authentication_AuthenticationService_SelectAccount_Request* authentication_AuthenticationService_SelectAccount_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_AuthenticationService_SelectAccount_Request* in_data);

size_t authentication_AuthenticationService_SelectAccount_Request_ComputeSerializedSize(
  const struct authentication_AuthenticationService_SelectAccount_Request* in_data);

MojomValidationResult authentication_AuthenticationService_SelectAccount_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_AuthenticationService_SelectAccount_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_AuthenticationService_SelectAccount_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct authentication_AuthenticationService_SelectAccount_Response;
// -- authentication_AuthenticationService_SelectAccount_Response --
// Enums
// Constants
// Struct definition
struct authentication_AuthenticationService_SelectAccount_Response {
  struct MojomStructHeader header_;
  union MojomStringPtr username;  // offset,bit = 0,0
  union MojomStringPtr error;  // offset,bit = 8,0
  
};

struct authentication_AuthenticationService_SelectAccount_Response* authentication_AuthenticationService_SelectAccount_Response_New(struct MojomBuffer* in_buffer);

void authentication_AuthenticationService_SelectAccount_Response_Init(
  struct authentication_AuthenticationService_SelectAccount_Response* in_data);

void authentication_AuthenticationService_SelectAccount_Response_CloseAllHandles(
  struct authentication_AuthenticationService_SelectAccount_Response* in_data);

struct authentication_AuthenticationService_SelectAccount_Response* authentication_AuthenticationService_SelectAccount_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_AuthenticationService_SelectAccount_Response* in_data);

size_t authentication_AuthenticationService_SelectAccount_Response_ComputeSerializedSize(
  const struct authentication_AuthenticationService_SelectAccount_Response* in_data);

MojomValidationResult authentication_AuthenticationService_SelectAccount_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_AuthenticationService_SelectAccount_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_AuthenticationService_SelectAccount_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetOAuth2Token

#define authentication_AuthenticationService_GetOAuth2Token__Ordinal \
    ((uint32_t)1)
#define authentication_AuthenticationService_GetOAuth2Token__MinVersion \
    ((uint32_t)0)

struct authentication_AuthenticationService_GetOAuth2Token_Request;
// -- authentication_AuthenticationService_GetOAuth2Token_Request --
// Enums
// Constants
// Struct definition
struct authentication_AuthenticationService_GetOAuth2Token_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr username;  // offset,bit = 0,0
  union MojomArrayPtr scopes;  // offset,bit = 8,0
  
};

struct authentication_AuthenticationService_GetOAuth2Token_Request* authentication_AuthenticationService_GetOAuth2Token_Request_New(struct MojomBuffer* in_buffer);

void authentication_AuthenticationService_GetOAuth2Token_Request_Init(
  struct authentication_AuthenticationService_GetOAuth2Token_Request* in_data);

void authentication_AuthenticationService_GetOAuth2Token_Request_CloseAllHandles(
  struct authentication_AuthenticationService_GetOAuth2Token_Request* in_data);

struct authentication_AuthenticationService_GetOAuth2Token_Request* authentication_AuthenticationService_GetOAuth2Token_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_AuthenticationService_GetOAuth2Token_Request* in_data);

size_t authentication_AuthenticationService_GetOAuth2Token_Request_ComputeSerializedSize(
  const struct authentication_AuthenticationService_GetOAuth2Token_Request* in_data);

MojomValidationResult authentication_AuthenticationService_GetOAuth2Token_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_AuthenticationService_GetOAuth2Token_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_AuthenticationService_GetOAuth2Token_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct authentication_AuthenticationService_GetOAuth2Token_Response;
// -- authentication_AuthenticationService_GetOAuth2Token_Response --
// Enums
// Constants
// Struct definition
struct authentication_AuthenticationService_GetOAuth2Token_Response {
  struct MojomStructHeader header_;
  union MojomStringPtr token;  // offset,bit = 0,0
  union MojomStringPtr error;  // offset,bit = 8,0
  
};

struct authentication_AuthenticationService_GetOAuth2Token_Response* authentication_AuthenticationService_GetOAuth2Token_Response_New(struct MojomBuffer* in_buffer);

void authentication_AuthenticationService_GetOAuth2Token_Response_Init(
  struct authentication_AuthenticationService_GetOAuth2Token_Response* in_data);

void authentication_AuthenticationService_GetOAuth2Token_Response_CloseAllHandles(
  struct authentication_AuthenticationService_GetOAuth2Token_Response* in_data);

struct authentication_AuthenticationService_GetOAuth2Token_Response* authentication_AuthenticationService_GetOAuth2Token_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_AuthenticationService_GetOAuth2Token_Response* in_data);

size_t authentication_AuthenticationService_GetOAuth2Token_Response_ComputeSerializedSize(
  const struct authentication_AuthenticationService_GetOAuth2Token_Response* in_data);

MojomValidationResult authentication_AuthenticationService_GetOAuth2Token_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_AuthenticationService_GetOAuth2Token_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_AuthenticationService_GetOAuth2Token_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: ClearOAuth2Token

#define authentication_AuthenticationService_ClearOAuth2Token__Ordinal \
    ((uint32_t)2)
#define authentication_AuthenticationService_ClearOAuth2Token__MinVersion \
    ((uint32_t)0)

struct authentication_AuthenticationService_ClearOAuth2Token_Request;
// -- authentication_AuthenticationService_ClearOAuth2Token_Request --
// Enums
// Constants
// Struct definition
struct authentication_AuthenticationService_ClearOAuth2Token_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr token;  // offset,bit = 0,0
  
};

struct authentication_AuthenticationService_ClearOAuth2Token_Request* authentication_AuthenticationService_ClearOAuth2Token_Request_New(struct MojomBuffer* in_buffer);

void authentication_AuthenticationService_ClearOAuth2Token_Request_Init(
  struct authentication_AuthenticationService_ClearOAuth2Token_Request* in_data);

void authentication_AuthenticationService_ClearOAuth2Token_Request_CloseAllHandles(
  struct authentication_AuthenticationService_ClearOAuth2Token_Request* in_data);

struct authentication_AuthenticationService_ClearOAuth2Token_Request* authentication_AuthenticationService_ClearOAuth2Token_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_AuthenticationService_ClearOAuth2Token_Request* in_data);

size_t authentication_AuthenticationService_ClearOAuth2Token_Request_ComputeSerializedSize(
  const struct authentication_AuthenticationService_ClearOAuth2Token_Request* in_data);

MojomValidationResult authentication_AuthenticationService_ClearOAuth2Token_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_AuthenticationService_ClearOAuth2Token_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_AuthenticationService_ClearOAuth2Token_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry authentication_AuthenticationService_SelectAccount_Request__PointerTable[];
extern struct MojomPointerTableStructEntry authentication_AuthenticationService_SelectAccount_Response__PointerTable[];
extern struct MojomPointerTableStructEntry authentication_AuthenticationService_GetOAuth2Token_Request__PointerTable[];
extern struct MojomPointerTableStructEntry authentication_AuthenticationService_GetOAuth2Token_Response__PointerTable[];
extern struct MojomPointerTableStructEntry authentication_AuthenticationService_ClearOAuth2Token_Request__PointerTable[];


#endif  // MOJO_SERVICES_AUTHENTICATION_INTERFACES_AUTHENTICATION_MOJOM_C_H_