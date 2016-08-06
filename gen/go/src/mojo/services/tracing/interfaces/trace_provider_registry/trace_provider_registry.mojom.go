// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/tracing/interfaces/trace_provider_registry.mojom
//

package trace_provider_registry

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	tracing "mojo/services/tracing/interfaces/tracing"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type TraceProviderRegistry interface {
	RegisterTraceProvider(inTraceProvider tracing.TraceProvider_Pointer) (err error)
}



var traceProviderRegistry_Name = "tracing.TraceProviderRegistry"

type TraceProviderRegistry_Request bindings.InterfaceRequest

func (r *TraceProviderRegistry_Request) Name() string {
	return traceProviderRegistry_Name
}


type TraceProviderRegistry_Pointer bindings.InterfacePointer

func (p *TraceProviderRegistry_Pointer) Name() string {
	return traceProviderRegistry_Name
}

type TraceProviderRegistry_ServiceFactory struct{
	Delegate TraceProviderRegistry_Factory
}

type TraceProviderRegistry_Factory interface {
	Create(request TraceProviderRegistry_Request)
}

func (f *TraceProviderRegistry_ServiceFactory) Name() string {
	return traceProviderRegistry_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *TraceProviderRegistry_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &TraceProviderRegistry_ServiceDescription{}
}

func (f *TraceProviderRegistry_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := TraceProviderRegistry_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForTraceProviderRegistry creates a message pipe for use with the
// TraceProviderRegistry interface with a TraceProviderRegistry_Request on one end and a TraceProviderRegistry_Pointer on the other.
func CreateMessagePipeForTraceProviderRegistry() (TraceProviderRegistry_Request, TraceProviderRegistry_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return TraceProviderRegistry_Request(r), TraceProviderRegistry_Pointer(p)
}

const traceProviderRegistry_RegisterTraceProvider_Name uint32 = 0

type TraceProviderRegistry_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewTraceProviderRegistryProxy(p TraceProviderRegistry_Pointer, waiter bindings.AsyncWaiter) *TraceProviderRegistry_Proxy {
	return &TraceProviderRegistry_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *TraceProviderRegistry_Proxy) Close_Proxy() {
	p.router.Close()
}

type traceProviderRegistry_RegisterTraceProvider_Params struct {
	inTraceProvider tracing.TraceProvider_Pointer
}


func (s *traceProviderRegistry_RegisterTraceProvider_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteInterface(s.inTraceProvider.PassMessagePipe()); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var traceProviderRegistry_RegisterTraceProvider_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *traceProviderRegistry_RegisterTraceProvider_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(traceProviderRegistry_RegisterTraceProvider_Params_Versions), func(i int) bool {
		return traceProviderRegistry_RegisterTraceProvider_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(traceProviderRegistry_RegisterTraceProvider_Params_Versions) {
		if traceProviderRegistry_RegisterTraceProvider_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := traceProviderRegistry_RegisterTraceProvider_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadInterface()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.inTraceProvider = tracing.TraceProvider_Pointer{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *TraceProviderRegistry_Proxy) RegisterTraceProvider(inTraceProvider tracing.TraceProvider_Pointer) (err error) {
	payload := &traceProviderRegistry_RegisterTraceProvider_Params{
		inTraceProvider,
	}
	header := bindings.MessageHeader{
		Type: traceProviderRegistry_RegisterTraceProvider_Name,
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

type traceProviderRegistry_Stub struct {
	connector *bindings.Connector
	impl TraceProviderRegistry
}

func NewTraceProviderRegistryStub(r TraceProviderRegistry_Request, impl TraceProviderRegistry, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &traceProviderRegistry_Stub{connector, impl})
}


func (f *TraceProviderRegistry_Request) ServiceDescription() service_describer.ServiceDescription {
	return &TraceProviderRegistry_ServiceDescription{}
}


type TraceProviderRegistry_ServiceDescription struct{}

func (sd *TraceProviderRegistry_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *TraceProviderRegistry_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *TraceProviderRegistry_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*TraceProviderRegistry_ServiceDescription)(nil)


func (s *traceProviderRegistry_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case traceProviderRegistry_RegisterTraceProvider_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request traceProviderRegistry_RegisterTraceProvider_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.RegisterTraceProvider(request.inTraceProvider)
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

