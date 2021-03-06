// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/geometry/interfaces/geometry.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Point(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Point.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  Point.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Point.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Point.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Point.encodedSize = codec.kStructHeaderSize + 8;

  Point.decode = function(decoder) {
    var packed;
    var val = new Point();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Point.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Point.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
  };

  function PointF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PointF.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  PointF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PointF.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PointF.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  PointF.encodedSize = codec.kStructHeaderSize + 8;

  PointF.decode = function(decoder) {
    var packed;
    var val = new PointF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    return val;
  };

  PointF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PointF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
  };

  function Size(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Size.prototype.initDefaults_ = function() {
    this.width = 0;
    this.height = 0;
  };
  Size.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Size.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Size.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Size.encodedSize = codec.kStructHeaderSize + 8;

  Size.decode = function(decoder) {
    var packed;
    var val = new Size();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Size.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Size.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };

  function Rect(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Rect.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
  };
  Rect.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Rect.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Rect.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  Rect.encodedSize = codec.kStructHeaderSize + 16;

  Rect.decode = function(decoder) {
    var packed;
    var val = new Rect();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Rect.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Rect.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };

  function RectF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RectF.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
  };
  RectF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RectF.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RectF.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  RectF.encodedSize = codec.kStructHeaderSize + 16;

  RectF.decode = function(decoder) {
    var packed;
    var val = new RectF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.width = decoder.decodeStruct(codec.Float);
    val.height = decoder.decodeStruct(codec.Float);
    return val;
  };

  RectF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RectF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.width);
    encoder.encodeStruct(codec.Float, val.height);
  };

  function RRectF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RRectF.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
    this.top_left_radius_x = 0;
    this.top_left_radius_y = 0;
    this.top_right_radius_x = 0;
    this.top_right_radius_y = 0;
    this.bottom_left_radius_x = 0;
    this.bottom_left_radius_y = 0;
    this.bottom_right_radius_x = 0;
    this.bottom_right_radius_y = 0;
  };
  RRectF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RRectF.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RRectF.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;













    return validator.validationError.NONE;
  };

  RRectF.encodedSize = codec.kStructHeaderSize + 48;

  RRectF.decode = function(decoder) {
    var packed;
    var val = new RRectF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.width = decoder.decodeStruct(codec.Float);
    val.height = decoder.decodeStruct(codec.Float);
    val.top_left_radius_x = decoder.decodeStruct(codec.Float);
    val.top_left_radius_y = decoder.decodeStruct(codec.Float);
    val.top_right_radius_x = decoder.decodeStruct(codec.Float);
    val.top_right_radius_y = decoder.decodeStruct(codec.Float);
    val.bottom_left_radius_x = decoder.decodeStruct(codec.Float);
    val.bottom_left_radius_y = decoder.decodeStruct(codec.Float);
    val.bottom_right_radius_x = decoder.decodeStruct(codec.Float);
    val.bottom_right_radius_y = decoder.decodeStruct(codec.Float);
    return val;
  };

  RRectF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RRectF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.width);
    encoder.encodeStruct(codec.Float, val.height);
    encoder.encodeStruct(codec.Float, val.top_left_radius_x);
    encoder.encodeStruct(codec.Float, val.top_left_radius_y);
    encoder.encodeStruct(codec.Float, val.top_right_radius_x);
    encoder.encodeStruct(codec.Float, val.top_right_radius_y);
    encoder.encodeStruct(codec.Float, val.bottom_left_radius_x);
    encoder.encodeStruct(codec.Float, val.bottom_left_radius_y);
    encoder.encodeStruct(codec.Float, val.bottom_right_radius_x);
    encoder.encodeStruct(codec.Float, val.bottom_right_radius_y);
  };

  function Transform(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Transform.prototype.initDefaults_ = function() {
    this.matrix = null;
  };
  Transform.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Transform.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Transform.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Transform.matrix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Float, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Transform.encodedSize = codec.kStructHeaderSize + 8;

  Transform.decode = function(decoder) {
    var packed;
    var val = new Transform();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.matrix = decoder.decodeArrayPointer(codec.Float);
    return val;
  };

  Transform.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Transform.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Float, val.matrix);
  };


  var exports = {};
  exports.Point = Point;
  exports.PointF = PointF;
  exports.Size = Size;
  exports.Rect = Rect;
  exports.RectF = RectF;
  exports.RRectF = RRectF;
  exports.Transform = Transform;


  return exports;
});
