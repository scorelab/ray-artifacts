// This file was auto-generated by the C bindings generator.

#ifndef SERVICES_JS_TEST_NETWORK_TEST_SERVICE_MOJOM_C_H_
#define SERVICES_JS_TEST_NETWORK_TEST_SERVICE_MOJOM_C_H_

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
// --- js_NetworkTestService ---
#define js_NetworkTestService__ServiceName ((const char*)"js::NetworkTestService")
#define js_NetworkTestService__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: GetFileSize

#define js_NetworkTestService_GetFileSize__Ordinal \
    ((uint32_t)0)
#define js_NetworkTestService_GetFileSize__MinVersion \
    ((uint32_t)0)

struct js_NetworkTestService_GetFileSize_Request;
// -- js_NetworkTestService_GetFileSize_Request --
// Enums
// Constants
// Struct definition
struct js_NetworkTestService_GetFileSize_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr url;  // offset,bit = 0,0
  
};

struct js_NetworkTestService_GetFileSize_Request* js_NetworkTestService_GetFileSize_Request_New(struct MojomBuffer* in_buffer);

void js_NetworkTestService_GetFileSize_Request_Init(
  struct js_NetworkTestService_GetFileSize_Request* in_data);

void js_NetworkTestService_GetFileSize_Request_CloseAllHandles(
  struct js_NetworkTestService_GetFileSize_Request* in_data);

struct js_NetworkTestService_GetFileSize_Request* js_NetworkTestService_GetFileSize_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct js_NetworkTestService_GetFileSize_Request* in_data);

size_t js_NetworkTestService_GetFileSize_Request_ComputeSerializedSize(
  const struct js_NetworkTestService_GetFileSize_Request* in_data);

MojomValidationResult js_NetworkTestService_GetFileSize_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult js_NetworkTestService_GetFileSize_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult js_NetworkTestService_GetFileSize_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct js_NetworkTestService_GetFileSize_Response;
// -- js_NetworkTestService_GetFileSize_Response --
// Enums
// Constants
// Struct definition
struct js_NetworkTestService_GetFileSize_Response {
  struct MojomStructHeader header_;
  bool ok : 1;  // offset,bit = 0,0
  uint8_t pad0_[7];  // padding
  uint64_t size;  // offset,bit = 8,0
  
};

struct js_NetworkTestService_GetFileSize_Response* js_NetworkTestService_GetFileSize_Response_New(struct MojomBuffer* in_buffer);

void js_NetworkTestService_GetFileSize_Response_Init(
  struct js_NetworkTestService_GetFileSize_Response* in_data);

void js_NetworkTestService_GetFileSize_Response_CloseAllHandles(
  struct js_NetworkTestService_GetFileSize_Response* in_data);

struct js_NetworkTestService_GetFileSize_Response* js_NetworkTestService_GetFileSize_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct js_NetworkTestService_GetFileSize_Response* in_data);

size_t js_NetworkTestService_GetFileSize_Response_ComputeSerializedSize(
  const struct js_NetworkTestService_GetFileSize_Response* in_data);

MojomValidationResult js_NetworkTestService_GetFileSize_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult js_NetworkTestService_GetFileSize_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult js_NetworkTestService_GetFileSize_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: Quit

#define js_NetworkTestService_Quit__Ordinal \
    ((uint32_t)1)
#define js_NetworkTestService_Quit__MinVersion \
    ((uint32_t)0)

struct js_NetworkTestService_Quit_Request;
// -- js_NetworkTestService_Quit_Request --
// Enums
// Constants
// Struct definition
struct js_NetworkTestService_Quit_Request {
  struct MojomStructHeader header_;
  
};

struct js_NetworkTestService_Quit_Request* js_NetworkTestService_Quit_Request_New(struct MojomBuffer* in_buffer);

void js_NetworkTestService_Quit_Request_Init(
  struct js_NetworkTestService_Quit_Request* in_data);

void js_NetworkTestService_Quit_Request_CloseAllHandles(
  struct js_NetworkTestService_Quit_Request* in_data);

struct js_NetworkTestService_Quit_Request* js_NetworkTestService_Quit_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct js_NetworkTestService_Quit_Request* in_data);

size_t js_NetworkTestService_Quit_Request_ComputeSerializedSize(
  const struct js_NetworkTestService_Quit_Request* in_data);

MojomValidationResult js_NetworkTestService_Quit_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult js_NetworkTestService_Quit_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult js_NetworkTestService_Quit_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry js_NetworkTestService_GetFileSize_Request__PointerTable[];
extern struct MojomPointerTableStructEntry js_NetworkTestService_GetFileSize_Response__PointerTable[];
extern struct MojomPointerTableStructEntry js_NetworkTestService_Quit_Request__PointerTable[];


#endif  // SERVICES_JS_TEST_NETWORK_TEST_SERVICE_MOJOM_C_H_