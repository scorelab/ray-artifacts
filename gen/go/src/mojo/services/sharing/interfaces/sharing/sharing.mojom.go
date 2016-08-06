// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/sharing/interfaces/sharing.mojom
//

package sharing

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type SharingService interface {
	ShareText(inText string) (err error)
}



var sharingService_Name = "mojo::SharingService"

type SharingService_Request bindings.InterfaceRequest

func (r *SharingService_Request) Name() string {
	return sharingService_Name
}


type SharingService_Pointer bindings.InterfacePointer

func (p *SharingService_Pointer) Name() string {
	return sharingService_Name
}

type SharingService_ServiceFactory struct{
	Delegate SharingService_Factory
}

type SharingService_Factory interface {
	Create(request SharingService_Request)
}

func (f *SharingService_ServiceFactory) Name() string {
	return sharingService_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *SharingService_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &SharingService_ServiceDescription{}
}

func (f *SharingService_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := SharingService_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForSharingService creates a message pipe for use with the
// SharingService interface with a SharingService_Request on one end and a SharingService_Pointer on the other.
func CreateMessagePipeForSharingService() (SharingService_Request, SharingService_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return SharingService_Request(r), SharingService_Pointer(p)
}

const sharingService_ShareText_Name uint32 = 0

type SharingService_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewSharingServiceProxy(p SharingService_Pointer, waiter bindings.AsyncWaiter) *SharingService_Proxy {
	return &SharingService_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *SharingService_Proxy) Close_Proxy() {
	p.router.Close()
}

type sharingService_ShareText_Params struct {
	inText string
}


func (s *sharingService_ShareText_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.inText); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var sharingService_ShareText_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *sharingService_ShareText_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(sharingService_ShareText_Params_Versions), func(i int) bool {
		return sharingService_ShareText_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(sharingService_ShareText_Params_Versions) {
		if sharingService_ShareText_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := sharingService_ShareText_Params_Versions[index].Size
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
			s.inText = value0
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *SharingService_Proxy) ShareText(inText string) (err error) {
	payload := &sharingService_ShareText_Params{
		inText,
	}
	header := bindings.MessageHeader{
		Type: sharingService_ShareText_Name,
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

type sharingService_Stub struct {
	connector *bindings.Connector
	impl SharingService
}

func NewSharingServiceStub(r SharingService_Request, impl SharingService, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &sharingService_Stub{connector, impl})
}


func (f *SharingService_Request) ServiceDescription() service_describer.ServiceDescription {
	return &SharingService_ServiceDescription{}
}


type SharingService_ServiceDescription struct{}

func (sd *SharingService_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *SharingService_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *SharingService_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*SharingService_ServiceDescription)(nil)


func (s *sharingService_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case sharingService_ShareText_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request sharingService_ShareText_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.ShareText(request.inText)
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
