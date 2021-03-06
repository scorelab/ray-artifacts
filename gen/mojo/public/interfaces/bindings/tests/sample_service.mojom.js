// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/public/interfaces/bindings/tests/sample_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/bindings/tests/sample_import.mojom",
    "mojo/public/interfaces/bindings/tests/sample_import2.mojom",
], function(bindings, codec, connection, core, validator, sample_import$, sample_import2$) {
  var kTwelve = 12;

  function Bar(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  Bar.Type = {};
  Bar.Type.VERTICAL = 1;
  Bar.Type.HORIZONTAL = Bar.Type.VERTICAL + 1;
  Bar.Type.BOTH = Bar.Type.HORIZONTAL + 1;
  Bar.Type.INVALID = Bar.Type.BOTH + 1;

  Bar.prototype.initDefaults_ = function() {
    this.alpha = 255;
    this.beta = 0;
    this.gamma = 0;
    this.type = Bar.Type.VERTICAL;
  };
  Bar.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Bar.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Bar.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  Bar.encodedSize = codec.kStructHeaderSize + 8;

  Bar.decode = function(decoder) {
    var packed;
    var val = new Bar();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.alpha = decoder.decodeStruct(codec.Uint8);
    val.beta = decoder.decodeStruct(codec.Uint8);
    val.gamma = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Bar.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Bar.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.alpha);
    encoder.encodeStruct(codec.Uint8, val.beta);
    encoder.encodeStruct(codec.Uint8, val.gamma);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.type);
  };

  function Foo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Foo.kFooby = "Fooby";
  Foo.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.a = true;
    this.b = false;
    this.c = false;
    this.source = null;
    this.bar = null;
    this.data = null;
    this.extra_bars = null;
    this.name = Foo.kFooby;
    this.input_streams = null;
    this.output_streams = null;
    this.array_of_array_of_bools = null;
    this.multi_array_of_strings = null;
    this.array_of_bools = null;
  };
  Foo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Foo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Foo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;






    
    // validate Foo.source
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 12, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.bar
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Bar, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.extra_bars
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(Bar), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.input_streams
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 4, codec.Handle, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.output_streams
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 56, 4, codec.Handle, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.array_of_array_of_bools
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 8, new codec.ArrayOf(codec.PackedBool), true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.multi_array_of_strings
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 72, 8, new codec.ArrayOf(new codec.ArrayOf(codec.String)), true, [0, 0, 0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Foo.array_of_bools
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 80, 1, codec.PackedBool, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Foo.encodedSize = codec.kStructHeaderSize + 88;

  Foo.decode = function(decoder) {
    var packed;
    var val = new Foo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.a = (packed >> 0) & 1 ? true : false;
    val.b = (packed >> 1) & 1 ? true : false;
    val.c = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.source = decoder.decodeStruct(codec.NullableHandle);
    val.bar = decoder.decodeStructPointer(Bar);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.extra_bars = decoder.decodeArrayPointer(new codec.PointerTo(Bar));
    val.name = decoder.decodeStruct(codec.String);
    val.input_streams = decoder.decodeArrayPointer(codec.Handle);
    val.output_streams = decoder.decodeArrayPointer(codec.Handle);
    val.array_of_array_of_bools = decoder.decodeArrayPointer(new codec.ArrayOf(codec.PackedBool));
    val.multi_array_of_strings = decoder.decodeArrayPointer(new codec.ArrayOf(new codec.ArrayOf(codec.String)));
    val.array_of_bools = decoder.decodeArrayPointer(codec.PackedBool);
    return val;
  };

  Foo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Foo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
    packed = 0;
    packed |= (val.a & 1) << 0
    packed |= (val.b & 1) << 1
    packed |= (val.c & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableHandle, val.source);
    encoder.encodeStructPointer(Bar, val.bar);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeArrayPointer(new codec.PointerTo(Bar), val.extra_bars);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeArrayPointer(codec.Handle, val.input_streams);
    encoder.encodeArrayPointer(codec.Handle, val.output_streams);
    encoder.encodeArrayPointer(new codec.ArrayOf(codec.PackedBool), val.array_of_array_of_bools);
    encoder.encodeArrayPointer(new codec.ArrayOf(new codec.ArrayOf(codec.String)), val.multi_array_of_strings);
    encoder.encodeArrayPointer(codec.PackedBool, val.array_of_bools);
  };

  function DefaultsTest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DefaultsTest.prototype.initDefaults_ = function() {
    this.a0 = -12;
    this.a1 = kTwelve;
    this.a2 = 1234;
    this.a3 = 34567;
    this.a11 = true;
    this.a12 = false;
    this.a4 = 123456;
    this.a5 = 3456789012;
    this.a6 = -111111111111;
    this.a7 = 9999999999999999999;
    this.a8 = 74565;
    this.a9 = -74565;
    this.a10 = 1234;
    this.a13 = 123.25;
    this.a14 = 1234567890.123;
    this.a15 = 10000000000.0;
    this.a16 = -1.2e+20;
    this.a17 = 1.23e-20;
    this.a18 = null;
    this.a19 = null;
    this.a20 = Bar.Type.BOTH;
    this.a29 = Infinity;
    this.a21 = null;
    this.a22 = new sample_import2$.Thing();
    this.a23 = 18446744073709551615;
    this.a24 = 4886718345;
    this.a25 = -4886718345;
    this.a26 = Infinity;
    this.a27 = -Infinity;
    this.a28 = NaN;
    this.a30 = -Infinity;
    this.a31 = NaN;
  };
  DefaultsTest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DefaultsTest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DefaultsTest.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



















    
    // validate DefaultsTest.a18
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 80, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DefaultsTest.a19
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 88, false)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate DefaultsTest.a21
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 104, sample_import$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DefaultsTest.a22
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 112, sample_import2$.Thing, false);
    if (err !== validator.validationError.NONE)
        return err;









    return validator.validationError.NONE;
  };

  DefaultsTest.encodedSize = codec.kStructHeaderSize + 176;

  DefaultsTest.decode = function(decoder) {
    var packed;
    var val = new DefaultsTest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.a0 = decoder.decodeStruct(codec.Int8);
    val.a1 = decoder.decodeStruct(codec.Uint8);
    val.a2 = decoder.decodeStruct(codec.Int16);
    val.a3 = decoder.decodeStruct(codec.Uint16);
    packed = decoder.readUint8();
    val.a11 = (packed >> 0) & 1 ? true : false;
    val.a12 = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    val.a4 = decoder.decodeStruct(codec.Int32);
    val.a5 = decoder.decodeStruct(codec.Uint32);
    val.a6 = decoder.decodeStruct(codec.Int64);
    val.a7 = decoder.decodeStruct(codec.Uint64);
    val.a8 = decoder.decodeStruct(codec.Int32);
    val.a9 = decoder.decodeStruct(codec.Int32);
    val.a10 = decoder.decodeStruct(codec.Int32);
    val.a13 = decoder.decodeStruct(codec.Float);
    val.a14 = decoder.decodeStruct(codec.Double);
    val.a15 = decoder.decodeStruct(codec.Double);
    val.a16 = decoder.decodeStruct(codec.Double);
    val.a17 = decoder.decodeStruct(codec.Double);
    val.a18 = decoder.decodeArrayPointer(codec.Uint8);
    val.a19 = decoder.decodeStruct(codec.String);
    val.a20 = decoder.decodeStruct(codec.Int32);
    val.a29 = decoder.decodeStruct(codec.Float);
    val.a21 = decoder.decodeStructPointer(sample_import$.Point);
    val.a22 = decoder.decodeStructPointer(sample_import2$.Thing);
    val.a23 = decoder.decodeStruct(codec.Uint64);
    val.a24 = decoder.decodeStruct(codec.Int64);
    val.a25 = decoder.decodeStruct(codec.Int64);
    val.a26 = decoder.decodeStruct(codec.Double);
    val.a27 = decoder.decodeStruct(codec.Double);
    val.a28 = decoder.decodeStruct(codec.Double);
    val.a30 = decoder.decodeStruct(codec.Float);
    val.a31 = decoder.decodeStruct(codec.Float);
    return val;
  };

  DefaultsTest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DefaultsTest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int8, val.a0);
    encoder.encodeStruct(codec.Uint8, val.a1);
    encoder.encodeStruct(codec.Int16, val.a2);
    encoder.encodeStruct(codec.Uint16, val.a3);
    packed = 0;
    packed |= (val.a11 & 1) << 0
    packed |= (val.a12 & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.a4);
    encoder.encodeStruct(codec.Uint32, val.a5);
    encoder.encodeStruct(codec.Int64, val.a6);
    encoder.encodeStruct(codec.Uint64, val.a7);
    encoder.encodeStruct(codec.Int32, val.a8);
    encoder.encodeStruct(codec.Int32, val.a9);
    encoder.encodeStruct(codec.Int32, val.a10);
    encoder.encodeStruct(codec.Float, val.a13);
    encoder.encodeStruct(codec.Double, val.a14);
    encoder.encodeStruct(codec.Double, val.a15);
    encoder.encodeStruct(codec.Double, val.a16);
    encoder.encodeStruct(codec.Double, val.a17);
    encoder.encodeArrayPointer(codec.Uint8, val.a18);
    encoder.encodeStruct(codec.String, val.a19);
    encoder.encodeStruct(codec.Int32, val.a20);
    encoder.encodeStruct(codec.Float, val.a29);
    encoder.encodeStructPointer(sample_import$.Point, val.a21);
    encoder.encodeStructPointer(sample_import2$.Thing, val.a22);
    encoder.encodeStruct(codec.Uint64, val.a23);
    encoder.encodeStruct(codec.Int64, val.a24);
    encoder.encodeStruct(codec.Int64, val.a25);
    encoder.encodeStruct(codec.Double, val.a26);
    encoder.encodeStruct(codec.Double, val.a27);
    encoder.encodeStruct(codec.Double, val.a28);
    encoder.encodeStruct(codec.Float, val.a30);
    encoder.encodeStruct(codec.Float, val.a31);
  };

  function StructWithHoleV1(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StructWithHoleV1.prototype.initDefaults_ = function() {
    this.v1 = 1;
    this.v2 = 2;
  };
  StructWithHoleV1.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StructWithHoleV1.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StructWithHoleV1.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  StructWithHoleV1.encodedSize = codec.kStructHeaderSize + 16;

  StructWithHoleV1.decode = function(decoder) {
    var packed;
    var val = new StructWithHoleV1();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.v1 = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.v2 = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StructWithHoleV1.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StructWithHoleV1.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.v1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.v2);
  };

  function StructWithHoleV2(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StructWithHoleV2.prototype.initDefaults_ = function() {
    this.v1 = 1;
    this.v3 = 3;
    this.v2 = 2;
  };
  StructWithHoleV2.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StructWithHoleV2.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StructWithHoleV2.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  StructWithHoleV2.encodedSize = codec.kStructHeaderSize + 16;

  StructWithHoleV2.decode = function(decoder) {
    var packed;
    var val = new StructWithHoleV2();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.v1 = decoder.decodeStruct(codec.Int32);
    val.v3 = decoder.decodeStruct(codec.Int32);
    val.v2 = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StructWithHoleV2.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StructWithHoleV2.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.v1);
    encoder.encodeStruct(codec.Int32, val.v3);
    encoder.encodeStruct(codec.Int64, val.v2);
  };

  function NonNullableMapStruct(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NonNullableMapStruct.prototype.initDefaults_ = function() {
    this.map_field = null;
  };
  NonNullableMapStruct.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NonNullableMapStruct.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NonNullableMapStruct.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate NonNullableMapStruct.map_field
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NonNullableMapStruct.encodedSize = codec.kStructHeaderSize + 8;

  NonNullableMapStruct.decode = function(decoder) {
    var packed;
    var val = new NonNullableMapStruct();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.map_field = decoder.decodeMapPointer(codec.String, codec.String);
    return val;
  };

  NonNullableMapStruct.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NonNullableMapStruct.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, codec.String, val.map_field);
  };

  function Service_Frobinate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_Frobinate_Params.prototype.initDefaults_ = function() {
    this.foo = null;
    this.baz = 0;
    this.port = null;
  };
  Service_Frobinate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Service_Frobinate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Service_Frobinate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_Frobinate_Params.foo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Foo, true);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Service_Frobinate_Params.port
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_Frobinate_Params.encodedSize = codec.kStructHeaderSize + 24;

  Service_Frobinate_Params.decode = function(decoder) {
    var packed;
    var val = new Service_Frobinate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.foo = decoder.decodeStructPointer(Foo);
    val.baz = decoder.decodeStruct(codec.Int32);
    val.port = decoder.decodeStruct(codec.NullableInterface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Service_Frobinate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_Frobinate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Foo, val.foo);
    encoder.encodeStruct(codec.Int32, val.baz);
    encoder.encodeStruct(codec.NullableInterface, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Service_Frobinate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_Frobinate_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  Service_Frobinate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Service_Frobinate_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Service_Frobinate_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Service_Frobinate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Service_Frobinate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Service_Frobinate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Service_Frobinate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_Frobinate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Service_GetPort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_GetPort_Params.prototype.initDefaults_ = function() {
    this.port = null;
  };
  Service_GetPort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Service_GetPort_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Service_GetPort_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_GetPort_Params.port
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_GetPort_Params.encodedSize = codec.kStructHeaderSize + 8;

  Service_GetPort_Params.decode = function(decoder) {
    var packed;
    var val = new Service_GetPort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Service_GetPort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_GetPort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Port_PostMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Port_PostMessage_Params.prototype.initDefaults_ = function() {
    this.message_text = null;
    this.port = null;
  };
  Port_PostMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Port_PostMessage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Port_PostMessage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Port_PostMessage_Params.message_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Port_PostMessage_Params.port
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Port_PostMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  Port_PostMessage_Params.decode = function(decoder) {
    var packed;
    var val = new Port_PostMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message_text = decoder.decodeStruct(codec.String);
    val.port = decoder.decodeStruct(codec.Interface);
    return val;
  };

  Port_PostMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Port_PostMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message_text);
    encoder.encodeStruct(codec.Interface, val.port);
  };

  var kService_Frobinate_Name = 0;
  var kService_GetPort_Name = 1;

  function ServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceProxy.prototype.frobinate = function(foo, baz, port) {
    var params = new Service_Frobinate_Params();
    params.foo = foo;
    params.baz = baz;
    params.port = core.isHandle(port) ? port : connection.bindImpl(port, Port);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kService_Frobinate_Name,
          codec.align(Service_Frobinate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Service_Frobinate_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Service_Frobinate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceProxy.prototype.getPort = function(port) {
    var params = new Service_GetPort_Params();
    params.port = core.isHandle(port) ? port : connection.bindProxy(port, Port);
    var builder = new codec.MessageBuilder(
        kService_GetPort_Name,
        codec.align(Service_GetPort_Params.encodedSize));
    builder.encodeStruct(Service_GetPort_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceStub.prototype.frobinate = function(foo, baz, port) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.frobinate && bindings.StubBindings(this).delegate.frobinate(foo, baz, connection.bindHandleToProxy(port, Port));
  }
  ServiceStub.prototype.getPort = function(port) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPort && bindings.StubBindings(this).delegate.getPort(connection.bindHandleToStub(port, Port));
  }

  ServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kService_GetPort_Name:
      var params = reader.decodeStruct(Service_GetPort_Params);
      this.getPort(params.port);
      return true;
    default:
      return false;
    }
  };

  ServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kService_Frobinate_Name:
      var params = reader.decodeStruct(Service_Frobinate_Params);
      return this.frobinate(params.foo, params.baz, params.port).then(function(response) {
        var responseParams =
            new Service_Frobinate_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kService_Frobinate_Name,
            codec.align(Service_Frobinate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Service_Frobinate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kService_Frobinate_Name:
        if (message.expectsResponse())
          paramsClass = Service_Frobinate_Params;
      break;
      case kService_GetPort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Service_GetPort_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kService_Frobinate_Name:
        if (message.isResponse())
          paramsClass = Service_Frobinate_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Service = {
    name: null,
    proxyClass: ServiceProxy,
    stubClass: ServiceStub,
    validateRequest: validateServiceRequest,
    validateResponse: validateServiceResponse,
  };
  Service.kFavoriteBaz = 1,
  Service.BazOptions = {};
  Service.BazOptions.REGULAR = 0;
  Service.BazOptions.EXTRA = Service.BazOptions.REGULAR + 1;
  ServiceStub.prototype.validator = validateServiceRequest;
  ServiceProxy.prototype.validator = validateServiceResponse;

  var kPort_PostMessage_Name = 0;

  function PortProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PortProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PortProxy.prototype.postMessage = function(message_text, port) {
    var params = new Port_PostMessage_Params();
    params.message_text = message_text;
    params.port = core.isHandle(port) ? port : connection.bindImpl(port, Port);
    var builder = new codec.MessageBuilder(
        kPort_PostMessage_Name,
        codec.align(Port_PostMessage_Params.encodedSize));
    builder.encodeStruct(Port_PostMessage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PortStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PortStub.prototype = Object.create(bindings.StubBase.prototype);
  PortStub.prototype.postMessage = function(message_text, port) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.postMessage && bindings.StubBindings(this).delegate.postMessage(message_text, connection.bindHandleToProxy(port, Port));
  }

  PortStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPort_PostMessage_Name:
      var params = reader.decodeStruct(Port_PostMessage_Params);
      this.postMessage(params.message_text, params.port);
      return true;
    default:
      return false;
    }
  };

  PortStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePortRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPort_PostMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Port_PostMessage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePortResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Port = {
    name: null,
    proxyClass: PortProxy,
    stubClass: PortStub,
    validateRequest: validatePortRequest,
    validateResponse: null,
  };
  PortStub.prototype.validator = validatePortRequest;
  PortProxy.prototype.validator = null;


  var exports = {};
  exports.kTwelve = kTwelve;
  exports.Bar = Bar;
  exports.Foo = Foo;
  exports.DefaultsTest = DefaultsTest;
  exports.StructWithHoleV1 = StructWithHoleV1;
  exports.StructWithHoleV2 = StructWithHoleV2;
  exports.NonNullableMapStruct = NonNullableMapStruct;
  exports.Service = Service;
  exports.Port = Port;


  return exports;
});
