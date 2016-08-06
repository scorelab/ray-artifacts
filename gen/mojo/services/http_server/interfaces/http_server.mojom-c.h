// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_C_H_
#define MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_C_H_

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
#include "mojo/services/http_server/interfaces/http_request.mojom-c.h"
#include "mojo/services/http_server/interfaces/http_response.mojom-c.h"


// Forward declarations for structs.
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- http_server_HttpServer ---
#define http_server_HttpServer__ServiceName ((const char*)"")
#define http_server_HttpServer__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: SetHandler

#define http_server_HttpServer_SetHandler__Ordinal \
    ((uint32_t)0)
#define http_server_HttpServer_SetHandler__MinVersion \
    ((uint32_t)0)

struct http_server_HttpServer_SetHandler_Request;
// -- http_server_HttpServer_SetHandler_Request --
// Enums
// Constants
// Struct definition
struct http_server_HttpServer_SetHandler_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr pattern;  // offset,bit = 0,0
  struct MojomInterfaceData handler;  // offset,bit = 8,0
  
};

struct http_server_HttpServer_SetHandler_Request* http_server_HttpServer_SetHandler_Request_New(struct MojomBuffer* in_buffer);

void http_server_HttpServer_SetHandler_Request_Init(
  struct http_server_HttpServer_SetHandler_Request* in_data);

void http_server_HttpServer_SetHandler_Request_CloseAllHandles(
  struct http_server_HttpServer_SetHandler_Request* in_data);

struct http_server_HttpServer_SetHandler_Request* http_server_HttpServer_SetHandler_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct http_server_HttpServer_SetHandler_Request* in_data);

size_t http_server_HttpServer_SetHandler_Request_ComputeSerializedSize(
  const struct http_server_HttpServer_SetHandler_Request* in_data);

MojomValidationResult http_server_HttpServer_SetHandler_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult http_server_HttpServer_SetHandler_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult http_server_HttpServer_SetHandler_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct http_server_HttpServer_SetHandler_Response;
// -- http_server_HttpServer_SetHandler_Response --
// Enums
// Constants
// Struct definition
struct http_server_HttpServer_SetHandler_Response {
  struct MojomStructHeader header_;
  bool success : 1;  // offset,bit = 0,0
  
};

struct http_server_HttpServer_SetHandler_Response* http_server_HttpServer_SetHandler_Response_New(struct MojomBuffer* in_buffer);

void http_server_HttpServer_SetHandler_Response_Init(
  struct http_server_HttpServer_SetHandler_Response* in_data);

void http_server_HttpServer_SetHandler_Response_CloseAllHandles(
  struct http_server_HttpServer_SetHandler_Response* in_data);

struct http_server_HttpServer_SetHandler_Response* http_server_HttpServer_SetHandler_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct http_server_HttpServer_SetHandler_Response* in_data);

size_t http_server_HttpServer_SetHandler_Response_ComputeSerializedSize(
  const struct http_server_HttpServer_SetHandler_Response* in_data);

MojomValidationResult http_server_HttpServer_SetHandler_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult http_server_HttpServer_SetHandler_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult http_server_HttpServer_SetHandler_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetPort

#define http_server_HttpServer_GetPort__Ordinal \
    ((uint32_t)1)
#define http_server_HttpServer_GetPort__MinVersion \
    ((uint32_t)0)

struct http_server_HttpServer_GetPort_Request;
// -- http_server_HttpServer_GetPort_Request --
// Enums
// Constants
// Struct definition
struct http_server_HttpServer_GetPort_Request {
  struct MojomStructHeader header_;
  
};

struct http_server_HttpServer_GetPort_Request* http_server_HttpServer_GetPort_Request_New(struct MojomBuffer* in_buffer);

void http_server_HttpServer_GetPort_Request_Init(
  struct http_server_HttpServer_GetPort_Request* in_data);

void http_server_HttpServer_GetPort_Request_CloseAllHandles(
  struct http_server_HttpServer_GetPort_Request* in_data);

struct http_server_HttpServer_GetPort_Request* http_server_HttpServer_GetPort_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct http_server_HttpServer_GetPort_Request* in_data);

size_t http_server_HttpServer_GetPort_Request_ComputeSerializedSize(
  const struct http_server_HttpServer_GetPort_Request* in_data);

MojomValidationResult http_server_HttpServer_GetPort_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult http_server_HttpServer_GetPort_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult http_server_HttpServer_GetPort_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct http_server_HttpServer_GetPort_Response;
// -- http_server_HttpServer_GetPort_Response --
// Enums
// Constants
// Struct definition
struct http_server_HttpServer_GetPort_Response {
  struct MojomStructHeader header_;
  uint16_t port;  // offset,bit = 0,0
  
};

struct http_server_HttpServer_GetPort_Response* http_server_HttpServer_GetPort_Response_New(struct MojomBuffer* in_buffer);

void http_server_HttpServer_GetPort_Response_Init(
  struct http_server_HttpServer_GetPort_Response* in_data);

void http_server_HttpServer_GetPort_Response_CloseAllHandles(
  struct http_server_HttpServer_GetPort_Response* in_data);

struct http_server_HttpServer_GetPort_Response* http_server_HttpServer_GetPort_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct http_server_HttpServer_GetPort_Response* in_data);

size_t http_server_HttpServer_GetPort_Response_ComputeSerializedSize(
  const struct http_server_HttpServer_GetPort_Response* in_data);

MojomValidationResult http_server_HttpServer_GetPort_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult http_server_HttpServer_GetPort_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult http_server_HttpServer_GetPort_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- http_server_HttpHandler ---
#define http_server_HttpHandler__ServiceName ((const char*)"")
#define http_server_HttpHandler__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: HandleRequest

#define http_server_HttpHandler_HandleRequest__Ordinal \
    ((uint32_t)0)
#define http_server_HttpHandler_HandleRequest__MinVersion \
    ((uint32_t)0)

struct http_server_HttpHandler_HandleRequest_Request;
// -- http_server_HttpHandler_HandleRequest_Request --
// Enums
// Constants
// Struct definition
struct http_server_HttpHandler_HandleRequest_Request {
  struct MojomStructHeader header_;
  union http_server_HttpRequestPtr request;  // offset,bit = 0,0
  
};

struct http_server_HttpHandler_HandleRequest_Request* http_server_HttpHandler_HandleRequest_Request_New(struct MojomBuffer* in_buffer);

void http_server_HttpHandler_HandleRequest_Request_Init(
  struct http_server_HttpHandler_HandleRequest_Request* in_data);

void http_server_HttpHandler_HandleRequest_Request_CloseAllHandles(
  struct http_server_HttpHandler_HandleRequest_Request* in_data);

struct http_server_HttpHandler_HandleRequest_Request* http_server_HttpHandler_HandleRequest_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct http_server_HttpHandler_HandleRequest_Request* in_data);

size_t http_server_HttpHandler_HandleRequest_Request_ComputeSerializedSize(
  const struct http_server_HttpHandler_HandleRequest_Request* in_data);

MojomValidationResult http_server_HttpHandler_HandleRequest_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult http_server_HttpHandler_HandleRequest_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult http_server_HttpHandler_HandleRequest_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct http_server_HttpHandler_HandleRequest_Response;
// -- http_server_HttpHandler_HandleRequest_Response --
// Enums
// Constants
// Struct definition
struct http_server_HttpHandler_HandleRequest_Response {
  struct MojomStructHeader header_;
  union http_server_HttpResponsePtr response;  // offset,bit = 0,0
  
};

struct http_server_HttpHandler_HandleRequest_Response* http_server_HttpHandler_HandleRequest_Response_New(struct MojomBuffer* in_buffer);

void http_server_HttpHandler_HandleRequest_Response_Init(
  struct http_server_HttpHandler_HandleRequest_Response* in_data);

void http_server_HttpHandler_HandleRequest_Response_CloseAllHandles(
  struct http_server_HttpHandler_HandleRequest_Response* in_data);

struct http_server_HttpHandler_HandleRequest_Response* http_server_HttpHandler_HandleRequest_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct http_server_HttpHandler_HandleRequest_Response* in_data);

size_t http_server_HttpHandler_HandleRequest_Response_ComputeSerializedSize(
  const struct http_server_HttpHandler_HandleRequest_Response* in_data);

MojomValidationResult http_server_HttpHandler_HandleRequest_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult http_server_HttpHandler_HandleRequest_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult http_server_HttpHandler_HandleRequest_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry http_server_HttpServer_SetHandler_Request__PointerTable[];
extern struct MojomPointerTableStructEntry http_server_HttpServer_SetHandler_Response__PointerTable[];
extern struct MojomPointerTableStructEntry http_server_HttpServer_GetPort_Request__PointerTable[];
extern struct MojomPointerTableStructEntry http_server_HttpServer_GetPort_Response__PointerTable[];
extern struct MojomPointerTableStructEntry http_server_HttpHandler_HandleRequest_Request__PointerTable[];
extern struct MojomPointerTableStructEntry http_server_HttpHandler_HandleRequest_Response__PointerTable[];


#endif  // MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_MOJOM_C_H_