// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/test_service/test_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function TestService_Ping_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_Ping_Params.prototype.initDefaults_ = function() {
  };
  TestService_Ping_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_Ping_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_Ping_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_Ping_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestService_Ping_Params.decode = function(decoder) {
    var packed;
    var val = new TestService_Ping_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestService_Ping_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_Ping_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestService_Ping_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_Ping_ResponseParams.prototype.initDefaults_ = function() {
  };
  TestService_Ping_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_Ping_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_Ping_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_Ping_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  TestService_Ping_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestService_Ping_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestService_Ping_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_Ping_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  function TestService_ConnectToAppAndGetTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_ConnectToAppAndGetTime_Params.prototype.initDefaults_ = function() {
    this.app_url = null;
  };
  TestService_ConnectToAppAndGetTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_ConnectToAppAndGetTime_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_ConnectToAppAndGetTime_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestService_ConnectToAppAndGetTime_Params.app_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_ConnectToAppAndGetTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  TestService_ConnectToAppAndGetTime_Params.decode = function(decoder) {
    var packed;
    var val = new TestService_ConnectToAppAndGetTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.app_url = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  TestService_ConnectToAppAndGetTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_ConnectToAppAndGetTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.app_url);
  };

  function TestService_ConnectToAppAndGetTime_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_ConnectToAppAndGetTime_ResponseParams.prototype.initDefaults_ = function() {
    this.time_usec = 0;
  };
  TestService_ConnectToAppAndGetTime_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_ConnectToAppAndGetTime_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_ConnectToAppAndGetTime_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TestService_ConnectToAppAndGetTime_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  TestService_ConnectToAppAndGetTime_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestService_ConnectToAppAndGetTime_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time_usec = decoder.decodeStruct(codec.Int64);
    return val;
  };

  TestService_ConnectToAppAndGetTime_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_ConnectToAppAndGetTime_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.time_usec);
  };

  function TestService_StartTrackingRequests_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_StartTrackingRequests_Params.prototype.initDefaults_ = function() {
  };
  TestService_StartTrackingRequests_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_StartTrackingRequests_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_StartTrackingRequests_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_StartTrackingRequests_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestService_StartTrackingRequests_Params.decode = function(decoder) {
    var packed;
    var val = new TestService_StartTrackingRequests_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestService_StartTrackingRequests_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_StartTrackingRequests_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestService_StartTrackingRequests_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_StartTrackingRequests_ResponseParams.prototype.initDefaults_ = function() {
  };
  TestService_StartTrackingRequests_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_StartTrackingRequests_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_StartTrackingRequests_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_StartTrackingRequests_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  TestService_StartTrackingRequests_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestService_StartTrackingRequests_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestService_StartTrackingRequests_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_StartTrackingRequests_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  function TestTimeService_GetPartyTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestTimeService_GetPartyTime_Params.prototype.initDefaults_ = function() {
  };
  TestTimeService_GetPartyTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestTimeService_GetPartyTime_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestTimeService_GetPartyTime_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestTimeService_GetPartyTime_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestTimeService_GetPartyTime_Params.decode = function(decoder) {
    var packed;
    var val = new TestTimeService_GetPartyTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestTimeService_GetPartyTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestTimeService_GetPartyTime_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestTimeService_GetPartyTime_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestTimeService_GetPartyTime_ResponseParams.prototype.initDefaults_ = function() {
    this.time_usec = 0;
  };
  TestTimeService_GetPartyTime_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestTimeService_GetPartyTime_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestTimeService_GetPartyTime_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TestTimeService_GetPartyTime_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  TestTimeService_GetPartyTime_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestTimeService_GetPartyTime_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time_usec = decoder.decodeStruct(codec.Int64);
    return val;
  };

  TestTimeService_GetPartyTime_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestTimeService_GetPartyTime_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.time_usec);
  };

  function TestTimeService_StartTrackingRequests_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestTimeService_StartTrackingRequests_Params.prototype.initDefaults_ = function() {
  };
  TestTimeService_StartTrackingRequests_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestTimeService_StartTrackingRequests_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestTimeService_StartTrackingRequests_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestTimeService_StartTrackingRequests_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestTimeService_StartTrackingRequests_Params.decode = function(decoder) {
    var packed;
    var val = new TestTimeService_StartTrackingRequests_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestTimeService_StartTrackingRequests_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestTimeService_StartTrackingRequests_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestTimeService_StartTrackingRequests_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestTimeService_StartTrackingRequests_ResponseParams.prototype.initDefaults_ = function() {
  };
  TestTimeService_StartTrackingRequests_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestTimeService_StartTrackingRequests_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestTimeService_StartTrackingRequests_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestTimeService_StartTrackingRequests_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  TestTimeService_StartTrackingRequests_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestTimeService_StartTrackingRequests_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestTimeService_StartTrackingRequests_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestTimeService_StartTrackingRequests_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  var kTestService_Ping_Name = 0;
  var kTestService_ConnectToAppAndGetTime_Name = 1;
  var kTestService_StartTrackingRequests_Name = 2;

  function TestServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestServiceProxy.prototype.ping = function() {
    var params = new TestService_Ping_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestService_Ping_Name,
          codec.align(TestService_Ping_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestService_Ping_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestService_Ping_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  TestServiceProxy.prototype.connectToAppAndGetTime = function(app_url) {
    var params = new TestService_ConnectToAppAndGetTime_Params();
    params.app_url = app_url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestService_ConnectToAppAndGetTime_Name,
          codec.align(TestService_ConnectToAppAndGetTime_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestService_ConnectToAppAndGetTime_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestService_ConnectToAppAndGetTime_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  TestServiceProxy.prototype.startTrackingRequests = function() {
    var params = new TestService_StartTrackingRequests_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestService_StartTrackingRequests_Name,
          codec.align(TestService_StartTrackingRequests_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestService_StartTrackingRequests_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestService_StartTrackingRequests_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TestServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  TestServiceStub.prototype.ping = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.ping && bindings.StubBindings(this).delegate.ping();
  }
  TestServiceStub.prototype.connectToAppAndGetTime = function(app_url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connectToAppAndGetTime && bindings.StubBindings(this).delegate.connectToAppAndGetTime(app_url);
  }
  TestServiceStub.prototype.startTrackingRequests = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startTrackingRequests && bindings.StubBindings(this).delegate.startTrackingRequests();
  }

  TestServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TestServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestService_Ping_Name:
      var params = reader.decodeStruct(TestService_Ping_Params);
      return this.ping().then(function(response) {
        var responseParams =
            new TestService_Ping_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestService_Ping_Name,
            codec.align(TestService_Ping_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestService_Ping_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kTestService_ConnectToAppAndGetTime_Name:
      var params = reader.decodeStruct(TestService_ConnectToAppAndGetTime_Params);
      return this.connectToAppAndGetTime(params.app_url).then(function(response) {
        var responseParams =
            new TestService_ConnectToAppAndGetTime_ResponseParams();
        responseParams.time_usec = response.time_usec;
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestService_ConnectToAppAndGetTime_Name,
            codec.align(TestService_ConnectToAppAndGetTime_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestService_ConnectToAppAndGetTime_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kTestService_StartTrackingRequests_Name:
      var params = reader.decodeStruct(TestService_StartTrackingRequests_Params);
      return this.startTrackingRequests().then(function(response) {
        var responseParams =
            new TestService_StartTrackingRequests_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestService_StartTrackingRequests_Name,
            codec.align(TestService_StartTrackingRequests_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestService_StartTrackingRequests_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestService_Ping_Name:
        if (message.expectsResponse())
          paramsClass = TestService_Ping_Params;
      break;
      case kTestService_ConnectToAppAndGetTime_Name:
        if (message.expectsResponse())
          paramsClass = TestService_ConnectToAppAndGetTime_Params;
      break;
      case kTestService_StartTrackingRequests_Name:
        if (message.expectsResponse())
          paramsClass = TestService_StartTrackingRequests_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTestService_Ping_Name:
        if (message.isResponse())
          paramsClass = TestService_Ping_ResponseParams;
        break;
      case kTestService_ConnectToAppAndGetTime_Name:
        if (message.isResponse())
          paramsClass = TestService_ConnectToAppAndGetTime_ResponseParams;
        break;
      case kTestService_StartTrackingRequests_Name:
        if (message.isResponse())
          paramsClass = TestService_StartTrackingRequests_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestService = {
    name: 'mojo::test::TestService',
    proxyClass: TestServiceProxy,
    stubClass: TestServiceStub,
    validateRequest: validateTestServiceRequest,
    validateResponse: validateTestServiceResponse,
  };
  TestServiceStub.prototype.validator = validateTestServiceRequest;
  TestServiceProxy.prototype.validator = validateTestServiceResponse;

  var kTestTimeService_GetPartyTime_Name = 0;
  var kTestTimeService_StartTrackingRequests_Name = 1;

  function TestTimeServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestTimeServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestTimeServiceProxy.prototype.getPartyTime = function() {
    var params = new TestTimeService_GetPartyTime_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestTimeService_GetPartyTime_Name,
          codec.align(TestTimeService_GetPartyTime_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestTimeService_GetPartyTime_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestTimeService_GetPartyTime_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  TestTimeServiceProxy.prototype.startTrackingRequests = function() {
    var params = new TestTimeService_StartTrackingRequests_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestTimeService_StartTrackingRequests_Name,
          codec.align(TestTimeService_StartTrackingRequests_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestTimeService_StartTrackingRequests_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestTimeService_StartTrackingRequests_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TestTimeServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestTimeServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  TestTimeServiceStub.prototype.getPartyTime = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPartyTime && bindings.StubBindings(this).delegate.getPartyTime();
  }
  TestTimeServiceStub.prototype.startTrackingRequests = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startTrackingRequests && bindings.StubBindings(this).delegate.startTrackingRequests();
  }

  TestTimeServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TestTimeServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestTimeService_GetPartyTime_Name:
      var params = reader.decodeStruct(TestTimeService_GetPartyTime_Params);
      return this.getPartyTime().then(function(response) {
        var responseParams =
            new TestTimeService_GetPartyTime_ResponseParams();
        responseParams.time_usec = response.time_usec;
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestTimeService_GetPartyTime_Name,
            codec.align(TestTimeService_GetPartyTime_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestTimeService_GetPartyTime_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kTestTimeService_StartTrackingRequests_Name:
      var params = reader.decodeStruct(TestTimeService_StartTrackingRequests_Params);
      return this.startTrackingRequests().then(function(response) {
        var responseParams =
            new TestTimeService_StartTrackingRequests_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestTimeService_StartTrackingRequests_Name,
            codec.align(TestTimeService_StartTrackingRequests_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestTimeService_StartTrackingRequests_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestTimeServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestTimeService_GetPartyTime_Name:
        if (message.expectsResponse())
          paramsClass = TestTimeService_GetPartyTime_Params;
      break;
      case kTestTimeService_StartTrackingRequests_Name:
        if (message.expectsResponse())
          paramsClass = TestTimeService_StartTrackingRequests_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestTimeServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTestTimeService_GetPartyTime_Name:
        if (message.isResponse())
          paramsClass = TestTimeService_GetPartyTime_ResponseParams;
        break;
      case kTestTimeService_StartTrackingRequests_Name:
        if (message.isResponse())
          paramsClass = TestTimeService_StartTrackingRequests_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestTimeService = {
    name: 'mojo::test::TestTimeService',
    proxyClass: TestTimeServiceProxy,
    stubClass: TestTimeServiceStub,
    validateRequest: validateTestTimeServiceRequest,
    validateResponse: validateTestTimeServiceResponse,
  };
  TestTimeServiceStub.prototype.validator = validateTestTimeServiceRequest;
  TestTimeServiceProxy.prototype.validator = validateTestTimeServiceResponse;


  var exports = {};
  exports.TestService = TestService;
  exports.TestTimeService = TestTimeService;


  return exports;
});
