// This file was auto-generated by the C bindings generator.

#ifndef SERVICES_JS_TEST_ECHO_SERVICE_MOJOM_C_H_
#define SERVICES_JS_TEST_ECHO_SERVICE_MOJOM_C_H_

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
// --- mojo_EchoService ---
#define mojo_EchoService__ServiceName ((const char*)"mojo::EchoService")
#define mojo_EchoService__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: EchoString

#define mojo_EchoService_EchoString__Ordinal \
    ((uint32_t)0)
#define mojo_EchoService_EchoString__MinVersion \
    ((uint32_t)0)

struct mojo_EchoService_EchoString_Request;
// -- mojo_EchoService_EchoString_Request --
// Enums
// Constants
// Struct definition
struct mojo_EchoService_EchoString_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr value;  // offset,bit = 0,0
  
};

struct mojo_EchoService_EchoString_Request* mojo_EchoService_EchoString_Request_New(struct MojomBuffer* in_buffer);

void mojo_EchoService_EchoString_Request_Init(
  struct mojo_EchoService_EchoString_Request* in_data);

void mojo_EchoService_EchoString_Request_CloseAllHandles(
  struct mojo_EchoService_EchoString_Request* in_data);

struct mojo_EchoService_EchoString_Request* mojo_EchoService_EchoString_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_EchoService_EchoString_Request* in_data);

size_t mojo_EchoService_EchoString_Request_ComputeSerializedSize(
  const struct mojo_EchoService_EchoString_Request* in_data);

MojomValidationResult mojo_EchoService_EchoString_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_EchoService_EchoString_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_EchoService_EchoString_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_EchoService_EchoString_Response;
// -- mojo_EchoService_EchoString_Response --
// Enums
// Constants
// Struct definition
struct mojo_EchoService_EchoString_Response {
  struct MojomStructHeader header_;
  union MojomStringPtr value;  // offset,bit = 0,0
  
};

struct mojo_EchoService_EchoString_Response* mojo_EchoService_EchoString_Response_New(struct MojomBuffer* in_buffer);

void mojo_EchoService_EchoString_Response_Init(
  struct mojo_EchoService_EchoString_Response* in_data);

void mojo_EchoService_EchoString_Response_CloseAllHandles(
  struct mojo_EchoService_EchoString_Response* in_data);

struct mojo_EchoService_EchoString_Response* mojo_EchoService_EchoString_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_EchoService_EchoString_Response* in_data);

size_t mojo_EchoService_EchoString_Response_ComputeSerializedSize(
  const struct mojo_EchoService_EchoString_Response* in_data);

MojomValidationResult mojo_EchoService_EchoString_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_EchoService_EchoString_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_EchoService_EchoString_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: Quit

#define mojo_EchoService_Quit__Ordinal \
    ((uint32_t)1)
#define mojo_EchoService_Quit__MinVersion \
    ((uint32_t)0)

struct mojo_EchoService_Quit_Request;
// -- mojo_EchoService_Quit_Request --
// Enums
// Constants
// Struct definition
struct mojo_EchoService_Quit_Request {
  struct MojomStructHeader header_;
  
};

struct mojo_EchoService_Quit_Request* mojo_EchoService_Quit_Request_New(struct MojomBuffer* in_buffer);

void mojo_EchoService_Quit_Request_Init(
  struct mojo_EchoService_Quit_Request* in_data);

void mojo_EchoService_Quit_Request_CloseAllHandles(
  struct mojo_EchoService_Quit_Request* in_data);

struct mojo_EchoService_Quit_Request* mojo_EchoService_Quit_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_EchoService_Quit_Request* in_data);

size_t mojo_EchoService_Quit_Request_ComputeSerializedSize(
  const struct mojo_EchoService_Quit_Request* in_data);

MojomValidationResult mojo_EchoService_Quit_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_EchoService_Quit_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_EchoService_Quit_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_EchoService_EchoString_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_EchoService_EchoString_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_EchoService_Quit_Request__PointerTable[];


#endif  // SERVICES_JS_TEST_ECHO_SERVICE_MOJOM_C_H_