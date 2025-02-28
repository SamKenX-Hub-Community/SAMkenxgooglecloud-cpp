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
// source: google/iam/v1/iam_policy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V1_IAM_POLICY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V1_IAM_POLICY_CONNECTION_H

#include "google/cloud/iam/v1/iam_policy_connection_idempotency_policy.h"
#include "google/cloud/iam/v1/internal/iam_policy_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/iam/v1/iam_policy.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IAMPolicyRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    iam_v1_internal::IAMPolicyRetryTraits>;

using IAMPolicyLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        iam_v1_internal::IAMPolicyRetryTraits>;

using IAMPolicyLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        iam_v1_internal::IAMPolicyRetryTraits>;

/**
 * The `IAMPolicyConnection` object for `IAMPolicyClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `IAMPolicyClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `IAMPolicyClient`.
 *
 * To create a concrete instance, see `MakeIAMPolicyConnection()`.
 *
 * For mocking, see `iam_v1_mocks::MockIAMPolicyConnection`.
 */
class IAMPolicyConnection {
 public:
  virtual ~IAMPolicyConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `IAMPolicyConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of IAMPolicyClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `IAMPolicyConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::iam_v1::IAMPolicyPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `IAMPolicyConnection` created by
 * this function.
 */
std::shared_ptr<IAMPolicyConnection> MakeIAMPolicyConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V1_IAM_POLICY_CONNECTION_H
