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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_VIDEO_STITCHER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_VIDEO_STITCHER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/video/stitcher/v1/video_stitcher_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VideoStitcherServiceConnectionIdempotencyPolicy {
 public:
  virtual ~VideoStitcherServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<VideoStitcherServiceConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::Idempotency CreateCdnKey(
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListCdnKeys(
      google::cloud::video::stitcher::v1::ListCdnKeysRequest request) = 0;

  virtual google::cloud::Idempotency GetCdnKey(
      google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteCdnKey(
      google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateCdnKey(
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateVodSession(
      google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetVodSession(
      google::cloud::video::stitcher::v1::GetVodSessionRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListVodStitchDetails(
      google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest
          request) = 0;

  virtual google::cloud::Idempotency GetVodStitchDetail(
      google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListVodAdTagDetails(
      google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest
          request) = 0;

  virtual google::cloud::Idempotency GetVodAdTagDetail(
      google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListLiveAdTagDetails(
      google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest
          request) = 0;

  virtual google::cloud::Idempotency GetLiveAdTagDetail(
      google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateSlate(
      google::cloud::video::stitcher::v1::CreateSlateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListSlates(
      google::cloud::video::stitcher::v1::ListSlatesRequest request) = 0;

  virtual google::cloud::Idempotency GetSlate(
      google::cloud::video::stitcher::v1::GetSlateRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateSlate(
      google::cloud::video::stitcher::v1::UpdateSlateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteSlate(
      google::cloud::video::stitcher::v1::DeleteSlateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateLiveSession(
      google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetLiveSession(
      google::cloud::video::stitcher::v1::GetLiveSessionRequest const&
          request) = 0;
};

std::unique_ptr<VideoStitcherServiceConnectionIdempotencyPolicy>
MakeDefaultVideoStitcherServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_VIDEO_STITCHER_CONNECTION_IDEMPOTENCY_POLICY_H
