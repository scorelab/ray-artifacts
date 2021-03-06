// WARNING: DO NOT EDIT. This file was generated by a program.
// See $MOJO_SDK/tools/bindings/mojom_bindings_generator.py.

library sample_import2_mojom;
import 'dart:collection';
import 'dart:convert';
import 'dart:io';
import 'dart:typed_data';
import 'package:mojo/bindings.dart' as bindings;
import 'package:mojo/mojo/bindings/types/mojom_types.mojom.dart' as mojom_types;

import 'package:_mojo_for_test_only/imported/sample_import.mojom.dart' as sample_import_mojom;

class Color extends bindings.MojoEnum {
  static const Color red = const Color._(0);
  static const Color black = const Color._(1);

  const Color._(int v) : super(v);

  static const Map<String, Color> valuesMap = const {
    "red": red,
    "black": black,
  };
  static const List<Color> values = const [
    red,
    black,
  ];

  static Color valueOf(String name) => valuesMap[name];

  factory Color(int v) {
    switch (v) {
      case 0:
        return Color.red;
      case 1:
        return Color.black;
      default:
        return null;
    }
  }

  static Color decode(bindings.Decoder decoder0, int offset) {
    int v = decoder0.decodeUint32(offset);
    Color result = new Color(v);
    if (result == null) {
      throw new bindings.MojoCodecError(
          'Bad value $v for enum Color.');
    }
    return result;
  }

  String toString() {
    switch(this) {
      case red:
        return 'Color.red';
      case black:
        return 'Color.black';
      default:
        return null;
    }
  }

  int toJson() => mojoEnumValue;
}



class Size extends bindings.Struct {
  static const List<bindings.StructDataHeader> kVersions = const [
    const bindings.StructDataHeader(16, 0)
  ];
  int width = 0;
  int height = 0;

  Size() : super(kVersions.last.size);

  Size.init(
    int this.width, 
    int this.height
  ) : super(kVersions.last.size);

  static Size deserialize(bindings.Message message) =>
      bindings.Struct.deserialize(decode, message);

  static Size decode(bindings.Decoder decoder0) {
    if (decoder0 == null) {
      return null;
    }
    Size result = new Size();

    var mainDataHeader = bindings.Struct.checkVersion(decoder0, kVersions);
    if (mainDataHeader.version >= 0) {
      
      result.width = decoder0.decodeInt32(8);
    }
    if (mainDataHeader.version >= 0) {
      
      result.height = decoder0.decodeInt32(12);
    }
    return result;
  }

  void encode(bindings.Encoder encoder) {
    var encoder0 = encoder.getStructEncoderAtOffset(kVersions.last);
    const String structName = "Size";
    String fieldName;
    try {
      fieldName = "width";
      encoder0.encodeInt32(width, 8);
      fieldName = "height";
      encoder0.encodeInt32(height, 12);
    } on bindings.MojoCodecError catch(e) {
      bindings.Struct.fixErrorMessage(e, fieldName, structName);
      rethrow;
    }
  }

  String toString() {
    return "Size("
           "width: $width" ", "
           "height: $height" ")";
  }

  Map toJson() {
    Map map = new Map();
    map["width"] = width;
    map["height"] = height;
    return map;
  }
}


class Thing extends bindings.Struct {
  static const List<bindings.StructDataHeader> kVersions = const [
    const bindings.StructDataHeader(32, 0)
  ];
  sample_import_mojom.Shape shape = new sample_import_mojom.Shape(1);
  Color color = new Color(1);
  sample_import_mojom.Point location = null;
  Size size = null;

  Thing() : super(kVersions.last.size);

  Thing.init(
    sample_import_mojom.Shape this.shape, 
    Color this.color, 
    sample_import_mojom.Point this.location, 
    Size this.size
  ) : super(kVersions.last.size);

  static Thing deserialize(bindings.Message message) =>
      bindings.Struct.deserialize(decode, message);

  static Thing decode(bindings.Decoder decoder0) {
    if (decoder0 == null) {
      return null;
    }
    Thing result = new Thing();

    var mainDataHeader = bindings.Struct.checkVersion(decoder0, kVersions);
    if (mainDataHeader.version >= 0) {
      
        result.shape = sample_import_mojom.Shape.decode(decoder0, 8);
        if (result.shape == null) {
          throw new bindings.MojoCodecError(
            'Trying to decode null union for non-nullable sample_import_mojom.Shape.');
        }
    }
    if (mainDataHeader.version >= 0) {
      
        result.color = Color.decode(decoder0, 12);
        if (result.color == null) {
          throw new bindings.MojoCodecError(
            'Trying to decode null union for non-nullable Color.');
        }
    }
    if (mainDataHeader.version >= 0) {
      
      var decoder1 = decoder0.decodePointer(16, false);
      result.location = sample_import_mojom.Point.decode(decoder1);
    }
    if (mainDataHeader.version >= 0) {
      
      var decoder1 = decoder0.decodePointer(24, false);
      result.size = Size.decode(decoder1);
    }
    return result;
  }

  void encode(bindings.Encoder encoder) {
    var encoder0 = encoder.getStructEncoderAtOffset(kVersions.last);
    const String structName = "Thing";
    String fieldName;
    try {
      fieldName = "shape";
      encoder0.encodeEnum(shape, 8);
      fieldName = "color";
      encoder0.encodeEnum(color, 12);
      fieldName = "location";
      encoder0.encodeStruct(location, 16, false);
      fieldName = "size";
      encoder0.encodeStruct(size, 24, false);
    } on bindings.MojoCodecError catch(e) {
      bindings.Struct.fixErrorMessage(e, fieldName, structName);
      rethrow;
    }
  }

  String toString() {
    return "Thing("
           "shape: $shape" ", "
           "color: $color" ", "
           "location: $location" ", "
           "size: $size" ")";
  }

  Map toJson() {
    Map map = new Map();
    map["shape"] = shape;
    map["color"] = color;
    map["location"] = location;
    map["size"] = size;
    return map;
  }
}


mojom_types.RuntimeTypeInfo getRuntimeTypeInfo() => _runtimeTypeInfo ??
    _initRuntimeTypeInfo();

Map<String, mojom_types.UserDefinedType> getAllMojomTypeDefinitions() {
  return getRuntimeTypeInfo().typeMap;
}

var _runtimeTypeInfo;
mojom_types.RuntimeTypeInfo  _initRuntimeTypeInfo() {
  // serializedRuntimeTypeInfo contains the bytes of the Mojo serialization of
  // a mojom_types.RuntimeTypeInfo struct describing the Mojom types in this
  // file. The string contains the base64 encoding of the gzip-compressed bytes.
  var serializedRuntimeTypeInfo = "H4sIAAAJbogC/8yXT2/TMBTAnbVlRYMRYLAyEPS4C/XEqeLEKBWVNqGJVUi7MGWpWYyaOkqCEPsE+wh8PI478g3AmZ9F+hInbdWGWXp6Sp3Yfr/n96ctooYNeg80/l3rJtL4vUvQbSm11LxedwD6hZRtKcOTo/7pQf/kNfcDEcZs1OmJsQjJczn3OHf+mF+wou+HHp+cky7sr8+1mzqnlZyjNv18eSvfnivQb8j00PZ0Qf+Bgd/T466UhhRlnbJtUwoyO7O//u6zlE9SqCd8RgPXFyGPL2jo/HjpipDRKHSpL74KGnw7G3OX8knMwi+OyyJ6xicjiSSiMYviiEaOH4zZqdr4VSf5yFf7rqX2bVnT3NqkeMzKZ2D4fgP89bH/7vp5R8qDDJ+Ons5w2oTzr5pTGQ9rSTy0398e7vcOpH4mZSvLQ09neNyriEcb5YHf+hy15cTNHSl1KSrqCXkEbFA6yNif3J31/xA3tjVtdxedq0FmGyZuJMUtHZ+m+/Odj2Ivh89DyOGr5jMvh/oCHKwCDkleSFK7x/i5F2c5bFXEQdcZXDcJuj+meBqsL7cOqSqZU4dgAnPariieduEOaA6/IJ5+Qj65qpvjq5HOP3reWm18RZ4T5OWf5Pl+hfmXoP317xn/HqsDm/sn9YIN97JpuJeYS2Lr7ev63Rvuf3h/2C/t89Q+s/pxz1pNftB+dKEvw358UlF+MPmxZegfy/rnWf1nperBhl7/X1tRuk+Z//BoLuC/tQL/2bDmWLhOzMUE+2/nhvnvSMiVC7mqN+blai/AtVbAVfddEfRdmOvTiupBGVfcH5b9byyqw+m68zcAAP//J3hIdxgPAAA=";

  // Deserialize RuntimeTypeInfo
  var bytes = BASE64.decode(serializedRuntimeTypeInfo);
  var unzippedBytes = new ZLibDecoder().convert(bytes);
  var bdata = new ByteData.view(unzippedBytes.buffer);
  var message = new bindings.Message(bdata, null, unzippedBytes.length, 0);
  _runtimeTypeInfo = mojom_types.RuntimeTypeInfo.deserialize(message);
  sample_import_mojom.getAllMojomTypeDefinitions()
      .forEach((String s, mojom_types.UserDefinedType udt) {
          _runtimeTypeInfo.typeMap[s] = udt;
      });

  return _runtimeTypeInfo;
}
