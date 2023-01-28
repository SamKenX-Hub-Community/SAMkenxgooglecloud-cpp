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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CLIENT_H

#include "google/cloud/dataproc/cluster_controller_connection.h"
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
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The ClusterControllerService provides methods to manage clusters
/// of Compute Engine instances.
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
class ClusterControllerClient {
 public:
  explicit ClusterControllerClient(
      std::shared_ptr<ClusterControllerConnection> connection,
      Options opts = {});
  ~ClusterControllerClient();

  ///@{
  /// @name Copy and move support
  ClusterControllerClient(ClusterControllerClient const&) = default;
  ClusterControllerClient& operator=(ClusterControllerClient const&) = default;
  ClusterControllerClient(ClusterControllerClient&&) = default;
  ClusterControllerClient& operator=(ClusterControllerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ClusterControllerClient const& a,
                         ClusterControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ClusterControllerClient const& a,
                         ClusterControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a cluster in a project. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the cluster
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param cluster  Required. The cluster to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.CreateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1157}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Cluster>> CreateCluster(
      std::string const& project_id, std::string const& region,
      google::cloud::dataproc::v1::Cluster const& cluster, Options opts = {});

  ///
  /// Creates a cluster in a project. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::CreateClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1157}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.CreateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1157}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Cluster>> CreateCluster(
      google::cloud::dataproc::v1::CreateClusterRequest const& request,
      Options opts = {});

  ///
  /// Updates a cluster in a project. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  /// The cluster must be in a
  /// [`RUNNING`][google.cloud.dataproc.v1.ClusterStatus.State] state or an
  /// error is returned.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// the
  ///  cluster belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param cluster_name  Required. The cluster name.
  /// @param cluster  Required. The changes to the cluster.
  /// @param update_mask  Required. Specifies the path, relative to `Cluster`,
  /// of
  ///  the field to update. For example, to change the number of workers
  ///  in a cluster to 5, the `update_mask` parameter would be
  ///  specified as `config.worker_config.num_instances`,
  ///  and the `PATCH` request body would specify the new value, as follows:
  ///      {
  ///        "config":{
  ///          "workerConfig":{
  ///            "numInstances":"5"
  ///          }
  ///        }
  ///      }
  ///  Similarly, to change the number of preemptible workers in a cluster to 5,
  ///  the `update_mask` parameter would be
  ///  `config.secondary_worker_config.num_instances`, and the `PATCH` request
  ///  body would be set as follows:
  ///      {
  ///        "config":{
  ///          "secondaryWorkerConfig":{
  ///            "numInstances":"5"
  ///          }
  ///        }
  ///      }
  ///  <strong>Note:</strong> Currently, only the following fields can be
  ///  updated:
  ///   <table>
  ///   <!--<tbody>-->
  ///   <tr>
  ///   <td><strong>Mask</strong></td>
  ///   <td><strong>Purpose</strong></td>
  ///   </tr>
  ///   <tr>
  ///   <td><strong><em>labels</em></strong></td>
  ///   <td>Update labels</td>
  ///   </tr>
  ///   <tr>
  ///   <td><strong><em>config.worker_config.num_instances</em></strong></td>
  ///   <td>Resize primary worker group</td>
  ///   </tr>
  ///   <tr>
  ///   <td><strong><em>config.secondary_worker_config.num_instances</em></strong></td>
  ///   <td>Resize secondary worker group</td>
  ///   </tr>
  ///   <tr>
  ///   <td>config.autoscaling_config.policy_uri</td><td>Use, stop using, or
  ///   change autoscaling policies</td>
  ///   </tr>
  ///   <!--</tbody>-->
  ///   </table>
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.UpdateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1188}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Cluster>> UpdateCluster(
      std::string const& project_id, std::string const& region,
      std::string const& cluster_name,
      google::cloud::dataproc::v1::Cluster const& cluster,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a cluster in a project. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  /// The cluster must be in a
  /// [`RUNNING`][google.cloud.dataproc.v1.ClusterStatus.State] state or an
  /// error is returned.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::UpdateClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1188}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.UpdateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1188}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Cluster>> UpdateCluster(
      google::cloud::dataproc::v1::UpdateClusterRequest const& request,
      Options opts = {});

  ///
  /// Stops a cluster in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::StopClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1284}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.StopClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1284}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Cluster>> StopCluster(
      google::cloud::dataproc::v1::StopClusterRequest const& request,
      Options opts = {});

  ///
  /// Starts a cluster in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::StartClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1315}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.StartClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1315}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Cluster>> StartCluster(
      google::cloud::dataproc::v1::StartClusterRequest const& request,
      Options opts = {});

  ///
  /// Deletes a cluster in a project. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the cluster
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param cluster_name  Required. The cluster name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::ClusterOperationMetadata,google/cloud/dataproc/v1/operations.proto#L95}
  ///
  /// [google.cloud.dataproc.v1.ClusterOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/operations.proto#L95}
  /// [google.cloud.dataproc.v1.DeleteClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1346}
  ///
  future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
  DeleteCluster(std::string const& project_id, std::string const& region,
                std::string const& cluster_name, Options opts = {});

  ///
  /// Deletes a cluster in a project. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::DeleteClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1346}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::ClusterOperationMetadata,google/cloud/dataproc/v1/operations.proto#L95}
  ///
  /// [google.cloud.dataproc.v1.ClusterOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/operations.proto#L95}
  /// [google.cloud.dataproc.v1.DeleteClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1346}
  ///
  future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
  DeleteCluster(
      google::cloud::dataproc::v1::DeleteClusterRequest const& request,
      Options opts = {});

  ///
  /// Gets the resource representation for a cluster in a project.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the cluster
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param cluster_name  Required. The cluster name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.GetClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1377}
  ///
  StatusOr<google::cloud::dataproc::v1::Cluster> GetCluster(
      std::string const& project_id, std::string const& region,
      std::string const& cluster_name, Options opts = {});

  ///
  /// Gets the resource representation for a cluster in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::GetClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1377}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.GetClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1377}
  ///
  StatusOr<google::cloud::dataproc::v1::Cluster> GetCluster(
      google::cloud::dataproc::v1::GetClusterRequest const& request,
      Options opts = {});

  ///
  /// Lists all regions/{region}/clusters in a project alphabetically.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the cluster
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.ListClustersRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1390}
  ///
  StreamRange<google::cloud::dataproc::v1::Cluster> ListClusters(
      std::string const& project_id, std::string const& region,
      Options opts = {});

  ///
  /// Lists all regions/{region}/clusters in a project alphabetically.
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the cluster
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param filter  Optional. A filter constraining the clusters to list.
  /// Filters are
  ///  case-sensitive and have the following syntax:
  ///  field = value [AND [field = value]] ...
  ///  where **field** is one of `status.state`, `clusterName`, or
  ///  `labels.[KEY]`, and `[KEY]` is a label key. **value** can be `*` to match
  ///  all values. `status.state` can be one of the following: `ACTIVE`,
  ///  `INACTIVE`, `CREATING`, `RUNNING`, `ERROR`, `DELETING`, or `UPDATING`.
  ///  `ACTIVE` contains the `CREATING`, `UPDATING`, and `RUNNING` states.
  ///  `INACTIVE` contains the `DELETING` and `ERROR` states. `clusterName` is
  ///  the name of the cluster provided at creation time. Only the logical `AND`
  ///  operator is supported; space-separated items are treated as having an
  ///  implicit `AND` operator. Example filter: status.state = ACTIVE AND
  ///  clusterName = mycluster AND labels.env = staging AND labels.starred = *
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.ListClustersRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1390}
  ///
  StreamRange<google::cloud::dataproc::v1::Cluster> ListClusters(
      std::string const& project_id, std::string const& region,
      std::string const& filter, Options opts = {});

  ///
  /// Lists all regions/{region}/clusters in a project alphabetically.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::ListClustersRequest,google/cloud/dataproc/v1/clusters.proto#L1390}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Cluster,google/cloud/dataproc/v1/clusters.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L164}
  /// [google.cloud.dataproc.v1.ListClustersRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1390}
  ///
  StreamRange<google::cloud::dataproc::v1::Cluster> ListClusters(
      google::cloud::dataproc::v1::ListClustersRequest request,
      Options opts = {});

  ///
  /// Gets cluster diagnostic information. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  /// After the operation completes,
  /// [Operation.response][google.longrunning.Operation.response]
  /// contains
  /// [DiagnoseClusterResults](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#diagnoseclusterresults).
  ///
  /// @param project_id  Required. The ID of the Google Cloud Platform project
  /// that the cluster
  ///  belongs to.
  /// @param region  Required. The Dataproc region in which to handle the
  /// request.
  /// @param cluster_name  Required. The cluster name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::DiagnoseClusterResults,google/cloud/dataproc/v1/clusters.proto#L1451}
  ///
  /// [google.cloud.dataproc.v1.DiagnoseClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1438}
  /// [google.cloud.dataproc.v1.DiagnoseClusterResults]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1451}
  ///
  future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
  DiagnoseCluster(std::string const& project_id, std::string const& region,
                  std::string const& cluster_name, Options opts = {});

  ///
  /// Gets cluster diagnostic information. The returned
  /// [Operation.metadata][google.longrunning.Operation.metadata] will be
  /// [ClusterOperationMetadata](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#clusteroperationmetadata).
  /// After the operation completes,
  /// [Operation.response][google.longrunning.Operation.response]
  /// contains
  /// [DiagnoseClusterResults](https://cloud.google.com/dataproc/docs/reference/rpc/google.cloud.dataproc.v1#diagnoseclusterresults).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::DiagnoseClusterRequest,google/cloud/dataproc/v1/clusters.proto#L1438}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::DiagnoseClusterResults,google/cloud/dataproc/v1/clusters.proto#L1451}
  ///
  /// [google.cloud.dataproc.v1.DiagnoseClusterRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1438}
  /// [google.cloud.dataproc.v1.DiagnoseClusterResults]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/clusters.proto#L1451}
  ///
  future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
  DiagnoseCluster(
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ClusterControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CLIENT_H
