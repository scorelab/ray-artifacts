// This file was auto-generated by the C bindings generator.

#ifndef SHELL_CHILD_CONTROLLER_MOJOM_C_H_
#define SHELL_CHILD_CONTROLLER_MOJOM_C_H_

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
#include "mojo/public/interfaces/application/application.mojom-c.h"


// Forward declarations for structs.
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- shell_ChildController ---
#define shell_ChildController__ServiceName ((const char*)"")
#define shell_ChildController__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: StartApp

#define shell_ChildController_StartApp__Ordinal \
    ((uint32_t)0)
#define shell_ChildController_StartApp__MinVersion \
    ((uint32_t)0)

struct shell_ChildController_StartApp_Request;
// -- shell_ChildController_StartApp_Request --
// Enums
// Constants
// Struct definition
struct shell_ChildController_StartApp_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr app_path;  // offset,bit = 0,0
  MojoHandle application_request;  // offset,bit = 8,0
  
};

struct shell_ChildController_StartApp_Request* shell_ChildController_StartApp_Request_New(struct MojomBuffer* in_buffer);

void shell_ChildController_StartApp_Request_Init(
  struct shell_ChildController_StartApp_Request* in_data);

void shell_ChildController_StartApp_Request_CloseAllHandles(
  struct shell_ChildController_StartApp_Request* in_data);

struct shell_ChildController_StartApp_Request* shell_ChildController_StartApp_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct shell_ChildController_StartApp_Request* in_data);

size_t shell_ChildController_StartApp_Request_ComputeSerializedSize(
  const struct shell_ChildController_StartApp_Request* in_data);

MojomValidationResult shell_ChildController_StartApp_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult shell_ChildController_StartApp_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult shell_ChildController_StartApp_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct shell_ChildController_StartApp_Response;
// -- shell_ChildController_StartApp_Response --
// Enums
// Constants
// Struct definition
struct shell_ChildController_StartApp_Response {
  struct MojomStructHeader header_;
  int32_t result;  // offset,bit = 0,0
  
};

struct shell_ChildController_StartApp_Response* shell_ChildController_StartApp_Response_New(struct MojomBuffer* in_buffer);

void shell_ChildController_StartApp_Response_Init(
  struct shell_ChildController_StartApp_Response* in_data);

void shell_ChildController_StartApp_Response_CloseAllHandles(
  struct shell_ChildController_StartApp_Response* in_data);

struct shell_ChildController_StartApp_Response* shell_ChildController_StartApp_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct shell_ChildController_StartApp_Response* in_data);

size_t shell_ChildController_StartApp_Response_ComputeSerializedSize(
  const struct shell_ChildController_StartApp_Response* in_data);

MojomValidationResult shell_ChildController_StartApp_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult shell_ChildController_StartApp_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult shell_ChildController_StartApp_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: ExitNow

#define shell_ChildController_ExitNow__Ordinal \
    ((uint32_t)1)
#define shell_ChildController_ExitNow__MinVersion \
    ((uint32_t)0)

struct shell_ChildController_ExitNow_Request;
// -- shell_ChildController_ExitNow_Request --
// Enums
// Constants
// Struct definition
struct shell_ChildController_ExitNow_Request {
  struct MojomStructHeader header_;
  int32_t exit_code;  // offset,bit = 0,0
  
};

struct shell_ChildController_ExitNow_Request* shell_ChildController_ExitNow_Request_New(struct MojomBuffer* in_buffer);

void shell_ChildController_ExitNow_Request_Init(
  struct shell_ChildController_ExitNow_Request* in_data);

void shell_ChildController_ExitNow_Request_CloseAllHandles(
  struct shell_ChildController_ExitNow_Request* in_data);

struct shell_ChildController_ExitNow_Request* shell_ChildController_ExitNow_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct shell_ChildController_ExitNow_Request* in_data);

size_t shell_ChildController_ExitNow_Request_ComputeSerializedSize(
  const struct shell_ChildController_ExitNow_Request* in_data);

MojomValidationResult shell_ChildController_ExitNow_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult shell_ChildController_ExitNow_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult shell_ChildController_ExitNow_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry shell_ChildController_StartApp_Request__PointerTable[];
extern struct MojomPointerTableStructEntry shell_ChildController_StartApp_Response__PointerTable[];
extern struct MojomPointerTableStructEntry shell_ChildController_ExitNow_Request__PointerTable[];


#endif  // SHELL_CHILD_CONTROLLER_MOJOM_C_H_