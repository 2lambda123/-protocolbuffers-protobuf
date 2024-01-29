// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#ifndef GOOGLE_PROTOBUF_COMPILER_ALLOWLISTS_ALLOWLISTS_H__
#define GOOGLE_PROTOBUF_COMPILER_ALLOWLISTS_ALLOWLISTS_H__

#include <string>

#include "absl/strings/string_view.h"

// Must be included last.
#include "google/protobuf/port_def.inc"

namespace google {
namespace protobuf {
namespace compiler {

// Returns whether a file can contain a cc_open_enum.
bool IsOpenEnumFile(absl::string_view file);

// Returns whether a message can contain a cc_open_enum.
bool IsOpenEnumMessage(absl::string_view msg);
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_ALLOWLISTS_COMPILER_ALLOWLISTS_H__
