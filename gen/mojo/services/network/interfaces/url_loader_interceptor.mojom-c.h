// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_INTERCEPTOR_MOJOM_C_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_INTERCEPTOR_MOJOM_C_H_

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
#include "mojo/public/interfaces/network/url_request.mojom-c.h"
#include "mojo/public/interfaces/network/url_response.mojom-c.h"


// Forward declarations for structs.
struct mojo_URLLoaderInterceptorResponse;
union mojo_URLLoaderInterceptorResponsePtr {
  struct mojo_URLLoaderInterceptorResponse* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_URLLoaderInterceptorResponsePtr) == 8,
              "union mojo_URLLoaderInterceptorResponsePtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- mojo_URLLoaderInterceptorResponse --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptorResponse {
  struct MojomStructHeader header_;
  union mojo_URLRequestPtr request;  // offset,bit = 0,0
  union mojo_URLResponsePtr response;  // offset,bit = 8,0
  
};

struct mojo_URLLoaderInterceptorResponse* mojo_URLLoaderInterceptorResponse_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptorResponse_Init(
  struct mojo_URLLoaderInterceptorResponse* in_data);

void mojo_URLLoaderInterceptorResponse_CloseAllHandles(
  struct mojo_URLLoaderInterceptorResponse* in_data);

struct mojo_URLLoaderInterceptorResponse* mojo_URLLoaderInterceptorResponse_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptorResponse* in_data);

size_t mojo_URLLoaderInterceptorResponse_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptorResponse* in_data);

MojomValidationResult mojo_URLLoaderInterceptorResponse_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptorResponse_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptorResponse_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.
// --- mojo_URLLoaderInterceptorFactory ---
#define mojo_URLLoaderInterceptorFactory__ServiceName ((const char*)"")
#define mojo_URLLoaderInterceptorFactory__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: Create

#define mojo_URLLoaderInterceptorFactory_Create__Ordinal \
    ((uint32_t)0)
#define mojo_URLLoaderInterceptorFactory_Create__MinVersion \
    ((uint32_t)0)

struct mojo_URLLoaderInterceptorFactory_Create_Request;
// -- mojo_URLLoaderInterceptorFactory_Create_Request --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptorFactory_Create_Request {
  struct MojomStructHeader header_;
  MojoHandle interceptor;  // offset,bit = 0,0
  
};

struct mojo_URLLoaderInterceptorFactory_Create_Request* mojo_URLLoaderInterceptorFactory_Create_Request_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptorFactory_Create_Request_Init(
  struct mojo_URLLoaderInterceptorFactory_Create_Request* in_data);

void mojo_URLLoaderInterceptorFactory_Create_Request_CloseAllHandles(
  struct mojo_URLLoaderInterceptorFactory_Create_Request* in_data);

struct mojo_URLLoaderInterceptorFactory_Create_Request* mojo_URLLoaderInterceptorFactory_Create_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptorFactory_Create_Request* in_data);

size_t mojo_URLLoaderInterceptorFactory_Create_Request_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptorFactory_Create_Request* in_data);

MojomValidationResult mojo_URLLoaderInterceptorFactory_Create_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptorFactory_Create_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptorFactory_Create_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- mojo_URLLoaderInterceptor ---
#define mojo_URLLoaderInterceptor__ServiceName ((const char*)"")
#define mojo_URLLoaderInterceptor__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: InterceptRequest

#define mojo_URLLoaderInterceptor_InterceptRequest__Ordinal \
    ((uint32_t)0)
#define mojo_URLLoaderInterceptor_InterceptRequest__MinVersion \
    ((uint32_t)0)

struct mojo_URLLoaderInterceptor_InterceptRequest_Request;
// -- mojo_URLLoaderInterceptor_InterceptRequest_Request --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptor_InterceptRequest_Request {
  struct MojomStructHeader header_;
  union mojo_URLRequestPtr request;  // offset,bit = 0,0
  
};

struct mojo_URLLoaderInterceptor_InterceptRequest_Request* mojo_URLLoaderInterceptor_InterceptRequest_Request_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptor_InterceptRequest_Request_Init(
  struct mojo_URLLoaderInterceptor_InterceptRequest_Request* in_data);

void mojo_URLLoaderInterceptor_InterceptRequest_Request_CloseAllHandles(
  struct mojo_URLLoaderInterceptor_InterceptRequest_Request* in_data);

struct mojo_URLLoaderInterceptor_InterceptRequest_Request* mojo_URLLoaderInterceptor_InterceptRequest_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptor_InterceptRequest_Request* in_data);

size_t mojo_URLLoaderInterceptor_InterceptRequest_Request_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptor_InterceptRequest_Request* in_data);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptRequest_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptRequest_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptRequest_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_URLLoaderInterceptor_InterceptRequest_Response;
// -- mojo_URLLoaderInterceptor_InterceptRequest_Response --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptor_InterceptRequest_Response {
  struct MojomStructHeader header_;
  union mojo_URLLoaderInterceptorResponsePtr response;  // offset,bit = 0,0
  
};

struct mojo_URLLoaderInterceptor_InterceptRequest_Response* mojo_URLLoaderInterceptor_InterceptRequest_Response_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptor_InterceptRequest_Response_Init(
  struct mojo_URLLoaderInterceptor_InterceptRequest_Response* in_data);

void mojo_URLLoaderInterceptor_InterceptRequest_Response_CloseAllHandles(
  struct mojo_URLLoaderInterceptor_InterceptRequest_Response* in_data);

struct mojo_URLLoaderInterceptor_InterceptRequest_Response* mojo_URLLoaderInterceptor_InterceptRequest_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptor_InterceptRequest_Response* in_data);

size_t mojo_URLLoaderInterceptor_InterceptRequest_Response_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptor_InterceptRequest_Response* in_data);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptRequest_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptRequest_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptRequest_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: InterceptFollowRedirect

#define mojo_URLLoaderInterceptor_InterceptFollowRedirect__Ordinal \
    ((uint32_t)1)
#define mojo_URLLoaderInterceptor_InterceptFollowRedirect__MinVersion \
    ((uint32_t)0)

struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request;
// -- mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request {
  struct MojomStructHeader header_;
  
};

struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request* mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_Init(
  struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request* in_data);

void mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_CloseAllHandles(
  struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request* in_data);

struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request* mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request* in_data);

size_t mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request* in_data);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response;
// -- mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response {
  struct MojomStructHeader header_;
  union mojo_URLLoaderInterceptorResponsePtr response;  // offset,bit = 0,0
  
};

struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response* mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_Init(
  struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response* in_data);

void mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_CloseAllHandles(
  struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response* in_data);

struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response* mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response* in_data);

size_t mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response* in_data);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: InterceptResponse

#define mojo_URLLoaderInterceptor_InterceptResponse__Ordinal \
    ((uint32_t)2)
#define mojo_URLLoaderInterceptor_InterceptResponse__MinVersion \
    ((uint32_t)0)

struct mojo_URLLoaderInterceptor_InterceptResponse_Request;
// -- mojo_URLLoaderInterceptor_InterceptResponse_Request --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptor_InterceptResponse_Request {
  struct MojomStructHeader header_;
  union mojo_URLResponsePtr response;  // offset,bit = 0,0
  
};

struct mojo_URLLoaderInterceptor_InterceptResponse_Request* mojo_URLLoaderInterceptor_InterceptResponse_Request_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptor_InterceptResponse_Request_Init(
  struct mojo_URLLoaderInterceptor_InterceptResponse_Request* in_data);

void mojo_URLLoaderInterceptor_InterceptResponse_Request_CloseAllHandles(
  struct mojo_URLLoaderInterceptor_InterceptResponse_Request* in_data);

struct mojo_URLLoaderInterceptor_InterceptResponse_Request* mojo_URLLoaderInterceptor_InterceptResponse_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptor_InterceptResponse_Request* in_data);

size_t mojo_URLLoaderInterceptor_InterceptResponse_Request_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptor_InterceptResponse_Request* in_data);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptResponse_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptResponse_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptResponse_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_URLLoaderInterceptor_InterceptResponse_Response;
// -- mojo_URLLoaderInterceptor_InterceptResponse_Response --
// Enums
// Constants
// Struct definition
struct mojo_URLLoaderInterceptor_InterceptResponse_Response {
  struct MojomStructHeader header_;
  union mojo_URLLoaderInterceptorResponsePtr response;  // offset,bit = 0,0
  
};

struct mojo_URLLoaderInterceptor_InterceptResponse_Response* mojo_URLLoaderInterceptor_InterceptResponse_Response_New(struct MojomBuffer* in_buffer);

void mojo_URLLoaderInterceptor_InterceptResponse_Response_Init(
  struct mojo_URLLoaderInterceptor_InterceptResponse_Response* in_data);

void mojo_URLLoaderInterceptor_InterceptResponse_Response_CloseAllHandles(
  struct mojo_URLLoaderInterceptor_InterceptResponse_Response* in_data);

struct mojo_URLLoaderInterceptor_InterceptResponse_Response* mojo_URLLoaderInterceptor_InterceptResponse_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_URLLoaderInterceptor_InterceptResponse_Response* in_data);

size_t mojo_URLLoaderInterceptor_InterceptResponse_Response_ComputeSerializedSize(
  const struct mojo_URLLoaderInterceptor_InterceptResponse_Response* in_data);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptResponse_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptResponse_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_URLLoaderInterceptor_InterceptResponse_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptorResponse__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptorFactory_Create_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptRequest_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptRequest_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptResponse_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptResponse_Response__PointerTable[];


#endif  // MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_INTERCEPTOR_MOJOM_C_H_