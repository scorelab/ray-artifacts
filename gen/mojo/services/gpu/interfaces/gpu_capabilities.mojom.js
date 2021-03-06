// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/gpu/interfaces/gpu_capabilities.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function GpuShaderPrecision(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuShaderPrecision.prototype.initDefaults_ = function() {
    this.min_range = 0;
    this.max_range = 0;
    this.precision = 0;
  };
  GpuShaderPrecision.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuShaderPrecision.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuShaderPrecision.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  GpuShaderPrecision.encodedSize = codec.kStructHeaderSize + 16;

  GpuShaderPrecision.decode = function(decoder) {
    var packed;
    var val = new GpuShaderPrecision();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.min_range = decoder.decodeStruct(codec.Int32);
    val.max_range = decoder.decodeStruct(codec.Int32);
    val.precision = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuShaderPrecision.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuShaderPrecision.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.min_range);
    encoder.encodeStruct(codec.Int32, val.max_range);
    encoder.encodeStruct(codec.Int32, val.precision);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function GpuPerStagePrecisions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuPerStagePrecisions.prototype.initDefaults_ = function() {
    this.low_int = null;
    this.medium_int = null;
    this.high_int = null;
    this.low_float = null;
    this.medium_float = null;
    this.high_float = null;
  };
  GpuPerStagePrecisions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuPerStagePrecisions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuPerStagePrecisions.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuPerStagePrecisions.low_int
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, GpuShaderPrecision, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuPerStagePrecisions.medium_int
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GpuShaderPrecision, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuPerStagePrecisions.high_int
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, GpuShaderPrecision, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuPerStagePrecisions.low_float
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, GpuShaderPrecision, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuPerStagePrecisions.medium_float
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, GpuShaderPrecision, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuPerStagePrecisions.high_float
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, GpuShaderPrecision, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuPerStagePrecisions.encodedSize = codec.kStructHeaderSize + 48;

  GpuPerStagePrecisions.decode = function(decoder) {
    var packed;
    var val = new GpuPerStagePrecisions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.low_int = decoder.decodeStructPointer(GpuShaderPrecision);
    val.medium_int = decoder.decodeStructPointer(GpuShaderPrecision);
    val.high_int = decoder.decodeStructPointer(GpuShaderPrecision);
    val.low_float = decoder.decodeStructPointer(GpuShaderPrecision);
    val.medium_float = decoder.decodeStructPointer(GpuShaderPrecision);
    val.high_float = decoder.decodeStructPointer(GpuShaderPrecision);
    return val;
  };

  GpuPerStagePrecisions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuPerStagePrecisions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(GpuShaderPrecision, val.low_int);
    encoder.encodeStructPointer(GpuShaderPrecision, val.medium_int);
    encoder.encodeStructPointer(GpuShaderPrecision, val.high_int);
    encoder.encodeStructPointer(GpuShaderPrecision, val.low_float);
    encoder.encodeStructPointer(GpuShaderPrecision, val.medium_float);
    encoder.encodeStructPointer(GpuShaderPrecision, val.high_float);
  };

  function GpuCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuCapabilities.prototype.initDefaults_ = function() {
    this.vertex_shader_precisions = null;
    this.fragment_shader_precisions = null;
    this.max_combined_texture_image_units = 0;
    this.max_cube_map_texture_size = 0;
    this.max_fragment_uniform_vectors = 0;
    this.max_renderbuffer_size = 0;
    this.max_texture_image_units = 0;
    this.max_texture_size = 0;
    this.max_varying_vectors = 0;
    this.max_vertex_attribs = 0;
    this.max_vertex_texture_image_units = 0;
    this.max_vertex_uniform_vectors = 0;
    this.num_compressed_texture_formats = 0;
    this.num_shader_binary_formats = 0;
    this.bind_generates_resource_chromium = 0;
    this.post_sub_buffer = false;
    this.egl_image_external = false;
    this.texture_format_bgra8888 = false;
    this.texture_format_etc1 = false;
    this.texture_format_etc1_npot = false;
    this.texture_rectangle = false;
    this.iosurface = false;
    this.texture_usage = false;
    this.texture_storage = false;
    this.discard_framebuffer = false;
    this.sync_query = false;
    this.image = false;
    this.future_sync_points = false;
    this.blend_equation_advanced = false;
    this.blend_equation_advanced_coherent = false;
  };
  GpuCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuCapabilities.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuCapabilities.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuCapabilities.vertex_shader_precisions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, GpuPerStagePrecisions, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuCapabilities.fragment_shader_precisions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GpuPerStagePrecisions, false);
    if (err !== validator.validationError.NONE)
        return err;





























    return validator.validationError.NONE;
  };

  GpuCapabilities.encodedSize = codec.kStructHeaderSize + 72;

  GpuCapabilities.decode = function(decoder) {
    var packed;
    var val = new GpuCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vertex_shader_precisions = decoder.decodeStructPointer(GpuPerStagePrecisions);
    val.fragment_shader_precisions = decoder.decodeStructPointer(GpuPerStagePrecisions);
    val.max_combined_texture_image_units = decoder.decodeStruct(codec.Int32);
    val.max_cube_map_texture_size = decoder.decodeStruct(codec.Int32);
    val.max_fragment_uniform_vectors = decoder.decodeStruct(codec.Int32);
    val.max_renderbuffer_size = decoder.decodeStruct(codec.Int32);
    val.max_texture_image_units = decoder.decodeStruct(codec.Int32);
    val.max_texture_size = decoder.decodeStruct(codec.Int32);
    val.max_varying_vectors = decoder.decodeStruct(codec.Int32);
    val.max_vertex_attribs = decoder.decodeStruct(codec.Int32);
    val.max_vertex_texture_image_units = decoder.decodeStruct(codec.Int32);
    val.max_vertex_uniform_vectors = decoder.decodeStruct(codec.Int32);
    val.num_compressed_texture_formats = decoder.decodeStruct(codec.Int32);
    val.num_shader_binary_formats = decoder.decodeStruct(codec.Int32);
    val.bind_generates_resource_chromium = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.post_sub_buffer = (packed >> 0) & 1 ? true : false;
    val.egl_image_external = (packed >> 1) & 1 ? true : false;
    val.texture_format_bgra8888 = (packed >> 2) & 1 ? true : false;
    val.texture_format_etc1 = (packed >> 3) & 1 ? true : false;
    val.texture_format_etc1_npot = (packed >> 4) & 1 ? true : false;
    val.texture_rectangle = (packed >> 5) & 1 ? true : false;
    val.iosurface = (packed >> 6) & 1 ? true : false;
    val.texture_usage = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.texture_storage = (packed >> 0) & 1 ? true : false;
    val.discard_framebuffer = (packed >> 1) & 1 ? true : false;
    val.sync_query = (packed >> 2) & 1 ? true : false;
    val.image = (packed >> 3) & 1 ? true : false;
    val.future_sync_points = (packed >> 4) & 1 ? true : false;
    val.blend_equation_advanced = (packed >> 5) & 1 ? true : false;
    val.blend_equation_advanced_coherent = (packed >> 6) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuCapabilities.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(GpuPerStagePrecisions, val.vertex_shader_precisions);
    encoder.encodeStructPointer(GpuPerStagePrecisions, val.fragment_shader_precisions);
    encoder.encodeStruct(codec.Int32, val.max_combined_texture_image_units);
    encoder.encodeStruct(codec.Int32, val.max_cube_map_texture_size);
    encoder.encodeStruct(codec.Int32, val.max_fragment_uniform_vectors);
    encoder.encodeStruct(codec.Int32, val.max_renderbuffer_size);
    encoder.encodeStruct(codec.Int32, val.max_texture_image_units);
    encoder.encodeStruct(codec.Int32, val.max_texture_size);
    encoder.encodeStruct(codec.Int32, val.max_varying_vectors);
    encoder.encodeStruct(codec.Int32, val.max_vertex_attribs);
    encoder.encodeStruct(codec.Int32, val.max_vertex_texture_image_units);
    encoder.encodeStruct(codec.Int32, val.max_vertex_uniform_vectors);
    encoder.encodeStruct(codec.Int32, val.num_compressed_texture_formats);
    encoder.encodeStruct(codec.Int32, val.num_shader_binary_formats);
    encoder.encodeStruct(codec.Int32, val.bind_generates_resource_chromium);
    packed = 0;
    packed |= (val.post_sub_buffer & 1) << 0
    packed |= (val.egl_image_external & 1) << 1
    packed |= (val.texture_format_bgra8888 & 1) << 2
    packed |= (val.texture_format_etc1 & 1) << 3
    packed |= (val.texture_format_etc1_npot & 1) << 4
    packed |= (val.texture_rectangle & 1) << 5
    packed |= (val.iosurface & 1) << 6
    packed |= (val.texture_usage & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.texture_storage & 1) << 0
    packed |= (val.discard_framebuffer & 1) << 1
    packed |= (val.sync_query & 1) << 2
    packed |= (val.image & 1) << 3
    packed |= (val.future_sync_points & 1) << 4
    packed |= (val.blend_equation_advanced & 1) << 5
    packed |= (val.blend_equation_advanced_coherent & 1) << 6
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
  };


  var exports = {};
  exports.GpuShaderPrecision = GpuShaderPrecision;
  exports.GpuPerStagePrecisions = GpuPerStagePrecisions;
  exports.GpuCapabilities = GpuCapabilities;


  return exports;
});
