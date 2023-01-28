// Copyright 2023 Google LLC
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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CLIENT_H

#include "google/cloud/gkemulticloud/v1/aws_clusters_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The AwsClusters API provides a single centrally managed service
/// to create and manage Anthos clusters that run on AWS infrastructure.
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
class AwsClustersClient {
 public:
  explicit AwsClustersClient(std::shared_ptr<AwsClustersConnection> connection,
                             Options opts = {});
  ~AwsClustersClient();

  ///@{
  /// @name Copy and move support
  AwsClustersClient(AwsClustersClient const&) = default;
  AwsClustersClient& operator=(AwsClustersClient const&) = default;
  AwsClustersClient(AwsClustersClient&&) = default;
  AwsClustersClient& operator=(AwsClustersClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AwsClustersClient const& a,
                         AwsClustersClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AwsClustersClient const& a,
                         AwsClustersClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a new [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]
  /// resource on a given GCP project and region.
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param parent  Required. The parent location where this
  ///  [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resource will be
  ///  created.
  ///  Location names are formatted as
  ///  `projects/<project-id>/locations/<region>`. See [Resource
  ///  Names](https://cloud.google.com/apis/design/resource_names) for more
  ///  details on Google Cloud resource names.
  /// @param aws_cluster  Required. The specification of the
  ///  [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] to create.
  /// @param aws_cluster_id  Required. A client provided ID the resource. Must
  /// be unique within the
  ///  parent resource.
  ///  The provided ID will be part of the
  ///  [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resource name
  ///  formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>`.
  ///  Valid characters are `/[a-z][0-9]-/`. Cannot be longer than 63
  ///  characters.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.CreateAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L208}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  CreateAwsCluster(
      std::string const& parent,
      google::cloud::gkemulticloud::v1::AwsCluster const& aws_cluster,
      std::string const& aws_cluster_id, Options opts = {});

  ///
  /// Creates a new [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]
  /// resource on a given GCP project and region.
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::CreateAwsClusterRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L208}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.CreateAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L208}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  CreateAwsCluster(
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request,
      Options opts = {});

  ///
  /// Updates an [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster].
  ///
  /// @param aws_cluster  Required. The
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]
  ///  resource to update.
  /// @param update_mask  Required. Mask of fields to update. At least one path
  /// must be supplied in
  ///  this field. The elements of the repeated paths field can only include
  ///  these fields from [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]:
  ///   *   `description`.
  ///   *   `annotations`.
  ///   *   `control_plane.version`.
  ///   *   `authorization.admin_users`.
  ///   *   `control_plane.aws_services_authentication.role_arn`.
  ///   *   `control_plane.aws_services_authentication.role_session_name`.
  ///   *   `control_plane.config_encryption.kms_key_arn`.
  ///   *   `control_plane.instance_type`.
  ///   *   `control_plane.security_group_ids`.
  ///   *   `control_plane.proxy_config`.
  ///   *   `control_plane.proxy_config.secret_arn`.
  ///   *   `control_plane.proxy_config.secret_version`.
  ///   *   `control_plane.root_volume.size_gib`.
  ///   *   `control_plane.root_volume.volume_type`.
  ///   *   `control_plane.root_volume.iops`.
  ///   *   `control_plane.root_volume.kms_key_arn`.
  ///   *   `control_plane.ssh_config`.
  ///   *   `control_plane.ssh_config.ec2_key_pair`.
  ///   *   `control_plane.instance_placement.tenancy`.
  ///   *   `control_plane.iam_instance_profile`.
  ///   *   `logging_config.component_config.enable_components`.
  ///   *   `control_plane.tags`.
  ///   *   `monitoring_config.managed_prometheus_config.enabled`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.UpdateAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L244}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  UpdateAwsCluster(
      google::cloud::gkemulticloud::v1::AwsCluster const& aws_cluster,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L244}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.UpdateAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L244}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  UpdateAwsCluster(
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request,
      Options opts = {});

  ///
  /// Describes a specific
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resource.
  ///
  /// @param name  Required. The name of the
  ///  [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resource to
  ///  describe.
  ///  `AwsCluster` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on GCP resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.GetAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L284}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      std::string const& name, Options opts = {});

  ///
  /// Describes a specific
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::GetAwsClusterRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L284}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.GetAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L284}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request,
      Options opts = {});

  ///
  /// Lists all [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resources
  /// on a given Google Cloud project and region.
  ///
  /// @param parent  Required. The parent location which owns this collection of
  ///  [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resources.
  ///  Location names are formatted as
  ///  `projects/<project-id>/locations/<region>`. See [Resource
  ///  Names](https://cloud.google.com/apis/design/resource_names) for more
  ///  details on GCP resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.ListAwsClustersRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L303}
  ///
  StreamRange<google::cloud::gkemulticloud::v1::AwsCluster> ListAwsClusters(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resources
  /// on a given Google Cloud project and region.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::ListAwsClustersRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L303}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsCluster,google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsCluster]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L33}
  /// [google.cloud.gkemulticloud.v1.ListAwsClustersRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L303}
  ///
  StreamRange<google::cloud::gkemulticloud::v1::AwsCluster> ListAwsClusters(
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest request,
      Options opts = {});

  ///
  /// Deletes a specific [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]
  /// resource.
  ///
  /// Fails if the cluster has one or more associated
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resources.
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param name  Required. The resource name the
  ///  [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] to delete.
  ///  `AwsCluster` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on GCP resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::OperationMetadata,google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  /// [google.cloud.gkemulticloud.v1.DeleteAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L345}
  /// [google.cloud.gkemulticloud.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsCluster(std::string const& name, Options opts = {});

  ///
  /// Deletes a specific [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]
  /// resource.
  ///
  /// Fails if the cluster has one or more associated
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resources.
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L345}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::OperationMetadata,google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  /// [google.cloud.gkemulticloud.v1.DeleteAwsClusterRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L345}
  /// [google.cloud.gkemulticloud.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsCluster(
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request,
      Options opts = {});

  ///
  /// Generates a short-lived access token to authenticate to a given
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster] resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L579}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse,google/cloud/gkemulticloud/v1/aws_service.proto#L598}
  ///
  /// [google.cloud.gkemulticloud.v1.GenerateAwsAccessTokenRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L579}
  /// [google.cloud.gkemulticloud.v1.GenerateAwsAccessTokenResponse]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L598}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool],
  /// attached to a given
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster].
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param parent  Required. The
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster]
  ///  resource where this node pool will be created.
  ///  `AwsCluster` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on Google Cloud resource names.
  /// @param aws_node_pool  Required. The specification of the
  ///  [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] to create.
  /// @param aws_node_pool_id  Required. A client provided ID the resource. Must
  /// be unique within the
  ///  parent resource.
  ///  The provided ID will be part of the
  ///  [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resource name
  ///  formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>/awsNodePools/<node-pool-id>`.
  ///  Valid characters are `/[a-z][0-9]-/`. Cannot be longer than 63
  ///  characters.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.CreateAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L383}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  CreateAwsNodePool(
      std::string const& parent,
      google::cloud::gkemulticloud::v1::AwsNodePool const& aws_node_pool,
      std::string const& aws_node_pool_id, Options opts = {});

  ///
  /// Creates a new [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool],
  /// attached to a given
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster].
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L383}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.CreateAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L383}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  CreateAwsNodePool(
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Updates an [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool].
  ///
  /// @param aws_node_pool  Required. The
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool]
  ///  resource to update.
  /// @param update_mask  Required. Mask of fields to update. At least one path
  /// must be supplied in
  ///  this field. The elements of the repeated paths field can only include
  ///  these fields from
  ///  [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool]:
  ///   *   `annotations`.
  ///   *   `version`.
  ///   *   `autoscaling.min_node_count`.
  ///   *   `autoscaling.max_node_count`.
  ///   *   `config.config_encryption.kms_key_arn`.
  ///   *   `config.security_group_ids`.
  ///   *   `config.root_volume.iops`.
  ///   *   `config.root_volume.kms_key_arn`.
  ///   *   `config.root_volume.volume_type`.
  ///   *   `config.root_volume.size_gib`.
  ///   *   `config.proxy_config`.
  ///   *   `config.proxy_config.secret_arn`.
  ///   *   `config.proxy_config.secret_version`.
  ///   *   `config.ssh_config`.
  ///   *   `config.ssh_config.ec2_key_pair`.
  ///   *   `config.instance_placement.tenancy`.
  ///   *   `config.iam_instance_profile`.
  ///   *   `config.labels`.
  ///   *   `config.tags`.
  ///   *   `config.autoscaling_metrics_collection`.
  ///   *   `config.autoscaling_metrics_collection.granularity`.
  ///   *   `config.autoscaling_metrics_collection.metrics`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.UpdateAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L420}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  UpdateAwsNodePool(
      google::cloud::gkemulticloud::v1::AwsNodePool const& aws_node_pool,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L420}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.UpdateAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L420}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  UpdateAwsNodePool(
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Describes a specific
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resource.
  ///
  /// @param name  Required. The name of the
  ///  [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resource to
  ///  describe.
  ///  `AwsNodePool` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>/awsNodePools/<node-pool-id>`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on Google Cloud resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.GetAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L459}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool> GetAwsNodePool(
      std::string const& name, Options opts = {});

  ///
  /// Describes a specific
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L459}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.GetAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L459}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool> GetAwsNodePool(
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Lists all [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool]
  /// resources on a given
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster].
  ///
  /// @param parent  Required. The parent `AwsCluster` which owns this
  /// collection of
  ///  [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resources.
  ///  `AwsCluster` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on Google Cloud resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.ListAwsNodePoolsRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L478}
  ///
  StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool> ListAwsNodePools(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool]
  /// resources on a given
  /// [AwsCluster][google.cloud.gkemulticloud.v1.AwsCluster].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L478}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsNodePool,google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsNodePool]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L342}
  /// [google.cloud.gkemulticloud.v1.ListAwsNodePoolsRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L478}
  ///
  StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool> ListAwsNodePools(
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request,
      Options opts = {});

  ///
  /// Deletes a specific
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resource.
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param name  Required. The resource name the
  ///  [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] to delete.
  ///  `AwsNodePool` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsClusters/<cluster-id>/awsNodePools/<node-pool-id>`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on Google Cloud resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::OperationMetadata,google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  /// [google.cloud.gkemulticloud.v1.DeleteAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L521}
  /// [google.cloud.gkemulticloud.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsNodePool(std::string const& name, Options opts = {});

  ///
  /// Deletes a specific
  /// [AwsNodePool][google.cloud.gkemulticloud.v1.AwsNodePool] resource.
  ///
  /// If successful, the response contains a newly created
  /// [Operation][google.longrunning.Operation] resource that can be
  /// described to track the status of the operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L521}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::OperationMetadata,google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  /// [google.cloud.gkemulticloud.v1.DeleteAwsNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L521}
  /// [google.cloud.gkemulticloud.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/common_resources.proto#L50}
  ///
  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsNodePool(
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Returns information, such as supported AWS regions and Kubernetes
  /// versions, on a given Google Cloud location.
  ///
  /// @param name  Required. The name of the
  ///  [AwsServerConfig][google.cloud.gkemulticloud.v1.AwsServerConfig] resource
  ///  to describe.
  ///  `AwsServerConfig` names are formatted as
  ///  `projects/<project-id>/locations/<region>/awsServerConfig`.
  ///  See [Resource Names](https://cloud.google.com/apis/design/resource_names)
  ///  for more details on Google Cloud resource names.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsServerConfig,google/cloud/gkemulticloud/v1/aws_resources.proto#L529}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsServerConfig]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L529}
  /// [google.cloud.gkemulticloud.v1.GetAwsServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L560}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(std::string const& name, Options opts = {});

  ///
  /// Returns information, such as supported AWS regions and Kubernetes
  /// versions, on a given Google Cloud location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest,google/cloud/gkemulticloud/v1/aws_service.proto#L560}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkemulticloud::v1::AwsServerConfig,google/cloud/gkemulticloud/v1/aws_resources.proto#L529}
  ///
  /// [google.cloud.gkemulticloud.v1.AwsServerConfig]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_resources.proto#L529}
  /// [google.cloud.gkemulticloud.v1.GetAwsServerConfigRequest]:
  /// @googleapis_reference_link{google/cloud/gkemulticloud/v1/aws_service.proto#L560}
  ///
  StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<AwsClustersConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CLIENT_H
