// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/speech/v2/cloud_speech.proto

#include "google/cloud/speech/v2/internal/speech_option_defaults.h"
#include "google/cloud/speech/v2/speech_connection.h"
#include "google/cloud/speech/v2/speech_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SpeechDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SPEECH_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_SPEECH_AUTHORITY", "speech.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<speech_v2::SpeechRetryPolicyOption>()) {
    options.set<speech_v2::SpeechRetryPolicyOption>(
        speech_v2::SpeechLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<speech_v2::SpeechBackoffPolicyOption>()) {
    options.set<speech_v2::SpeechBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<speech_v2::SpeechPollingPolicyOption>()) {
    options.set<speech_v2::SpeechPollingPolicyOption>(
        GenericPollingPolicy<speech_v2::SpeechRetryPolicyOption::Type,
                             speech_v2::SpeechBackoffPolicyOption::Type>(
            options.get<speech_v2::SpeechRetryPolicyOption>()->clone(),
            options.get<speech_v2::SpeechBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<speech_v2::SpeechConnectionIdempotencyPolicyOption>()) {
    options.set<speech_v2::SpeechConnectionIdempotencyPolicyOption>(
        speech_v2::MakeDefaultSpeechConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google
