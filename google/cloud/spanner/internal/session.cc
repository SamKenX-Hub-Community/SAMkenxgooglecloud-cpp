// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/spanner/internal/session.h"

namespace google {
namespace cloud {
namespace spanner_internal {
inline namespace GOOGLE_CLOUD_CPP_NS {

SessionHolder MakeDissociatedSessionHolder(std::string session_name) {
  return SessionHolder(
      new Session(std::move(session_name), /*channel=*/nullptr),
      std::default_delete<Session>());
}

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google
