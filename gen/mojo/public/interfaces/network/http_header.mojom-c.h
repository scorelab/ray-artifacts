// This file was auto-generated by the C bindings generator.

#ifndef MOJO_PUBLIC_INTERFACES_NETWORK_HTTP_HEADER_MOJOM_C_H_
#define MOJO_PUBLIC_INTERFACES_NETWORK_HTTP_HEADER_MOJOM_C_H_

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
struct mojo_HttpHeader;
union mojo_HttpHeaderPtr {
  struct mojo_HttpHeader* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_HttpHeaderPtr) == 8,
              "union mojo_HttpHeaderPtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- mojo_HttpHeader --
// Enums
// Constants
// Struct definition
struct mojo_HttpHeader {
  struct MojomStructHeader header_;
  union MojomStringPtr name;  // offset,bit = 0,0
  union MojomStringPtr value;  // offset,bit = 8,0
  
};

struct mojo_HttpHeader* mojo_HttpHeader_New(struct MojomBuffer* in_buffer);

void mojo_HttpHeader_Init(
  struct mojo_HttpHeader* in_data);

void mojo_HttpHeader_CloseAllHandles(
  struct mojo_HttpHeader* in_data);

struct mojo_HttpHeader* mojo_HttpHeader_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_HttpHeader* in_data);

size_t mojo_HttpHeader_ComputeSerializedSize(
  const struct mojo_HttpHeader* in_data);

MojomValidationResult mojo_HttpHeader_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_HttpHeader_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_HttpHeader_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_HttpHeader__PointerTable[];


#endif  // MOJO_PUBLIC_INTERFACES_NETWORK_HTTP_HEADER_MOJOM_C_H_