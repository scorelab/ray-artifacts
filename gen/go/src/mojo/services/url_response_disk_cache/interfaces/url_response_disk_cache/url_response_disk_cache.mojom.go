// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/url_response_disk_cache/interfaces/url_response_disk_cache.mojom
//

package url_response_disk_cache

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	url_response "mojo/public/interfaces/network/url_response"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type UrlResponseDiskCache interface {
	Get(inUrl string) (outResponse *url_response.UrlResponse, outFilePath *[]uint8, outCacheDirPath *[]uint8, err error)
	Validate(inUrl string) (err error)
	Update(inResponse url_response.UrlResponse) (err error)
	UpdateAndGet(inResponse url_response.UrlResponse) (outFilePath *[]uint8, outCacheDirPath *[]uint8, err error)
	UpdateAndGetExtracted(inResponse url_response.UrlResponse) (outExtractedDirPath *[]uint8, outCacheDirPath *[]uint8, err error)
}



var uRLResponseDiskCache_Name = "mojo::URLResponseDiskCache"

type UrlResponseDiskCache_Request bindings.InterfaceRequest

func (r *UrlResponseDiskCache_Request) Name() string {
	return uRLResponseDiskCache_Name
}


type UrlResponseDiskCache_Pointer bindings.InterfacePointer

func (p *UrlResponseDiskCache_Pointer) Name() string {
	return uRLResponseDiskCache_Name
}

type UrlResponseDiskCache_ServiceFactory struct{
	Delegate UrlResponseDiskCache_Factory
}

type UrlResponseDiskCache_Factory interface {
	Create(request UrlResponseDiskCache_Request)
}

func (f *UrlResponseDiskCache_ServiceFactory) Name() string {
	return uRLResponseDiskCache_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *UrlResponseDiskCache_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &UrlResponseDiskCache_ServiceDescription{}
}

func (f *UrlResponseDiskCache_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := UrlResponseDiskCache_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForUrlResponseDiskCache creates a message pipe for use with the
// UrlResponseDiskCache interface with a UrlResponseDiskCache_Request on one end and a UrlResponseDiskCache_Pointer on the other.
func CreateMessagePipeForUrlResponseDiskCache() (UrlResponseDiskCache_Request, UrlResponseDiskCache_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return UrlResponseDiskCache_Request(r), UrlResponseDiskCache_Pointer(p)
}

const uRLResponseDiskCache_Get_Name uint32 = 0
const uRLResponseDiskCache_Validate_Name uint32 = 1
const uRLResponseDiskCache_Update_Name uint32 = 2
const uRLResponseDiskCache_UpdateAndGet_Name uint32 = 3
const uRLResponseDiskCache_UpdateAndGetExtracted_Name uint32 = 4

type UrlResponseDiskCache_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewUrlResponseDiskCacheProxy(p UrlResponseDiskCache_Pointer, waiter bindings.AsyncWaiter) *UrlResponseDiskCache_Proxy {
	return &UrlResponseDiskCache_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *UrlResponseDiskCache_Proxy) Close_Proxy() {
	p.router.Close()
}

type uRLResponseDiskCache_Get_Params struct {
	inUrl string
}


func (s *uRLResponseDiskCache_Get_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.inUrl); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_Get_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLResponseDiskCache_Get_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_Get_Params_Versions), func(i int) bool {
		return uRLResponseDiskCache_Get_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_Get_Params_Versions) {
		if uRLResponseDiskCache_Get_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_Get_Params_Versions[index].Size
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
			s.inUrl = value0
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type uRLResponseDiskCache_Get_ResponseParams struct {
	outResponse *url_response.UrlResponse
	outFilePath *[]uint8
	outCacheDirPath *[]uint8
}


func (s *uRLResponseDiskCache_Get_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(24, 0)
	if s.outResponse == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.outResponse).Encode(encoder); err != nil {
			return err
		}
	}
	if s.outFilePath == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outFilePath))), 8)
		for _, elem0 := range (*s.outFilePath) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if s.outCacheDirPath == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outCacheDirPath))), 8)
		for _, elem0 := range (*s.outCacheDirPath) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_Get_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{32, 0},
}

func (s *uRLResponseDiskCache_Get_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_Get_ResponseParams_Versions), func(i int) bool {
		return uRLResponseDiskCache_Get_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_Get_ResponseParams_Versions) {
		if uRLResponseDiskCache_Get_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_Get_ResponseParams_Versions[index].Size
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
			s.outResponse = nil
		} else {
			s.outResponse = new(url_response.UrlResponse)
			if err := (*s.outResponse).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			s.outFilePath = nil
		} else {
			s.outFilePath = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outFilePath) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outFilePath)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			s.outCacheDirPath = nil
		} else {
			s.outCacheDirPath = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outCacheDirPath) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outCacheDirPath)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlResponseDiskCache_Proxy) Get(inUrl string) (outResponse *url_response.UrlResponse, outFilePath *[]uint8, outCacheDirPath *[]uint8, err error) {
	payload := &uRLResponseDiskCache_Get_Params{
		inUrl,
	}
	header := bindings.MessageHeader{
		Type: uRLResponseDiskCache_Get_Name,
		Flags: bindings.MessageExpectsResponseFlag,
		RequestId: p.ids.Count(),
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	readResult := <-p.router.AcceptWithResponse(message)
	if err = readResult.Error; err != nil {
		p.Close_Proxy()
		return
	}
	if readResult.Message.Header.Flags != bindings.MessageIsResponseFlag {
		err = &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
			fmt.Sprintf("invalid message header flag: %v", readResult.Message.Header.Flags),
		}
		return
	}
	if got, want := readResult.Message.Header.Type, uRLResponseDiskCache_Get_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response uRLResponseDiskCache_Get_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResponse = response.outResponse
	outFilePath = response.outFilePath
	outCacheDirPath = response.outCacheDirPath
	return
}

type uRLResponseDiskCache_Validate_Params struct {
	inUrl string
}


func (s *uRLResponseDiskCache_Validate_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.inUrl); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_Validate_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLResponseDiskCache_Validate_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_Validate_Params_Versions), func(i int) bool {
		return uRLResponseDiskCache_Validate_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_Validate_Params_Versions) {
		if uRLResponseDiskCache_Validate_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_Validate_Params_Versions[index].Size
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
			s.inUrl = value0
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlResponseDiskCache_Proxy) Validate(inUrl string) (err error) {
	payload := &uRLResponseDiskCache_Validate_Params{
		inUrl,
	}
	header := bindings.MessageHeader{
		Type: uRLResponseDiskCache_Validate_Name,
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

type uRLResponseDiskCache_Update_Params struct {
	inResponse url_response.UrlResponse
}


func (s *uRLResponseDiskCache_Update_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inResponse.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_Update_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLResponseDiskCache_Update_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_Update_Params_Versions), func(i int) bool {
		return uRLResponseDiskCache_Update_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_Update_Params_Versions) {
		if uRLResponseDiskCache_Update_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_Update_Params_Versions[index].Size
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
			if err := s.inResponse.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlResponseDiskCache_Proxy) Update(inResponse url_response.UrlResponse) (err error) {
	payload := &uRLResponseDiskCache_Update_Params{
		inResponse,
	}
	header := bindings.MessageHeader{
		Type: uRLResponseDiskCache_Update_Name,
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

type uRLResponseDiskCache_UpdateAndGet_Params struct {
	inResponse url_response.UrlResponse
}


func (s *uRLResponseDiskCache_UpdateAndGet_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inResponse.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_UpdateAndGet_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLResponseDiskCache_UpdateAndGet_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_UpdateAndGet_Params_Versions), func(i int) bool {
		return uRLResponseDiskCache_UpdateAndGet_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_UpdateAndGet_Params_Versions) {
		if uRLResponseDiskCache_UpdateAndGet_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_UpdateAndGet_Params_Versions[index].Size
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
			if err := s.inResponse.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type uRLResponseDiskCache_UpdateAndGet_ResponseParams struct {
	outFilePath *[]uint8
	outCacheDirPath *[]uint8
}


func (s *uRLResponseDiskCache_UpdateAndGet_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if s.outFilePath == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outFilePath))), 8)
		for _, elem0 := range (*s.outFilePath) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if s.outCacheDirPath == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outCacheDirPath))), 8)
		for _, elem0 := range (*s.outCacheDirPath) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_UpdateAndGet_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *uRLResponseDiskCache_UpdateAndGet_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_UpdateAndGet_ResponseParams_Versions), func(i int) bool {
		return uRLResponseDiskCache_UpdateAndGet_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_UpdateAndGet_ResponseParams_Versions) {
		if uRLResponseDiskCache_UpdateAndGet_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_UpdateAndGet_ResponseParams_Versions[index].Size
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
			s.outFilePath = nil
		} else {
			s.outFilePath = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outFilePath) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outFilePath)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			s.outCacheDirPath = nil
		} else {
			s.outCacheDirPath = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outCacheDirPath) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outCacheDirPath)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlResponseDiskCache_Proxy) UpdateAndGet(inResponse url_response.UrlResponse) (outFilePath *[]uint8, outCacheDirPath *[]uint8, err error) {
	payload := &uRLResponseDiskCache_UpdateAndGet_Params{
		inResponse,
	}
	header := bindings.MessageHeader{
		Type: uRLResponseDiskCache_UpdateAndGet_Name,
		Flags: bindings.MessageExpectsResponseFlag,
		RequestId: p.ids.Count(),
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	readResult := <-p.router.AcceptWithResponse(message)
	if err = readResult.Error; err != nil {
		p.Close_Proxy()
		return
	}
	if readResult.Message.Header.Flags != bindings.MessageIsResponseFlag {
		err = &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
			fmt.Sprintf("invalid message header flag: %v", readResult.Message.Header.Flags),
		}
		return
	}
	if got, want := readResult.Message.Header.Type, uRLResponseDiskCache_UpdateAndGet_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response uRLResponseDiskCache_UpdateAndGet_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outFilePath = response.outFilePath
	outCacheDirPath = response.outCacheDirPath
	return
}

type uRLResponseDiskCache_UpdateAndGetExtracted_Params struct {
	inResponse url_response.UrlResponse
}


func (s *uRLResponseDiskCache_UpdateAndGetExtracted_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inResponse.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_UpdateAndGetExtracted_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLResponseDiskCache_UpdateAndGetExtracted_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_UpdateAndGetExtracted_Params_Versions), func(i int) bool {
		return uRLResponseDiskCache_UpdateAndGetExtracted_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_UpdateAndGetExtracted_Params_Versions) {
		if uRLResponseDiskCache_UpdateAndGetExtracted_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_UpdateAndGetExtracted_Params_Versions[index].Size
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
			if err := s.inResponse.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams struct {
	outExtractedDirPath *[]uint8
	outCacheDirPath *[]uint8
}


func (s *uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if s.outExtractedDirPath == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outExtractedDirPath))), 8)
		for _, elem0 := range (*s.outExtractedDirPath) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if s.outCacheDirPath == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outCacheDirPath))), 8)
		for _, elem0 := range (*s.outCacheDirPath) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Versions), func(i int) bool {
		return uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Versions) {
		if uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams_Versions[index].Size
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
			s.outExtractedDirPath = nil
		} else {
			s.outExtractedDirPath = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outExtractedDirPath) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outExtractedDirPath)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			s.outCacheDirPath = nil
		} else {
			s.outCacheDirPath = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outCacheDirPath) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outCacheDirPath)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlResponseDiskCache_Proxy) UpdateAndGetExtracted(inResponse url_response.UrlResponse) (outExtractedDirPath *[]uint8, outCacheDirPath *[]uint8, err error) {
	payload := &uRLResponseDiskCache_UpdateAndGetExtracted_Params{
		inResponse,
	}
	header := bindings.MessageHeader{
		Type: uRLResponseDiskCache_UpdateAndGetExtracted_Name,
		Flags: bindings.MessageExpectsResponseFlag,
		RequestId: p.ids.Count(),
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	readResult := <-p.router.AcceptWithResponse(message)
	if err = readResult.Error; err != nil {
		p.Close_Proxy()
		return
	}
	if readResult.Message.Header.Flags != bindings.MessageIsResponseFlag {
		err = &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
			fmt.Sprintf("invalid message header flag: %v", readResult.Message.Header.Flags),
		}
		return
	}
	if got, want := readResult.Message.Header.Type, uRLResponseDiskCache_UpdateAndGetExtracted_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outExtractedDirPath = response.outExtractedDirPath
	outCacheDirPath = response.outCacheDirPath
	return
}

type uRLResponseDiskCache_Stub struct {
	connector *bindings.Connector
	impl UrlResponseDiskCache
}

func NewUrlResponseDiskCacheStub(r UrlResponseDiskCache_Request, impl UrlResponseDiskCache, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &uRLResponseDiskCache_Stub{connector, impl})
}


func (f *UrlResponseDiskCache_Request) ServiceDescription() service_describer.ServiceDescription {
	return &UrlResponseDiskCache_ServiceDescription{}
}


type UrlResponseDiskCache_ServiceDescription struct{}

func (sd *UrlResponseDiskCache_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *UrlResponseDiskCache_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *UrlResponseDiskCache_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*UrlResponseDiskCache_ServiceDescription)(nil)


func (s *uRLResponseDiskCache_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case uRLResponseDiskCache_Get_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLResponseDiskCache_Get_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response uRLResponseDiskCache_Get_ResponseParams
		response.outResponse, 		response.outFilePath, 		response.outCacheDirPath, err = s.impl.Get(request.inUrl)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: uRLResponseDiskCache_Get_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case uRLResponseDiskCache_Validate_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLResponseDiskCache_Validate_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.Validate(request.inUrl)
		if err != nil {
			return
		}
	case uRLResponseDiskCache_Update_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLResponseDiskCache_Update_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.Update(request.inResponse)
		if err != nil {
			return
		}
	case uRLResponseDiskCache_UpdateAndGet_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLResponseDiskCache_UpdateAndGet_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response uRLResponseDiskCache_UpdateAndGet_ResponseParams
		response.outFilePath, 		response.outCacheDirPath, err = s.impl.UpdateAndGet(request.inResponse)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: uRLResponseDiskCache_UpdateAndGet_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case uRLResponseDiskCache_UpdateAndGetExtracted_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLResponseDiskCache_UpdateAndGetExtracted_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response uRLResponseDiskCache_UpdateAndGetExtracted_ResponseParams
		response.outExtractedDirPath, 		response.outCacheDirPath, err = s.impl.UpdateAndGetExtracted(request.inResponse)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: uRLResponseDiskCache_UpdateAndGetExtracted_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	default:
		return &bindings.ValidationError{
			bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("unknown method %v", message.Header.Type),
		}
	}
	return
}

