// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_GPU_INTERFACES_VIEWPORT_PARAMETER_LISTENER_MOJOM_C_H_
#define MOJO_SERVICES_GPU_INTERFACES_VIEWPORT_PARAMETER_LISTENER_MOJOM_C_H_

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
// --- mojo_ViewportParameterListener ---
#define mojo_ViewportParameterListener__ServiceName ((const char*)"")
#define mojo_ViewportParameterListener__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: OnVSyncParametersUpdated

#define mojo_ViewportParameterListener_OnVSyncParametersUpdated__Ordinal \
    ((uint32_t)0)
#define mojo_ViewportParameterListener_OnVSyncParametersUpdated__MinVersion \
    ((uint32_t)0)

struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request;
// -- mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request --
// Enums
// Constants
// Struct definition
struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request {
  struct MojomStructHeader header_;
  int64_t timebase;  // offset,bit = 0,0
  int64_t interval;  // offset,bit = 8,0
  
};

struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request* mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_New(struct MojomBuffer* in_buffer);

void mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_Init(
  struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request* in_data);

void mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_CloseAllHandles(
  struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request* in_data);

struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request* mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request* in_data);

size_t mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_ComputeSerializedSize(
  const struct mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request* in_data);

MojomValidationResult mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_ViewportParameterListener_OnVSyncParametersUpdated_Request__PointerTable[];


#endif  // MOJO_SERVICES_GPU_INTERFACES_VIEWPORT_PARAMETER_LISTENER_MOJOM_C_H_