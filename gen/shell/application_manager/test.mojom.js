// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("shell/application_manager/test.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function TestService_Test_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_Test_Params.prototype.initDefaults_ = function() {
    this.test_string = null;
  };
  TestService_Test_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_Test_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_Test_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestService_Test_Params.test_string
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_Test_Params.encodedSize = codec.kStructHeaderSize + 8;

  TestService_Test_Params.decode = function(decoder) {
    var packed;
    var val = new TestService_Test_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.test_string = decoder.decodeStruct(codec.String);
    return val;
  };

  TestService_Test_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_Test_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.test_string);
  };

  function TestService_Test_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestService_Test_ResponseParams.prototype.initDefaults_ = function() {
  };
  TestService_Test_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestService_Test_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestService_Test_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestService_Test_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  TestService_Test_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestService_Test_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestService_Test_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestService_Test_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  function TestA_CallB_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestA_CallB_Params.prototype.initDefaults_ = function() {
  };
  TestA_CallB_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestA_CallB_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestA_CallB_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestA_CallB_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestA_CallB_Params.decode = function(decoder) {
    var packed;
    var val = new TestA_CallB_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestA_CallB_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestA_CallB_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestB_B_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestB_B_Params.prototype.initDefaults_ = function() {
  };
  TestB_B_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestB_B_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestB_B_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestB_B_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestB_B_Params.decode = function(decoder) {
    var packed;
    var val = new TestB_B_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestB_B_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestB_B_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestB_B_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestB_B_ResponseParams.prototype.initDefaults_ = function() {
  };
  TestB_B_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestB_B_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestB_B_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestB_B_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  TestB_B_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestB_B_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestB_B_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestB_B_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  function TestC_C_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestC_C_Params.prototype.initDefaults_ = function() {
  };
  TestC_C_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestC_C_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestC_C_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestC_C_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestC_C_Params.decode = function(decoder) {
    var packed;
    var val = new TestC_C_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestC_C_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestC_C_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function TestC_C_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestC_C_ResponseParams.prototype.initDefaults_ = function() {
  };
  TestC_C_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestC_C_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestC_C_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestC_C_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  TestC_C_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TestC_C_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestC_C_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestC_C_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  var kTestService_Test_Name = 0;

  function TestServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestServiceProxy.prototype.test = function(test_string) {
    var params = new TestService_Test_Params();
    params.test_string = test_string;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestService_Test_Name,
          codec.align(TestService_Test_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestService_Test_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestService_Test_ResponseParams);
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
  TestServiceStub.prototype.test = function(test_string) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.test && bindings.StubBindings(this).delegate.test(test_string);
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
    case kTestService_Test_Name:
      var params = reader.decodeStruct(TestService_Test_Params);
      return this.test(params.test_string).then(function(response) {
        var responseParams =
            new TestService_Test_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestService_Test_Name,
            codec.align(TestService_Test_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestService_Test_ResponseParams,
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
      case kTestService_Test_Name:
        if (message.expectsResponse())
          paramsClass = TestService_Test_Params;
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
      case kTestService_Test_Name:
        if (message.isResponse())
          paramsClass = TestService_Test_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestService = {
    name: 'shell.TestService',
    proxyClass: TestServiceProxy,
    stubClass: TestServiceStub,
    validateRequest: validateTestServiceRequest,
    validateResponse: validateTestServiceResponse,
  };
  TestServiceStub.prototype.validator = validateTestServiceRequest;
  TestServiceProxy.prototype.validator = validateTestServiceResponse;

  var kTestA_CallB_Name = 0;

  function TestAProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestAProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestAProxy.prototype.callB = function() {
    var params = new TestA_CallB_Params();
    var builder = new codec.MessageBuilder(
        kTestA_CallB_Name,
        codec.align(TestA_CallB_Params.encodedSize));
    builder.encodeStruct(TestA_CallB_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TestAStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestAStub.prototype = Object.create(bindings.StubBase.prototype);
  TestAStub.prototype.callB = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.callB && bindings.StubBindings(this).delegate.callB();
  }

  TestAStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestA_CallB_Name:
      var params = reader.decodeStruct(TestA_CallB_Params);
      this.callB();
      return true;
    default:
      return false;
    }
  };

  TestAStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestARequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestA_CallB_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TestA_CallB_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestAResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TestA = {
    name: 'shell.TestA',
    proxyClass: TestAProxy,
    stubClass: TestAStub,
    validateRequest: validateTestARequest,
    validateResponse: null,
  };
  TestAStub.prototype.validator = validateTestARequest;
  TestAProxy.prototype.validator = null;

  var kTestB_B_Name = 0;

  function TestBProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestBProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestBProxy.prototype.b = function() {
    var params = new TestB_B_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestB_B_Name,
          codec.align(TestB_B_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestB_B_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestB_B_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TestBStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestBStub.prototype = Object.create(bindings.StubBase.prototype);
  TestBStub.prototype.b = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.b && bindings.StubBindings(this).delegate.b();
  }

  TestBStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TestBStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestB_B_Name:
      var params = reader.decodeStruct(TestB_B_Params);
      return this.b().then(function(response) {
        var responseParams =
            new TestB_B_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestB_B_Name,
            codec.align(TestB_B_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestB_B_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestBRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestB_B_Name:
        if (message.expectsResponse())
          paramsClass = TestB_B_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestBResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTestB_B_Name:
        if (message.isResponse())
          paramsClass = TestB_B_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestB = {
    name: 'shell.TestB',
    proxyClass: TestBProxy,
    stubClass: TestBStub,
    validateRequest: validateTestBRequest,
    validateResponse: validateTestBResponse,
  };
  TestBStub.prototype.validator = validateTestBRequest;
  TestBProxy.prototype.validator = validateTestBResponse;

  var kTestC_C_Name = 0;

  function TestCProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TestCProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TestCProxy.prototype.c = function() {
    var params = new TestC_C_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kTestC_C_Name,
          codec.align(TestC_C_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TestC_C_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TestC_C_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TestCStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TestCStub.prototype = Object.create(bindings.StubBase.prototype);
  TestCStub.prototype.c = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.c && bindings.StubBindings(this).delegate.c();
  }

  TestCStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TestCStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestC_C_Name:
      var params = reader.decodeStruct(TestC_C_Params);
      return this.c().then(function(response) {
        var responseParams =
            new TestC_C_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kTestC_C_Name,
            codec.align(TestC_C_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TestC_C_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTestCRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestC_C_Name:
        if (message.expectsResponse())
          paramsClass = TestC_C_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestCResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTestC_C_Name:
        if (message.isResponse())
          paramsClass = TestC_C_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TestC = {
    name: 'shell.TestC',
    proxyClass: TestCProxy,
    stubClass: TestCStub,
    validateRequest: validateTestCRequest,
    validateResponse: validateTestCResponse,
  };
  TestCStub.prototype.validator = validateTestCRequest;
  TestCProxy.prototype.validator = validateTestCResponse;


  var exports = {};
  exports.TestService = TestService;
  exports.TestA = TestA;
  exports.TestB = TestB;
  exports.TestC = TestC;


  return exports;
});
