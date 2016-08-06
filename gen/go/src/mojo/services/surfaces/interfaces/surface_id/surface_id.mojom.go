// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/surfaces/interfaces/surface_id.mojom
//

package surface_id

import (
	sort "sort"
	fmt "fmt"
	bindings "mojo/public/go/bindings"
)


type SurfaceId struct {
	Local uint32
	IdNamespace uint32
}


func (s *SurfaceId) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteUint32(s.Local); err != nil {
		return err
	}
	if err := encoder.WriteUint32(s.IdNamespace); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var surfaceId_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *SurfaceId) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(surfaceId_Versions), func(i int) bool {
		return surfaceId_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(surfaceId_Versions) {
		if surfaceId_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := surfaceId_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint32()
		if err != nil {
			return err
		}
		s.Local = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint32()
		if err != nil {
			return err
		}
		s.IdNamespace = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

