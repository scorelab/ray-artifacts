// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/files/interfaces/file.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/files/interfaces/types.mojom",
], function(bindings, codec, connection, core, validator, types$) {

  function File_Close_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Close_Params.prototype.initDefaults_ = function() {
  };
  File_Close_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Close_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Close_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Close_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Close_Params.decode = function(decoder) {
    var packed;
    var val = new File_Close_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Close_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Close_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function File_Close_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Close_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
  };
  File_Close_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Close_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Close_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Close_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Close_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Close_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Close_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Close_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Read_Params.prototype.initDefaults_ = function() {
    this.num_bytes_to_read = 0;
    this.whence = 0;
    this.offset = 0;
  };
  File_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Read_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Read_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  File_Read_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Read_Params.decode = function(decoder) {
    var packed;
    var val = new File_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.num_bytes_to_read = decoder.decodeStruct(codec.Uint32);
    val.whence = decoder.decodeStruct(codec.Int32);
    val.offset = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Read_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.num_bytes_to_read);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.encodeStruct(codec.Int64, val.offset);
  };

  function File_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.bytes_read = null;
  };
  File_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Read_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Read_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate File_Read_ResponseParams.bytes_read
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bytes_read = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  File_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.bytes_read);
  };

  function File_Write_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Write_Params.prototype.initDefaults_ = function() {
    this.bytes_to_write = null;
    this.offset = 0;
    this.whence = 0;
  };
  File_Write_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Write_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Write_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_Write_Params.bytes_to_write
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  File_Write_Params.encodedSize = codec.kStructHeaderSize + 24;

  File_Write_Params.decode = function(decoder) {
    var packed;
    var val = new File_Write_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytes_to_write = decoder.decodeArrayPointer(codec.Uint8);
    val.offset = decoder.decodeStruct(codec.Int64);
    val.whence = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Write_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Write_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.bytes_to_write);
    encoder.encodeStruct(codec.Int64, val.offset);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Write_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Write_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.num_bytes_written = 0;
  };
  File_Write_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Write_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Write_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  File_Write_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Write_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Write_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.num_bytes_written = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  File_Write_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Write_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Uint32, val.num_bytes_written);
  };

  function File_ReadToStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_ReadToStream_Params.prototype.initDefaults_ = function() {
    this.source = null;
    this.whence = 0;
    this.offset = 0;
    this.num_bytes_to_read = 0;
  };
  File_ReadToStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_ReadToStream_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_ReadToStream_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_ReadToStream_Params.source
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  File_ReadToStream_Params.encodedSize = codec.kStructHeaderSize + 24;

  File_ReadToStream_Params.decode = function(decoder) {
    var packed;
    var val = new File_ReadToStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.Handle);
    val.whence = decoder.decodeStruct(codec.Int32);
    val.offset = decoder.decodeStruct(codec.Int64);
    val.num_bytes_to_read = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_ReadToStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_ReadToStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.source);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.encodeStruct(codec.Int64, val.offset);
    encoder.encodeStruct(codec.Int64, val.num_bytes_to_read);
  };

  function File_ReadToStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_ReadToStream_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_ReadToStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_ReadToStream_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_ReadToStream_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_ReadToStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_ReadToStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_ReadToStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_ReadToStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_ReadToStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_WriteFromStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_WriteFromStream_Params.prototype.initDefaults_ = function() {
    this.sink = null;
    this.whence = 0;
    this.offset = 0;
  };
  File_WriteFromStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_WriteFromStream_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_WriteFromStream_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_WriteFromStream_Params.sink
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  File_WriteFromStream_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_WriteFromStream_Params.decode = function(decoder) {
    var packed;
    var val = new File_WriteFromStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sink = decoder.decodeStruct(codec.Handle);
    val.whence = decoder.decodeStruct(codec.Int32);
    val.offset = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_WriteFromStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_WriteFromStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.sink);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.encodeStruct(codec.Int64, val.offset);
  };

  function File_WriteFromStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_WriteFromStream_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_WriteFromStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_WriteFromStream_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_WriteFromStream_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_WriteFromStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_WriteFromStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_WriteFromStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_WriteFromStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_WriteFromStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Tell_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Tell_Params.prototype.initDefaults_ = function() {
  };
  File_Tell_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Tell_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Tell_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Tell_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Tell_Params.decode = function(decoder) {
    var packed;
    var val = new File_Tell_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Tell_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Tell_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function File_Tell_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Tell_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.position = 0;
  };
  File_Tell_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Tell_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Tell_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  File_Tell_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Tell_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Tell_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.position = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Tell_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Tell_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.position);
  };

  function File_Seek_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Seek_Params.prototype.initDefaults_ = function() {
    this.offset = 0;
    this.whence = 0;
  };
  File_Seek_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Seek_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Seek_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  File_Seek_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Seek_Params.decode = function(decoder) {
    var packed;
    var val = new File_Seek_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.offset = decoder.decodeStruct(codec.Int64);
    val.whence = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Seek_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Seek_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.offset);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Seek_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Seek_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.position = 0;
  };
  File_Seek_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Seek_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Seek_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  File_Seek_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Seek_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Seek_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.position = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Seek_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Seek_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.position);
  };

  function File_Stat_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Stat_Params.prototype.initDefaults_ = function() {
  };
  File_Stat_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Stat_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Stat_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Stat_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Stat_Params.decode = function(decoder) {
    var packed;
    var val = new File_Stat_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Stat_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Stat_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function File_Stat_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Stat_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.file_information = null;
  };
  File_Stat_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Stat_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Stat_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate File_Stat_ResponseParams.file_information
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.FileInformation, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Stat_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Stat_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Stat_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.file_information = decoder.decodeStructPointer(types$.FileInformation);
    return val;
  };

  File_Stat_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Stat_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(types$.FileInformation, val.file_information);
  };

  function File_Truncate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Truncate_Params.prototype.initDefaults_ = function() {
    this.size = 0;
  };
  File_Truncate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Truncate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Truncate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Truncate_Params.encodedSize = codec.kStructHeaderSize + 8;

  File_Truncate_Params.decode = function(decoder) {
    var packed;
    var val = new File_Truncate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Truncate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Truncate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.size);
  };

  function File_Truncate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Truncate_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Truncate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Truncate_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Truncate_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Truncate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Truncate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Truncate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Truncate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Truncate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Touch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Touch_Params.prototype.initDefaults_ = function() {
    this.atime = null;
    this.mtime = null;
  };
  File_Touch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Touch_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Touch_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_Touch_Params.atime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, types$.TimespecOrNow, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_Touch_Params.mtime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.TimespecOrNow, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Touch_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Touch_Params.decode = function(decoder) {
    var packed;
    var val = new File_Touch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.atime = decoder.decodeStructPointer(types$.TimespecOrNow);
    val.mtime = decoder.decodeStructPointer(types$.TimespecOrNow);
    return val;
  };

  File_Touch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Touch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(types$.TimespecOrNow, val.atime);
    encoder.encodeStructPointer(types$.TimespecOrNow, val.mtime);
  };

  function File_Touch_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Touch_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Touch_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Touch_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Touch_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Touch_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Touch_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Touch_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Touch_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Touch_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Dup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Dup_Params.prototype.initDefaults_ = function() {
    this.file = null;
  };
  File_Dup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Dup_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Dup_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_Dup_Params.file
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Dup_Params.encodedSize = codec.kStructHeaderSize + 8;

  File_Dup_Params.decode = function(decoder) {
    var packed;
    var val = new File_Dup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Dup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Dup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.file);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Dup_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Dup_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Dup_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Dup_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Dup_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Dup_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Dup_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Dup_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Dup_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Dup_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_Reopen_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Reopen_Params.prototype.initDefaults_ = function() {
    this.file = null;
    this.open_flags = 0;
  };
  File_Reopen_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Reopen_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Reopen_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate File_Reopen_Params.file
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Reopen_Params.encodedSize = codec.kStructHeaderSize + 8;

  File_Reopen_Params.decode = function(decoder) {
    var packed;
    var val = new File_Reopen_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file = decoder.decodeStruct(codec.Handle);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  File_Reopen_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Reopen_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.file);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
  };

  function File_Reopen_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Reopen_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Reopen_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Reopen_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Reopen_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Reopen_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Reopen_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Reopen_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Reopen_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Reopen_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function File_AsBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_AsBuffer_Params.prototype.initDefaults_ = function() {
  };
  File_AsBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_AsBuffer_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_AsBuffer_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_AsBuffer_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_AsBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new File_AsBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_AsBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_AsBuffer_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function File_AsBuffer_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_AsBuffer_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.buffer = null;
  };
  File_AsBuffer_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_AsBuffer_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_AsBuffer_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate File_AsBuffer_ResponseParams.buffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_AsBuffer_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_AsBuffer_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_AsBuffer_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.buffer = decoder.decodeStruct(codec.NullableHandle);
    return val;
  };

  File_AsBuffer_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_AsBuffer_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.NullableHandle, val.buffer);
  };

  function File_Ioctl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Ioctl_Params.prototype.initDefaults_ = function() {
    this.request = 0;
    this.in_values = null;
  };
  File_Ioctl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Ioctl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Ioctl_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate File_Ioctl_Params.in_values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Uint32, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Ioctl_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Ioctl_Params.decode = function(decoder) {
    var packed;
    var val = new File_Ioctl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.in_values = decoder.decodeArrayPointer(codec.Uint32);
    return val;
  };

  File_Ioctl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Ioctl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint32, val.in_values);
  };

  function File_Ioctl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Ioctl_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.out_values = null;
  };
  File_Ioctl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  File_Ioctl_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, File_Ioctl_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate File_Ioctl_ResponseParams.out_values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Uint32, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Ioctl_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Ioctl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Ioctl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.out_values = decoder.decodeArrayPointer(codec.Uint32);
    return val;
  };

  File_Ioctl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Ioctl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint32, val.out_values);
  };

  var kFile_Close_Name = 0;
  var kFile_Read_Name = 1;
  var kFile_Write_Name = 2;
  var kFile_ReadToStream_Name = 3;
  var kFile_WriteFromStream_Name = 4;
  var kFile_Tell_Name = 5;
  var kFile_Seek_Name = 6;
  var kFile_Stat_Name = 7;
  var kFile_Truncate_Name = 8;
  var kFile_Touch_Name = 9;
  var kFile_Dup_Name = 10;
  var kFile_Reopen_Name = 11;
  var kFile_AsBuffer_Name = 12;
  var kFile_Ioctl_Name = 13;

  function FileProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FileProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FileProxy.prototype.close = function() {
    var params = new File_Close_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Close_Name,
          codec.align(File_Close_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Close_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Close_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.read = function(num_bytes_to_read, offset, whence) {
    var params = new File_Read_Params();
    params.num_bytes_to_read = num_bytes_to_read;
    params.offset = offset;
    params.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Read_Name,
          codec.align(File_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Read_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.write = function(bytes_to_write, offset, whence) {
    var params = new File_Write_Params();
    params.bytes_to_write = bytes_to_write;
    params.offset = offset;
    params.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Write_Name,
          codec.align(File_Write_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Write_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Write_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.readToStream = function(source, offset, whence, num_bytes_to_read) {
    var params = new File_ReadToStream_Params();
    params.source = source;
    params.offset = offset;
    params.whence = whence;
    params.num_bytes_to_read = num_bytes_to_read;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_ReadToStream_Name,
          codec.align(File_ReadToStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_ReadToStream_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_ReadToStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.writeFromStream = function(sink, offset, whence) {
    var params = new File_WriteFromStream_Params();
    params.sink = sink;
    params.offset = offset;
    params.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_WriteFromStream_Name,
          codec.align(File_WriteFromStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_WriteFromStream_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_WriteFromStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.tell = function() {
    var params = new File_Tell_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Tell_Name,
          codec.align(File_Tell_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Tell_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Tell_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.seek = function(offset, whence) {
    var params = new File_Seek_Params();
    params.offset = offset;
    params.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Seek_Name,
          codec.align(File_Seek_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Seek_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Seek_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.stat = function() {
    var params = new File_Stat_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Stat_Name,
          codec.align(File_Stat_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Stat_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Stat_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.truncate = function(size) {
    var params = new File_Truncate_Params();
    params.size = size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Truncate_Name,
          codec.align(File_Truncate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Truncate_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Truncate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.touch = function(atime, mtime) {
    var params = new File_Touch_Params();
    params.atime = atime;
    params.mtime = mtime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Touch_Name,
          codec.align(File_Touch_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Touch_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Touch_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.dup = function(file) {
    var params = new File_Dup_Params();
    params.file = core.isHandle(file) ? file : connection.bindProxy(file, File);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Dup_Name,
          codec.align(File_Dup_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Dup_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Dup_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.reopen = function(file, open_flags) {
    var params = new File_Reopen_Params();
    params.file = core.isHandle(file) ? file : connection.bindProxy(file, File);
    params.open_flags = open_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Reopen_Name,
          codec.align(File_Reopen_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Reopen_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Reopen_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.asBuffer = function() {
    var params = new File_AsBuffer_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_AsBuffer_Name,
          codec.align(File_AsBuffer_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_AsBuffer_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_AsBuffer_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileProxy.prototype.ioctl = function(request, in_values) {
    var params = new File_Ioctl_Params();
    params.request = request;
    params.in_values = in_values;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFile_Ioctl_Name,
          codec.align(File_Ioctl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Ioctl_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Ioctl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FileStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FileStub.prototype = Object.create(bindings.StubBase.prototype);
  FileStub.prototype.close = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.close && bindings.StubBindings(this).delegate.close();
  }
  FileStub.prototype.read = function(num_bytes_to_read, offset, whence) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.read && bindings.StubBindings(this).delegate.read(num_bytes_to_read, offset, whence);
  }
  FileStub.prototype.write = function(bytes_to_write, offset, whence) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.write && bindings.StubBindings(this).delegate.write(bytes_to_write, offset, whence);
  }
  FileStub.prototype.readToStream = function(source, offset, whence, num_bytes_to_read) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.readToStream && bindings.StubBindings(this).delegate.readToStream(source, offset, whence, num_bytes_to_read);
  }
  FileStub.prototype.writeFromStream = function(sink, offset, whence) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.writeFromStream && bindings.StubBindings(this).delegate.writeFromStream(sink, offset, whence);
  }
  FileStub.prototype.tell = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.tell && bindings.StubBindings(this).delegate.tell();
  }
  FileStub.prototype.seek = function(offset, whence) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.seek && bindings.StubBindings(this).delegate.seek(offset, whence);
  }
  FileStub.prototype.stat = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stat && bindings.StubBindings(this).delegate.stat();
  }
  FileStub.prototype.truncate = function(size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.truncate && bindings.StubBindings(this).delegate.truncate(size);
  }
  FileStub.prototype.touch = function(atime, mtime) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.touch && bindings.StubBindings(this).delegate.touch(atime, mtime);
  }
  FileStub.prototype.dup = function(file) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.dup && bindings.StubBindings(this).delegate.dup(connection.bindHandleToStub(file, File));
  }
  FileStub.prototype.reopen = function(file, open_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.reopen && bindings.StubBindings(this).delegate.reopen(connection.bindHandleToStub(file, File), open_flags);
  }
  FileStub.prototype.asBuffer = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.asBuffer && bindings.StubBindings(this).delegate.asBuffer();
  }
  FileStub.prototype.ioctl = function(request, in_values) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.ioctl && bindings.StubBindings(this).delegate.ioctl(request, in_values);
  }

  FileStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FileStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFile_Close_Name:
      var params = reader.decodeStruct(File_Close_Params);
      return this.close().then(function(response) {
        var responseParams =
            new File_Close_ResponseParams();
        responseParams.err = response.err;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Close_Name,
            codec.align(File_Close_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Close_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Read_Name:
      var params = reader.decodeStruct(File_Read_Params);
      return this.read(params.num_bytes_to_read, params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_Read_ResponseParams();
        responseParams.error = response.error;
        responseParams.bytes_read = response.bytes_read;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Read_Name,
            codec.align(File_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Write_Name:
      var params = reader.decodeStruct(File_Write_Params);
      return this.write(params.bytes_to_write, params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_Write_ResponseParams();
        responseParams.error = response.error;
        responseParams.num_bytes_written = response.num_bytes_written;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Write_Name,
            codec.align(File_Write_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Write_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_ReadToStream_Name:
      var params = reader.decodeStruct(File_ReadToStream_Params);
      return this.readToStream(params.source, params.offset, params.whence, params.num_bytes_to_read).then(function(response) {
        var responseParams =
            new File_ReadToStream_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_ReadToStream_Name,
            codec.align(File_ReadToStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_ReadToStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_WriteFromStream_Name:
      var params = reader.decodeStruct(File_WriteFromStream_Params);
      return this.writeFromStream(params.sink, params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_WriteFromStream_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_WriteFromStream_Name,
            codec.align(File_WriteFromStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_WriteFromStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Tell_Name:
      var params = reader.decodeStruct(File_Tell_Params);
      return this.tell().then(function(response) {
        var responseParams =
            new File_Tell_ResponseParams();
        responseParams.error = response.error;
        responseParams.position = response.position;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Tell_Name,
            codec.align(File_Tell_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Tell_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Seek_Name:
      var params = reader.decodeStruct(File_Seek_Params);
      return this.seek(params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_Seek_ResponseParams();
        responseParams.error = response.error;
        responseParams.position = response.position;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Seek_Name,
            codec.align(File_Seek_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Seek_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Stat_Name:
      var params = reader.decodeStruct(File_Stat_Params);
      return this.stat().then(function(response) {
        var responseParams =
            new File_Stat_ResponseParams();
        responseParams.error = response.error;
        responseParams.file_information = response.file_information;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Stat_Name,
            codec.align(File_Stat_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Stat_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Truncate_Name:
      var params = reader.decodeStruct(File_Truncate_Params);
      return this.truncate(params.size).then(function(response) {
        var responseParams =
            new File_Truncate_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Truncate_Name,
            codec.align(File_Truncate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Truncate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Touch_Name:
      var params = reader.decodeStruct(File_Touch_Params);
      return this.touch(params.atime, params.mtime).then(function(response) {
        var responseParams =
            new File_Touch_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Touch_Name,
            codec.align(File_Touch_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Touch_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Dup_Name:
      var params = reader.decodeStruct(File_Dup_Params);
      return this.dup(params.file).then(function(response) {
        var responseParams =
            new File_Dup_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Dup_Name,
            codec.align(File_Dup_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Dup_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Reopen_Name:
      var params = reader.decodeStruct(File_Reopen_Params);
      return this.reopen(params.file, params.open_flags).then(function(response) {
        var responseParams =
            new File_Reopen_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Reopen_Name,
            codec.align(File_Reopen_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Reopen_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_AsBuffer_Name:
      var params = reader.decodeStruct(File_AsBuffer_Params);
      return this.asBuffer().then(function(response) {
        var responseParams =
            new File_AsBuffer_ResponseParams();
        responseParams.error = response.error;
        responseParams.buffer = response.buffer;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_AsBuffer_Name,
            codec.align(File_AsBuffer_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_AsBuffer_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFile_Ioctl_Name:
      var params = reader.decodeStruct(File_Ioctl_Params);
      return this.ioctl(params.request, params.in_values).then(function(response) {
        var responseParams =
            new File_Ioctl_ResponseParams();
        responseParams.error = response.error;
        responseParams.out_values = response.out_values;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFile_Ioctl_Name,
            codec.align(File_Ioctl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Ioctl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFileRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFile_Close_Name:
        if (message.expectsResponse())
          paramsClass = File_Close_Params;
      break;
      case kFile_Read_Name:
        if (message.expectsResponse())
          paramsClass = File_Read_Params;
      break;
      case kFile_Write_Name:
        if (message.expectsResponse())
          paramsClass = File_Write_Params;
      break;
      case kFile_ReadToStream_Name:
        if (message.expectsResponse())
          paramsClass = File_ReadToStream_Params;
      break;
      case kFile_WriteFromStream_Name:
        if (message.expectsResponse())
          paramsClass = File_WriteFromStream_Params;
      break;
      case kFile_Tell_Name:
        if (message.expectsResponse())
          paramsClass = File_Tell_Params;
      break;
      case kFile_Seek_Name:
        if (message.expectsResponse())
          paramsClass = File_Seek_Params;
      break;
      case kFile_Stat_Name:
        if (message.expectsResponse())
          paramsClass = File_Stat_Params;
      break;
      case kFile_Truncate_Name:
        if (message.expectsResponse())
          paramsClass = File_Truncate_Params;
      break;
      case kFile_Touch_Name:
        if (message.expectsResponse())
          paramsClass = File_Touch_Params;
      break;
      case kFile_Dup_Name:
        if (message.expectsResponse())
          paramsClass = File_Dup_Params;
      break;
      case kFile_Reopen_Name:
        if (message.expectsResponse())
          paramsClass = File_Reopen_Params;
      break;
      case kFile_AsBuffer_Name:
        if (message.expectsResponse())
          paramsClass = File_AsBuffer_Params;
      break;
      case kFile_Ioctl_Name:
        if (message.expectsResponse())
          paramsClass = File_Ioctl_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFileResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFile_Close_Name:
        if (message.isResponse())
          paramsClass = File_Close_ResponseParams;
        break;
      case kFile_Read_Name:
        if (message.isResponse())
          paramsClass = File_Read_ResponseParams;
        break;
      case kFile_Write_Name:
        if (message.isResponse())
          paramsClass = File_Write_ResponseParams;
        break;
      case kFile_ReadToStream_Name:
        if (message.isResponse())
          paramsClass = File_ReadToStream_ResponseParams;
        break;
      case kFile_WriteFromStream_Name:
        if (message.isResponse())
          paramsClass = File_WriteFromStream_ResponseParams;
        break;
      case kFile_Tell_Name:
        if (message.isResponse())
          paramsClass = File_Tell_ResponseParams;
        break;
      case kFile_Seek_Name:
        if (message.isResponse())
          paramsClass = File_Seek_ResponseParams;
        break;
      case kFile_Stat_Name:
        if (message.isResponse())
          paramsClass = File_Stat_ResponseParams;
        break;
      case kFile_Truncate_Name:
        if (message.isResponse())
          paramsClass = File_Truncate_ResponseParams;
        break;
      case kFile_Touch_Name:
        if (message.isResponse())
          paramsClass = File_Touch_ResponseParams;
        break;
      case kFile_Dup_Name:
        if (message.isResponse())
          paramsClass = File_Dup_ResponseParams;
        break;
      case kFile_Reopen_Name:
        if (message.isResponse())
          paramsClass = File_Reopen_ResponseParams;
        break;
      case kFile_AsBuffer_Name:
        if (message.isResponse())
          paramsClass = File_AsBuffer_ResponseParams;
        break;
      case kFile_Ioctl_Name:
        if (message.isResponse())
          paramsClass = File_Ioctl_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var File = {
    name: null,
    proxyClass: FileProxy,
    stubClass: FileStub,
    validateRequest: validateFileRequest,
    validateResponse: validateFileResponse,
  };
  FileStub.prototype.validator = validateFileRequest;
  FileProxy.prototype.validator = validateFileResponse;


  var exports = {};
  exports.File = File;


  return exports;
});
