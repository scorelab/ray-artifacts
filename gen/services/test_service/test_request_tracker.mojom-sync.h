// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_TEST_SERVICE_TEST_REQUEST_TRACKER_MOJOM_SYNC_H_
#define SERVICES_TEST_SERVICE_TEST_REQUEST_TRACKER_MOJOM_SYNC_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/lib/synchronous_connector.h"
#include "services/test_service/test_request_tracker.mojom-internal.h"
#include "services/test_service/test_request_tracker.mojom-common.h"


namespace mojo {
namespace test {

// --- Synchronous interface declaration ---

class TestTrackedRequestService_SynchronousProxy;
class TestTrackedRequestService_Synchronous
  : public internal::TestTrackedRequestService_Base {
 public:
  virtual ~TestTrackedRequestService_Synchronous() override {}
  
  using Proxy_ = TestTrackedRequestService_SynchronousProxy;
  virtual bool GetReport(
      mojo::Array<ServiceReportPtr>* out_report)= 0;
};

class TestTrackedRequestService_SynchronousProxy
    : public TestTrackedRequestService_Synchronous {
 public:
  explicit TestTrackedRequestService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetReport(mojo::Array<ServiceReportPtr>* out_report) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class TestRequestTracker_SynchronousProxy;
class TestRequestTracker_Synchronous
  : public internal::TestRequestTracker_Base {
 public:
  virtual ~TestRequestTracker_Synchronous() override {}
  
  using Proxy_ = TestRequestTracker_SynchronousProxy;
  virtual bool SetNameAndReturnId(
      const mojo::String& in_service_name, uint64_t* out_id)= 0;
  virtual bool RecordStats(
      uint64_t in_client_id, ServiceStatsPtr in_stats)const= 0;
};

class TestRequestTracker_SynchronousProxy
    : public TestRequestTracker_Synchronous {
 public:
  explicit TestRequestTracker_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool SetNameAndReturnId(const mojo::String& in_service_name, uint64_t* out_id) override;
  bool RecordStats(uint64_t in_client_id, ServiceStatsPtr in_stats) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace test
}  // namespace mojo

#endif  // SERVICES_TEST_SERVICE_TEST_REQUEST_TRACKER_MOJOM_SYNC_H_
