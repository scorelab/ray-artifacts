// This file was auto-generated by the C bindings generator.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_MOJOM_FILES_MOJOM_C_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_MOJOM_FILES_MOJOM_C_H_

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
#include "mojo/public/interfaces/bindings/mojom_types.mojom-c.h"


// Forward declarations for structs.
struct mojo_bindings_types_MojomFile;
union mojo_bindings_types_MojomFilePtr {
  struct mojo_bindings_types_MojomFile* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_bindings_types_MojomFilePtr) == 8,
              "union mojo_bindings_types_MojomFilePtr must be 8 bytes");

struct mojo_bindings_types_MojomFileGraph;
union mojo_bindings_types_MojomFileGraphPtr {
  struct mojo_bindings_types_MojomFileGraph* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_bindings_types_MojomFileGraphPtr) == 8,
              "union mojo_bindings_types_MojomFileGraphPtr must be 8 bytes");

struct mojo_bindings_types_KeysByType;
union mojo_bindings_types_KeysByTypePtr {
  struct mojo_bindings_types_KeysByType* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_bindings_types_KeysByTypePtr) == 8,
              "union mojo_bindings_types_KeysByTypePtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- mojo_bindings_types_MojomFile --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_MojomFile {
  struct MojomStructHeader header_;
  union MojomStringPtr file_name;  // offset,bit = 0,0
  union MojomStringPtr specified_file_name;  // offset,bit = 8,0
  union MojomStringPtr module_namespace;  // offset,bit = 16,0
  union MojomArrayPtr attributes;  // offset,bit = 24,0
  union MojomArrayPtr imports;  // offset,bit = 32,0
  union mojo_bindings_types_KeysByTypePtr declared_mojom_objects;  // offset,bit = 40,0
  union MojomStringPtr serialized_runtime_type_info;  // offset,bit = 48,0
  
};

struct mojo_bindings_types_MojomFile* mojo_bindings_types_MojomFile_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_MojomFile_Init(
  struct mojo_bindings_types_MojomFile* in_data);

void mojo_bindings_types_MojomFile_CloseAllHandles(
  struct mojo_bindings_types_MojomFile* in_data);

struct mojo_bindings_types_MojomFile* mojo_bindings_types_MojomFile_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_MojomFile* in_data);

size_t mojo_bindings_types_MojomFile_ComputeSerializedSize(
  const struct mojo_bindings_types_MojomFile* in_data);

MojomValidationResult mojo_bindings_types_MojomFile_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_MojomFile_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_MojomFile_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_bindings_types_MojomFileGraph --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_MojomFileGraph {
  struct MojomStructHeader header_;
  union MojomMapPtr files;  // offset,bit = 0,0
  union MojomMapPtr resolved_types;  // offset,bit = 8,0
  union MojomMapPtr resolved_constants;  // offset,bit = 16,0
  
};

struct mojo_bindings_types_MojomFileGraph* mojo_bindings_types_MojomFileGraph_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_MojomFileGraph_Init(
  struct mojo_bindings_types_MojomFileGraph* in_data);

void mojo_bindings_types_MojomFileGraph_CloseAllHandles(
  struct mojo_bindings_types_MojomFileGraph* in_data);

struct mojo_bindings_types_MojomFileGraph* mojo_bindings_types_MojomFileGraph_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_MojomFileGraph* in_data);

size_t mojo_bindings_types_MojomFileGraph_ComputeSerializedSize(
  const struct mojo_bindings_types_MojomFileGraph* in_data);

MojomValidationResult mojo_bindings_types_MojomFileGraph_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_MojomFileGraph_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_MojomFileGraph_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_bindings_types_KeysByType --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_KeysByType {
  struct MojomStructHeader header_;
  union MojomArrayPtr interfaces;  // offset,bit = 0,0
  union MojomArrayPtr structs;  // offset,bit = 8,0
  union MojomArrayPtr unions;  // offset,bit = 16,0
  union MojomArrayPtr top_level_enums;  // offset,bit = 24,0
  union MojomArrayPtr embedded_enums;  // offset,bit = 32,0
  union MojomArrayPtr top_level_constants;  // offset,bit = 40,0
  union MojomArrayPtr embedded_constants;  // offset,bit = 48,0
  
};

struct mojo_bindings_types_KeysByType* mojo_bindings_types_KeysByType_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_KeysByType_Init(
  struct mojo_bindings_types_KeysByType* in_data);

void mojo_bindings_types_KeysByType_CloseAllHandles(
  struct mojo_bindings_types_KeysByType* in_data);

struct mojo_bindings_types_KeysByType* mojo_bindings_types_KeysByType_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_KeysByType* in_data);

size_t mojo_bindings_types_KeysByType_ComputeSerializedSize(
  const struct mojo_bindings_types_KeysByType* in_data);

MojomValidationResult mojo_bindings_types_KeysByType_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_KeysByType_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_KeysByType_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_bindings_types_MojomFile__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_MojomFileGraph__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_KeysByType__PointerTable[];


#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_MOJOM_FILES_MOJOM_C_H_