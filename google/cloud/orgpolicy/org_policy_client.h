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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_ORG_POLICY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_ORG_POLICY_CLIENT_H

#include "google/cloud/orgpolicy/org_policy_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace orgpolicy {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// An interface for managing organization policies.
///
/// The Cloud Org Policy service provides a simple mechanism for organizations
/// to restrict the allowed configurations across their entire Cloud Resource
/// hierarchy.
///
/// You can use a `policy` to configure restrictions in Cloud resources. For
/// example, you can enforce a `policy` that restricts which Google
/// Cloud Platform APIs can be activated in a certain part of your resource
/// hierarchy, or prevents serial port access to VM instances in a particular
/// folder.
///
/// `Policies` are inherited down through the resource hierarchy. A `policy`
/// applied to a parent resource automatically applies to all its child
/// resources unless overridden with a `policy` lower in the hierarchy.
///
/// A `constraint` defines an aspect of a resource's configuration that can be
/// controlled by an organization's policy administrator. `Policies` are a
/// collection of `constraints` that defines their allowable configuration on a
/// particular resource and its child resources.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class OrgPolicyClient {
 public:
  explicit OrgPolicyClient(std::shared_ptr<OrgPolicyConnection> connection,
                           Options opts = {});
  ~OrgPolicyClient();

  ///@{
  /// @name Copy and move support
  OrgPolicyClient(OrgPolicyClient const&) = default;
  OrgPolicyClient& operator=(OrgPolicyClient const&) = default;
  OrgPolicyClient(OrgPolicyClient&&) = default;
  OrgPolicyClient& operator=(OrgPolicyClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(OrgPolicyClient const& a, OrgPolicyClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(OrgPolicyClient const& a, OrgPolicyClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists `Constraints` that could be applied on the specified resource.
  ///
  /// @param parent  Required. The Cloud resource that parents the constraint.
  /// Must be in one of
  ///  the following forms:
  ///  * `projects/{project_number}`
  ///  * `projects/{project_id}`
  ///  * `folders/{folder_id}`
  ///  * `organizations/{organization_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Constraint,google/cloud/orgpolicy/v2/constraint.proto#L45}
  ///
  /// [google.cloud.orgpolicy.v2.Constraint]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/constraint.proto#L45}
  /// [google.cloud.orgpolicy.v2.ListConstraintsRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L336}
  ///
  StreamRange<google::cloud::orgpolicy::v2::Constraint> ListConstraints(
      std::string const& parent, Options opts = {});

  ///
  /// Lists `Constraints` that could be applied on the specified resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::ListConstraintsRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L336}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Constraint,google/cloud/orgpolicy/v2/constraint.proto#L45}
  ///
  /// [google.cloud.orgpolicy.v2.Constraint]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/constraint.proto#L45}
  /// [google.cloud.orgpolicy.v2.ListConstraintsRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L336}
  ///
  StreamRange<google::cloud::orgpolicy::v2::Constraint> ListConstraints(
      google::cloud::orgpolicy::v2::ListConstraintsRequest request,
      Options opts = {});

  ///
  /// Retrieves all of the `Policies` that exist on a particular resource.
  ///
  /// @param parent  Required. The target Cloud resource that parents the set of
  /// constraints and
  ///  policies that will be returned from this call. Must be in one of the
  ///  following forms:
  ///  * `projects/{project_number}`
  ///  * `projects/{project_id}`
  ///  * `folders/{folder_id}`
  ///  * `organizations/{organization_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.ListPoliciesRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L372}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StreamRange<google::cloud::orgpolicy::v2::Policy> ListPolicies(
      std::string const& parent, Options opts = {});

  ///
  /// Retrieves all of the `Policies` that exist on a particular resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::ListPoliciesRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L372}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.ListPoliciesRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L372}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StreamRange<google::cloud::orgpolicy::v2::Policy> ListPolicies(
      google::cloud::orgpolicy::v2::ListPoliciesRequest request,
      Options opts = {});

  ///
  /// Gets a `Policy` on a resource.
  ///
  /// If no `Policy` is set on the resource, NOT_FOUND is returned. The
  /// `etag` value can be used with `UpdatePolicy()` to update a
  /// `Policy` during read-modify-write.
  ///
  /// @param name  Required. Resource name of the policy. See `Policy` for
  /// naming
  ///  requirements.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.GetPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L412}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> GetPolicy(
      std::string const& name, Options opts = {});

  ///
  /// Gets a `Policy` on a resource.
  ///
  /// If no `Policy` is set on the resource, NOT_FOUND is returned. The
  /// `etag` value can be used with `UpdatePolicy()` to update a
  /// `Policy` during read-modify-write.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::GetPolicyRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L412}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.GetPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L412}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> GetPolicy(
      google::cloud::orgpolicy::v2::GetPolicyRequest const& request,
      Options opts = {});

  ///
  /// Gets the effective `Policy` on a resource. This is the result of merging
  /// `Policies` in the resource hierarchy and evaluating conditions. The
  /// returned `Policy` will not have an `etag` or `condition` set because it is
  /// a computed `Policy` across multiple resources.
  /// Subtrees of Resource Manager resource hierarchy with 'under:' prefix will
  /// not be expanded.
  ///
  /// @param name  Required. The effective policy to compute. See `Policy` for
  /// naming rules.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.GetEffectivePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L425}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> GetEffectivePolicy(
      std::string const& name, Options opts = {});

  ///
  /// Gets the effective `Policy` on a resource. This is the result of merging
  /// `Policies` in the resource hierarchy and evaluating conditions. The
  /// returned `Policy` will not have an `etag` or `condition` set because it is
  /// a computed `Policy` across multiple resources.
  /// Subtrees of Resource Manager resource hierarchy with 'under:' prefix will
  /// not be expanded.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::GetEffectivePolicyRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L425}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.GetEffectivePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L425}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> GetEffectivePolicy(
      google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request,
      Options opts = {});

  ///
  /// Creates a Policy.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// constraint does not exist.
  /// Returns a `google.rpc.Status` with `google.rpc.Code.ALREADY_EXISTS` if the
  /// policy already exists on the given Cloud resource.
  ///
  /// @param parent  Required. The Cloud resource that will parent the new
  /// Policy. Must be in
  ///  one of the following forms:
  ///  * `projects/{project_number}`
  ///  * `projects/{project_id}`
  ///  * `folders/{folder_id}`
  ///  * `organizations/{organization_id}`
  /// @param policy  Required. `Policy` to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.CreatePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L437}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> CreatePolicy(
      std::string const& parent,
      google::cloud::orgpolicy::v2::Policy const& policy, Options opts = {});

  ///
  /// Creates a Policy.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// constraint does not exist.
  /// Returns a `google.rpc.Status` with `google.rpc.Code.ALREADY_EXISTS` if the
  /// policy already exists on the given Cloud resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::CreatePolicyRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L437}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.CreatePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L437}
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> CreatePolicy(
      google::cloud::orgpolicy::v2::CreatePolicyRequest const& request,
      Options opts = {});

  ///
  /// Updates a Policy.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// constraint or the policy do not exist.
  /// Returns a `google.rpc.Status` with `google.rpc.Code.ABORTED` if the etag
  /// supplied in the request does not match the persisted etag of the policy
  ///
  /// Note: the supplied policy will perform a full overwrite of all
  /// fields.
  ///
  /// @param policy  Required. `Policy` to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  /// [google.cloud.orgpolicy.v2.UpdatePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L457}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> UpdatePolicy(
      google::cloud::orgpolicy::v2::Policy const& policy, Options opts = {});

  ///
  /// Updates a Policy.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// constraint or the policy do not exist.
  /// Returns a `google.rpc.Status` with `google.rpc.Code.ABORTED` if the etag
  /// supplied in the request does not match the persisted etag of the policy
  ///
  /// Note: the supplied policy will perform a full overwrite of all
  /// fields.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::UpdatePolicyRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L457}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orgpolicy::v2::Policy,google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  ///
  /// [google.cloud.orgpolicy.v2.Policy]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L179}
  /// [google.cloud.orgpolicy.v2.UpdatePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L457}
  ///
  StatusOr<google::cloud::orgpolicy::v2::Policy> UpdatePolicy(
      google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request,
      Options opts = {});

  ///
  /// Deletes a Policy.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// constraint or Org Policy does not exist.
  ///
  /// @param name  Required. Name of the policy to delete.
  ///  See `Policy` for naming rules.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.orgpolicy.v2.DeletePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L469}
  ///
  Status DeletePolicy(std::string const& name, Options opts = {});

  ///
  /// Deletes a Policy.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// constraint or Org Policy does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orgpolicy::v2::DeletePolicyRequest,google/cloud/orgpolicy/v2/orgpolicy.proto#L469}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.orgpolicy.v2.DeletePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/orgpolicy/v2/orgpolicy.proto#L469}
  ///
  Status DeletePolicy(
      google::cloud::orgpolicy::v2::DeletePolicyRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<OrgPolicyConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_ORG_POLICY_CLIENT_H
