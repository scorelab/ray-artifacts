// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/common/test_interfaces.mojom
//

package test_interfaces

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type Dummy interface {
	Foo() (err error)
}




type Dummy_Request bindings.InterfaceRequest



type Dummy_Pointer bindings.InterfacePointer


type Dummy_ServiceFactory struct{
	Delegate Dummy_Factory
}

type Dummy_Factory interface {
	Create(request Dummy_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *Dummy_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &Dummy_ServiceDescription{}
}

func (f *Dummy_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := Dummy_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForDummy creates a message pipe for use with the
// Dummy interface with a Dummy_Request on one end and a Dummy_Pointer on the other.
func CreateMessagePipeForDummy() (Dummy_Request, Dummy_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return Dummy_Request(r), Dummy_Pointer(p)
}

const dummy_Foo_Name uint32 = 0

type Dummy_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewDummyProxy(p Dummy_Pointer, waiter bindings.AsyncWaiter) *Dummy_Proxy {
	return &Dummy_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *Dummy_Proxy) Close_Proxy() {
	p.router.Close()
}

type dummy_Foo_Params struct {
}


func (s *dummy_Foo_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var dummy_Foo_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *dummy_Foo_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(dummy_Foo_Params_Versions), func(i int) bool {
		return dummy_Foo_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(dummy_Foo_Params_Versions) {
		if dummy_Foo_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := dummy_Foo_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *Dummy_Proxy) Foo() (err error) {
	payload := &dummy_Foo_Params{
	}
	header := bindings.MessageHeader{
		Type: dummy_Foo_Name,
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

type dummy_Stub struct {
	connector *bindings.Connector
	impl Dummy
}

func NewDummyStub(r Dummy_Request, impl Dummy, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &dummy_Stub{connector, impl})
}


func (f *Dummy_Request) ServiceDescription() service_describer.ServiceDescription {
	return &Dummy_ServiceDescription{}
}


type Dummy_ServiceDescription struct{}

func (sd *Dummy_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *Dummy_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *Dummy_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*Dummy_ServiceDescription)(nil)


func (s *dummy_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case dummy_Foo_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request dummy_Foo_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.Foo()
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

