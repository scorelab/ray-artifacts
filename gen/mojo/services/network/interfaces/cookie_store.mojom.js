// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/interfaces/cookie_store.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function CookieStore_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_Get_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  CookieStore_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CookieStore_Get_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CookieStore_Get_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CookieStore_Get_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieStore_Get_Params.encodedSize = codec.kStructHeaderSize + 8;

  CookieStore_Get_Params.decode = function(decoder) {
    var packed;
    var val = new CookieStore_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  CookieStore_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };

  function CookieStore_Get_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_Get_ResponseParams.prototype.initDefaults_ = function() {
    this.cookies = null;
  };
  CookieStore_Get_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CookieStore_Get_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CookieStore_Get_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CookieStore_Get_ResponseParams.cookies
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieStore_Get_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieStore_Get_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieStore_Get_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookies = decoder.decodeStruct(codec.String);
    return val;
  };

  CookieStore_Get_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_Get_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.cookies);
  };

  function CookieStore_Set_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_Set_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.cookie = null;
  };
  CookieStore_Set_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CookieStore_Set_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CookieStore_Set_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CookieStore_Set_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CookieStore_Set_Params.cookie
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CookieStore_Set_Params.encodedSize = codec.kStructHeaderSize + 16;

  CookieStore_Set_Params.decode = function(decoder) {
    var packed;
    var val = new CookieStore_Set_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.cookie = decoder.decodeStruct(codec.String);
    return val;
  };

  CookieStore_Set_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_Set_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.String, val.cookie);
  };

  function CookieStore_Set_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CookieStore_Set_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  CookieStore_Set_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CookieStore_Set_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CookieStore_Set_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CookieStore_Set_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CookieStore_Set_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CookieStore_Set_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CookieStore_Set_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CookieStore_Set_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kCookieStore_Get_Name = 0;
  var kCookieStore_Set_Name = 1;

  function CookieStoreProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  CookieStoreProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  CookieStoreProxy.prototype.get = function(url) {
    var params = new CookieStore_Get_Params();
    params.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCookieStore_Get_Name,
          codec.align(CookieStore_Get_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieStore_Get_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieStore_Get_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CookieStoreProxy.prototype.set = function(url, cookie) {
    var params = new CookieStore_Set_Params();
    params.url = url;
    params.cookie = cookie;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCookieStore_Set_Name,
          codec.align(CookieStore_Set_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CookieStore_Set_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CookieStore_Set_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CookieStoreStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  CookieStoreStub.prototype = Object.create(bindings.StubBase.prototype);
  CookieStoreStub.prototype.get = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.get && bindings.StubBindings(this).delegate.get(url);
  }
  CookieStoreStub.prototype.set = function(url, cookie) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.set && bindings.StubBindings(this).delegate.set(url, cookie);
  }

  CookieStoreStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CookieStoreStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCookieStore_Get_Name:
      var params = reader.decodeStruct(CookieStore_Get_Params);
      return this.get(params.url).then(function(response) {
        var responseParams =
            new CookieStore_Get_ResponseParams();
        responseParams.cookies = response.cookies;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCookieStore_Get_Name,
            codec.align(CookieStore_Get_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieStore_Get_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kCookieStore_Set_Name:
      var params = reader.decodeStruct(CookieStore_Set_Params);
      return this.set(params.url, params.cookie).then(function(response) {
        var responseParams =
            new CookieStore_Set_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCookieStore_Set_Name,
            codec.align(CookieStore_Set_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CookieStore_Set_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateCookieStoreRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCookieStore_Get_Name:
        if (message.expectsResponse())
          paramsClass = CookieStore_Get_Params;
      break;
      case kCookieStore_Set_Name:
        if (message.expectsResponse())
          paramsClass = CookieStore_Set_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCookieStoreResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCookieStore_Get_Name:
        if (message.isResponse())
          paramsClass = CookieStore_Get_ResponseParams;
        break;
      case kCookieStore_Set_Name:
        if (message.isResponse())
          paramsClass = CookieStore_Set_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CookieStore = {
    name: null,
    proxyClass: CookieStoreProxy,
    stubClass: CookieStoreStub,
    validateRequest: validateCookieStoreRequest,
    validateResponse: validateCookieStoreResponse,
  };
  CookieStoreStub.prototype.validator = validateCookieStoreRequest;
  CookieStoreProxy.prototype.validator = validateCookieStoreResponse;


  var exports = {};
  exports.CookieStore = CookieStore;


  return exports;
});
