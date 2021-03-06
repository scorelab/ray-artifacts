// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_NETWORK_INTERFACES_NETWORK_SERVICE_MOJOM_C_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_NETWORK_SERVICE_MOJOM_C_H_

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
#include "mojo/public/interfaces/network/network_error.mojom-c.h"
#include "mojo/services/network/interfaces/cookie_store.mojom-c.h"
#include "mojo/services/network/interfaces/host_resolver.mojom-c.h"
#include "mojo/services/network/interfaces/http_server.mojom-c.h"
#include "mojo/services/network/interfaces/net_address.mojom-c.h"
#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-c.h"
#include "mojo/services/network/interfaces/tcp_connected_socket.mojom-c.h"
#include "mojo/services/network/interfaces/udp_socket.mojom-c.h"
#include "mojo/services/network/interfaces/url_loader.mojom-c.h"
#include "mojo/services/network/interfaces/url_loader_interceptor.mojom-c.h"
#include "mojo/services/network/interfaces/web_socket.mojom-c.h"


// Forward declarations for structs.
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- mojo_NetworkService ---
#define mojo_NetworkService__ServiceName ((const char*)"mojo::NetworkService")
#define mojo_NetworkService__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: CreateHostResolver

#define mojo_NetworkService_CreateHostResolver__Ordinal \
    ((uint32_t)8)
#define mojo_NetworkService_CreateHostResolver__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateHostResolver_Request;
// -- mojo_NetworkService_CreateHostResolver_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateHostResolver_Request {
  struct MojomStructHeader header_;
  MojoHandle host_resolver;  // offset,bit = 0,0
  
};

struct mojo_NetworkService_CreateHostResolver_Request* mojo_NetworkService_CreateHostResolver_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateHostResolver_Request_Init(
  struct mojo_NetworkService_CreateHostResolver_Request* in_data);

void mojo_NetworkService_CreateHostResolver_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateHostResolver_Request* in_data);

struct mojo_NetworkService_CreateHostResolver_Request* mojo_NetworkService_CreateHostResolver_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateHostResolver_Request* in_data);

size_t mojo_NetworkService_CreateHostResolver_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateHostResolver_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateHostResolver_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateHostResolver_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateHostResolver_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateURLLoader

#define mojo_NetworkService_CreateURLLoader__Ordinal \
    ((uint32_t)0)
#define mojo_NetworkService_CreateURLLoader__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateURLLoader_Request;
// -- mojo_NetworkService_CreateURLLoader_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateURLLoader_Request {
  struct MojomStructHeader header_;
  MojoHandle loader;  // offset,bit = 0,0
  
};

struct mojo_NetworkService_CreateURLLoader_Request* mojo_NetworkService_CreateURLLoader_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateURLLoader_Request_Init(
  struct mojo_NetworkService_CreateURLLoader_Request* in_data);

void mojo_NetworkService_CreateURLLoader_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateURLLoader_Request* in_data);

struct mojo_NetworkService_CreateURLLoader_Request* mojo_NetworkService_CreateURLLoader_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateURLLoader_Request* in_data);

size_t mojo_NetworkService_CreateURLLoader_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateURLLoader_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateURLLoader_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateURLLoader_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateURLLoader_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateWebSocket

#define mojo_NetworkService_CreateWebSocket__Ordinal \
    ((uint32_t)2)
#define mojo_NetworkService_CreateWebSocket__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateWebSocket_Request;
// -- mojo_NetworkService_CreateWebSocket_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateWebSocket_Request {
  struct MojomStructHeader header_;
  MojoHandle socket;  // offset,bit = 0,0
  
};

struct mojo_NetworkService_CreateWebSocket_Request* mojo_NetworkService_CreateWebSocket_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateWebSocket_Request_Init(
  struct mojo_NetworkService_CreateWebSocket_Request* in_data);

void mojo_NetworkService_CreateWebSocket_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateWebSocket_Request* in_data);

struct mojo_NetworkService_CreateWebSocket_Request* mojo_NetworkService_CreateWebSocket_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateWebSocket_Request* in_data);

size_t mojo_NetworkService_CreateWebSocket_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateWebSocket_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateWebSocket_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateWebSocket_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateWebSocket_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateTCPBoundSocket

#define mojo_NetworkService_CreateTCPBoundSocket__Ordinal \
    ((uint32_t)3)
#define mojo_NetworkService_CreateTCPBoundSocket__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateTCPBoundSocket_Request;
// -- mojo_NetworkService_CreateTCPBoundSocket_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateTCPBoundSocket_Request {
  struct MojomStructHeader header_;
  union mojo_NetAddressPtr local_address;  // offset,bit = 0,0
  MojoHandle bound_socket;  // offset,bit = 8,0
  
};

struct mojo_NetworkService_CreateTCPBoundSocket_Request* mojo_NetworkService_CreateTCPBoundSocket_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateTCPBoundSocket_Request_Init(
  struct mojo_NetworkService_CreateTCPBoundSocket_Request* in_data);

void mojo_NetworkService_CreateTCPBoundSocket_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateTCPBoundSocket_Request* in_data);

struct mojo_NetworkService_CreateTCPBoundSocket_Request* mojo_NetworkService_CreateTCPBoundSocket_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateTCPBoundSocket_Request* in_data);

size_t mojo_NetworkService_CreateTCPBoundSocket_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateTCPBoundSocket_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateTCPBoundSocket_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPBoundSocket_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPBoundSocket_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_NetworkService_CreateTCPBoundSocket_Response;
// -- mojo_NetworkService_CreateTCPBoundSocket_Response --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateTCPBoundSocket_Response {
  struct MojomStructHeader header_;
  union mojo_NetworkErrorPtr result;  // offset,bit = 0,0
  union mojo_NetAddressPtr bound_to;  // offset,bit = 8,0
  
};

struct mojo_NetworkService_CreateTCPBoundSocket_Response* mojo_NetworkService_CreateTCPBoundSocket_Response_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateTCPBoundSocket_Response_Init(
  struct mojo_NetworkService_CreateTCPBoundSocket_Response* in_data);

void mojo_NetworkService_CreateTCPBoundSocket_Response_CloseAllHandles(
  struct mojo_NetworkService_CreateTCPBoundSocket_Response* in_data);

struct mojo_NetworkService_CreateTCPBoundSocket_Response* mojo_NetworkService_CreateTCPBoundSocket_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateTCPBoundSocket_Response* in_data);

size_t mojo_NetworkService_CreateTCPBoundSocket_Response_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateTCPBoundSocket_Response* in_data);

MojomValidationResult mojo_NetworkService_CreateTCPBoundSocket_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPBoundSocket_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPBoundSocket_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateTCPConnectedSocket

#define mojo_NetworkService_CreateTCPConnectedSocket__Ordinal \
    ((uint32_t)4)
#define mojo_NetworkService_CreateTCPConnectedSocket__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateTCPConnectedSocket_Request;
// -- mojo_NetworkService_CreateTCPConnectedSocket_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateTCPConnectedSocket_Request {
  struct MojomStructHeader header_;
  union mojo_NetAddressPtr remote_address;  // offset,bit = 0,0
  MojoHandle send_stream;  // offset,bit = 8,0
  MojoHandle receive_stream;  // offset,bit = 12,0
  MojoHandle client_socket;  // offset,bit = 16,0
  
};

struct mojo_NetworkService_CreateTCPConnectedSocket_Request* mojo_NetworkService_CreateTCPConnectedSocket_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateTCPConnectedSocket_Request_Init(
  struct mojo_NetworkService_CreateTCPConnectedSocket_Request* in_data);

void mojo_NetworkService_CreateTCPConnectedSocket_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateTCPConnectedSocket_Request* in_data);

struct mojo_NetworkService_CreateTCPConnectedSocket_Request* mojo_NetworkService_CreateTCPConnectedSocket_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateTCPConnectedSocket_Request* in_data);

size_t mojo_NetworkService_CreateTCPConnectedSocket_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateTCPConnectedSocket_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateTCPConnectedSocket_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPConnectedSocket_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPConnectedSocket_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_NetworkService_CreateTCPConnectedSocket_Response;
// -- mojo_NetworkService_CreateTCPConnectedSocket_Response --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateTCPConnectedSocket_Response {
  struct MojomStructHeader header_;
  union mojo_NetworkErrorPtr result;  // offset,bit = 0,0
  union mojo_NetAddressPtr local_address;  // offset,bit = 8,0
  
};

struct mojo_NetworkService_CreateTCPConnectedSocket_Response* mojo_NetworkService_CreateTCPConnectedSocket_Response_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateTCPConnectedSocket_Response_Init(
  struct mojo_NetworkService_CreateTCPConnectedSocket_Response* in_data);

void mojo_NetworkService_CreateTCPConnectedSocket_Response_CloseAllHandles(
  struct mojo_NetworkService_CreateTCPConnectedSocket_Response* in_data);

struct mojo_NetworkService_CreateTCPConnectedSocket_Response* mojo_NetworkService_CreateTCPConnectedSocket_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateTCPConnectedSocket_Response* in_data);

size_t mojo_NetworkService_CreateTCPConnectedSocket_Response_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateTCPConnectedSocket_Response* in_data);

MojomValidationResult mojo_NetworkService_CreateTCPConnectedSocket_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPConnectedSocket_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateTCPConnectedSocket_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateUDPSocket

#define mojo_NetworkService_CreateUDPSocket__Ordinal \
    ((uint32_t)5)
#define mojo_NetworkService_CreateUDPSocket__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateUDPSocket_Request;
// -- mojo_NetworkService_CreateUDPSocket_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateUDPSocket_Request {
  struct MojomStructHeader header_;
  MojoHandle socket;  // offset,bit = 0,0
  
};

struct mojo_NetworkService_CreateUDPSocket_Request* mojo_NetworkService_CreateUDPSocket_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateUDPSocket_Request_Init(
  struct mojo_NetworkService_CreateUDPSocket_Request* in_data);

void mojo_NetworkService_CreateUDPSocket_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateUDPSocket_Request* in_data);

struct mojo_NetworkService_CreateUDPSocket_Request* mojo_NetworkService_CreateUDPSocket_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateUDPSocket_Request* in_data);

size_t mojo_NetworkService_CreateUDPSocket_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateUDPSocket_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateUDPSocket_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateUDPSocket_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateUDPSocket_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: RegisterURLLoaderInterceptor

#define mojo_NetworkService_RegisterURLLoaderInterceptor__Ordinal \
    ((uint32_t)7)
#define mojo_NetworkService_RegisterURLLoaderInterceptor__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request;
// -- mojo_NetworkService_RegisterURLLoaderInterceptor_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request {
  struct MojomStructHeader header_;
  struct MojomInterfaceData factory;  // offset,bit = 0,0
  
};

struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request* mojo_NetworkService_RegisterURLLoaderInterceptor_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_RegisterURLLoaderInterceptor_Request_Init(
  struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request* in_data);

void mojo_NetworkService_RegisterURLLoaderInterceptor_Request_CloseAllHandles(
  struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request* in_data);

struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request* mojo_NetworkService_RegisterURLLoaderInterceptor_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request* in_data);

size_t mojo_NetworkService_RegisterURLLoaderInterceptor_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_RegisterURLLoaderInterceptor_Request* in_data);

MojomValidationResult mojo_NetworkService_RegisterURLLoaderInterceptor_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_RegisterURLLoaderInterceptor_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_RegisterURLLoaderInterceptor_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetCookieStore

#define mojo_NetworkService_GetCookieStore__Ordinal \
    ((uint32_t)1)
#define mojo_NetworkService_GetCookieStore__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_GetCookieStore_Request;
// -- mojo_NetworkService_GetCookieStore_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_GetCookieStore_Request {
  struct MojomStructHeader header_;
  MojoHandle cookie_store;  // offset,bit = 0,0
  
};

struct mojo_NetworkService_GetCookieStore_Request* mojo_NetworkService_GetCookieStore_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_GetCookieStore_Request_Init(
  struct mojo_NetworkService_GetCookieStore_Request* in_data);

void mojo_NetworkService_GetCookieStore_Request_CloseAllHandles(
  struct mojo_NetworkService_GetCookieStore_Request* in_data);

struct mojo_NetworkService_GetCookieStore_Request* mojo_NetworkService_GetCookieStore_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_GetCookieStore_Request* in_data);

size_t mojo_NetworkService_GetCookieStore_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_GetCookieStore_Request* in_data);

MojomValidationResult mojo_NetworkService_GetCookieStore_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_GetCookieStore_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_GetCookieStore_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateHttpServer

#define mojo_NetworkService_CreateHttpServer__Ordinal \
    ((uint32_t)6)
#define mojo_NetworkService_CreateHttpServer__MinVersion \
    ((uint32_t)0)

struct mojo_NetworkService_CreateHttpServer_Request;
// -- mojo_NetworkService_CreateHttpServer_Request --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateHttpServer_Request {
  struct MojomStructHeader header_;
  union mojo_NetAddressPtr local_address;  // offset,bit = 0,0
  struct MojomInterfaceData delegate;  // offset,bit = 8,0
  
};

struct mojo_NetworkService_CreateHttpServer_Request* mojo_NetworkService_CreateHttpServer_Request_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateHttpServer_Request_Init(
  struct mojo_NetworkService_CreateHttpServer_Request* in_data);

void mojo_NetworkService_CreateHttpServer_Request_CloseAllHandles(
  struct mojo_NetworkService_CreateHttpServer_Request* in_data);

struct mojo_NetworkService_CreateHttpServer_Request* mojo_NetworkService_CreateHttpServer_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateHttpServer_Request* in_data);

size_t mojo_NetworkService_CreateHttpServer_Request_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateHttpServer_Request* in_data);

MojomValidationResult mojo_NetworkService_CreateHttpServer_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateHttpServer_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateHttpServer_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_NetworkService_CreateHttpServer_Response;
// -- mojo_NetworkService_CreateHttpServer_Response --
// Enums
// Constants
// Struct definition
struct mojo_NetworkService_CreateHttpServer_Response {
  struct MojomStructHeader header_;
  union mojo_NetworkErrorPtr result;  // offset,bit = 0,0
  union mojo_NetAddressPtr bound_to;  // offset,bit = 8,0
  
};

struct mojo_NetworkService_CreateHttpServer_Response* mojo_NetworkService_CreateHttpServer_Response_New(struct MojomBuffer* in_buffer);

void mojo_NetworkService_CreateHttpServer_Response_Init(
  struct mojo_NetworkService_CreateHttpServer_Response* in_data);

void mojo_NetworkService_CreateHttpServer_Response_CloseAllHandles(
  struct mojo_NetworkService_CreateHttpServer_Response* in_data);

struct mojo_NetworkService_CreateHttpServer_Response* mojo_NetworkService_CreateHttpServer_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_NetworkService_CreateHttpServer_Response* in_data);

size_t mojo_NetworkService_CreateHttpServer_Response_ComputeSerializedSize(
  const struct mojo_NetworkService_CreateHttpServer_Response* in_data);

MojomValidationResult mojo_NetworkService_CreateHttpServer_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_NetworkService_CreateHttpServer_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_NetworkService_CreateHttpServer_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_NetworkService_GetCookieStore_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateHttpServer_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateHttpServer_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_RegisterURLLoaderInterceptor_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateHostResolver_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateURLLoader_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateWebSocket_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateTCPBoundSocket_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateTCPBoundSocket_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateTCPConnectedSocket_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateTCPConnectedSocket_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_NetworkService_CreateUDPSocket_Request__PointerTable[];


#endif  // MOJO_SERVICES_NETWORK_INTERFACES_NETWORK_SERVICE_MOJOM_C_H_