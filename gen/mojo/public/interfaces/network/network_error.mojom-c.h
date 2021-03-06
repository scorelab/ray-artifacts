// This file was auto-generated by the C bindings generator.

#ifndef MOJO_PUBLIC_INTERFACES_NETWORK_NETWORK_ERROR_MOJOM_C_H_
#define MOJO_PUBLIC_INTERFACES_NETWORK_NETWORK_ERROR_MOJOM_C_H_

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
struct mojo_NetworkError;
union mojo_NetworkErrorPtr {
  struct mojo_NetworkError* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_NetworkErrorPtr) == 8,
              "union mojo_NetworkErrorPtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- mojo_NetworkError --
// Enums
// Constants
// Struct definition
struct mojo_NetworkError {
  struct MojomStructHeader header_;
  int32_t code;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  union MojomStringPtr description;  // offset,bit = 8,0
  
};

struct mojo_NetworkError* mojo_NetworkError_New(struct MojomBuffer* in_buffer);

void mojo_NetworkError_Init(
  struct mojo_NetworkError* in_data);

void mojo_NetworkError_CloseAllHandles(
  struct mojo_NetworkError* in_data);

struct mojo_NetworkError* mojo_NetworkError_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkError* in_data);

size_t mojo_NetworkError_ComputeSerializedSize(
  const struct mojo_NetworkError* in_data);

MojomValidationResult mojo_NetworkError_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkError_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkError_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_NetworkError__PointerTable[];


#endif  // MOJO_PUBLIC_INTERFACES_NETWORK_NETWORK_ERROR_MOJOM_C_H_