// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_FILES_INTERFACES_TYPES_MOJOM_C_H_
#define MOJO_SERVICES_FILES_INTERFACES_TYPES_MOJOM_C_H_

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
struct mojo_files_Timespec;
union mojo_files_TimespecPtr {
  struct mojo_files_Timespec* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_files_TimespecPtr) == 8,
              "union mojo_files_TimespecPtr must be 8 bytes");

struct mojo_files_TimespecOrNow;
union mojo_files_TimespecOrNowPtr {
  struct mojo_files_TimespecOrNow* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_files_TimespecOrNowPtr) == 8,
              "union mojo_files_TimespecOrNowPtr must be 8 bytes");

struct mojo_files_FileInformation;
union mojo_files_FileInformationPtr {
  struct mojo_files_FileInformation* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_files_FileInformationPtr) == 8,
              "union mojo_files_FileInformationPtr must be 8 bytes");

struct mojo_files_DirectoryEntry;
union mojo_files_DirectoryEntryPtr {
  struct mojo_files_DirectoryEntry* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_files_DirectoryEntryPtr) == 8,
              "union mojo_files_DirectoryEntryPtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.
const uint32_t mojo_files_kOpenFlagRead;
const uint32_t mojo_files_kOpenFlagWrite;
const uint32_t mojo_files_kOpenFlagCreate;
const uint32_t mojo_files_kOpenFlagExclusive;
const uint32_t mojo_files_kOpenFlagAppend;
const uint32_t mojo_files_kOpenFlagTruncate;
const uint32_t mojo_files_kDeleteFlagFileOnly;
const uint32_t mojo_files_kDeleteFlagDirectoryOnly;
const uint32_t mojo_files_kDeleteFlagRecursive;


// Top level enums.
typedef uint32_t mojo_files_Error;
enum mojo_files_Error_Enum {
  mojo_files_Error_OK = 0,
  mojo_files_Error_UNKNOWN = 1,
  mojo_files_Error_INVALID_ARGUMENT = 2,
  mojo_files_Error_PERMISSION_DENIED = 3,
  mojo_files_Error_OUT_OF_RANGE = 4,
  mojo_files_Error_UNIMPLEMENTED = 5,
  mojo_files_Error_CLOSED = 6,
  mojo_files_Error_UNAVAILABLE = 7,
  mojo_files_Error_INTERNAL = 8,
  
  mojo_files_Error__UNKNOWN__ = 0xFFFFFFFF,
};

typedef uint32_t mojo_files_Whence;
enum mojo_files_Whence_Enum {
  mojo_files_Whence_FROM_CURRENT = 0,
  mojo_files_Whence_FROM_START = 1,
  mojo_files_Whence_FROM_END = 2,
  
  mojo_files_Whence__UNKNOWN__ = 0xFFFFFFFF,
};

typedef uint32_t mojo_files_FileType;
enum mojo_files_FileType_Enum {
  mojo_files_FileType_UNKNOWN = 0,
  mojo_files_FileType_REGULAR_FILE = 1,
  mojo_files_FileType_DIRECTORY = 2,
  
  mojo_files_FileType__UNKNOWN__ = 0xFFFFFFFF,
};



// Union definitions.


// Struct definitions.
// -- mojo_files_Timespec --
// Enums
// Constants
// Struct definition
struct mojo_files_Timespec {
  struct MojomStructHeader header_;
  int64_t seconds;  // offset,bit = 0,0
  int32_t nanoseconds;  // offset,bit = 8,0
  
};

struct mojo_files_Timespec* mojo_files_Timespec_New(struct MojomBuffer* in_buffer);

void mojo_files_Timespec_Init(
  struct mojo_files_Timespec* in_data);

void mojo_files_Timespec_CloseAllHandles(
  struct mojo_files_Timespec* in_data);

struct mojo_files_Timespec* mojo_files_Timespec_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_files_Timespec* in_data);

size_t mojo_files_Timespec_ComputeSerializedSize(
  const struct mojo_files_Timespec* in_data);

MojomValidationResult mojo_files_Timespec_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_files_Timespec_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_files_Timespec_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_files_TimespecOrNow --
// Enums
// Constants
// Struct definition
struct mojo_files_TimespecOrNow {
  struct MojomStructHeader header_;
  bool now : 1;  // offset,bit = 0,0
  uint8_t pad0_[7];  // padding
  union mojo_files_TimespecPtr timespec;  // offset,bit = 8,0
  
};

struct mojo_files_TimespecOrNow* mojo_files_TimespecOrNow_New(struct MojomBuffer* in_buffer);

void mojo_files_TimespecOrNow_Init(
  struct mojo_files_TimespecOrNow* in_data);

void mojo_files_TimespecOrNow_CloseAllHandles(
  struct mojo_files_TimespecOrNow* in_data);

struct mojo_files_TimespecOrNow* mojo_files_TimespecOrNow_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_files_TimespecOrNow* in_data);

size_t mojo_files_TimespecOrNow_ComputeSerializedSize(
  const struct mojo_files_TimespecOrNow* in_data);

MojomValidationResult mojo_files_TimespecOrNow_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_files_TimespecOrNow_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_files_TimespecOrNow_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_files_FileInformation --
// Enums
// Constants
// Struct definition
struct mojo_files_FileInformation {
  struct MojomStructHeader header_;
  mojo_files_FileType type;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  int64_t size;  // offset,bit = 8,0
  union mojo_files_TimespecPtr atime;  // offset,bit = 16,0
  union mojo_files_TimespecPtr mtime;  // offset,bit = 24,0
  
};

struct mojo_files_FileInformation* mojo_files_FileInformation_New(struct MojomBuffer* in_buffer);

void mojo_files_FileInformation_Init(
  struct mojo_files_FileInformation* in_data);

void mojo_files_FileInformation_CloseAllHandles(
  struct mojo_files_FileInformation* in_data);

struct mojo_files_FileInformation* mojo_files_FileInformation_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_files_FileInformation* in_data);

size_t mojo_files_FileInformation_ComputeSerializedSize(
  const struct mojo_files_FileInformation* in_data);

MojomValidationResult mojo_files_FileInformation_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_files_FileInformation_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_files_FileInformation_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_files_DirectoryEntry --
// Enums
// Constants
// Struct definition
struct mojo_files_DirectoryEntry {
  struct MojomStructHeader header_;
  mojo_files_FileType type;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  union MojomStringPtr name;  // offset,bit = 8,0
  
};

struct mojo_files_DirectoryEntry* mojo_files_DirectoryEntry_New(struct MojomBuffer* in_buffer);

void mojo_files_DirectoryEntry_Init(
  struct mojo_files_DirectoryEntry* in_data);

void mojo_files_DirectoryEntry_CloseAllHandles(
  struct mojo_files_DirectoryEntry* in_data);

struct mojo_files_DirectoryEntry* mojo_files_DirectoryEntry_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_files_DirectoryEntry* in_data);

size_t mojo_files_DirectoryEntry_ComputeSerializedSize(
  const struct mojo_files_DirectoryEntry* in_data);

MojomValidationResult mojo_files_DirectoryEntry_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_files_DirectoryEntry_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_files_DirectoryEntry_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.


// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_files_Timespec__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_files_TimespecOrNow__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_files_FileInformation__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_files_DirectoryEntry__PointerTable[];


#endif  // MOJO_SERVICES_FILES_INTERFACES_TYPES_MOJOM_C_H_