// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_SURFACES_INTERFACES_SURFACES_MOJOM_C_H_
#define MOJO_SERVICES_SURFACES_INTERFACES_SURFACES_MOJOM_C_H_

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
#include "mojo/services/geometry/interfaces/geometry.mojom-c.h"
#include "mojo/services/surfaces/interfaces/quads.mojom-c.h"
#include "mojo/services/surfaces/interfaces/surface_id.mojom-c.h"


// Forward declarations for structs.
struct mojo_Mailbox;
union mojo_MailboxPtr {
  struct mojo_Mailbox* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_MailboxPtr) == 8,
              "union mojo_MailboxPtr must be 8 bytes");

struct mojo_MailboxHolder;
union mojo_MailboxHolderPtr {
  struct mojo_MailboxHolder* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_MailboxHolderPtr) == 8,
              "union mojo_MailboxHolderPtr must be 8 bytes");

struct mojo_TransferableResource;
union mojo_TransferableResourcePtr {
  struct mojo_TransferableResource* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_TransferableResourcePtr) == 8,
              "union mojo_TransferableResourcePtr must be 8 bytes");

struct mojo_ReturnedResource;
union mojo_ReturnedResourcePtr {
  struct mojo_ReturnedResource* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_ReturnedResourcePtr) == 8,
              "union mojo_ReturnedResourcePtr must be 8 bytes");

struct mojo_Frame;
union mojo_FramePtr {
  struct mojo_Frame* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_FramePtr) == 8,
              "union mojo_FramePtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.
typedef uint32_t mojo_ResourceFormat;
enum mojo_ResourceFormat_Enum {
  mojo_ResourceFormat_RGBA_8888 = 0,
  mojo_ResourceFormat_RGBA_4444 = 1,
  mojo_ResourceFormat_BGRA_8888 = 2,
  mojo_ResourceFormat_ALPHA_8 = 3,
  mojo_ResourceFormat_LUMINANCE_8 = 4,
  mojo_ResourceFormat_RGB_565 = 5,
  mojo_ResourceFormat_ETC1 = 6,
  
  mojo_ResourceFormat__UNKNOWN__ = 0xFFFFFFFF,
};



// Union definitions.


// Struct definitions.
// -- mojo_Mailbox --
// Enums
// Constants
// Struct definition
struct mojo_Mailbox {
  struct MojomStructHeader header_;
  union MojomArrayPtr name;  // offset,bit = 0,0
  
};

struct mojo_Mailbox* mojo_Mailbox_New(struct MojomBuffer* in_buffer);

void mojo_Mailbox_Init(
  struct mojo_Mailbox* in_data);

void mojo_Mailbox_CloseAllHandles(
  struct mojo_Mailbox* in_data);

struct mojo_Mailbox* mojo_Mailbox_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Mailbox* in_data);

size_t mojo_Mailbox_ComputeSerializedSize(
  const struct mojo_Mailbox* in_data);

MojomValidationResult mojo_Mailbox_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Mailbox_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Mailbox_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_MailboxHolder --
// Enums
// Constants
// Struct definition
struct mojo_MailboxHolder {
  struct MojomStructHeader header_;
  union mojo_MailboxPtr mailbox;  // offset,bit = 0,0
  uint32_t texture_target;  // offset,bit = 8,0
  uint32_t sync_point;  // offset,bit = 12,0
  uint8_t pad2_[4];  // padding
  
};

struct mojo_MailboxHolder* mojo_MailboxHolder_New(struct MojomBuffer* in_buffer);

void mojo_MailboxHolder_Init(
  struct mojo_MailboxHolder* in_data);

void mojo_MailboxHolder_CloseAllHandles(
  struct mojo_MailboxHolder* in_data);

struct mojo_MailboxHolder* mojo_MailboxHolder_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_MailboxHolder* in_data);

size_t mojo_MailboxHolder_ComputeSerializedSize(
  const struct mojo_MailboxHolder* in_data);

MojomValidationResult mojo_MailboxHolder_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_MailboxHolder_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_MailboxHolder_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_TransferableResource --
// Enums
// Constants
// Struct definition
struct mojo_TransferableResource {
  struct MojomStructHeader header_;
  uint32_t id;  // offset,bit = 0,0
  mojo_ResourceFormat format;  // offset,bit = 4,0
  uint32_t filter;  // offset,bit = 8,0
  bool is_repeated : 1;  // offset,bit = 12,0
  bool is_software : 1;  // offset,bit = 12,1
  uint8_t pad4_[3];  // padding
  union mojo_SizePtr size;  // offset,bit = 16,0
  union mojo_MailboxHolderPtr mailbox_holder;  // offset,bit = 24,0
  
};

struct mojo_TransferableResource* mojo_TransferableResource_New(struct MojomBuffer* in_buffer);

void mojo_TransferableResource_Init(
  struct mojo_TransferableResource* in_data);

void mojo_TransferableResource_CloseAllHandles(
  struct mojo_TransferableResource* in_data);

struct mojo_TransferableResource* mojo_TransferableResource_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_TransferableResource* in_data);

size_t mojo_TransferableResource_ComputeSerializedSize(
  const struct mojo_TransferableResource* in_data);

MojomValidationResult mojo_TransferableResource_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_TransferableResource_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_TransferableResource_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_ReturnedResource --
// Enums
// Constants
// Struct definition
struct mojo_ReturnedResource {
  struct MojomStructHeader header_;
  uint32_t id;  // offset,bit = 0,0
  uint32_t sync_point;  // offset,bit = 4,0
  int32_t count;  // offset,bit = 8,0
  bool lost : 1;  // offset,bit = 12,0
  uint8_t pad3_[4];  // padding
  
};

struct mojo_ReturnedResource* mojo_ReturnedResource_New(struct MojomBuffer* in_buffer);

void mojo_ReturnedResource_Init(
  struct mojo_ReturnedResource* in_data);

void mojo_ReturnedResource_CloseAllHandles(
  struct mojo_ReturnedResource* in_data);

struct mojo_ReturnedResource* mojo_ReturnedResource_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_ReturnedResource* in_data);

size_t mojo_ReturnedResource_ComputeSerializedSize(
  const struct mojo_ReturnedResource* in_data);

MojomValidationResult mojo_ReturnedResource_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_ReturnedResource_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_ReturnedResource_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- mojo_Frame --
// Enums
// Constants
// Struct definition
struct mojo_Frame {
  struct MojomStructHeader header_;
  union MojomArrayPtr resources;  // offset,bit = 0,0
  union MojomArrayPtr passes;  // offset,bit = 8,0
  
};

struct mojo_Frame* mojo_Frame_New(struct MojomBuffer* in_buffer);

void mojo_Frame_Init(
  struct mojo_Frame* in_data);

void mojo_Frame_CloseAllHandles(
  struct mojo_Frame* in_data);

struct mojo_Frame* mojo_Frame_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Frame* in_data);

size_t mojo_Frame_ComputeSerializedSize(
  const struct mojo_Frame* in_data);

MojomValidationResult mojo_Frame_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Frame_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Frame_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.
// --- mojo_ResourceReturner ---
#define mojo_ResourceReturner__ServiceName ((const char*)"")
#define mojo_ResourceReturner__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: ReturnResources

#define mojo_ResourceReturner_ReturnResources__Ordinal \
    ((uint32_t)0)
#define mojo_ResourceReturner_ReturnResources__MinVersion \
    ((uint32_t)0)

struct mojo_ResourceReturner_ReturnResources_Request;
// -- mojo_ResourceReturner_ReturnResources_Request --
// Enums
// Constants
// Struct definition
struct mojo_ResourceReturner_ReturnResources_Request {
  struct MojomStructHeader header_;
  union MojomArrayPtr resources;  // offset,bit = 0,0
  
};

struct mojo_ResourceReturner_ReturnResources_Request* mojo_ResourceReturner_ReturnResources_Request_New(struct MojomBuffer* in_buffer);

void mojo_ResourceReturner_ReturnResources_Request_Init(
  struct mojo_ResourceReturner_ReturnResources_Request* in_data);

void mojo_ResourceReturner_ReturnResources_Request_CloseAllHandles(
  struct mojo_ResourceReturner_ReturnResources_Request* in_data);

struct mojo_ResourceReturner_ReturnResources_Request* mojo_ResourceReturner_ReturnResources_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_ResourceReturner_ReturnResources_Request* in_data);

size_t mojo_ResourceReturner_ReturnResources_Request_ComputeSerializedSize(
  const struct mojo_ResourceReturner_ReturnResources_Request* in_data);

MojomValidationResult mojo_ResourceReturner_ReturnResources_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_ResourceReturner_ReturnResources_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_ResourceReturner_ReturnResources_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- mojo_Surface ---
#define mojo_Surface__ServiceName ((const char*)"mojo::Surface")
#define mojo_Surface__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: GetIdNamespace

#define mojo_Surface_GetIdNamespace__Ordinal \
    ((uint32_t)0)
#define mojo_Surface_GetIdNamespace__MinVersion \
    ((uint32_t)0)

struct mojo_Surface_GetIdNamespace_Request;
// -- mojo_Surface_GetIdNamespace_Request --
// Enums
// Constants
// Struct definition
struct mojo_Surface_GetIdNamespace_Request {
  struct MojomStructHeader header_;
  
};

struct mojo_Surface_GetIdNamespace_Request* mojo_Surface_GetIdNamespace_Request_New(struct MojomBuffer* in_buffer);

void mojo_Surface_GetIdNamespace_Request_Init(
  struct mojo_Surface_GetIdNamespace_Request* in_data);

void mojo_Surface_GetIdNamespace_Request_CloseAllHandles(
  struct mojo_Surface_GetIdNamespace_Request* in_data);

struct mojo_Surface_GetIdNamespace_Request* mojo_Surface_GetIdNamespace_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_GetIdNamespace_Request* in_data);

size_t mojo_Surface_GetIdNamespace_Request_ComputeSerializedSize(
  const struct mojo_Surface_GetIdNamespace_Request* in_data);

MojomValidationResult mojo_Surface_GetIdNamespace_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_GetIdNamespace_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_GetIdNamespace_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_Surface_GetIdNamespace_Response;
// -- mojo_Surface_GetIdNamespace_Response --
// Enums
// Constants
// Struct definition
struct mojo_Surface_GetIdNamespace_Response {
  struct MojomStructHeader header_;
  uint32_t id_namespace;  // offset,bit = 0,0
  
};

struct mojo_Surface_GetIdNamespace_Response* mojo_Surface_GetIdNamespace_Response_New(struct MojomBuffer* in_buffer);

void mojo_Surface_GetIdNamespace_Response_Init(
  struct mojo_Surface_GetIdNamespace_Response* in_data);

void mojo_Surface_GetIdNamespace_Response_CloseAllHandles(
  struct mojo_Surface_GetIdNamespace_Response* in_data);

struct mojo_Surface_GetIdNamespace_Response* mojo_Surface_GetIdNamespace_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_GetIdNamespace_Response* in_data);

size_t mojo_Surface_GetIdNamespace_Response_ComputeSerializedSize(
  const struct mojo_Surface_GetIdNamespace_Response* in_data);

MojomValidationResult mojo_Surface_GetIdNamespace_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_GetIdNamespace_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_GetIdNamespace_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: SetResourceReturner

#define mojo_Surface_SetResourceReturner__Ordinal \
    ((uint32_t)1)
#define mojo_Surface_SetResourceReturner__MinVersion \
    ((uint32_t)0)

struct mojo_Surface_SetResourceReturner_Request;
// -- mojo_Surface_SetResourceReturner_Request --
// Enums
// Constants
// Struct definition
struct mojo_Surface_SetResourceReturner_Request {
  struct MojomStructHeader header_;
  struct MojomInterfaceData returner;  // offset,bit = 0,0
  
};

struct mojo_Surface_SetResourceReturner_Request* mojo_Surface_SetResourceReturner_Request_New(struct MojomBuffer* in_buffer);

void mojo_Surface_SetResourceReturner_Request_Init(
  struct mojo_Surface_SetResourceReturner_Request* in_data);

void mojo_Surface_SetResourceReturner_Request_CloseAllHandles(
  struct mojo_Surface_SetResourceReturner_Request* in_data);

struct mojo_Surface_SetResourceReturner_Request* mojo_Surface_SetResourceReturner_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_SetResourceReturner_Request* in_data);

size_t mojo_Surface_SetResourceReturner_Request_ComputeSerializedSize(
  const struct mojo_Surface_SetResourceReturner_Request* in_data);

MojomValidationResult mojo_Surface_SetResourceReturner_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_SetResourceReturner_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_SetResourceReturner_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateSurface

#define mojo_Surface_CreateSurface__Ordinal \
    ((uint32_t)2)
#define mojo_Surface_CreateSurface__MinVersion \
    ((uint32_t)0)

struct mojo_Surface_CreateSurface_Request;
// -- mojo_Surface_CreateSurface_Request --
// Enums
// Constants
// Struct definition
struct mojo_Surface_CreateSurface_Request {
  struct MojomStructHeader header_;
  uint32_t id_local;  // offset,bit = 0,0
  
};

struct mojo_Surface_CreateSurface_Request* mojo_Surface_CreateSurface_Request_New(struct MojomBuffer* in_buffer);

void mojo_Surface_CreateSurface_Request_Init(
  struct mojo_Surface_CreateSurface_Request* in_data);

void mojo_Surface_CreateSurface_Request_CloseAllHandles(
  struct mojo_Surface_CreateSurface_Request* in_data);

struct mojo_Surface_CreateSurface_Request* mojo_Surface_CreateSurface_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_CreateSurface_Request* in_data);

size_t mojo_Surface_CreateSurface_Request_ComputeSerializedSize(
  const struct mojo_Surface_CreateSurface_Request* in_data);

MojomValidationResult mojo_Surface_CreateSurface_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_CreateSurface_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_CreateSurface_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: SubmitFrame

#define mojo_Surface_SubmitFrame__Ordinal \
    ((uint32_t)3)
#define mojo_Surface_SubmitFrame__MinVersion \
    ((uint32_t)0)

struct mojo_Surface_SubmitFrame_Request;
// -- mojo_Surface_SubmitFrame_Request --
// Enums
// Constants
// Struct definition
struct mojo_Surface_SubmitFrame_Request {
  struct MojomStructHeader header_;
  uint32_t id_local;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  union mojo_FramePtr frame;  // offset,bit = 8,0
  
};

struct mojo_Surface_SubmitFrame_Request* mojo_Surface_SubmitFrame_Request_New(struct MojomBuffer* in_buffer);

void mojo_Surface_SubmitFrame_Request_Init(
  struct mojo_Surface_SubmitFrame_Request* in_data);

void mojo_Surface_SubmitFrame_Request_CloseAllHandles(
  struct mojo_Surface_SubmitFrame_Request* in_data);

struct mojo_Surface_SubmitFrame_Request* mojo_Surface_SubmitFrame_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_SubmitFrame_Request* in_data);

size_t mojo_Surface_SubmitFrame_Request_ComputeSerializedSize(
  const struct mojo_Surface_SubmitFrame_Request* in_data);

MojomValidationResult mojo_Surface_SubmitFrame_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_SubmitFrame_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_SubmitFrame_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_Surface_SubmitFrame_Response;
// -- mojo_Surface_SubmitFrame_Response --
// Enums
// Constants
// Struct definition
struct mojo_Surface_SubmitFrame_Response {
  struct MojomStructHeader header_;
  
};

struct mojo_Surface_SubmitFrame_Response* mojo_Surface_SubmitFrame_Response_New(struct MojomBuffer* in_buffer);

void mojo_Surface_SubmitFrame_Response_Init(
  struct mojo_Surface_SubmitFrame_Response* in_data);

void mojo_Surface_SubmitFrame_Response_CloseAllHandles(
  struct mojo_Surface_SubmitFrame_Response* in_data);

struct mojo_Surface_SubmitFrame_Response* mojo_Surface_SubmitFrame_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_SubmitFrame_Response* in_data);

size_t mojo_Surface_SubmitFrame_Response_ComputeSerializedSize(
  const struct mojo_Surface_SubmitFrame_Response* in_data);

MojomValidationResult mojo_Surface_SubmitFrame_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_SubmitFrame_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_SubmitFrame_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: DestroySurface

#define mojo_Surface_DestroySurface__Ordinal \
    ((uint32_t)4)
#define mojo_Surface_DestroySurface__MinVersion \
    ((uint32_t)0)

struct mojo_Surface_DestroySurface_Request;
// -- mojo_Surface_DestroySurface_Request --
// Enums
// Constants
// Struct definition
struct mojo_Surface_DestroySurface_Request {
  struct MojomStructHeader header_;
  uint32_t id_local;  // offset,bit = 0,0
  
};

struct mojo_Surface_DestroySurface_Request* mojo_Surface_DestroySurface_Request_New(struct MojomBuffer* in_buffer);

void mojo_Surface_DestroySurface_Request_Init(
  struct mojo_Surface_DestroySurface_Request* in_data);

void mojo_Surface_DestroySurface_Request_CloseAllHandles(
  struct mojo_Surface_DestroySurface_Request* in_data);

struct mojo_Surface_DestroySurface_Request* mojo_Surface_DestroySurface_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_Surface_DestroySurface_Request* in_data);

size_t mojo_Surface_DestroySurface_Request_ComputeSerializedSize(
  const struct mojo_Surface_DestroySurface_Request* in_data);

MojomValidationResult mojo_Surface_DestroySurface_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_Surface_DestroySurface_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_Surface_DestroySurface_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_Mailbox__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_MailboxHolder__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_TransferableResource__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_ReturnedResource__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Frame__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_ResourceReturner_ReturnResources_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_GetIdNamespace_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_GetIdNamespace_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_SetResourceReturner_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_CreateSurface_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_SubmitFrame_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_SubmitFrame_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_Surface_DestroySurface_Request__PointerTable[];


#endif  // MOJO_SERVICES_SURFACES_INTERFACES_SURFACES_MOJOM_C_H_