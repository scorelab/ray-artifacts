// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_NETWORK_INTERFACES_HTTP_MESSAGE_MOJOM_C_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_HTTP_MESSAGE_MOJOM_C_H_

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
#include "mojo/public/interfaces/network/http_header.mojom-c.h"


// Forward declarations for structs.
struct mojo_HttpRequest;
union mojo_HttpRequestPtr {
  struct mojo_HttpRequest* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_HttpRequestPtr) == 8,
              "union mojo_HttpRequestPtr must be 8 bytes");

struct mojo_HttpResponse;
union mojo_HttpResponsePtr {
  struct mojo_HttpResponse* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_HttpResponsePtr) == 8,
              "union mojo_HttpResponsePtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- mojo_HttpRequest --
// Enums
// Constants
// Struct definition
struct mojo_HttpRequest {
  struct MojomStructHeader header_;
  union MojomStringPtr method;  // offset,bit = 0,0
  union MojomStringPtr url;  // offset,bit = 8,0
  union MojomArrayPtr headers;  // offset,bit = 16,0
  MojoHandle body;  // offset,bit = 24,0
  
};

struct mojo_HttpRequest* mojo_HttpRequest_New(struct MojomBuffer* in_buffer);

void mojo_HttpRequest_Init(
  struct mojo_HttpRequest* in_data);

void mojo_HttpRequest_CloseAllHandles(
  struct mojo_HttpRequest* in_data);

struct mojo_HttpRequest* mojo_HttpRequest_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_HttpRequest* in_data);

size_t mojo_HttpRequest_ComputeSerializedSize(
  const struct mojo_HttpRequest* in_data);

MojomValidationResult mojo_HttpRequest_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_HttpRequest_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_HttpRequest_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_HttpResponse --
// Enums
// Constants
// Struct definition
struct mojo_HttpResponse {
  struct MojomStructHeader header_;
  uint32_t status_code;  // offset,bit = 0,0
  MojoHandle body;  // offset,bit = 4,0
  union MojomArrayPtr headers;  // offset,bit = 8,0
  
};

struct mojo_HttpResponse* mojo_HttpResponse_New(struct MojomBuffer* in_buffer);

void mojo_HttpResponse_Init(
  struct mojo_HttpResponse* in_data);

void mojo_HttpResponse_CloseAllHandles(
  struct mojo_HttpResponse* in_data);

struct mojo_HttpResponse* mojo_HttpResponse_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_HttpResponse* in_data);

size_t mojo_HttpResponse_ComputeSerializedSize(
  const struct mojo_HttpResponse* in_data);

MojomValidationResult mojo_HttpResponse_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_HttpResponse_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_HttpResponse_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_HttpRequest__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_HttpResponse__PointerTable[];


#endif  // MOJO_SERVICES_NETWORK_INTERFACES_HTTP_MESSAGE_MOJOM_C_H_