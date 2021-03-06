// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/files/interfaces/directory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/files/interfaces/file.mojom",
    "mojo/services/files/interfaces/types.mojom",
], function(bindings, codec, connection, core, validator, file$, types$) {

  function Directory_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Read_Params.prototype.initDefaults_ = function() {
  };
  Directory_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Read_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Read_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Read_Params.encodedSize = codec.kStructHeaderSize + 0;

  Directory_Read_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Directory_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Read_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function Directory_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.directory_contents = null;
  };
  Directory_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Read_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Read_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Directory_Read_ResponseParams.directory_contents
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(types$.DirectoryEntry), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.directory_contents = decoder.decodeArrayPointer(new codec.PointerTo(types$.DirectoryEntry));
    return val;
  };

  Directory_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(types$.DirectoryEntry), val.directory_contents);
  };

  function Directory_Stat_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Stat_Params.prototype.initDefaults_ = function() {
  };
  Directory_Stat_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Stat_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Stat_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Stat_Params.encodedSize = codec.kStructHeaderSize + 0;

  Directory_Stat_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Stat_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Directory_Stat_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Stat_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function Directory_Stat_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Stat_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.file_information = null;
  };
  Directory_Stat_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Stat_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Stat_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Directory_Stat_ResponseParams.file_information
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.FileInformation, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Stat_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Stat_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Stat_ResponseParams();
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

  Directory_Stat_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Stat_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(types$.FileInformation, val.file_information);
  };

  function Directory_Touch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Touch_Params.prototype.initDefaults_ = function() {
    this.atime = null;
    this.mtime = null;
  };
  Directory_Touch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Touch_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Touch_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Touch_Params.atime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, types$.TimespecOrNow, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Touch_Params.mtime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.TimespecOrNow, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Touch_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Touch_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Touch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.atime = decoder.decodeStructPointer(types$.TimespecOrNow);
    val.mtime = decoder.decodeStructPointer(types$.TimespecOrNow);
    return val;
  };

  Directory_Touch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Touch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(types$.TimespecOrNow, val.atime);
    encoder.encodeStructPointer(types$.TimespecOrNow, val.mtime);
  };

  function Directory_Touch_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Touch_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Touch_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Touch_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Touch_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Touch_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Touch_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Touch_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Touch_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Touch_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Directory_OpenFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.file = null;
    this.open_flags = 0;
  };
  Directory_OpenFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFile_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFile_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFile_Params.file
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.file = decoder.decodeStruct(codec.Handle);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Directory_OpenFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Handle, val.file);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
  };

  function Directory_OpenFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_OpenFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFile_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFile_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Directory_OpenDirectory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenDirectory_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.directory = null;
    this.open_flags = 0;
  };
  Directory_OpenDirectory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenDirectory_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenDirectory_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenDirectory_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenDirectory_Params.directory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenDirectory_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenDirectory_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenDirectory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.directory = decoder.decodeStruct(codec.Handle);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Directory_OpenDirectory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenDirectory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Handle, val.directory);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
  };

  function Directory_OpenDirectory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenDirectory_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_OpenDirectory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenDirectory_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenDirectory_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenDirectory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenDirectory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenDirectory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenDirectory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenDirectory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Directory_Rename_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Rename_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.new_path = null;
  };
  Directory_Rename_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Rename_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Rename_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Rename_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Rename_Params.new_path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Rename_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Rename_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Rename_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.new_path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_Rename_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Rename_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.String, val.new_path);
  };

  function Directory_Rename_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Rename_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Rename_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Rename_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Rename_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Rename_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Rename_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Rename_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Rename_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Rename_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Directory_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Delete_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.delete_flags = 0;
  };
  Directory_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Delete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Delete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Delete_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Delete_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.delete_flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.delete_flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Directory_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Delete_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Delete_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Delete_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Delete_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kDirectory_Read_Name = 0;
  var kDirectory_Stat_Name = 1;
  var kDirectory_Touch_Name = 2;
  var kDirectory_OpenFile_Name = 3;
  var kDirectory_OpenDirectory_Name = 4;
  var kDirectory_Rename_Name = 5;
  var kDirectory_Delete_Name = 6;

  function DirectoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DirectoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DirectoryProxy.prototype.read = function() {
    var params = new Directory_Read_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Read_Name,
          codec.align(Directory_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Read_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.stat = function() {
    var params = new Directory_Stat_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Stat_Name,
          codec.align(Directory_Stat_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Stat_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Stat_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.touch = function(atime, mtime) {
    var params = new Directory_Touch_Params();
    params.atime = atime;
    params.mtime = mtime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Touch_Name,
          codec.align(Directory_Touch_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Touch_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Touch_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.openFile = function(path, file, open_flags) {
    var params = new Directory_OpenFile_Params();
    params.path = path;
    params.file = core.isHandle(file) ? file : connection.bindProxy(file, file$.File);
    params.open_flags = open_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_OpenFile_Name,
          codec.align(Directory_OpenFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFile_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.openDirectory = function(path, directory, open_flags) {
    var params = new Directory_OpenDirectory_Params();
    params.path = path;
    params.directory = core.isHandle(directory) ? directory : connection.bindProxy(directory, Directory);
    params.open_flags = open_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_OpenDirectory_Name,
          codec.align(Directory_OpenDirectory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenDirectory_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenDirectory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.rename = function(path, new_path) {
    var params = new Directory_Rename_Params();
    params.path = path;
    params.new_path = new_path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Rename_Name,
          codec.align(Directory_Rename_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Rename_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Rename_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.delete = function(path, delete_flags) {
    var params = new Directory_Delete_Params();
    params.path = path;
    params.delete_flags = delete_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Delete_Name,
          codec.align(Directory_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Delete_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DirectoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DirectoryStub.prototype = Object.create(bindings.StubBase.prototype);
  DirectoryStub.prototype.read = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.read && bindings.StubBindings(this).delegate.read();
  }
  DirectoryStub.prototype.stat = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stat && bindings.StubBindings(this).delegate.stat();
  }
  DirectoryStub.prototype.touch = function(atime, mtime) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.touch && bindings.StubBindings(this).delegate.touch(atime, mtime);
  }
  DirectoryStub.prototype.openFile = function(path, file, open_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openFile && bindings.StubBindings(this).delegate.openFile(path, connection.bindHandleToStub(file, file$.File), open_flags);
  }
  DirectoryStub.prototype.openDirectory = function(path, directory, open_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openDirectory && bindings.StubBindings(this).delegate.openDirectory(path, connection.bindHandleToStub(directory, Directory), open_flags);
  }
  DirectoryStub.prototype.rename = function(path, new_path) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.rename && bindings.StubBindings(this).delegate.rename(path, new_path);
  }
  DirectoryStub.prototype.delete = function(path, delete_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.delete && bindings.StubBindings(this).delegate.delete(path, delete_flags);
  }

  DirectoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  DirectoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDirectory_Read_Name:
      var params = reader.decodeStruct(Directory_Read_Params);
      return this.read().then(function(response) {
        var responseParams =
            new Directory_Read_ResponseParams();
        responseParams.error = response.error;
        responseParams.directory_contents = response.directory_contents;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Read_Name,
            codec.align(Directory_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Stat_Name:
      var params = reader.decodeStruct(Directory_Stat_Params);
      return this.stat().then(function(response) {
        var responseParams =
            new Directory_Stat_ResponseParams();
        responseParams.error = response.error;
        responseParams.file_information = response.file_information;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Stat_Name,
            codec.align(Directory_Stat_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Stat_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Touch_Name:
      var params = reader.decodeStruct(Directory_Touch_Params);
      return this.touch(params.atime, params.mtime).then(function(response) {
        var responseParams =
            new Directory_Touch_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Touch_Name,
            codec.align(Directory_Touch_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Touch_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_OpenFile_Name:
      var params = reader.decodeStruct(Directory_OpenFile_Params);
      return this.openFile(params.path, params.file, params.open_flags).then(function(response) {
        var responseParams =
            new Directory_OpenFile_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_OpenFile_Name,
            codec.align(Directory_OpenFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_OpenDirectory_Name:
      var params = reader.decodeStruct(Directory_OpenDirectory_Params);
      return this.openDirectory(params.path, params.directory, params.open_flags).then(function(response) {
        var responseParams =
            new Directory_OpenDirectory_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_OpenDirectory_Name,
            codec.align(Directory_OpenDirectory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenDirectory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Rename_Name:
      var params = reader.decodeStruct(Directory_Rename_Params);
      return this.rename(params.path, params.new_path).then(function(response) {
        var responseParams =
            new Directory_Rename_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Rename_Name,
            codec.align(Directory_Rename_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Rename_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Delete_Name:
      var params = reader.decodeStruct(Directory_Delete_Params);
      return this.delete(params.path, params.delete_flags).then(function(response) {
        var responseParams =
            new Directory_Delete_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Delete_Name,
            codec.align(Directory_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDirectoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDirectory_Read_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Read_Params;
      break;
      case kDirectory_Stat_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Stat_Params;
      break;
      case kDirectory_Touch_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Touch_Params;
      break;
      case kDirectory_OpenFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFile_Params;
      break;
      case kDirectory_OpenDirectory_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenDirectory_Params;
      break;
      case kDirectory_Rename_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Rename_Params;
      break;
      case kDirectory_Delete_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Delete_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDirectoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDirectory_Read_Name:
        if (message.isResponse())
          paramsClass = Directory_Read_ResponseParams;
        break;
      case kDirectory_Stat_Name:
        if (message.isResponse())
          paramsClass = Directory_Stat_ResponseParams;
        break;
      case kDirectory_Touch_Name:
        if (message.isResponse())
          paramsClass = Directory_Touch_ResponseParams;
        break;
      case kDirectory_OpenFile_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFile_ResponseParams;
        break;
      case kDirectory_OpenDirectory_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenDirectory_ResponseParams;
        break;
      case kDirectory_Rename_Name:
        if (message.isResponse())
          paramsClass = Directory_Rename_ResponseParams;
        break;
      case kDirectory_Delete_Name:
        if (message.isResponse())
          paramsClass = Directory_Delete_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Directory = {
    name: null,
    proxyClass: DirectoryProxy,
    stubClass: DirectoryStub,
    validateRequest: validateDirectoryRequest,
    validateResponse: validateDirectoryResponse,
  };
  DirectoryStub.prototype.validator = validateDirectoryRequest;
  DirectoryProxy.prototype.validator = validateDirectoryResponse;


  var exports = {};
  exports.Directory = Directory;


  return exports;
});
