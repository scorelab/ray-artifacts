// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/sensors/interfaces/sensors.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var SensorType = {};
  SensorType.ACCELEROMETER = 0;
  SensorType.AMBIENT_TEMPERATURE = SensorType.ACCELEROMETER + 1;
  SensorType.GAME_ROTATION_VECTOR = SensorType.AMBIENT_TEMPERATURE + 1;
  SensorType.GEOMAGNETIC_ROTATION_VECTOR = SensorType.GAME_ROTATION_VECTOR + 1;
  SensorType.GRAVITY = SensorType.GEOMAGNETIC_ROTATION_VECTOR + 1;
  SensorType.GYROSCOPE = SensorType.GRAVITY + 1;
  SensorType.GYROSCOPE_UNCALIBRATED = SensorType.GYROSCOPE + 1;
  SensorType.HEART_RATE = SensorType.GYROSCOPE_UNCALIBRATED + 1;
  SensorType.LIGHT = SensorType.HEART_RATE + 1;
  SensorType.LINEAR_ACCELERATION = SensorType.LIGHT + 1;
  SensorType.MAGNETIC_FIELD = SensorType.LINEAR_ACCELERATION + 1;
  SensorType.MAGNETIC_FIELD_UNCALIBRATED = SensorType.MAGNETIC_FIELD + 1;
  SensorType.PRESSURE = SensorType.MAGNETIC_FIELD_UNCALIBRATED + 1;
  SensorType.PROXIMITY = SensorType.PRESSURE + 1;
  SensorType.RELATIVE_HUMIDITY = SensorType.PROXIMITY + 1;
  SensorType.ROTATION_VECTOR = SensorType.RELATIVE_HUMIDITY + 1;
  SensorType.SIGNIFICANT_MOTION = SensorType.ROTATION_VECTOR + 1;
  SensorType.STEP_COUNTER = SensorType.SIGNIFICANT_MOTION + 1;
  SensorType.STEP_DETECTOR = SensorType.STEP_COUNTER + 1;

  function SensorData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SensorData.prototype.initDefaults_ = function() {
    this.accuracy = 0;
    this.time_stamp = 0;
    this.values = null;
  };
  SensorData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SensorData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SensorData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate SensorData.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, codec.Float, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SensorData.encodedSize = codec.kStructHeaderSize + 24;

  SensorData.decode = function(decoder) {
    var packed;
    var val = new SensorData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accuracy = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.time_stamp = decoder.decodeStruct(codec.Int64);
    val.values = decoder.decodeArrayPointer(codec.Float);
    return val;
  };

  SensorData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SensorData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.accuracy);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.time_stamp);
    encoder.encodeArrayPointer(codec.Float, val.values);
  };

  function SensorListener_OnAccuracyChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SensorListener_OnAccuracyChanged_Params.prototype.initDefaults_ = function() {
    this.accuracy = 0;
  };
  SensorListener_OnAccuracyChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SensorListener_OnAccuracyChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SensorListener_OnAccuracyChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SensorListener_OnAccuracyChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  SensorListener_OnAccuracyChanged_Params.decode = function(decoder) {
    var packed;
    var val = new SensorListener_OnAccuracyChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accuracy = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SensorListener_OnAccuracyChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SensorListener_OnAccuracyChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.accuracy);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function SensorListener_OnSensorChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SensorListener_OnSensorChanged_Params.prototype.initDefaults_ = function() {
    this.data = null;
  };
  SensorListener_OnSensorChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SensorListener_OnSensorChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SensorListener_OnSensorChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SensorListener_OnSensorChanged_Params.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SensorData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SensorListener_OnSensorChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  SensorListener_OnSensorChanged_Params.decode = function(decoder) {
    var packed;
    var val = new SensorListener_OnSensorChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStructPointer(SensorData);
    return val;
  };

  SensorListener_OnSensorChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SensorListener_OnSensorChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SensorData, val.data);
  };

  function SensorService_AddListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SensorService_AddListener_Params.prototype.initDefaults_ = function() {
    this.type = 0;
    this.listener = null;
  };
  SensorService_AddListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SensorService_AddListener_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SensorService_AddListener_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate SensorService_AddListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SensorService_AddListener_Params.encodedSize = codec.kStructHeaderSize + 16;

  SensorService_AddListener_Params.decode = function(decoder) {
    var packed;
    var val = new SensorService_AddListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.listener = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SensorService_AddListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SensorService_AddListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Interface, val.listener);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kSensorListener_OnAccuracyChanged_Name = 0;
  var kSensorListener_OnSensorChanged_Name = 1;

  function SensorListenerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SensorListenerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SensorListenerProxy.prototype.onAccuracyChanged = function(accuracy) {
    var params = new SensorListener_OnAccuracyChanged_Params();
    params.accuracy = accuracy;
    var builder = new codec.MessageBuilder(
        kSensorListener_OnAccuracyChanged_Name,
        codec.align(SensorListener_OnAccuracyChanged_Params.encodedSize));
    builder.encodeStruct(SensorListener_OnAccuracyChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SensorListenerProxy.prototype.onSensorChanged = function(data) {
    var params = new SensorListener_OnSensorChanged_Params();
    params.data = data;
    var builder = new codec.MessageBuilder(
        kSensorListener_OnSensorChanged_Name,
        codec.align(SensorListener_OnSensorChanged_Params.encodedSize));
    builder.encodeStruct(SensorListener_OnSensorChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SensorListenerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SensorListenerStub.prototype = Object.create(bindings.StubBase.prototype);
  SensorListenerStub.prototype.onAccuracyChanged = function(accuracy) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onAccuracyChanged && bindings.StubBindings(this).delegate.onAccuracyChanged(accuracy);
  }
  SensorListenerStub.prototype.onSensorChanged = function(data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSensorChanged && bindings.StubBindings(this).delegate.onSensorChanged(data);
  }

  SensorListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSensorListener_OnAccuracyChanged_Name:
      var params = reader.decodeStruct(SensorListener_OnAccuracyChanged_Params);
      this.onAccuracyChanged(params.accuracy);
      return true;
    case kSensorListener_OnSensorChanged_Name:
      var params = reader.decodeStruct(SensorListener_OnSensorChanged_Params);
      this.onSensorChanged(params.data);
      return true;
    default:
      return false;
    }
  };

  SensorListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSensorListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSensorListener_OnAccuracyChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SensorListener_OnAccuracyChanged_Params;
      break;
      case kSensorListener_OnSensorChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SensorListener_OnSensorChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSensorListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SensorListener = {
    name: null,
    proxyClass: SensorListenerProxy,
    stubClass: SensorListenerStub,
    validateRequest: validateSensorListenerRequest,
    validateResponse: null,
  };
  SensorListenerStub.prototype.validator = validateSensorListenerRequest;
  SensorListenerProxy.prototype.validator = null;

  var kSensorService_AddListener_Name = 0;

  function SensorServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SensorServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SensorServiceProxy.prototype.addListener = function(type, listener) {
    var params = new SensorService_AddListener_Params();
    params.type = type;
    params.listener = core.isHandle(listener) ? listener : connection.bindImpl(listener, SensorListener);
    var builder = new codec.MessageBuilder(
        kSensorService_AddListener_Name,
        codec.align(SensorService_AddListener_Params.encodedSize));
    builder.encodeStruct(SensorService_AddListener_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SensorServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SensorServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  SensorServiceStub.prototype.addListener = function(type, listener) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addListener && bindings.StubBindings(this).delegate.addListener(type, connection.bindHandleToProxy(listener, SensorListener));
  }

  SensorServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSensorService_AddListener_Name:
      var params = reader.decodeStruct(SensorService_AddListener_Params);
      this.addListener(params.type, params.listener);
      return true;
    default:
      return false;
    }
  };

  SensorServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSensorServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSensorService_AddListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SensorService_AddListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSensorServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SensorService = {
    name: 'sensors::SensorService',
    proxyClass: SensorServiceProxy,
    stubClass: SensorServiceStub,
    validateRequest: validateSensorServiceRequest,
    validateResponse: null,
  };
  SensorServiceStub.prototype.validator = validateSensorServiceRequest;
  SensorServiceProxy.prototype.validator = null;


  var exports = {};
  exports.SensorType = SensorType;
  exports.SensorData = SensorData;
  exports.SensorListener = SensorListener;
  exports.SensorService = SensorService;


  return exports;
});
