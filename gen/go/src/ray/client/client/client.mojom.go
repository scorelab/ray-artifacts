// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     ray/client/client.mojom
//

package client

import (
	service_describer "mojo/public/interfaces/bindings/service_describer"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	fmt "fmt"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type Client interface {
}



var client_Name = "ray::Client"

type Client_Request bindings.InterfaceRequest

func (r *Client_Request) Name() string {
	return client_Name
}


type Client_Pointer bindings.InterfacePointer

func (p *Client_Pointer) Name() string {
	return client_Name
}

type Client_ServiceFactory struct{
	Delegate Client_Factory
}

type Client_Factory interface {
	Create(request Client_Request)
}

func (f *Client_ServiceFactory) Name() string {
	return client_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *Client_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &Client_ServiceDescription{}
}

func (f *Client_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := Client_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForClient creates a message pipe for use with the
// Client interface with a Client_Request on one end and a Client_Pointer on the other.
func CreateMessagePipeForClient() (Client_Request, Client_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return Client_Request(r), Client_Pointer(p)
}


type Client_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewClientProxy(p Client_Pointer, waiter bindings.AsyncWaiter) *Client_Proxy {
	return &Client_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *Client_Proxy) Close_Proxy() {
	p.router.Close()
}

type client_Stub struct {
	connector *bindings.Connector
	impl Client
}

func NewClientStub(r Client_Request, impl Client, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &client_Stub{connector, impl})
}


func (f *Client_Request) ServiceDescription() service_describer.ServiceDescription {
	return &Client_ServiceDescription{}
}


type Client_ServiceDescription struct{}

func (sd *Client_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *Client_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *Client_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*Client_ServiceDescription)(nil)


func (s *client_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	default:
		return &bindings.ValidationError{
			bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("unknown method %v", message.Header.Type),
		}
	}
	return
}
