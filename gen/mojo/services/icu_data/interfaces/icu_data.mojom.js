// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/icu_data/interfaces/icu_data.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ICUData_Map_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ICUData_Map_Params.prototype.initDefaults_ = function() {
    this.sha1hash = null;
  };
  ICUData_Map_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ICUData_Map_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ICUData_Map_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ICUData_Map_Params.sha1hash
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ICUData_Map_Params.encodedSize = codec.kStructHeaderSize + 8;

  ICUData_Map_Params.decode = function(decoder) {
    var packed;
    var val = new ICUData_Map_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sha1hash = decoder.decodeStruct(codec.String);
    return val;
  };

  ICUData_Map_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ICUData_Map_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sha1hash);
  };

  function ICUData_Map_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ICUData_Map_ResponseParams.prototype.initDefaults_ = function() {
    this.icu_data = null;
  };
  ICUData_Map_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ICUData_Map_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ICUData_Map_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ICUData_Map_ResponseParams.icu_data
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ICUData_Map_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ICUData_Map_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ICUData_Map_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.icu_data = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ICUData_Map_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ICUData_Map_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableHandle, val.icu_data);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kICUData_Map_Name = 0;

  function ICUDataProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ICUDataProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ICUDataProxy.prototype.map = function(sha1hash) {
    var params = new ICUData_Map_Params();
    params.sha1hash = sha1hash;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kICUData_Map_Name,
          codec.align(ICUData_Map_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ICUData_Map_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ICUData_Map_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ICUDataStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ICUDataStub.prototype = Object.create(bindings.StubBase.prototype);
  ICUDataStub.prototype.map = function(sha1hash) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.map && bindings.StubBindings(this).delegate.map(sha1hash);
  }

  ICUDataStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ICUDataStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kICUData_Map_Name:
      var params = reader.decodeStruct(ICUData_Map_Params);
      return this.map(params.sha1hash).then(function(response) {
        var responseParams =
            new ICUData_Map_ResponseParams();
        responseParams.icu_data = response.icu_data;
        var builder = new codec.MessageWithRequestIDBuilder(
            kICUData_Map_Name,
            codec.align(ICUData_Map_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ICUData_Map_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateICUDataRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kICUData_Map_Name:
        if (message.expectsResponse())
          paramsClass = ICUData_Map_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateICUDataResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kICUData_Map_Name:
        if (message.isResponse())
          paramsClass = ICUData_Map_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ICUData = {
    name: 'icu_data::ICUData',
    proxyClass: ICUDataProxy,
    stubClass: ICUDataStub,
    validateRequest: validateICUDataRequest,
    validateResponse: validateICUDataResponse,
  };
  ICUDataStub.prototype.validator = validateICUDataRequest;
  ICUDataProxy.prototype.validator = validateICUDataResponse;


  var exports = {};
  exports.ICUData = ICUData;


  return exports;
});
