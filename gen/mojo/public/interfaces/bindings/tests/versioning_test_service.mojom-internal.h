// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VERSIONING_TEST_SERVICE_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VERSIONING_TEST_SERVICE_MOJOM_INTERNAL_H_

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
namespace versioning {

class Date;
class Employee;


namespace internal {

class Date_Data;
class Employee_Data;



#pragma pack(push, 1)


class Date_Data {
 public:
  static Date_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t padfinal_[4];

 private:
  Date_Data();
  ~Date_Data() = delete;
};
static_assert(sizeof(Date_Data) == 16,
              "Bad sizeof(Date_Data)");

class Employee_Data {
 public:
  static Employee_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint64_t employee_id;
  mojo::internal::StringPointer name;
  int32_t department;
  uint8_t pad2_[4];
  mojo::internal::StructPointer<internal::Date_Data> birthday;

 private:
  Employee_Data();
  ~Employee_Data() = delete;
};
static_assert(sizeof(Employee_Data) == 40,
              "Bad sizeof(Employee_Data)");


class HumanResourceDatabase_AddEmployee_Params_Data {
 public:
  static HumanResourceDatabase_AddEmployee_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::Employee_Data> employee;

 private:
  HumanResourceDatabase_AddEmployee_Params_Data();
  ~HumanResourceDatabase_AddEmployee_Params_Data() = delete;
};
static_assert(sizeof(HumanResourceDatabase_AddEmployee_Params_Data) == 16,
              "Bad sizeof(HumanResourceDatabase_AddEmployee_Params_Data)");

class HumanResourceDatabase_AddEmployee_ResponseParams_Data {
 public:
  static HumanResourceDatabase_AddEmployee_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  HumanResourceDatabase_AddEmployee_ResponseParams_Data();
  ~HumanResourceDatabase_AddEmployee_ResponseParams_Data() = delete;
};
static_assert(sizeof(HumanResourceDatabase_AddEmployee_ResponseParams_Data) == 16,
              "Bad sizeof(HumanResourceDatabase_AddEmployee_ResponseParams_Data)");


class HumanResourceDatabase_QueryEmployee_Params_Data {
 public:
  static HumanResourceDatabase_QueryEmployee_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint64_t id;
  uint8_t retrieve_finger_print : 1;
  uint8_t padfinal_[7];

 private:
  HumanResourceDatabase_QueryEmployee_Params_Data();
  ~HumanResourceDatabase_QueryEmployee_Params_Data() = delete;
};
static_assert(sizeof(HumanResourceDatabase_QueryEmployee_Params_Data) == 24,
              "Bad sizeof(HumanResourceDatabase_QueryEmployee_Params_Data)");

class HumanResourceDatabase_QueryEmployee_ResponseParams_Data {
 public:
  static HumanResourceDatabase_QueryEmployee_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::Employee_Data> employee;
  mojo::internal::ArrayPointer<uint8_t> finger_print;

 private:
  HumanResourceDatabase_QueryEmployee_ResponseParams_Data();
  ~HumanResourceDatabase_QueryEmployee_ResponseParams_Data() = delete;
};
static_assert(sizeof(HumanResourceDatabase_QueryEmployee_ResponseParams_Data) == 24,
              "Bad sizeof(HumanResourceDatabase_QueryEmployee_ResponseParams_Data)");


class HumanResourceDatabase_AttachFingerPrint_Params_Data {
 public:
  static HumanResourceDatabase_AttachFingerPrint_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint64_t id;
  mojo::internal::ArrayPointer<uint8_t> finger_print;

 private:
  HumanResourceDatabase_AttachFingerPrint_Params_Data();
  ~HumanResourceDatabase_AttachFingerPrint_Params_Data() = delete;
};
static_assert(sizeof(HumanResourceDatabase_AttachFingerPrint_Params_Data) == 24,
              "Bad sizeof(HumanResourceDatabase_AttachFingerPrint_Params_Data)");

class HumanResourceDatabase_AttachFingerPrint_ResponseParams_Data {
 public:
  static HumanResourceDatabase_AttachFingerPrint_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  HumanResourceDatabase_AttachFingerPrint_ResponseParams_Data();
  ~HumanResourceDatabase_AttachFingerPrint_ResponseParams_Data() = delete;
};
static_assert(sizeof(HumanResourceDatabase_AttachFingerPrint_ResponseParams_Data) == 16,
              "Bad sizeof(HumanResourceDatabase_AttachFingerPrint_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace versioning
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VERSIONING_TEST_SERVICE_MOJOM_INTERNAL_H_
