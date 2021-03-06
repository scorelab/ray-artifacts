// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/navigation/interfaces/navigation.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/network/url_request.mojom",
], function(bindings, codec, connection, core, validator, url_request$) {
  var Target = {};
  Target.DEFAULT = 0;
  Target.SOURCE_NODE = Target.DEFAULT + 1;
  Target.NEW_NODE = Target.SOURCE_NODE + 1;

  function NavigatorHost_RequestNavigate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NavigatorHost_RequestNavigate_Params.prototype.initDefaults_ = function() {
    this.target = 0;
    this.request = null;
  };
  NavigatorHost_RequestNavigate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NavigatorHost_RequestNavigate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NavigatorHost_RequestNavigate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate NavigatorHost_RequestNavigate_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url_request$.URLRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NavigatorHost_RequestNavigate_Params.encodedSize = codec.kStructHeaderSize + 16;

  NavigatorHost_RequestNavigate_Params.decode = function(decoder) {
    var packed;
    var val = new NavigatorHost_RequestNavigate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.request = decoder.decodeStructPointer(url_request$.URLRequest);
    return val;
  };

  NavigatorHost_RequestNavigate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NavigatorHost_RequestNavigate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.target);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url_request$.URLRequest, val.request);
  };

  function NavigatorHost_RequestNavigateHistory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NavigatorHost_RequestNavigateHistory_Params.prototype.initDefaults_ = function() {
    this.delta = 0;
  };
  NavigatorHost_RequestNavigateHistory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NavigatorHost_RequestNavigateHistory_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NavigatorHost_RequestNavigateHistory_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NavigatorHost_RequestNavigateHistory_Params.encodedSize = codec.kStructHeaderSize + 8;

  NavigatorHost_RequestNavigateHistory_Params.decode = function(decoder) {
    var packed;
    var val = new NavigatorHost_RequestNavigateHistory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.delta = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NavigatorHost_RequestNavigateHistory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NavigatorHost_RequestNavigateHistory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.delta);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function NavigatorHost_DidNavigateLocally_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NavigatorHost_DidNavigateLocally_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  NavigatorHost_DidNavigateLocally_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NavigatorHost_DidNavigateLocally_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NavigatorHost_DidNavigateLocally_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate NavigatorHost_DidNavigateLocally_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NavigatorHost_DidNavigateLocally_Params.encodedSize = codec.kStructHeaderSize + 8;

  NavigatorHost_DidNavigateLocally_Params.decode = function(decoder) {
    var packed;
    var val = new NavigatorHost_DidNavigateLocally_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  NavigatorHost_DidNavigateLocally_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NavigatorHost_DidNavigateLocally_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };

  var kNavigatorHost_RequestNavigate_Name = 0;
  var kNavigatorHost_RequestNavigateHistory_Name = 1;
  var kNavigatorHost_DidNavigateLocally_Name = 2;

  function NavigatorHostProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  NavigatorHostProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  NavigatorHostProxy.prototype.requestNavigate = function(target, request) {
    var params = new NavigatorHost_RequestNavigate_Params();
    params.target = target;
    params.request = request;
    var builder = new codec.MessageBuilder(
        kNavigatorHost_RequestNavigate_Name,
        codec.align(NavigatorHost_RequestNavigate_Params.encodedSize));
    builder.encodeStruct(NavigatorHost_RequestNavigate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NavigatorHostProxy.prototype.requestNavigateHistory = function(delta) {
    var params = new NavigatorHost_RequestNavigateHistory_Params();
    params.delta = delta;
    var builder = new codec.MessageBuilder(
        kNavigatorHost_RequestNavigateHistory_Name,
        codec.align(NavigatorHost_RequestNavigateHistory_Params.encodedSize));
    builder.encodeStruct(NavigatorHost_RequestNavigateHistory_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NavigatorHostProxy.prototype.didNavigateLocally = function(url) {
    var params = new NavigatorHost_DidNavigateLocally_Params();
    params.url = url;
    var builder = new codec.MessageBuilder(
        kNavigatorHost_DidNavigateLocally_Name,
        codec.align(NavigatorHost_DidNavigateLocally_Params.encodedSize));
    builder.encodeStruct(NavigatorHost_DidNavigateLocally_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NavigatorHostStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  NavigatorHostStub.prototype = Object.create(bindings.StubBase.prototype);
  NavigatorHostStub.prototype.requestNavigate = function(target, request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestNavigate && bindings.StubBindings(this).delegate.requestNavigate(target, request);
  }
  NavigatorHostStub.prototype.requestNavigateHistory = function(delta) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestNavigateHistory && bindings.StubBindings(this).delegate.requestNavigateHistory(delta);
  }
  NavigatorHostStub.prototype.didNavigateLocally = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didNavigateLocally && bindings.StubBindings(this).delegate.didNavigateLocally(url);
  }

  NavigatorHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNavigatorHost_RequestNavigate_Name:
      var params = reader.decodeStruct(NavigatorHost_RequestNavigate_Params);
      this.requestNavigate(params.target, params.request);
      return true;
    case kNavigatorHost_RequestNavigateHistory_Name:
      var params = reader.decodeStruct(NavigatorHost_RequestNavigateHistory_Params);
      this.requestNavigateHistory(params.delta);
      return true;
    case kNavigatorHost_DidNavigateLocally_Name:
      var params = reader.decodeStruct(NavigatorHost_DidNavigateLocally_Params);
      this.didNavigateLocally(params.url);
      return true;
    default:
      return false;
    }
  };

  NavigatorHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateNavigatorHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNavigatorHost_RequestNavigate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NavigatorHost_RequestNavigate_Params;
      break;
      case kNavigatorHost_RequestNavigateHistory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NavigatorHost_RequestNavigateHistory_Params;
      break;
      case kNavigatorHost_DidNavigateLocally_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NavigatorHost_DidNavigateLocally_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNavigatorHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NavigatorHost = {
    name: 'mojo::NavigatorHost',
    proxyClass: NavigatorHostProxy,
    stubClass: NavigatorHostStub,
    validateRequest: validateNavigatorHostRequest,
    validateResponse: null,
  };
  NavigatorHostStub.prototype.validator = validateNavigatorHostRequest;
  NavigatorHostProxy.prototype.validator = null;


  var exports = {};
  exports.Target = Target;
  exports.NavigatorHost = NavigatorHost;


  return exports;
});
