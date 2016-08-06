// This file was auto-generated by the C bindings generator.

#ifndef SERVICES_AUTHENTICATION_AUTHENTICATION_IMPL_DB_MOJOM_C_H_
#define SERVICES_AUTHENTICATION_AUTHENTICATION_IMPL_DB_MOJOM_C_H_

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
struct authentication_Db;
union authentication_DbPtr {
  struct authentication_Db* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union authentication_DbPtr) == 8,
              "union authentication_DbPtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- authentication_Db --
// Enums
// Constants
// Struct definition
struct authentication_Db {
  struct MojomStructHeader header_;
  uint32_t version;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  union MojomMapPtr last_selected_accounts;  // offset,bit = 8,0
  
};

struct authentication_Db* authentication_Db_New(struct MojomBuffer* in_buffer);

void authentication_Db_Init(
  struct authentication_Db* in_data);

void authentication_Db_CloseAllHandles(
  struct authentication_Db* in_data);

struct authentication_Db* authentication_Db_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct authentication_Db* in_data);

size_t authentication_Db_ComputeSerializedSize(
  const struct authentication_Db* in_data);

MojomValidationResult authentication_Db_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult authentication_Db_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult authentication_Db_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry authentication_Db__PointerTable[];


#endif  // SERVICES_AUTHENTICATION_AUTHENTICATION_IMPL_DB_MOJOM_C_H_