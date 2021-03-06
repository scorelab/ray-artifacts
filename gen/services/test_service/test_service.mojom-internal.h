// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_TEST_SERVICE_TEST_SERVICE_MOJOM_INTERNAL_H_
#define SERVICES_TEST_SERVICE_TEST_SERVICE_MOJOM_INTERNAL_H_

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



namespace internal {




#pragma pack(push, 1)



class TestService_Ping_Params_Data {
 public:
  static TestService_Ping_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestService_Ping_Params_Data();
  ~TestService_Ping_Params_Data() = delete;
};
static_assert(sizeof(TestService_Ping_Params_Data) == 8,
              "Bad sizeof(TestService_Ping_Params_Data)");

class TestService_Ping_ResponseParams_Data {
 public:
  static TestService_Ping_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestService_Ping_ResponseParams_Data();
  ~TestService_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestService_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(TestService_Ping_ResponseParams_Data)");


class TestService_ConnectToAppAndGetTime_Params_Data {
 public:
  static TestService_ConnectToAppAndGetTime_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer app_url;

 private:
  TestService_ConnectToAppAndGetTime_Params_Data();
  ~TestService_ConnectToAppAndGetTime_Params_Data() = delete;
};
static_assert(sizeof(TestService_ConnectToAppAndGetTime_Params_Data) == 16,
              "Bad sizeof(TestService_ConnectToAppAndGetTime_Params_Data)");

class TestService_ConnectToAppAndGetTime_ResponseParams_Data {
 public:
  static TestService_ConnectToAppAndGetTime_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t time_usec;

 private:
  TestService_ConnectToAppAndGetTime_ResponseParams_Data();
  ~TestService_ConnectToAppAndGetTime_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestService_ConnectToAppAndGetTime_ResponseParams_Data) == 16,
              "Bad sizeof(TestService_ConnectToAppAndGetTime_ResponseParams_Data)");


class TestService_StartTrackingRequests_Params_Data {
 public:
  static TestService_StartTrackingRequests_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestService_StartTrackingRequests_Params_Data();
  ~TestService_StartTrackingRequests_Params_Data() = delete;
};
static_assert(sizeof(TestService_StartTrackingRequests_Params_Data) == 8,
              "Bad sizeof(TestService_StartTrackingRequests_Params_Data)");

class TestService_StartTrackingRequests_ResponseParams_Data {
 public:
  static TestService_StartTrackingRequests_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestService_StartTrackingRequests_ResponseParams_Data();
  ~TestService_StartTrackingRequests_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestService_StartTrackingRequests_ResponseParams_Data) == 8,
              "Bad sizeof(TestService_StartTrackingRequests_ResponseParams_Data)");


class TestTimeService_GetPartyTime_Params_Data {
 public:
  static TestTimeService_GetPartyTime_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestTimeService_GetPartyTime_Params_Data();
  ~TestTimeService_GetPartyTime_Params_Data() = delete;
};
static_assert(sizeof(TestTimeService_GetPartyTime_Params_Data) == 8,
              "Bad sizeof(TestTimeService_GetPartyTime_Params_Data)");

class TestTimeService_GetPartyTime_ResponseParams_Data {
 public:
  static TestTimeService_GetPartyTime_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t time_usec;

 private:
  TestTimeService_GetPartyTime_ResponseParams_Data();
  ~TestTimeService_GetPartyTime_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestTimeService_GetPartyTime_ResponseParams_Data) == 16,
              "Bad sizeof(TestTimeService_GetPartyTime_ResponseParams_Data)");


class TestTimeService_StartTrackingRequests_Params_Data {
 public:
  static TestTimeService_StartTrackingRequests_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestTimeService_StartTrackingRequests_Params_Data();
  ~TestTimeService_StartTrackingRequests_Params_Data() = delete;
};
static_assert(sizeof(TestTimeService_StartTrackingRequests_Params_Data) == 8,
              "Bad sizeof(TestTimeService_StartTrackingRequests_Params_Data)");

class TestTimeService_StartTrackingRequests_ResponseParams_Data {
 public:
  static TestTimeService_StartTrackingRequests_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  TestTimeService_StartTrackingRequests_ResponseParams_Data();
  ~TestTimeService_StartTrackingRequests_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestTimeService_StartTrackingRequests_ResponseParams_Data) == 8,
              "Bad sizeof(TestTimeService_StartTrackingRequests_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // SERVICES_TEST_SERVICE_TEST_SERVICE_MOJOM_INTERNAL_H_
