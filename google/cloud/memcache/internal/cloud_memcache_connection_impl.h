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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_INTERNAL_CLOUD_MEMCACHE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_INTERNAL_CLOUD_MEMCACHE_CONNECTION_IMPL_H

#include "google/cloud/memcache/cloud_memcache_connection.h"
#include "google/cloud/memcache/cloud_memcache_connection_idempotency_policy.h"
#include "google/cloud/memcache/cloud_memcache_options.h"
#include "google/cloud/memcache/internal/cloud_memcache_retry_traits.h"
#include "google/cloud/memcache/internal/cloud_memcache_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace memcache_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudMemcacheConnectionImpl : public memcache::CloudMemcacheConnection {
 public:
  ~CloudMemcacheConnectionImpl() override = default;

  CloudMemcacheConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<memcache_internal::CloudMemcacheStub> stub,
      Options const& options);

  StreamRange<google::cloud::memcache::v1::Instance> ListInstances(
      google::cloud::memcache::v1::ListInstancesRequest request) override;

  StatusOr<google::cloud::memcache::v1::Instance> GetInstance(
      google::cloud::memcache::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> CreateInstance(
      google::cloud::memcache::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> UpdateInstance(
      google::cloud::memcache::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> UpdateParameters(
      google::cloud::memcache::v1::UpdateParametersRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
  DeleteInstance(google::cloud::memcache::v1::DeleteInstanceRequest const&
                     request) override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> ApplyParameters(
      google::cloud::memcache::v1::ApplyParametersRequest const& request)
      override;

 private:
  std::unique_ptr<memcache::CloudMemcacheRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<memcache::CloudMemcacheRetryPolicyOption>()) {
      return options.get<memcache::CloudMemcacheRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<memcache::CloudMemcacheBackoffPolicyOption>()) {
      return options.get<memcache::CloudMemcacheBackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<memcache::CloudMemcacheConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<memcache::CloudMemcacheConnectionIdempotencyPolicyOption>()) {
      return options
          .get<memcache::CloudMemcacheConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<memcache_internal::CloudMemcacheStub> stub_;
  std::unique_ptr<memcache::CloudMemcacheRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<memcache::CloudMemcacheConnectionIdempotencyPolicy>
      idempotency_policy_;

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<memcache::CloudMemcachePollingPolicyOption>()) {
      return options.get<memcache::CloudMemcachePollingPolicyOption>()->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_INTERNAL_CLOUD_MEMCACHE_CONNECTION_IMPL_H
