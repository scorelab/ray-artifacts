// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/test_service/test_request_tracker.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ServiceStats(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceStats.prototype.initDefaults_ = function() {
    this.num_new_requests = 0;
    this.health = 0;
  };
  ServiceStats.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceStats.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceStats.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ServiceStats.encodedSize = codec.kStructHeaderSize + 16;

  ServiceStats.decode = function(decoder) {
    var packed;
    var val = new ServiceStats();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.num_new_requests = decoder.decodeStruct(codec.Uint64);
    val.health = decoder.decodeStruct(codec.Double);
    return val;
  };

  ServiceStats.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceStats.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.num_new_requests);
    encoder.encodeStruct(codec.Double, val.health);
  };

  function ServiceReport(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceReport.prototype.initDefaults_ = function() {
    this.service_name = null;
    this.total_requests = 0;
    this.mean_health = 0;
  };
  ServiceReport.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceReport.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceReport.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceReport.service_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ServiceReport.encodedSize = codec.kStructHeaderSize + 24;

  ServiceReport.decode = function(decoder) {
    var packed;
    var val = new ServiceReport();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service_name = decoder.decodeStruct(codec.NullableString);
    val.total_requests = decoder.decodeStruct(codec.Uint64);
    val.mean_health = decoder.decodeStruct(codec.Double);
    return val;
  };

  ServiceReport.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceReport.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.service_name);
    encoder.encodeStruct(codec.Uint64, val.total_requests);
    encoder.encodeStruct(codec.Double, val.mean_health);
  };

  function TestTrackedRequestService_GetReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestTrackedRequestService_GetReport_Params.prototype.initDefaults_ = function() {
  };
  TestTrackedRequestService_GetReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestTrackedRequestService_GetReport_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestTrackedRequestService_GetReport_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestTrackedRequestService_GetReport_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestTrackedRequestService_GetReport_Params.decode = function(decoder) {
    var packed;
    var val = new TestTrackedRequestService_GetReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestTrackedRequestService_GetReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestTrackedRequestService_GetReport_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestTrackedRequestService_GetReport_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestTrackedRequestService_GetReport_ResponseParams.prototype.initDefaults_ = function() {
    this.report = null;
  };
  TestTrackedRequestService_GetReport_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestTrackedRequestService_GetReport_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestTrackedRequestService_GetReport_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestTrackedRequestService_GetReport_ResponseParams.report
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.NullablePointerTo(ServiceReport), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestTrackedRequestService_GetReport_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  TestTrackedRequestService_GetReport_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestTrackedRequestService_GetReport_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.report = decoder.decodeArrayPointer(new codec.NullablePointerTo(ServiceReport));
    return val;
  };

  TestTrackedRequestService_GetReport_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestTrackedRequestService_GetReport_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.NullablePointerTo(ServiceReport), val.report);
  };

  function TestRequestTracker_SetNameAndReturnId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestRequestTracker_SetNameAndReturnId_Params.prototype.initDefaults_ = function() {
    this.service_name = null;
  };
  TestRequestTracker_SetNameAndReturnId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestRequestTracker_SetNameAndReturnId_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestRequestTracker_SetNameAndReturnId_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestRequestTracker_SetNameAndReturnId_Params.service_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestRequestTracker_SetNameAndReturnId_Params.encodedSize = codec.kStructHeaderSize + 8;

  TestRequestTracker_SetNameAndReturnId_Params.decode = function(decoder) {
    var packed;
    var val = new TestRequestTracker_SetNameAndReturnId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service_name = decoder.decodeStruct(codec.String);
    return val;
  };

  TestRequestTracker_SetNameAndReturnId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestRequestTracker_SetNameAndReturnId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.service_name);
  };

  function TestRequestTracker_SetNameAndReturnId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestRequestTracker_SetNameAndReturnId_ResponseParams.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  TestRequestTracker_SetNameAndReturnId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestRequestTracker_SetNameAndReturnId_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestRequestTracker_SetNameAndReturnId_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TestRequestTracker_SetNameAndReturnId_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  TestRequestTracker_SetNameAndReturnId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestRequestTracker_SetNameAndReturnId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  TestRequestTracker_SetNameAndReturnId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestRequestTracker_SetNameAndReturnId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
  };

  function TestRequestTracker_RecordStats_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestRequestTracker_RecordStats_Params.prototype.initDefaults_ = function() {
    this.client_id = 0;
    this.stats = null;
  };
  TestRequestTracker_RecordStats_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestRequestTracker_RecordStats_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestRequestTracker_RecordStats_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate TestRequestTracker_RecordStats_Params.stats
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ServiceStats, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestRequestTracker_RecordStats_Params.encodedSize = codec.kStructHeaderSize + 16;

  TestRequestTracker_RecordStats_Params.decode = function(decoder) {
    var packed;
    var val = new TestRequestTracker_RecordStats_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client_id = decoder.decodeStruct(codec.Uint64);
    val.stats = decoder.decodeStructPointer(ServiceStats);
    return val;
  };

  TestRequestTracker_RecordStats_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestRequestTracker_RecordStats_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.client_id);
    encoder.encodeStructPointer(ServiceStats, val.stats);
  };

  var kTestTrackedRequestService_GetReport_Name = 0;

  function TestTrackedRequestServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestTrackedRequestServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestTrackedRequestServiceProxy.prototype.getReport = function() {
    var params = new TestTrackedRequestService_GetReport_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestTrackedRequestService_GetReport_Name,
          codec.align(TestTrackedRequestService_GetReport_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestTrackedRequestService_GetReport_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestTrackedRequestService_GetReport_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TestTrackedRequestServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestTrackedRequestServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  TestTrackedRequestServiceStub.prototype.getReport = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getReport && bindings.StubBindings(this).delegate.getReport();
  }

  TestTrackedRequestServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TestTrackedRequestServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestTrackedRequestService_GetReport_Name:
      var params = reader.decodeStruct(TestTrackedRequestService_GetReport_Params);
      return this.getReport().then(function(response) {
        var responseParams =
            new TestTrackedRequestService_GetReport_ResponseParams();
        responseParams.report = response.report;
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestTrackedRequestService_GetReport_Name,
            codec.align(TestTrackedRequestService_GetReport_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestTrackedRequestService_GetReport_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestTrackedRequestServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestTrackedRequestService_GetReport_Name:
        if (message.expectsResponse())
          paramsClass = TestTrackedRequestService_GetReport_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestTrackedRequestServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTestTrackedRequestService_GetReport_Name:
        if (message.isResponse())
          paramsClass = TestTrackedRequestService_GetReport_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestTrackedRequestService = {
    name: 'mojo::test::TestTrackedRequestService',
    proxyClass: TestTrackedRequestServiceProxy,
    stubClass: TestTrackedRequestServiceStub,
    validateRequest: validateTestTrackedRequestServiceRequest,
    validateResponse: validateTestTrackedRequestServiceResponse,
  };
  TestTrackedRequestServiceStub.prototype.validator = validateTestTrackedRequestServiceRequest;
  TestTrackedRequestServiceProxy.prototype.validator = validateTestTrackedRequestServiceResponse;

  var kTestRequestTracker_SetNameAndReturnId_Name = 0;
  var kTestRequestTracker_RecordStats_Name = 1;

  function TestRequestTrackerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestRequestTrackerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestRequestTrackerProxy.prototype.setNameAndReturnId = function(service_name) {
    var params = new TestRequestTracker_SetNameAndReturnId_Params();
    params.service_name = service_name;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestRequestTracker_SetNameAndReturnId_Name,
          codec.align(TestRequestTracker_SetNameAndReturnId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestRequestTracker_SetNameAndReturnId_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestRequestTracker_SetNameAndReturnId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  TestRequestTrackerProxy.prototype.recordStats = function(client_id, stats) {
    var params = new TestRequestTracker_RecordStats_Params();
    params.client_id = client_id;
    params.stats = stats;
    var builder = new codec.MessageBuilder(
        kTestRequestTracker_RecordStats_Name,
        codec.align(TestRequestTracker_RecordStats_Params.encodedSize));
    builder.encodeStruct(TestRequestTracker_RecordStats_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TestRequestTrackerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestRequestTrackerStub.prototype = Object.create(bindings.StubBase.prototype);
  TestRequestTrackerStub.prototype.setNameAndReturnId = function(service_name) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setNameAndReturnId && bindings.StubBindings(this).delegate.setNameAndReturnId(service_name);
  }
  TestRequestTrackerStub.prototype.recordStats = function(client_id, stats) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.recordStats && bindings.StubBindings(this).delegate.recordStats(client_id, stats);
  }

  TestRequestTrackerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestRequestTracker_RecordStats_Name:
      var params = reader.decodeStruct(TestRequestTracker_RecordStats_Params);
      this.recordStats(params.client_id, params.stats);
      return true;
    default:
      return false;
    }
  };

  TestRequestTrackerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestRequestTracker_SetNameAndReturnId_Name:
      var params = reader.decodeStruct(TestRequestTracker_SetNameAndReturnId_Params);
      return this.setNameAndReturnId(params.service_name).then(function(response) {
        var responseParams =
            new TestRequestTracker_SetNameAndReturnId_ResponseParams();
        responseParams.id = response.id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestRequestTracker_SetNameAndReturnId_Name,
            codec.align(TestRequestTracker_SetNameAndReturnId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestRequestTracker_SetNameAndReturnId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestRequestTrackerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestRequestTracker_SetNameAndReturnId_Name:
        if (message.expectsResponse())
          paramsClass = TestRequestTracker_SetNameAndReturnId_Params;
      break;
      case kTestRequestTracker_RecordStats_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TestRequestTracker_RecordStats_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestRequestTrackerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTestRequestTracker_SetNameAndReturnId_Name:
        if (message.isResponse())
          paramsClass = TestRequestTracker_SetNameAndReturnId_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestRequestTracker = {
    name: 'mojo::test::TestRequestTracker',
    proxyClass: TestRequestTrackerProxy,
    stubClass: TestRequestTrackerStub,
    validateRequest: validateTestRequestTrackerRequest,
    validateResponse: validateTestRequestTrackerResponse,
  };
  TestRequestTrackerStub.prototype.validator = validateTestRequestTrackerRequest;
  TestRequestTrackerProxy.prototype.validator = validateTestRequestTrackerResponse;


  var exports = {};
  exports.ServiceStats = ServiceStats;
  exports.ServiceReport = ServiceReport;
  exports.TestTrackedRequestService = TestTrackedRequestService;
  exports.TestRequestTracker = TestRequestTracker;


  return exports;
});
