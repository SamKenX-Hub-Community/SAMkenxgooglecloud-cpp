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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_TRANSCODER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_TRANSCODER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/video/transcoder/v1/services.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranscoderServiceConnectionIdempotencyPolicy {
 public:
  virtual ~TranscoderServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<TranscoderServiceConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency CreateJob(
      google::cloud::video::transcoder::v1::CreateJobRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListJobs(
      google::cloud::video::transcoder::v1::ListJobsRequest request) = 0;

  virtual google::cloud::Idempotency GetJob(
      google::cloud::video::transcoder::v1::GetJobRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteJob(
      google::cloud::video::transcoder::v1::DeleteJobRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateJobTemplate(
      google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListJobTemplates(
      google::cloud::video::transcoder::v1::ListJobTemplatesRequest
          request) = 0;

  virtual google::cloud::Idempotency GetJobTemplate(
      google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteJobTemplate(
      google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
          request) = 0;
};

std::unique_ptr<TranscoderServiceConnectionIdempotencyPolicy>
MakeDefaultTranscoderServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_TRANSCODER_CONNECTION_IDEMPOTENCY_POLICY_H
