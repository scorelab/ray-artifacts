// WARNING: DO NOT EDIT. This file was generated by a program.
// See $MOJO_SDK/tools/bindings/mojom_bindings_generator.py.

library client_mojom;
import 'dart:async';
import 'package:mojo/bindings.dart' as bindings;
import 'package:mojo/core.dart' as core;
import 'package:mojo/mojo/bindings/types/service_describer.mojom.dart' as service_describer;



class _ClientServiceDescription implements service_describer.ServiceDescription {
  void getTopLevelInterface(Function responder) {
    responder(null);
  }

  void getTypeDefinition(String typeKey, Function responder) {
    responder(null);
  }

  void getAllTypeDefinitions(Function responder) {
    responder(null);
  }
}

abstract class Client {
  static const String serviceName = "ray::Client";

  static service_describer.ServiceDescription _cachedServiceDescription;
  static service_describer.ServiceDescription get serviceDescription {
    if (_cachedServiceDescription == null) {
      _cachedServiceDescription = new _ClientServiceDescription();
    }
    return _cachedServiceDescription;
  }

  static ClientProxy connectToService(
      bindings.ServiceConnector s, String url, [String serviceName]) {
    ClientProxy p = new ClientProxy.unbound();
    String name = serviceName ?? Client.serviceName;
    if ((name == null) || name.isEmpty) {
      throw new core.MojoApiError(
          "If an interface has no ServiceName, then one must be provided.");
    }
    s.connectToService(url, p, name);
    return p;
  }
}

abstract class ClientInterface
    implements bindings.MojoInterface<Client>,
               Client {
  factory ClientInterface([Client impl]) =>
      new ClientStub.unbound(impl);

  factory ClientInterface.fromEndpoint(
      core.MojoMessagePipeEndpoint endpoint,
      [Client impl]) =>
      new ClientStub.fromEndpoint(endpoint, impl);

  factory ClientInterface.fromMock(
      Client mock) =>
      new ClientProxy.fromMock(mock);
}

abstract class ClientInterfaceRequest
    implements bindings.MojoInterface<Client>,
               Client {
  factory ClientInterfaceRequest() =>
      new ClientProxy.unbound();
}

class _ClientProxyControl
    extends bindings.ProxyMessageHandler
    implements bindings.ProxyControl<Client> {
  Client impl;

  _ClientProxyControl.fromEndpoint(
      core.MojoMessagePipeEndpoint endpoint) : super.fromEndpoint(endpoint);

  _ClientProxyControl.fromHandle(
      core.MojoHandle handle) : super.fromHandle(handle);

  _ClientProxyControl.unbound() : super.unbound();

  String get serviceName => Client.serviceName;

  void handleResponse(bindings.ServiceMessage message) {
    switch (message.header.type) {
      default:
        proxyError("Unexpected message type: ${message.header.type}");
        close(immediate: true);
        break;
    }
  }

  @override
  String toString() {
    var superString = super.toString();
    return "_ClientProxyControl($superString)";
  }
}

class ClientProxy
    extends bindings.Proxy<Client>
    implements Client,
               ClientInterface,
               ClientInterfaceRequest {
  ClientProxy.fromEndpoint(
      core.MojoMessagePipeEndpoint endpoint)
      : super(new _ClientProxyControl.fromEndpoint(endpoint));

  ClientProxy.fromHandle(core.MojoHandle handle)
      : super(new _ClientProxyControl.fromHandle(handle));

  ClientProxy.unbound()
      : super(new _ClientProxyControl.unbound());

  factory ClientProxy.fromMock(Client mock) {
    ClientProxy newMockedProxy =
        new ClientProxy.unbound();
    newMockedProxy.impl = mock;
    return newMockedProxy;
  }

  static ClientProxy newFromEndpoint(
      core.MojoMessagePipeEndpoint endpoint) {
    assert(endpoint.setDescription("For ClientProxy"));
    return new ClientProxy.fromEndpoint(endpoint);
  }


}

class _ClientStubControl
    extends bindings.StubMessageHandler
    implements bindings.StubControl<Client> {
  Client _impl;

  _ClientStubControl.fromEndpoint(
      core.MojoMessagePipeEndpoint endpoint, [Client impl])
      : super.fromEndpoint(endpoint, autoBegin: impl != null) {
    _impl = impl;
  }

  _ClientStubControl.fromHandle(
      core.MojoHandle handle, [Client impl])
      : super.fromHandle(handle, autoBegin: impl != null) {
    _impl = impl;
  }

  _ClientStubControl.unbound([this._impl]) : super.unbound();

  String get serviceName => Client.serviceName;



  void handleMessage(bindings.ServiceMessage message) {
    if (bindings.ControlMessageHandler.isControlMessage(message)) {
      bindings.ControlMessageHandler.handleMessage(
          this, 0, message);
      return;
    }
    if (_impl == null) {
      throw new core.MojoApiError("$this has no implementation set");
    }
    switch (message.header.type) {
      default:
        throw new bindings.MojoCodecError("Unexpected message name");
        break;
    }
  }

  Client get impl => _impl;
  set impl(Client d) {
    if (d == null) {
      throw new core.MojoApiError("$this: Cannot set a null implementation");
    }
    if (isBound && (_impl == null)) {
      beginHandlingEvents();
    }
    _impl = d;
  }

  @override
  void bind(core.MojoMessagePipeEndpoint endpoint) {
    super.bind(endpoint);
    if (!isOpen && (_impl != null)) {
      beginHandlingEvents();
    }
  }

  @override
  String toString() {
    var superString = super.toString();
    return "_ClientStubControl($superString)";
  }

  int get version => 0;
}

class ClientStub
    extends bindings.Stub<Client>
    implements Client,
               ClientInterface,
               ClientInterfaceRequest {
  ClientStub.unbound([Client impl])
      : super(new _ClientStubControl.unbound(impl));

  ClientStub.fromEndpoint(
      core.MojoMessagePipeEndpoint endpoint, [Client impl])
      : super(new _ClientStubControl.fromEndpoint(endpoint, impl));

  ClientStub.fromHandle(
      core.MojoHandle handle, [Client impl])
      : super(new _ClientStubControl.fromHandle(handle, impl));

  static ClientStub newFromEndpoint(
      core.MojoMessagePipeEndpoint endpoint) {
    assert(endpoint.setDescription("For ClientStub"));
    return new ClientStub.fromEndpoint(endpoint);
  }


}



