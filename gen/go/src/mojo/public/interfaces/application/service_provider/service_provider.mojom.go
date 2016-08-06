// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/public/interfaces/application/service_provider.mojom
//

package service_provider

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type ServiceProvider interface {
	ConnectToService(inInterfaceName string, inPipe system.MessagePipeHandle) (err error)
}




type ServiceProvider_Request bindings.InterfaceRequest



type ServiceProvider_Pointer bindings.InterfacePointer


type ServiceProvider_ServiceFactory struct{
	Delegate ServiceProvider_Factory
}

type ServiceProvider_Factory interface {
	Create(request ServiceProvider_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *ServiceProvider_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &ServiceProvider_ServiceDescription{}
}

func (f *ServiceProvider_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := ServiceProvider_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForServiceProvider creates a message pipe for use with the
// ServiceProvider interface with a ServiceProvider_Request on one end and a ServiceProvider_Pointer on the other.
func CreateMessagePipeForServiceProvider() (ServiceProvider_Request, ServiceProvider_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return ServiceProvider_Request(r), ServiceProvider_Pointer(p)
}

const serviceProvider_ConnectToService_Name uint32 = 0

type ServiceProvider_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewServiceProviderProxy(p ServiceProvider_Pointer, waiter bindings.AsyncWaiter) *ServiceProvider_Proxy {
	return &ServiceProvider_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *ServiceProvider_Proxy) Close_Proxy() {
	p.router.Close()
}

type serviceProvider_ConnectToService_Params struct {
	inInterfaceName string
	inPipe system.MessagePipeHandle
}


func (s *serviceProvider_ConnectToService_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.inInterfaceName); err != nil {
		return err
	}
	if err := encoder.WriteHandle(s.inPipe); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var serviceProvider_ConnectToService_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *serviceProvider_ConnectToService_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(serviceProvider_ConnectToService_Params_Versions), func(i int) bool {
		return serviceProvider_ConnectToService_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(serviceProvider_ConnectToService_Params_Versions) {
		if serviceProvider_ConnectToService_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := serviceProvider_ConnectToService_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
		} else {
			value0, err := decoder.ReadString()
			if err != nil {
				return err
			}
			s.inInterfaceName = value0
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadMessagePipeHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			s.inPipe = handle0
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *ServiceProvider_Proxy) ConnectToService(inInterfaceName string, inPipe system.MessagePipeHandle) (err error) {
	payload := &serviceProvider_ConnectToService_Params{
		inInterfaceName,
		inPipe,
	}
	header := bindings.MessageHeader{
		Type: serviceProvider_ConnectToService_Name,
		Flags: bindings.MessageNoFlag,
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	if err = p.router.Accept(message); err != nil {
		p.Close_Proxy()
		return
	}
	return
}

type serviceProvider_Stub struct {
	connector *bindings.Connector
	impl ServiceProvider
}

func NewServiceProviderStub(r ServiceProvider_Request, impl ServiceProvider, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &serviceProvider_Stub{connector, impl})
}


func (f *ServiceProvider_Request) ServiceDescription() service_describer.ServiceDescription {
	return &ServiceProvider_ServiceDescription{}
}


type ServiceProvider_ServiceDescription struct{}

func (sd *ServiceProvider_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *ServiceProvider_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *ServiceProvider_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*ServiceProvider_ServiceDescription)(nil)


func (s *serviceProvider_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case serviceProvider_ConnectToService_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request serviceProvider_ConnectToService_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.ConnectToService(request.inInterfaceName, request.inPipe)
		if err != nil {
			return
		}
	default:
		return &bindings.ValidationError{
			bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("unknown method %v", message.Header.Type),
		}
	}
	return
}
