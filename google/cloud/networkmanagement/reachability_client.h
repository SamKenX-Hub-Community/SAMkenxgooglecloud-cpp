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
// source: google/cloud/networkmanagement/v1/reachability.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKMANAGEMENT_REACHABILITY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKMANAGEMENT_REACHABILITY_CLIENT_H

#include "google/cloud/networkmanagement/reachability_connection.h"
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
namespace networkmanagement {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The Reachability service in the Google Cloud Network Management API provides
/// services that analyze the reachability within a single Google Virtual
/// Private Cloud (VPC) network, between peered VPC networks, between VPC and
/// on-premises networks, or between VPC networks and internet hosts. A
/// reachability analysis is based on Google Cloud network configurations.
///
/// You can use the analysis results to verify these configurations and
/// to troubleshoot connectivity issues.
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
class ReachabilityServiceClient {
 public:
  explicit ReachabilityServiceClient(
      std::shared_ptr<ReachabilityServiceConnection> connection,
      Options opts = {});
  ~ReachabilityServiceClient();

  ///@{
  /// @name Copy and move support
  ReachabilityServiceClient(ReachabilityServiceClient const&) = default;
  ReachabilityServiceClient& operator=(ReachabilityServiceClient const&) =
      default;
  ReachabilityServiceClient(ReachabilityServiceClient&&) = default;
  ReachabilityServiceClient& operator=(ReachabilityServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ReachabilityServiceClient const& a,
                         ReachabilityServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ReachabilityServiceClient const& a,
                         ReachabilityServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists all Connectivity Tests owned by a project.
  ///
  /// @param parent  Required. The parent resource of the Connectivity Tests:
  ///      `projects/{project_id}/locations/global`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.ListConnectivityTestsRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L153}
  ///
  StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>
  ListConnectivityTests(std::string const& parent, Options opts = {});

  ///
  /// Lists all Connectivity Tests owned by a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::networkmanagement::v1::ListConnectivityTestsRequest,google/cloud/networkmanagement/v1/reachability.proto#L153}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.ListConnectivityTestsRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L153}
  ///
  StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>
  ListConnectivityTests(
      google::cloud::networkmanagement::v1::ListConnectivityTestsRequest
          request,
      Options opts = {});

  ///
  /// Gets the details of a specific Connectivity Test.
  ///
  /// @param name  Required. `ConnectivityTest` resource name using the form:
  ///      `projects/{project_id}/locations/global/connectivityTests/{test_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.GetConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L201}
  ///
  StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
  GetConnectivityTest(std::string const& name, Options opts = {});

  ///
  /// Gets the details of a specific Connectivity Test.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::networkmanagement::v1::GetConnectivityTestRequest,google/cloud/networkmanagement/v1/reachability.proto#L201}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.GetConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L201}
  ///
  StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
  GetConnectivityTest(
      google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new Connectivity Test.
  /// After you create a test, the reachability analysis is performed as part
  /// of the long running operation, which completes when the analysis
  /// completes.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are invalid
  /// (for example, containing non-existent resources in the network, or you
  /// don't have read permissions to the network configurations of listed
  /// projects), then the reachability result returns a value of `UNKNOWN`.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are
  /// incomplete, the reachability result returns a value of
  /// <code>AMBIGUOUS</code>. For more information,
  /// see the Connectivity Test documentation.
  ///
  /// @param parent  Required. The parent resource of the Connectivity Test to
  /// create:
  ///      `projects/{project_id}/locations/global`
  /// @param test_id  Required. The logical name of the Connectivity Test in
  /// your project
  ///  with the following restrictions:
  ///  * Must contain only lowercase letters, numbers, and hyphens.
  ///  * Must start with a letter.
  ///  * Must be between 1-40 characters.
  ///  * Must end with a number or a letter.
  ///  * Must be unique within the customer project
  /// @param resource  Required. A `ConnectivityTest` resource
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.CreateConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L208}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
  CreateConnectivityTest(
      std::string const& parent, std::string const& test_id,
      google::cloud::networkmanagement::v1::ConnectivityTest const& resource,
      Options opts = {});

  ///
  /// Creates a new Connectivity Test.
  /// After you create a test, the reachability analysis is performed as part
  /// of the long running operation, which completes when the analysis
  /// completes.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are invalid
  /// (for example, containing non-existent resources in the network, or you
  /// don't have read permissions to the network configurations of listed
  /// projects), then the reachability result returns a value of `UNKNOWN`.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are
  /// incomplete, the reachability result returns a value of
  /// <code>AMBIGUOUS</code>. For more information,
  /// see the Connectivity Test documentation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::networkmanagement::v1::CreateConnectivityTestRequest,google/cloud/networkmanagement/v1/reachability.proto#L208}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.CreateConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L208}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
  CreateConnectivityTest(
      google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
          request,
      Options opts = {});

  ///
  /// Updates the configuration of an existing `ConnectivityTest`.
  /// After you update a test, the reachability analysis is performed as part
  /// of the long running operation, which completes when the analysis
  /// completes. The Reachability state in the test resource is updated with the
  /// new result.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are invalid
  /// (for example, they contain non-existent resources in the network, or the
  /// user does not have read permissions to the network configurations of
  /// listed projects), then the reachability result returns a value of
  /// <code>UNKNOWN</code>.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are incomplete, the
  /// reachability result returns a value of `AMBIGUOUS`. See the documentation
  /// in `ConnectivityTest` for for more details.
  ///
  /// @param update_mask  Required. Mask of fields to update. At least one path
  /// must be supplied in
  ///  this field.
  /// @param resource  Required. Only fields specified in update_mask are
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.UpdateConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L228}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
  UpdateConnectivityTest(
      google::protobuf::FieldMask const& update_mask,
      google::cloud::networkmanagement::v1::ConnectivityTest const& resource,
      Options opts = {});

  ///
  /// Updates the configuration of an existing `ConnectivityTest`.
  /// After you update a test, the reachability analysis is performed as part
  /// of the long running operation, which completes when the analysis
  /// completes. The Reachability state in the test resource is updated with the
  /// new result.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are invalid
  /// (for example, they contain non-existent resources in the network, or the
  /// user does not have read permissions to the network configurations of
  /// listed projects), then the reachability result returns a value of
  /// <code>UNKNOWN</code>.
  ///
  /// If the endpoint specifications in `ConnectivityTest` are incomplete, the
  /// reachability result returns a value of `AMBIGUOUS`. See the documentation
  /// in `ConnectivityTest` for for more details.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest,google/cloud/networkmanagement/v1/reachability.proto#L228}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.UpdateConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L228}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
  UpdateConnectivityTest(
      google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
          request,
      Options opts = {});

  ///
  /// Rerun an existing `ConnectivityTest`.
  /// After the user triggers the rerun, the reachability analysis is performed
  /// as part of the long running operation, which completes when the analysis
  /// completes.
  ///
  /// Even though the test configuration remains the same, the reachability
  /// result may change due to underlying network configuration changes.
  ///
  /// If the endpoint specifications in `ConnectivityTest` become invalid (for
  /// example, specified resources are deleted in the network, or you lost
  /// read permissions to the network configurations of listed projects), then
  /// the reachability result returns a value of `UNKNOWN`.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::networkmanagement::v1::RerunConnectivityTestRequest,google/cloud/networkmanagement/v1/reachability.proto#L245}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::ConnectivityTest,google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  ///
  /// [google.cloud.networkmanagement.v1.ConnectivityTest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/connectivity_test.proto#L34}
  /// [google.cloud.networkmanagement.v1.RerunConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L245}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
  RerunConnectivityTest(
      google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes a specific `ConnectivityTest`.
  ///
  /// @param name  Required. Connectivity Test resource name using the form:
  ///      `projects/{project_id}/locations/global/connectivityTests/{test_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::OperationMetadata,google/cloud/networkmanagement/v1/reachability.proto#L252}
  ///
  /// [google.cloud.networkmanagement.v1.DeleteConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L238}
  /// [google.cloud.networkmanagement.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L252}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>
  DeleteConnectivityTest(std::string const& name, Options opts = {});

  ///
  /// Deletes a specific `ConnectivityTest`.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest,google/cloud/networkmanagement/v1/reachability.proto#L238}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::networkmanagement::v1::OperationMetadata,google/cloud/networkmanagement/v1/reachability.proto#L252}
  ///
  /// [google.cloud.networkmanagement.v1.DeleteConnectivityTestRequest]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L238}
  /// [google.cloud.networkmanagement.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/networkmanagement/v1/reachability.proto#L252}
  ///
  future<StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>
  DeleteConnectivityTest(
      google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<ReachabilityServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKMANAGEMENT_REACHABILITY_CLIENT_H
