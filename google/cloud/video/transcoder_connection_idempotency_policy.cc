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
// source: google/cloud/video/transcoder/v1/services.proto

#include "google/cloud/video/transcoder_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace video {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TranscoderServiceConnectionIdempotencyPolicy::
    ~TranscoderServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultTranscoderServiceConnectionIdempotencyPolicy
    : public TranscoderServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultTranscoderServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<TranscoderServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultTranscoderServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateJob(
      google::cloud::video::transcoder::v1::CreateJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListJobs(
      google::cloud::video::transcoder::v1::ListJobsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetJob(
      google::cloud::video::transcoder::v1::GetJobRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteJob(
      google::cloud::video::transcoder::v1::DeleteJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateJobTemplate(
      google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListJobTemplates(
      google::cloud::video::transcoder::v1::ListJobTemplatesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetJobTemplate(
      google::cloud::video::transcoder::v1::GetJobTemplateRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteJobTemplate(
      google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<TranscoderServiceConnectionIdempotencyPolicy>
MakeDefaultTranscoderServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultTranscoderServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video
}  // namespace cloud
}  // namespace google
