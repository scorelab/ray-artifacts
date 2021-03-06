// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/public/interfaces/bindings/tests/versioning_test_client.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var Department = {};
  Department.SALES = 0;
  Department.DEV = Department.SALES + 1;

  function Employee(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Employee.prototype.initDefaults_ = function() {
    this.employee_id = 0;
    this.name = null;
    this.department = 0;
  };
  Employee.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Employee.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Employee.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Employee.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Employee.encodedSize = codec.kStructHeaderSize + 24;

  Employee.decode = function(decoder) {
    var packed;
    var val = new Employee();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.employee_id = decoder.decodeStruct(codec.Uint64);
    val.name = decoder.decodeStruct(codec.String);
    val.department = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Employee.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Employee.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.employee_id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.Int32, val.department);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function HumanResourceDatabase_AddEmployee_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_AddEmployee_Params.prototype.initDefaults_ = function() {
    this.employee = null;
  };
  HumanResourceDatabase_AddEmployee_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_AddEmployee_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_AddEmployee_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HumanResourceDatabase_AddEmployee_Params.employee
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Employee, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HumanResourceDatabase_AddEmployee_Params.encodedSize = codec.kStructHeaderSize + 8;

  HumanResourceDatabase_AddEmployee_Params.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_AddEmployee_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.employee = decoder.decodeStructPointer(Employee);
    return val;
  };

  HumanResourceDatabase_AddEmployee_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_AddEmployee_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Employee, val.employee);
  };

  function HumanResourceDatabase_AddEmployee_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_AddEmployee_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  HumanResourceDatabase_AddEmployee_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_AddEmployee_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_AddEmployee_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  HumanResourceDatabase_AddEmployee_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HumanResourceDatabase_AddEmployee_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_AddEmployee_ResponseParams();
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

  HumanResourceDatabase_AddEmployee_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_AddEmployee_ResponseParams.encodedSize);
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

  function HumanResourceDatabase_QueryEmployee_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_QueryEmployee_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.retrieve_finger_print = false;
  };
  HumanResourceDatabase_QueryEmployee_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_QueryEmployee_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_QueryEmployee_Params.encodedSize, 1);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  HumanResourceDatabase_QueryEmployee_Params.encodedSize = codec.kStructHeaderSize + 16;

  HumanResourceDatabase_QueryEmployee_Params.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_QueryEmployee_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    val.retrieve_finger_print = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HumanResourceDatabase_QueryEmployee_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_QueryEmployee_Params.encodedSize);
    encoder.writeUint32(1);
    encoder.encodeStruct(codec.Uint64, val.id);
    encoder.encodeStruct(codec.Uint8, val.retrieve_finger_print);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function HumanResourceDatabase_QueryEmployee_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_QueryEmployee_ResponseParams.prototype.initDefaults_ = function() {
    this.employee = null;
    this.finger_print = null;
  };
  HumanResourceDatabase_QueryEmployee_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_QueryEmployee_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_QueryEmployee_ResponseParams.encodedSize, 1);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HumanResourceDatabase_QueryEmployee_ResponseParams.employee
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Employee, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HumanResourceDatabase_QueryEmployee_ResponseParams.finger_print
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HumanResourceDatabase_QueryEmployee_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  HumanResourceDatabase_QueryEmployee_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_QueryEmployee_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.employee = decoder.decodeStructPointer(Employee);
    val.finger_print = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  HumanResourceDatabase_QueryEmployee_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_QueryEmployee_ResponseParams.encodedSize);
    encoder.writeUint32(1);
    encoder.encodeStructPointer(Employee, val.employee);
    encoder.encodeArrayPointer(codec.Uint8, val.finger_print);
  };

  function HumanResourceDatabase_AttachFingerPrint_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_AttachFingerPrint_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.finger_print = null;
  };
  HumanResourceDatabase_AttachFingerPrint_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_AttachFingerPrint_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_AttachFingerPrint_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate HumanResourceDatabase_AttachFingerPrint_Params.finger_print
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HumanResourceDatabase_AttachFingerPrint_Params.encodedSize = codec.kStructHeaderSize + 16;

  HumanResourceDatabase_AttachFingerPrint_Params.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_AttachFingerPrint_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    val.finger_print = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  HumanResourceDatabase_AttachFingerPrint_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_AttachFingerPrint_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
    encoder.encodeArrayPointer(codec.Uint8, val.finger_print);
  };

  function HumanResourceDatabase_AttachFingerPrint_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_AttachFingerPrint_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  HumanResourceDatabase_AttachFingerPrint_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_AttachFingerPrint_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_AttachFingerPrint_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  HumanResourceDatabase_AttachFingerPrint_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HumanResourceDatabase_AttachFingerPrint_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_AttachFingerPrint_ResponseParams();
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

  HumanResourceDatabase_AttachFingerPrint_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_AttachFingerPrint_ResponseParams.encodedSize);
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

  function HumanResourceDatabase_ListEmployeeIds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_ListEmployeeIds_Params.prototype.initDefaults_ = function() {
  };
  HumanResourceDatabase_ListEmployeeIds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_ListEmployeeIds_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_ListEmployeeIds_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HumanResourceDatabase_ListEmployeeIds_Params.encodedSize = codec.kStructHeaderSize + 0;

  HumanResourceDatabase_ListEmployeeIds_Params.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_ListEmployeeIds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  HumanResourceDatabase_ListEmployeeIds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_ListEmployeeIds_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function HumanResourceDatabase_ListEmployeeIds_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HumanResourceDatabase_ListEmployeeIds_ResponseParams.prototype.initDefaults_ = function() {
    this.ids = null;
  };
  HumanResourceDatabase_ListEmployeeIds_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HumanResourceDatabase_ListEmployeeIds_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HumanResourceDatabase_ListEmployeeIds_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HumanResourceDatabase_ListEmployeeIds_ResponseParams.ids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.Uint64, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HumanResourceDatabase_ListEmployeeIds_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HumanResourceDatabase_ListEmployeeIds_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HumanResourceDatabase_ListEmployeeIds_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ids = decoder.decodeArrayPointer(codec.Uint64);
    return val;
  };

  HumanResourceDatabase_ListEmployeeIds_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HumanResourceDatabase_ListEmployeeIds_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint64, val.ids);
  };

  var kHumanResourceDatabase_AddEmployee_Name = 0;
  var kHumanResourceDatabase_QueryEmployee_Name = 1;
  var kHumanResourceDatabase_AttachFingerPrint_Name = 2;
  var kHumanResourceDatabase_ListEmployeeIds_Name = 3;

  function HumanResourceDatabaseProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  HumanResourceDatabaseProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  HumanResourceDatabaseProxy.prototype.addEmployee = function(employee) {
    var params = new HumanResourceDatabase_AddEmployee_Params();
    params.employee = employee;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kHumanResourceDatabase_AddEmployee_Name,
          codec.align(HumanResourceDatabase_AddEmployee_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HumanResourceDatabase_AddEmployee_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HumanResourceDatabase_AddEmployee_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HumanResourceDatabaseProxy.prototype.queryEmployee = function(id, retrieve_finger_print) {
    var params = new HumanResourceDatabase_QueryEmployee_Params();
    params.id = id;
    params.retrieve_finger_print = retrieve_finger_print;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kHumanResourceDatabase_QueryEmployee_Name,
          codec.align(HumanResourceDatabase_QueryEmployee_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HumanResourceDatabase_QueryEmployee_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HumanResourceDatabase_QueryEmployee_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HumanResourceDatabaseProxy.prototype.attachFingerPrint = function(id, finger_print) {
    var params = new HumanResourceDatabase_AttachFingerPrint_Params();
    params.id = id;
    params.finger_print = finger_print;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kHumanResourceDatabase_AttachFingerPrint_Name,
          codec.align(HumanResourceDatabase_AttachFingerPrint_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HumanResourceDatabase_AttachFingerPrint_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HumanResourceDatabase_AttachFingerPrint_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  HumanResourceDatabaseProxy.prototype.listEmployeeIds = function() {
    var params = new HumanResourceDatabase_ListEmployeeIds_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kHumanResourceDatabase_ListEmployeeIds_Name,
          codec.align(HumanResourceDatabase_ListEmployeeIds_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HumanResourceDatabase_ListEmployeeIds_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HumanResourceDatabase_ListEmployeeIds_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HumanResourceDatabaseStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  HumanResourceDatabaseStub.prototype = Object.create(bindings.StubBase.prototype);
  HumanResourceDatabaseStub.prototype.addEmployee = function(employee) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addEmployee && bindings.StubBindings(this).delegate.addEmployee(employee);
  }
  HumanResourceDatabaseStub.prototype.queryEmployee = function(id, retrieve_finger_print) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.queryEmployee && bindings.StubBindings(this).delegate.queryEmployee(id, retrieve_finger_print);
  }
  HumanResourceDatabaseStub.prototype.attachFingerPrint = function(id, finger_print) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.attachFingerPrint && bindings.StubBindings(this).delegate.attachFingerPrint(id, finger_print);
  }
  HumanResourceDatabaseStub.prototype.listEmployeeIds = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.listEmployeeIds && bindings.StubBindings(this).delegate.listEmployeeIds();
  }

  HumanResourceDatabaseStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HumanResourceDatabaseStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHumanResourceDatabase_AddEmployee_Name:
      var params = reader.decodeStruct(HumanResourceDatabase_AddEmployee_Params);
      return this.addEmployee(params.employee).then(function(response) {
        var responseParams =
            new HumanResourceDatabase_AddEmployee_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kHumanResourceDatabase_AddEmployee_Name,
            codec.align(HumanResourceDatabase_AddEmployee_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HumanResourceDatabase_AddEmployee_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kHumanResourceDatabase_QueryEmployee_Name:
      var params = reader.decodeStruct(HumanResourceDatabase_QueryEmployee_Params);
      return this.queryEmployee(params.id, params.retrieve_finger_print).then(function(response) {
        var responseParams =
            new HumanResourceDatabase_QueryEmployee_ResponseParams();
        responseParams.employee = response.employee;
        responseParams.finger_print = response.finger_print;
        var builder = new codec.MessageWithRequestIDBuilder(
            kHumanResourceDatabase_QueryEmployee_Name,
            codec.align(HumanResourceDatabase_QueryEmployee_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HumanResourceDatabase_QueryEmployee_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kHumanResourceDatabase_AttachFingerPrint_Name:
      var params = reader.decodeStruct(HumanResourceDatabase_AttachFingerPrint_Params);
      return this.attachFingerPrint(params.id, params.finger_print).then(function(response) {
        var responseParams =
            new HumanResourceDatabase_AttachFingerPrint_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kHumanResourceDatabase_AttachFingerPrint_Name,
            codec.align(HumanResourceDatabase_AttachFingerPrint_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HumanResourceDatabase_AttachFingerPrint_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kHumanResourceDatabase_ListEmployeeIds_Name:
      var params = reader.decodeStruct(HumanResourceDatabase_ListEmployeeIds_Params);
      return this.listEmployeeIds().then(function(response) {
        var responseParams =
            new HumanResourceDatabase_ListEmployeeIds_ResponseParams();
        responseParams.ids = response.ids;
        var builder = new codec.MessageWithRequestIDBuilder(
            kHumanResourceDatabase_ListEmployeeIds_Name,
            codec.align(HumanResourceDatabase_ListEmployeeIds_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HumanResourceDatabase_ListEmployeeIds_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateHumanResourceDatabaseRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHumanResourceDatabase_AddEmployee_Name:
        if (message.expectsResponse())
          paramsClass = HumanResourceDatabase_AddEmployee_Params;
      break;
      case kHumanResourceDatabase_QueryEmployee_Name:
        if (message.expectsResponse())
          paramsClass = HumanResourceDatabase_QueryEmployee_Params;
      break;
      case kHumanResourceDatabase_AttachFingerPrint_Name:
        if (message.expectsResponse())
          paramsClass = HumanResourceDatabase_AttachFingerPrint_Params;
      break;
      case kHumanResourceDatabase_ListEmployeeIds_Name:
        if (message.expectsResponse())
          paramsClass = HumanResourceDatabase_ListEmployeeIds_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHumanResourceDatabaseResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHumanResourceDatabase_AddEmployee_Name:
        if (message.isResponse())
          paramsClass = HumanResourceDatabase_AddEmployee_ResponseParams;
        break;
      case kHumanResourceDatabase_QueryEmployee_Name:
        if (message.isResponse())
          paramsClass = HumanResourceDatabase_QueryEmployee_ResponseParams;
        break;
      case kHumanResourceDatabase_AttachFingerPrint_Name:
        if (message.isResponse())
          paramsClass = HumanResourceDatabase_AttachFingerPrint_ResponseParams;
        break;
      case kHumanResourceDatabase_ListEmployeeIds_Name:
        if (message.isResponse())
          paramsClass = HumanResourceDatabase_ListEmployeeIds_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HumanResourceDatabase = {
    name: 'mojo::test::versioning::HumanResourceDatabase',
    proxyClass: HumanResourceDatabaseProxy,
    stubClass: HumanResourceDatabaseStub,
    validateRequest: validateHumanResourceDatabaseRequest,
    validateResponse: validateHumanResourceDatabaseResponse,
  };
  HumanResourceDatabaseStub.prototype.validator = validateHumanResourceDatabaseRequest;
  HumanResourceDatabaseProxy.prototype.validator = validateHumanResourceDatabaseResponse;


  var exports = {};
  exports.Department = Department;
  exports.Employee = Employee;
  exports.HumanResourceDatabase = HumanResourceDatabase;


  return exports;
});
