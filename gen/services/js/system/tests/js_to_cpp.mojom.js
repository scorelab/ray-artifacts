// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/js/system/tests/js_to_cpp.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function EchoArgs(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EchoArgs.prototype.initDefaults_ = function() {
    this.si64 = 0;
    this.si32 = 0;
    this.si16 = 0;
    this.si8 = 0;
    this.ui8 = 0;
    this.ui64 = 0;
    this.ui32 = 0;
    this.ui16 = 0;
    this.float_val = 0;
    this.float_inf = 0;
    this.float_nan = 0;
    this.message_handle = null;
    this.double_val = 0;
    this.double_inf = 0;
    this.double_nan = 0;
    this.name = null;
    this.string_array = null;
    this.data_handle = null;
  };
  EchoArgs.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  EchoArgs.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, EchoArgs.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;












    
    // validate EchoArgs.message_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 44, true)
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate EchoArgs.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EchoArgs.string_array
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 80, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EchoArgs.data_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 88, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EchoArgs.encodedSize = codec.kStructHeaderSize + 96;

  EchoArgs.decode = function(decoder) {
    var packed;
    var val = new EchoArgs();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.si64 = decoder.decodeStruct(codec.Int64);
    val.si32 = decoder.decodeStruct(codec.Int32);
    val.si16 = decoder.decodeStruct(codec.Int16);
    val.si8 = decoder.decodeStruct(codec.Int8);
    val.ui8 = decoder.decodeStruct(codec.Uint8);
    val.ui64 = decoder.decodeStruct(codec.Uint64);
    val.ui32 = decoder.decodeStruct(codec.Uint32);
    val.ui16 = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.float_val = decoder.decodeStruct(codec.Float);
    val.float_inf = decoder.decodeStruct(codec.Float);
    val.float_nan = decoder.decodeStruct(codec.Float);
    val.message_handle = decoder.decodeStruct(codec.NullableHandle);
    val.double_val = decoder.decodeStruct(codec.Double);
    val.double_inf = decoder.decodeStruct(codec.Double);
    val.double_nan = decoder.decodeStruct(codec.Double);
    val.name = decoder.decodeStruct(codec.NullableString);
    val.string_array = decoder.decodeArrayPointer(codec.String);
    val.data_handle = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EchoArgs.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EchoArgs.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.si64);
    encoder.encodeStruct(codec.Int32, val.si32);
    encoder.encodeStruct(codec.Int16, val.si16);
    encoder.encodeStruct(codec.Int8, val.si8);
    encoder.encodeStruct(codec.Uint8, val.ui8);
    encoder.encodeStruct(codec.Uint64, val.ui64);
    encoder.encodeStruct(codec.Uint32, val.ui32);
    encoder.encodeStruct(codec.Uint16, val.ui16);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Float, val.float_val);
    encoder.encodeStruct(codec.Float, val.float_inf);
    encoder.encodeStruct(codec.Float, val.float_nan);
    encoder.encodeStruct(codec.NullableHandle, val.message_handle);
    encoder.encodeStruct(codec.Double, val.double_val);
    encoder.encodeStruct(codec.Double, val.double_inf);
    encoder.encodeStruct(codec.Double, val.double_nan);
    encoder.encodeStruct(codec.NullableString, val.name);
    encoder.encodeArrayPointer(codec.String, val.string_array);
    encoder.encodeStruct(codec.NullableHandle, val.data_handle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function EchoArgsList(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EchoArgsList.prototype.initDefaults_ = function() {
    this.next = null;
    this.item = null;
  };
  EchoArgsList.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  EchoArgsList.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, EchoArgsList.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EchoArgsList.next
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EchoArgsList, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EchoArgsList.item
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, EchoArgs, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EchoArgsList.encodedSize = codec.kStructHeaderSize + 16;

  EchoArgsList.decode = function(decoder) {
    var packed;
    var val = new EchoArgsList();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.next = decoder.decodeStructPointer(EchoArgsList);
    val.item = decoder.decodeStructPointer(EchoArgs);
    return val;
  };

  EchoArgsList.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EchoArgsList.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EchoArgsList, val.next);
    encoder.encodeStructPointer(EchoArgs, val.item);
  };

  function CppSide_StartTest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CppSide_StartTest_Params.prototype.initDefaults_ = function() {
  };
  CppSide_StartTest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CppSide_StartTest_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CppSide_StartTest_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CppSide_StartTest_Params.encodedSize = codec.kStructHeaderSize + 0;

  CppSide_StartTest_Params.decode = function(decoder) {
    var packed;
    var val = new CppSide_StartTest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CppSide_StartTest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CppSide_StartTest_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function CppSide_TestFinished_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CppSide_TestFinished_Params.prototype.initDefaults_ = function() {
  };
  CppSide_TestFinished_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CppSide_TestFinished_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CppSide_TestFinished_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CppSide_TestFinished_Params.encodedSize = codec.kStructHeaderSize + 0;

  CppSide_TestFinished_Params.decode = function(decoder) {
    var packed;
    var val = new CppSide_TestFinished_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CppSide_TestFinished_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CppSide_TestFinished_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function CppSide_PingResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CppSide_PingResponse_Params.prototype.initDefaults_ = function() {
  };
  CppSide_PingResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CppSide_PingResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CppSide_PingResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CppSide_PingResponse_Params.encodedSize = codec.kStructHeaderSize + 0;

  CppSide_PingResponse_Params.decode = function(decoder) {
    var packed;
    var val = new CppSide_PingResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CppSide_PingResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CppSide_PingResponse_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function CppSide_EchoResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CppSide_EchoResponse_Params.prototype.initDefaults_ = function() {
    this.list = null;
  };
  CppSide_EchoResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CppSide_EchoResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CppSide_EchoResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CppSide_EchoResponse_Params.list
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EchoArgsList, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CppSide_EchoResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  CppSide_EchoResponse_Params.decode = function(decoder) {
    var packed;
    var val = new CppSide_EchoResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.list = decoder.decodeStructPointer(EchoArgsList);
    return val;
  };

  CppSide_EchoResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CppSide_EchoResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EchoArgsList, val.list);
  };

  function CppSide_BitFlipResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CppSide_BitFlipResponse_Params.prototype.initDefaults_ = function() {
    this.arg = null;
  };
  CppSide_BitFlipResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CppSide_BitFlipResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CppSide_BitFlipResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CppSide_BitFlipResponse_Params.arg
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EchoArgsList, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CppSide_BitFlipResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  CppSide_BitFlipResponse_Params.decode = function(decoder) {
    var packed;
    var val = new CppSide_BitFlipResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.arg = decoder.decodeStructPointer(EchoArgsList);
    return val;
  };

  CppSide_BitFlipResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CppSide_BitFlipResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EchoArgsList, val.arg);
  };

  function CppSide_BackPointerResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CppSide_BackPointerResponse_Params.prototype.initDefaults_ = function() {
    this.arg = null;
  };
  CppSide_BackPointerResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CppSide_BackPointerResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CppSide_BackPointerResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CppSide_BackPointerResponse_Params.arg
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EchoArgsList, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CppSide_BackPointerResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  CppSide_BackPointerResponse_Params.decode = function(decoder) {
    var packed;
    var val = new CppSide_BackPointerResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.arg = decoder.decodeStructPointer(EchoArgsList);
    return val;
  };

  CppSide_BackPointerResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CppSide_BackPointerResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EchoArgsList, val.arg);
  };

  function JsSide_SetCppSide_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsSide_SetCppSide_Params.prototype.initDefaults_ = function() {
    this.cpp = null;
  };
  JsSide_SetCppSide_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  JsSide_SetCppSide_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, JsSide_SetCppSide_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate JsSide_SetCppSide_Params.cpp
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsSide_SetCppSide_Params.encodedSize = codec.kStructHeaderSize + 8;

  JsSide_SetCppSide_Params.decode = function(decoder) {
    var packed;
    var val = new JsSide_SetCppSide_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cpp = decoder.decodeStruct(codec.Interface);
    return val;
  };

  JsSide_SetCppSide_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsSide_SetCppSide_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.cpp);
  };

  function JsSide_Ping_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsSide_Ping_Params.prototype.initDefaults_ = function() {
  };
  JsSide_Ping_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  JsSide_Ping_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, JsSide_Ping_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsSide_Ping_Params.encodedSize = codec.kStructHeaderSize + 0;

  JsSide_Ping_Params.decode = function(decoder) {
    var packed;
    var val = new JsSide_Ping_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  JsSide_Ping_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsSide_Ping_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function JsSide_Echo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsSide_Echo_Params.prototype.initDefaults_ = function() {
    this.numIterations = 0;
    this.arg = null;
  };
  JsSide_Echo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  JsSide_Echo_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, JsSide_Echo_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate JsSide_Echo_Params.arg
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, EchoArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsSide_Echo_Params.encodedSize = codec.kStructHeaderSize + 16;

  JsSide_Echo_Params.decode = function(decoder) {
    var packed;
    var val = new JsSide_Echo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numIterations = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.arg = decoder.decodeStructPointer(EchoArgs);
    return val;
  };

  JsSide_Echo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsSide_Echo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.numIterations);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(EchoArgs, val.arg);
  };

  function JsSide_BitFlip_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsSide_BitFlip_Params.prototype.initDefaults_ = function() {
    this.arg = null;
  };
  JsSide_BitFlip_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  JsSide_BitFlip_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, JsSide_BitFlip_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate JsSide_BitFlip_Params.arg
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EchoArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsSide_BitFlip_Params.encodedSize = codec.kStructHeaderSize + 8;

  JsSide_BitFlip_Params.decode = function(decoder) {
    var packed;
    var val = new JsSide_BitFlip_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.arg = decoder.decodeStructPointer(EchoArgs);
    return val;
  };

  JsSide_BitFlip_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsSide_BitFlip_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EchoArgs, val.arg);
  };

  function JsSide_BackPointer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JsSide_BackPointer_Params.prototype.initDefaults_ = function() {
    this.arg = null;
  };
  JsSide_BackPointer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  JsSide_BackPointer_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, JsSide_BackPointer_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate JsSide_BackPointer_Params.arg
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EchoArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JsSide_BackPointer_Params.encodedSize = codec.kStructHeaderSize + 8;

  JsSide_BackPointer_Params.decode = function(decoder) {
    var packed;
    var val = new JsSide_BackPointer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.arg = decoder.decodeStructPointer(EchoArgs);
    return val;
  };

  JsSide_BackPointer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JsSide_BackPointer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EchoArgs, val.arg);
  };

  var kCppSide_StartTest_Name = 88888888;
  var kCppSide_TestFinished_Name = 99999999;
  var kCppSide_PingResponse_Name = 100000000;
  var kCppSide_EchoResponse_Name = 100000001;
  var kCppSide_BitFlipResponse_Name = 100000002;
  var kCppSide_BackPointerResponse_Name = 100000003;

  function CppSideProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  CppSideProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  CppSideProxy.prototype.startTest = function() {
    var params = new CppSide_StartTest_Params();
    var builder = new codec.MessageBuilder(
        kCppSide_StartTest_Name,
        codec.align(CppSide_StartTest_Params.encodedSize));
    builder.encodeStruct(CppSide_StartTest_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CppSideProxy.prototype.testFinished = function() {
    var params = new CppSide_TestFinished_Params();
    var builder = new codec.MessageBuilder(
        kCppSide_TestFinished_Name,
        codec.align(CppSide_TestFinished_Params.encodedSize));
    builder.encodeStruct(CppSide_TestFinished_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CppSideProxy.prototype.pingResponse = function() {
    var params = new CppSide_PingResponse_Params();
    var builder = new codec.MessageBuilder(
        kCppSide_PingResponse_Name,
        codec.align(CppSide_PingResponse_Params.encodedSize));
    builder.encodeStruct(CppSide_PingResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CppSideProxy.prototype.echoResponse = function(list) {
    var params = new CppSide_EchoResponse_Params();
    params.list = list;
    var builder = new codec.MessageBuilder(
        kCppSide_EchoResponse_Name,
        codec.align(CppSide_EchoResponse_Params.encodedSize));
    builder.encodeStruct(CppSide_EchoResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CppSideProxy.prototype.bitFlipResponse = function(arg) {
    var params = new CppSide_BitFlipResponse_Params();
    params.arg = arg;
    var builder = new codec.MessageBuilder(
        kCppSide_BitFlipResponse_Name,
        codec.align(CppSide_BitFlipResponse_Params.encodedSize));
    builder.encodeStruct(CppSide_BitFlipResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CppSideProxy.prototype.backPointerResponse = function(arg) {
    var params = new CppSide_BackPointerResponse_Params();
    params.arg = arg;
    var builder = new codec.MessageBuilder(
        kCppSide_BackPointerResponse_Name,
        codec.align(CppSide_BackPointerResponse_Params.encodedSize));
    builder.encodeStruct(CppSide_BackPointerResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CppSideStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  CppSideStub.prototype = Object.create(bindings.StubBase.prototype);
  CppSideStub.prototype.startTest = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startTest && bindings.StubBindings(this).delegate.startTest();
  }
  CppSideStub.prototype.testFinished = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.testFinished && bindings.StubBindings(this).delegate.testFinished();
  }
  CppSideStub.prototype.pingResponse = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.pingResponse && bindings.StubBindings(this).delegate.pingResponse();
  }
  CppSideStub.prototype.echoResponse = function(list) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.echoResponse && bindings.StubBindings(this).delegate.echoResponse(list);
  }
  CppSideStub.prototype.bitFlipResponse = function(arg) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.bitFlipResponse && bindings.StubBindings(this).delegate.bitFlipResponse(arg);
  }
  CppSideStub.prototype.backPointerResponse = function(arg) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.backPointerResponse && bindings.StubBindings(this).delegate.backPointerResponse(arg);
  }

  CppSideStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCppSide_StartTest_Name:
      var params = reader.decodeStruct(CppSide_StartTest_Params);
      this.startTest();
      return true;
    case kCppSide_TestFinished_Name:
      var params = reader.decodeStruct(CppSide_TestFinished_Params);
      this.testFinished();
      return true;
    case kCppSide_PingResponse_Name:
      var params = reader.decodeStruct(CppSide_PingResponse_Params);
      this.pingResponse();
      return true;
    case kCppSide_EchoResponse_Name:
      var params = reader.decodeStruct(CppSide_EchoResponse_Params);
      this.echoResponse(params.list);
      return true;
    case kCppSide_BitFlipResponse_Name:
      var params = reader.decodeStruct(CppSide_BitFlipResponse_Params);
      this.bitFlipResponse(params.arg);
      return true;
    case kCppSide_BackPointerResponse_Name:
      var params = reader.decodeStruct(CppSide_BackPointerResponse_Params);
      this.backPointerResponse(params.arg);
      return true;
    default:
      return false;
    }
  };

  CppSideStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateCppSideRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCppSide_StartTest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CppSide_StartTest_Params;
      break;
      case kCppSide_TestFinished_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CppSide_TestFinished_Params;
      break;
      case kCppSide_PingResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CppSide_PingResponse_Params;
      break;
      case kCppSide_EchoResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CppSide_EchoResponse_Params;
      break;
      case kCppSide_BitFlipResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CppSide_BitFlipResponse_Params;
      break;
      case kCppSide_BackPointerResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CppSide_BackPointerResponse_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCppSideResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CppSide = {
    name: null,
    proxyClass: CppSideProxy,
    stubClass: CppSideStub,
    validateRequest: validateCppSideRequest,
    validateResponse: null,
  };
  CppSideStub.prototype.validator = validateCppSideRequest;
  CppSideProxy.prototype.validator = null;

  var kJsSide_SetCppSide_Name = 0;
  var kJsSide_Ping_Name = 1;
  var kJsSide_Echo_Name = 2;
  var kJsSide_BitFlip_Name = 3;
  var kJsSide_BackPointer_Name = 4;

  function JsSideProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  JsSideProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  JsSideProxy.prototype.setCppSide = function(cpp) {
    var params = new JsSide_SetCppSide_Params();
    params.cpp = core.isHandle(cpp) ? cpp : connection.bindImpl(cpp, CppSide);
    var builder = new codec.MessageBuilder(
        kJsSide_SetCppSide_Name,
        codec.align(JsSide_SetCppSide_Params.encodedSize));
    builder.encodeStruct(JsSide_SetCppSide_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  JsSideProxy.prototype.ping = function() {
    var params = new JsSide_Ping_Params();
    var builder = new codec.MessageBuilder(
        kJsSide_Ping_Name,
        codec.align(JsSide_Ping_Params.encodedSize));
    builder.encodeStruct(JsSide_Ping_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  JsSideProxy.prototype.echo = function(numIterations, arg) {
    var params = new JsSide_Echo_Params();
    params.numIterations = numIterations;
    params.arg = arg;
    var builder = new codec.MessageBuilder(
        kJsSide_Echo_Name,
        codec.align(JsSide_Echo_Params.encodedSize));
    builder.encodeStruct(JsSide_Echo_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  JsSideProxy.prototype.bitFlip = function(arg) {
    var params = new JsSide_BitFlip_Params();
    params.arg = arg;
    var builder = new codec.MessageBuilder(
        kJsSide_BitFlip_Name,
        codec.align(JsSide_BitFlip_Params.encodedSize));
    builder.encodeStruct(JsSide_BitFlip_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  JsSideProxy.prototype.backPointer = function(arg) {
    var params = new JsSide_BackPointer_Params();
    params.arg = arg;
    var builder = new codec.MessageBuilder(
        kJsSide_BackPointer_Name,
        codec.align(JsSide_BackPointer_Params.encodedSize));
    builder.encodeStruct(JsSide_BackPointer_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function JsSideStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  JsSideStub.prototype = Object.create(bindings.StubBase.prototype);
  JsSideStub.prototype.setCppSide = function(cpp) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setCppSide && bindings.StubBindings(this).delegate.setCppSide(connection.bindHandleToProxy(cpp, CppSide));
  }
  JsSideStub.prototype.ping = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.ping && bindings.StubBindings(this).delegate.ping();
  }
  JsSideStub.prototype.echo = function(numIterations, arg) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.echo && bindings.StubBindings(this).delegate.echo(numIterations, arg);
  }
  JsSideStub.prototype.bitFlip = function(arg) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.bitFlip && bindings.StubBindings(this).delegate.bitFlip(arg);
  }
  JsSideStub.prototype.backPointer = function(arg) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.backPointer && bindings.StubBindings(this).delegate.backPointer(arg);
  }

  JsSideStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kJsSide_SetCppSide_Name:
      var params = reader.decodeStruct(JsSide_SetCppSide_Params);
      this.setCppSide(params.cpp);
      return true;
    case kJsSide_Ping_Name:
      var params = reader.decodeStruct(JsSide_Ping_Params);
      this.ping();
      return true;
    case kJsSide_Echo_Name:
      var params = reader.decodeStruct(JsSide_Echo_Params);
      this.echo(params.numIterations, params.arg);
      return true;
    case kJsSide_BitFlip_Name:
      var params = reader.decodeStruct(JsSide_BitFlip_Params);
      this.bitFlip(params.arg);
      return true;
    case kJsSide_BackPointer_Name:
      var params = reader.decodeStruct(JsSide_BackPointer_Params);
      this.backPointer(params.arg);
      return true;
    default:
      return false;
    }
  };

  JsSideStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateJsSideRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kJsSide_SetCppSide_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = JsSide_SetCppSide_Params;
      break;
      case kJsSide_Ping_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = JsSide_Ping_Params;
      break;
      case kJsSide_Echo_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = JsSide_Echo_Params;
      break;
      case kJsSide_BitFlip_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = JsSide_BitFlip_Params;
      break;
      case kJsSide_BackPointer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = JsSide_BackPointer_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateJsSideResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var JsSide = {
    name: null,
    proxyClass: JsSideProxy,
    stubClass: JsSideStub,
    validateRequest: validateJsSideRequest,
    validateResponse: null,
  };
  JsSideStub.prototype.validator = validateJsSideRequest;
  JsSideProxy.prototype.validator = null;


  var exports = {};
  exports.EchoArgs = EchoArgs;
  exports.EchoArgsList = EchoArgsList;
  exports.CppSide = CppSide;
  exports.JsSide = JsSide;


  return exports;
});
