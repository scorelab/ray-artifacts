// This file was auto-generated by the C bindings generator.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_INCLUDED_UNIONS_MOJOM_C_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_INCLUDED_UNIONS_MOJOM_C_H_

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
struct mojo_test_IncludedUnion;
union mojo_test_IncludedUnionPtr {
  struct mojo_test_IncludedUnion* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union mojo_test_IncludedUnionPtr) == 8,
             "union mojo_test_IncludedUnion must be 8 bytes");

// Top level constants.


// Top level enums.


// Union definitions.
// -- mojo_test_IncludedUnion --
// Enum describing the union tags.
typedef uint32_t mojo_test_IncludedUnion_Tag;
enum mojo_test_IncludedUnion_Tag_Enum {
  mojo_test_IncludedUnion_Tag_a = 0,
  
  mojo_test_IncludedUnion_Tag__UNKNOWN__ = 0xFFFFFFFF,
};


struct mojo_test_IncludedUnion {
  uint32_t size;
  mojo_test_IncludedUnion_Tag tag;
  
  union {
    int8_t f_a;
    
    uint64_t unknown;
  } data;
};

MOJO_STATIC_ASSERT(sizeof(struct mojo_test_IncludedUnion) == 16,
             "struct mojo_test_IncludedUnion must be 16 bytes");



// Struct definitions.


// Interface definitions.


// Type tables declarations for structs and unions.

extern struct MojomPointerTableUnionEntry mojo_test_IncludedUnion__PointerTable[];




#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_INCLUDED_UNIONS_MOJOM_C_H_