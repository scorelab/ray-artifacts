// WARNING: DO NOT EDIT. This file was generated by a program.
// See $MOJO_SDK/tools/bindings/mojom_bindings_generator.py.

library test_enums_mojom;
import 'dart:collection';
import 'dart:convert';
import 'dart:io';
import 'dart:typed_data';
import 'package:mojo/bindings.dart' as bindings;
import 'package:mojo/mojo/bindings/types/mojom_types.mojom.dart' as mojom_types;


class TestEnum extends bindings.MojoEnum {
  static const TestEnum test = const TestEnum._(0);
  static const TestEnum v = const TestEnum._(1);
  static const TestEnum foo = const TestEnum._(2);
  static const TestEnum bar = const TestEnum._(3);

  const TestEnum._(int v) : super(v);

  static const Map<String, TestEnum> valuesMap = const {
    "test": test,
    "v": v,
    "foo": foo,
    "bar": bar,
  };
  static const List<TestEnum> values = const [
    test,
    v,
    foo,
    bar,
  ];

  static TestEnum valueOf(String name) => valuesMap[name];

  factory TestEnum(int v) {
    switch (v) {
      case 0:
        return TestEnum.test;
      case 1:
        return TestEnum.v;
      case 2:
        return TestEnum.foo;
      case 3:
        return TestEnum.bar;
      default:
        return null;
    }
  }

  static TestEnum decode(bindings.Decoder decoder0, int offset) {
    int v = decoder0.decodeUint32(offset);
    TestEnum result = new TestEnum(v);
    if (result == null) {
      throw new bindings.MojoCodecError(
          'Bad value $v for enum TestEnum.');
    }
    return result;
  }

  String toString() {
    switch(this) {
      case test:
        return 'TestEnum.test';
      case v:
        return 'TestEnum.v';
      case foo:
        return 'TestEnum.foo';
      case bar:
        return 'TestEnum.bar';
      default:
        return null;
    }
  }

  int toJson() => mojoEnumValue;
}

class TestEnum2 extends bindings.MojoEnum {
  static const TestEnum2 test = const TestEnum2._(0);
  static const TestEnum2 v = const TestEnum2._(1);
  static const TestEnum2 foo = const TestEnum2._(2);
  static const TestEnum2 bar = const TestEnum2._(3);

  const TestEnum2._(int v) : super(v);

  static const Map<String, TestEnum2> valuesMap = const {
    "test": test,
    "v": v,
    "foo": foo,
    "bar": bar,
  };
  static const List<TestEnum2> values = const [
    test,
    v,
    foo,
    bar,
  ];

  static TestEnum2 valueOf(String name) => valuesMap[name];

  factory TestEnum2(int v) {
    switch (v) {
      case 0:
        return TestEnum2.test;
      case 1:
        return TestEnum2.v;
      case 2:
        return TestEnum2.foo;
      case 3:
        return TestEnum2.bar;
      default:
        return null;
    }
  }

  static TestEnum2 decode(bindings.Decoder decoder0, int offset) {
    int v = decoder0.decodeUint32(offset);
    TestEnum2 result = new TestEnum2(v);
    if (result == null) {
      throw new bindings.MojoCodecError(
          'Bad value $v for enum TestEnum2.');
    }
    return result;
  }

  String toString() {
    switch(this) {
      case test:
        return 'TestEnum2.test';
      case v:
        return 'TestEnum2.v';
      case foo:
        return 'TestEnum2.foo';
      case bar:
        return 'TestEnum2.bar';
      default:
        return null;
    }
  }

  int toJson() => mojoEnumValue;
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
  var serializedRuntimeTypeInfo = "H4sIAAAJbogC/+SVS0/CQBDHSwu+QINv45NED1zsGk7GE5rUmHiAYEPEC4Fapca2pC0H/VR+NI/cdLadRli3QGItByb5d+hm2Jn9dXd2Rwgsj/4MPTse+gXGs3HdgXGRM+8xaA+kNqpK81ZpXJj2iy17uuvJKjwUq2f6cSeg/dFxJRpXZPKw9Xxk+OOf6MvCsIV1nqP/QrsR+JZHFmFRu/B7DRSxrF91SCBa4gOoBiId29RJVzNtx/DeidN6O9VsRyeuoxE6J+n22q+GRgzL052nlqa7pG1Yj4b17BKaLng2dUjoyvQPmJdySoMK4fpSga+Kge9IP3HCQFxYZ59Z91+55bAeVblT6fsRaJvLTfZDWG5p/O7/zS2P3yi0cXxSMfFZxLnq+E7PwgafT523rzIJ80lNyEeMiU8W815XKv77IWiLz8cPYfnMJcxHnJCPFDOfq8vaOD5+CMtnPmE+UkT/7o/hUWZ4VCN4rOKZGro88C5a53IpcetZmlK/LuIBK+NGuo/o11EWd78uIBsON79hs9yyCe2nafXnA9BmBI86Zx/lZqw/R9/vJb9Bs3yWZ6w/j+JDY1g+K1Pqz98BAAD//ypocOowDAAA";

  // Deserialize RuntimeTypeInfo
  var bytes = BASE64.decode(serializedRuntimeTypeInfo);
  var unzippedBytes = new ZLibDecoder().convert(bytes);
  var bdata = new ByteData.view(unzippedBytes.buffer);
  var message = new bindings.Message(bdata, null, unzippedBytes.length, 0);
  _runtimeTypeInfo = mojom_types.RuntimeTypeInfo.deserialize(message);
  return _runtimeTypeInfo;
}
