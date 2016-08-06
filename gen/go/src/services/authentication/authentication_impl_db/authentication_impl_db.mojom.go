// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/authentication/authentication_impl_db.mojom
//

package authentication_impl_db

import (
	sort "sort"
	fmt "fmt"
	bindings "mojo/public/go/bindings"
)


type Db struct {
	Version uint32
	LastSelectedAccounts map[string]string
}


func (s *Db) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WriteUint32(s.Version); err != nil {
		return err
	}
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	encoder.StartMap()
	{
		var keys0 []string
		var values0 []string
		if encoder.Deterministic() {
		  for key0, _ := range s.LastSelectedAccounts {
			keys0 = append(keys0, key0)
		  }
		  bindings.SortMapKeys(&keys0)
		  values0 = make([]string, len(keys0))
		  for i, key := range keys0 {
		    values0[i] = s.LastSelectedAccounts[key]
		  }
		} else {
		  for key0, value0 := range s.LastSelectedAccounts {
			keys0 = append(keys0, key0)
			values0 = append(values0, value0)
		  }
		}
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len(keys0)), 64)
		for _, elem1 := range keys0 {
			if err := encoder.WritePointer(); err != nil {
				return err
			}
			if err := encoder.WriteString(elem1); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len(values0)), 64)
		for _, elem1 := range values0 {
			if err := encoder.WritePointer(); err != nil {
				return err
			}
			if err := encoder.WriteString(elem1); err != nil {
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
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var db_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *Db) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(db_Versions), func(i int) bool {
		return db_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(db_Versions) {
		if db_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := db_Versions[index].Size
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
		s.Version = value0
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
		} else {
			if err := decoder.StartMap(); err != nil {
				return err
			}
			var keys0 []string
			{
				pointer1, err := decoder.ReadPointer()
				if err != nil {
					return err
				}
				if pointer1 == 0 {
					return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
				} else {
					len1, err := decoder.StartArray(64)
					if err != nil {
						return err
					}
					keys0 = make([]string, len1)
					for i1 := uint32(0); i1 < len1; i1++ {
						pointer2, err := decoder.ReadPointer()
						if err != nil {
							return err
						}
						if pointer2 == 0 {
							return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
						} else {
							value2, err := decoder.ReadString()
							if err != nil {
								return err
							}
							keys0[i1] = value2
						}
					}
					if err := decoder.Finish(); err != nil {
						return err
					}
				}
			}
			var values0 []string
			{
				pointer1, err := decoder.ReadPointer()
				if err != nil {
					return err
				}
				if pointer1 == 0 {
					return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
				} else {
					len1, err := decoder.StartArray(64)
					if err != nil {
						return err
					}
					values0 = make([]string, len1)
					for i1 := uint32(0); i1 < len1; i1++ {
						pointer2, err := decoder.ReadPointer()
						if err != nil {
							return err
						}
						if pointer2 == 0 {
							return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
						} else {
							value2, err := decoder.ReadString()
							if err != nil {
								return err
							}
							values0[i1] = value2
						}
					}
					if err := decoder.Finish(); err != nil {
						return err
					}
				}
			}
			if len(keys0) != len(values0) {
				return &bindings.ValidationError{bindings.DifferentSizedArraysInMap,
					fmt.Sprintf("Number of keys %d is different from number of values %d", len(keys0), len(values0)),
				}
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
			len0 := len(keys0)
			map0 := make(map[string]string)
			for i0 := 0; i0 < len0; i0++ {
				map0[keys0[i0]] = values0[i0]
			}
			s.LastSelectedAccounts = map0
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

