// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/log/interfaces/log.mojom
//

package log

import (
	sort "sort"
	entry "mojo/services/log/interfaces/entry"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
	service_describer "mojo/public/interfaces/bindings/service_describer"
)


type Log interface {
	AddEntry(inEntry entry.Entry) (err error)
}



var log_Name = "mojo::log::Log"

type Log_Request bindings.InterfaceRequest

func (r *Log_Request) Name() string {
	return log_Name
}


type Log_Pointer bindings.InterfacePointer

func (p *Log_Pointer) Name() string {
	return log_Name
}

type Log_ServiceFactory struct{
	Delegate Log_Factory
}

type Log_Factory interface {
	Create(request Log_Request)
}

func (f *Log_ServiceFactory) Name() string {
	return log_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *Log_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &Log_ServiceDescription{}
}

func (f *Log_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := Log_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForLog creates a message pipe for use with the
// Log interface with a Log_Request on one end and a Log_Pointer on the other.
func CreateMessagePipeForLog() (Log_Request, Log_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return Log_Request(r), Log_Pointer(p)
}

const log_AddEntry_Name uint32 = 0

type Log_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewLogProxy(p Log_Pointer, waiter bindings.AsyncWaiter) *Log_Proxy {
	return &Log_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *Log_Proxy) Close_Proxy() {
	p.router.Close()
}

type log_AddEntry_Params struct {
	inEntry entry.Entry
}


func (s *log_AddEntry_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inEntry.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var log_AddEntry_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *log_AddEntry_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(log_AddEntry_Params_Versions), func(i int) bool {
		return log_AddEntry_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(log_AddEntry_Params_Versions) {
		if log_AddEntry_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := log_AddEntry_Params_Versions[index].Size
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
			if err := s.inEntry.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *Log_Proxy) AddEntry(inEntry entry.Entry) (err error) {
	payload := &log_AddEntry_Params{
		inEntry,
	}
	header := bindings.MessageHeader{
		Type: log_AddEntry_Name,
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

type log_Stub struct {
	connector *bindings.Connector
	impl Log
}

func NewLogStub(r Log_Request, impl Log, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &log_Stub{connector, impl})
}


func (f *Log_Request) ServiceDescription() service_describer.ServiceDescription {
	return &Log_ServiceDescription{}
}


type Log_ServiceDescription struct{}

func (sd *Log_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *Log_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *Log_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*Log_ServiceDescription)(nil)


func (s *log_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case log_AddEntry_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request log_AddEntry_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.AddEntry(request.inEntry)
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

