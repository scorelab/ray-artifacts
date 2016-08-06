// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {
namespace test {

class StructA;
class StructB;
class StructC;
class StructD;
class StructE;
class StructF;
class StructG;
class StructH;
class BasicStruct;
class StructWithEnum;

class UnionA;
class UnionB;

namespace internal {

class StructA_Data;
class StructB_Data;
class StructC_Data;
class StructD_Data;
class StructE_Data;
class StructF_Data;
class StructG_Data;
class StructH_Data;
class BasicStruct_Data;
class StructWithEnum_Data;


class UnionA_Data;
class UnionB_Data;

#pragma pack(push, 1)



class UnionA_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static UnionA_Data* New(mojo::internal::Buffer* buf);
  UnionA_Data();
  // Do nothing in the destructor since it won't be called.
  ~UnionA_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class UnionA_Tag : uint32_t {

    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    uint16_t f_a;
    uint32_t f_b;
    mojo::internal::StructPointer<internal::StructA_Data> f_c;
    mojo::internal::ArrayPointer<uint8_t> f_d;
    mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, uint8_t>> f_e;
    mojo::internal::UnionPointer<internal::UnionB_Data> f_f;
    mojo::internal::StructPointer<internal::StructA_Data> f_g;
    mojo::internal::ArrayPointer<uint8_t> f_h;
    mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, uint8_t>> f_i;
    mojo::internal::UnionPointer<internal::UnionB_Data> f_j;
    uint64_t unknown;
  };

  uint32_t size;
  UnionA_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(UnionA_Data) == 16,
              "Bad sizeof(UnionA_Data)");
static_assert(sizeof(UnionA_Data::Union_) == 8,
              "Bad sizeof(UnionA_Data::Union_)");



class UnionB_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static UnionB_Data* New(mojo::internal::Buffer* buf);
  UnionB_Data();
  // Do nothing in the destructor since it won't be called.
  ~UnionB_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class UnionB_Tag : uint32_t {

    A,
    B,
    C,
    D,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    uint16_t f_a;
    uint32_t f_b;
    uint64_t f_c;
    uint32_t f_d;
    uint64_t unknown;
  };

  uint32_t size;
  UnionB_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(UnionB_Data) == 16,
              "Bad sizeof(UnionB_Data)");
static_assert(sizeof(UnionB_Data::Union_) == 8,
              "Bad sizeof(UnionB_Data::Union_)");


class StructA_Data {
 public:
  static StructA_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint64_t i;

 private:
  StructA_Data();
  ~StructA_Data() = delete;
};
static_assert(sizeof(StructA_Data) == 16,
              "Bad sizeof(StructA_Data)");

class StructB_Data {
 public:
  static StructB_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructA_Data> struct_a;

 private:
  StructB_Data();
  ~StructB_Data() = delete;
};
static_assert(sizeof(StructB_Data) == 16,
              "Bad sizeof(StructB_Data)");

class StructC_Data {
 public:
  static StructC_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  StructC_Data();
  ~StructC_Data() = delete;
};
static_assert(sizeof(StructC_Data) == 16,
              "Bad sizeof(StructC_Data)");

class StructD_Data {
 public:
  static StructD_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::MessagePipeHandle> message_pipes;

 private:
  StructD_Data();
  ~StructD_Data() = delete;
};
static_assert(sizeof(StructD_Data) == 16,
              "Bad sizeof(StructD_Data)");

class StructE_Data {
 public:
  static StructE_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructD_Data> struct_d;
  mojo::DataPipeConsumerHandle data_pipe_consumer;
  uint8_t padfinal_[4];

 private:
  StructE_Data();
  ~StructE_Data() = delete;
};
static_assert(sizeof(StructE_Data) == 24,
              "Bad sizeof(StructE_Data)");

class StructF_Data {
 public:
  static StructF_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> fixed_size_array;

 private:
  StructF_Data();
  ~StructF_Data() = delete;
};
static_assert(sizeof(StructF_Data) == 16,
              "Bad sizeof(StructF_Data)");

class StructG_Data {
 public:
  static StructG_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t i;
  uint8_t b : 1;
  uint8_t pad1_[3];
  mojo::internal::StructPointer<internal::StructA_Data> struct_a;
  mojo::internal::StringPointer str;

 private:
  StructG_Data();
  ~StructG_Data() = delete;
};
static_assert(sizeof(StructG_Data) == 32,
              "Bad sizeof(StructG_Data)");

class StructH_Data {
 public:
  static StructH_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t a : 1;
  uint8_t b;
  uint8_t pad1_[6];
  internal::UnionA_Data c;
  mojo::internal::ArrayPointer<internal::UnionA_Data> d;
  mojo::internal::StructPointer<mojo::internal::Map_Data<uint8_t, internal::UnionA_Data>> e;

 private:
  StructH_Data();
  ~StructH_Data() = delete;
};
static_assert(sizeof(StructH_Data) == 48,
              "Bad sizeof(StructH_Data)");

class BasicStruct_Data {
 public:
  static BasicStruct_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t a;
  uint8_t padfinal_[4];

 private:
  BasicStruct_Data();
  ~BasicStruct_Data() = delete;
};
static_assert(sizeof(BasicStruct_Data) == 16,
              "Bad sizeof(BasicStruct_Data)");

class StructWithEnum_Data {
 public:
  static StructWithEnum_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  StructWithEnum_Data();
  ~StructWithEnum_Data() = delete;
};
static_assert(sizeof(StructWithEnum_Data) == 8,
              "Bad sizeof(StructWithEnum_Data)");


class BoundsCheckTestInterface_Method0_Params_Data {
 public:
  static BoundsCheckTestInterface_Method0_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t param0;
  uint8_t padfinal_[7];

 private:
  BoundsCheckTestInterface_Method0_Params_Data();
  ~BoundsCheckTestInterface_Method0_Params_Data() = delete;
};
static_assert(sizeof(BoundsCheckTestInterface_Method0_Params_Data) == 16,
              "Bad sizeof(BoundsCheckTestInterface_Method0_Params_Data)");

class BoundsCheckTestInterface_Method0_ResponseParams_Data {
 public:
  static BoundsCheckTestInterface_Method0_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t param0;
  uint8_t padfinal_[7];

 private:
  BoundsCheckTestInterface_Method0_ResponseParams_Data();
  ~BoundsCheckTestInterface_Method0_ResponseParams_Data() = delete;
};
static_assert(sizeof(BoundsCheckTestInterface_Method0_ResponseParams_Data) == 16,
              "Bad sizeof(BoundsCheckTestInterface_Method0_ResponseParams_Data)");


class BoundsCheckTestInterface_Method1_Params_Data {
 public:
  static BoundsCheckTestInterface_Method1_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t param0;
  uint8_t padfinal_[7];

 private:
  BoundsCheckTestInterface_Method1_Params_Data();
  ~BoundsCheckTestInterface_Method1_Params_Data() = delete;
};
static_assert(sizeof(BoundsCheckTestInterface_Method1_Params_Data) == 16,
              "Bad sizeof(BoundsCheckTestInterface_Method1_Params_Data)");


class ConformanceTestInterface_Method0_Params_Data {
 public:
  static ConformanceTestInterface_Method0_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  float param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method0_Params_Data();
  ~ConformanceTestInterface_Method0_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method0_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method0_Params_Data)");


class ConformanceTestInterface_Method1_Params_Data {
 public:
  static ConformanceTestInterface_Method1_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructA_Data> param0;

 private:
  ConformanceTestInterface_Method1_Params_Data();
  ~ConformanceTestInterface_Method1_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method1_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method1_Params_Data)");


class ConformanceTestInterface_Method2_Params_Data {
 public:
  static ConformanceTestInterface_Method2_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructB_Data> param0;
  mojo::internal::StructPointer<internal::StructA_Data> param1;

 private:
  ConformanceTestInterface_Method2_Params_Data();
  ~ConformanceTestInterface_Method2_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method2_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method2_Params_Data)");


class ConformanceTestInterface_Method3_Params_Data {
 public:
  static ConformanceTestInterface_Method3_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<bool> param0;

 private:
  ConformanceTestInterface_Method3_Params_Data();
  ~ConformanceTestInterface_Method3_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method3_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method3_Params_Data)");


class ConformanceTestInterface_Method4_Params_Data {
 public:
  static ConformanceTestInterface_Method4_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructC_Data> param0;
  mojo::internal::ArrayPointer<uint8_t> param1;

 private:
  ConformanceTestInterface_Method4_Params_Data();
  ~ConformanceTestInterface_Method4_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method4_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method4_Params_Data)");


class ConformanceTestInterface_Method5_Params_Data {
 public:
  static ConformanceTestInterface_Method5_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructE_Data> param0;
  mojo::DataPipeProducerHandle param1;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method5_Params_Data();
  ~ConformanceTestInterface_Method5_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method5_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method5_Params_Data)");


class ConformanceTestInterface_Method6_Params_Data {
 public:
  static ConformanceTestInterface_Method6_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::internal::Array_Data<uint8_t>*> param0;

 private:
  ConformanceTestInterface_Method6_Params_Data();
  ~ConformanceTestInterface_Method6_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method6_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method6_Params_Data)");


class ConformanceTestInterface_Method7_Params_Data {
 public:
  static ConformanceTestInterface_Method7_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructF_Data> param0;
  mojo::internal::ArrayPointer<mojo::internal::Array_Data<uint8_t>*> param1;

 private:
  ConformanceTestInterface_Method7_Params_Data();
  ~ConformanceTestInterface_Method7_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method7_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method7_Params_Data)");


class ConformanceTestInterface_Method8_Params_Data {
 public:
  static ConformanceTestInterface_Method8_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::internal::Array_Data<mojo::internal::String_Data*>*> param0;

 private:
  ConformanceTestInterface_Method8_Params_Data();
  ~ConformanceTestInterface_Method8_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method8_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method8_Params_Data)");


class ConformanceTestInterface_Method9_Params_Data {
 public:
  static ConformanceTestInterface_Method9_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::internal::Array_Data<mojo::Handle>*> param0;

 private:
  ConformanceTestInterface_Method9_Params_Data();
  ~ConformanceTestInterface_Method9_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method9_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method9_Params_Data)");


class ConformanceTestInterface_Method10_Params_Data {
 public:
  static ConformanceTestInterface_Method10_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, uint8_t>> param0;

 private:
  ConformanceTestInterface_Method10_Params_Data();
  ~ConformanceTestInterface_Method10_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method10_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method10_Params_Data)");


class ConformanceTestInterface_Method11_Params_Data {
 public:
  static ConformanceTestInterface_Method11_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructG_Data> param0;

 private:
  ConformanceTestInterface_Method11_Params_Data();
  ~ConformanceTestInterface_Method11_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method11_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method11_Params_Data)");


class ConformanceTestInterface_Method12_Params_Data {
 public:
  static ConformanceTestInterface_Method12_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  float param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method12_Params_Data();
  ~ConformanceTestInterface_Method12_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method12_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method12_Params_Data)");

class ConformanceTestInterface_Method12_ResponseParams_Data {
 public:
  static ConformanceTestInterface_Method12_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  float param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method12_ResponseParams_Data();
  ~ConformanceTestInterface_Method12_ResponseParams_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method12_ResponseParams_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method12_ResponseParams_Data)");


class ConformanceTestInterface_Method13_Params_Data {
 public:
  static ConformanceTestInterface_Method13_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data param0;
  uint32_t param1;
  mojo::internal::Interface_Data param2;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method13_Params_Data();
  ~ConformanceTestInterface_Method13_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method13_Params_Data) == 32,
              "Bad sizeof(ConformanceTestInterface_Method13_Params_Data)");


class ConformanceTestInterface_Method14_Params_Data {
 public:
  static ConformanceTestInterface_Method14_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  internal::UnionA_Data param0;

 private:
  ConformanceTestInterface_Method14_Params_Data();
  ~ConformanceTestInterface_Method14_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method14_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method14_Params_Data)");


class ConformanceTestInterface_Method15_Params_Data {
 public:
  static ConformanceTestInterface_Method15_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StructH_Data> param0;

 private:
  ConformanceTestInterface_Method15_Params_Data();
  ~ConformanceTestInterface_Method15_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method15_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method15_Params_Data)");


class IntegrationTestInterface_Method0_Params_Data {
 public:
  static IntegrationTestInterface_Method0_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::BasicStruct_Data> param0;

 private:
  IntegrationTestInterface_Method0_Params_Data();
  ~IntegrationTestInterface_Method0_Params_Data() = delete;
};
static_assert(sizeof(IntegrationTestInterface_Method0_Params_Data) == 16,
              "Bad sizeof(IntegrationTestInterface_Method0_Params_Data)");

class IntegrationTestInterface_Method0_ResponseParams_Data {
 public:
  static IntegrationTestInterface_Method0_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> param0;

 private:
  IntegrationTestInterface_Method0_ResponseParams_Data();
  ~IntegrationTestInterface_Method0_ResponseParams_Data() = delete;
};
static_assert(sizeof(IntegrationTestInterface_Method0_ResponseParams_Data) == 16,
              "Bad sizeof(IntegrationTestInterface_Method0_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_INTERNAL_H_
