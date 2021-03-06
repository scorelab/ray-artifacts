// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/location/interfaces/location_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/location/interfaces/location.mojom",
], function(bindings, codec, connection, core, validator, location$) {

  function LocationService_GetNextLocation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LocationService_GetNextLocation_Params.prototype.initDefaults_ = function() {
    this.priority = 0;
  };
  LocationService_GetNextLocation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LocationService_GetNextLocation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LocationService_GetNextLocation_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  LocationService_GetNextLocation_Params.encodedSize = codec.kStructHeaderSize + 8;

  LocationService_GetNextLocation_Params.decode = function(decoder) {
    var packed;
    var val = new LocationService_GetNextLocation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.priority = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LocationService_GetNextLocation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LocationService_GetNextLocation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.priority);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function LocationService_GetNextLocation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LocationService_GetNextLocation_ResponseParams.prototype.initDefaults_ = function() {
    this.location = null;
  };
  LocationService_GetNextLocation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LocationService_GetNextLocation_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LocationService_GetNextLocation_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LocationService_GetNextLocation_ResponseParams.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, location$.Location, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LocationService_GetNextLocation_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LocationService_GetNextLocation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LocationService_GetNextLocation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.location = decoder.decodeStructPointer(location$.Location);
    return val;
  };

  LocationService_GetNextLocation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LocationService_GetNextLocation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(location$.Location, val.location);
  };

  var kLocationService_GetNextLocation_Name = 0;

  function LocationServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  LocationServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  LocationServiceProxy.prototype.getNextLocation = function(priority) {
    var params = new LocationService_GetNextLocation_Params();
    params.priority = priority;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLocationService_GetNextLocation_Name,
          codec.align(LocationService_GetNextLocation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LocationService_GetNextLocation_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LocationService_GetNextLocation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LocationServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  LocationServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  LocationServiceStub.prototype.getNextLocation = function(priority) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getNextLocation && bindings.StubBindings(this).delegate.getNextLocation(priority);
  }

  LocationServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  LocationServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLocationService_GetNextLocation_Name:
      var params = reader.decodeStruct(LocationService_GetNextLocation_Params);
      return this.getNextLocation(params.priority).then(function(response) {
        var responseParams =
            new LocationService_GetNextLocation_ResponseParams();
        responseParams.location = response.location;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLocationService_GetNextLocation_Name,
            codec.align(LocationService_GetNextLocation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LocationService_GetNextLocation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateLocationServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLocationService_GetNextLocation_Name:
        if (message.expectsResponse())
          paramsClass = LocationService_GetNextLocation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLocationServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLocationService_GetNextLocation_Name:
        if (message.isResponse())
          paramsClass = LocationService_GetNextLocation_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LocationService = {
    name: 'mojo::LocationService',
    proxyClass: LocationServiceProxy,
    stubClass: LocationServiceStub,
    validateRequest: validateLocationServiceRequest,
    validateResponse: validateLocationServiceResponse,
  };
  LocationService.UpdatePriority = {};
  LocationService.UpdatePriority.PRIORITY_BALANCED_POWER_ACCURACY = 0;
  LocationService.UpdatePriority.PRIORITY_HIGH_ACCURACY = LocationService.UpdatePriority.PRIORITY_BALANCED_POWER_ACCURACY + 1;
  LocationService.UpdatePriority.PRIORITY_LOW_POWER = LocationService.UpdatePriority.PRIORITY_HIGH_ACCURACY + 1;
  LocationService.UpdatePriority.PRIORITY_NO_POWER = LocationService.UpdatePriority.PRIORITY_LOW_POWER + 1;
  LocationServiceStub.prototype.validator = validateLocationServiceRequest;
  LocationServiceProxy.prototype.validator = validateLocationServiceResponse;


  var exports = {};
  exports.LocationService = LocationService;


  return exports;
});
