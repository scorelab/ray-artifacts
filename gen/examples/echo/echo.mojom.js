// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("examples/echo/echo.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Echo_EchoString_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Echo_EchoString_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  Echo_EchoString_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Echo_EchoString_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Echo_EchoString_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Echo_EchoString_Params.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Echo_EchoString_Params.encodedSize = codec.kStructHeaderSize + 8;

  Echo_EchoString_Params.decode = function(decoder) {
    var packed;
    var val = new Echo_EchoString_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  Echo_EchoString_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Echo_EchoString_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.value);
  };

  function Echo_EchoString_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Echo_EchoString_ResponseParams.prototype.initDefaults_ = function() {
    this.value = null;
  };
  Echo_EchoString_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Echo_EchoString_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Echo_EchoString_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Echo_EchoString_ResponseParams.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Echo_EchoString_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Echo_EchoString_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Echo_EchoString_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  Echo_EchoString_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Echo_EchoString_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.value);
  };

  var kEcho_EchoString_Name = 0;

  function EchoProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  EchoProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  EchoProxy.prototype.echoString = function(value) {
    var params = new Echo_EchoString_Params();
    params.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kEcho_EchoString_Name,
          codec.align(Echo_EchoString_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Echo_EchoString_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Echo_EchoString_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function EchoStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  EchoStub.prototype = Object.create(bindings.StubBase.prototype);
  EchoStub.prototype.echoString = function(value) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.echoString && bindings.StubBindings(this).delegate.echoString(value);
  }

  EchoStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  EchoStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEcho_EchoString_Name:
      var params = reader.decodeStruct(Echo_EchoString_Params);
      return this.echoString(params.value).then(function(response) {
        var responseParams =
            new Echo_EchoString_ResponseParams();
        responseParams.value = response.value;
        var builder = new codec.MessageWithRequestIDBuilder(
            kEcho_EchoString_Name,
            codec.align(Echo_EchoString_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Echo_EchoString_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateEchoRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEcho_EchoString_Name:
        if (message.expectsResponse())
          paramsClass = Echo_EchoString_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEchoResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kEcho_EchoString_Name:
        if (message.isResponse())
          paramsClass = Echo_EchoString_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Echo = {
    name: 'mojo::examples::Echo',
    proxyClass: EchoProxy,
    stubClass: EchoStub,
    validateRequest: validateEchoRequest,
    validateResponse: validateEchoResponse,
  };
  EchoStub.prototype.validator = validateEchoRequest;
  EchoProxy.prototype.validator = validateEchoResponse;


  var exports = {};
  exports.Echo = Echo;


  return exports;
});
