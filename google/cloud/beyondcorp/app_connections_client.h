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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTIONS_CLIENT_H

#include "google/cloud/beyondcorp/app_connections_connection.h"
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
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview:
///
/// The `beyondcorp.googleapis.com` service implements the Google Cloud
/// BeyondCorp API.
///
/// Data Model:
///
/// The AppConnectionsService exposes the following resources:
///
/// * AppConnections, named as follows:
///   `projects/{project_id}/locations/{location_id}/appConnections/{app_connection_id}`.
///
/// The AppConnectionsService service provides methods to manage
/// (create/read/update/delete) BeyondCorp AppConnections.
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
class AppConnectionsServiceClient {
 public:
  explicit AppConnectionsServiceClient(
      std::shared_ptr<AppConnectionsServiceConnection> connection,
      Options opts = {});
  ~AppConnectionsServiceClient();

  ///@{
  /// @name Copy and move support
  AppConnectionsServiceClient(AppConnectionsServiceClient const&) = default;
  AppConnectionsServiceClient& operator=(AppConnectionsServiceClient const&) =
      default;
  AppConnectionsServiceClient(AppConnectionsServiceClient&&) = default;
  AppConnectionsServiceClient& operator=(AppConnectionsServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AppConnectionsServiceClient const& a,
                         AppConnectionsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AppConnectionsServiceClient const& a,
                         AppConnectionsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists AppConnections in a given project and location.
  ///
  /// @param parent  Required. The resource name of the AppConnection location
  /// using the form:
  ///  `projects/{project_id}/locations/{location_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.ListAppConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L134}
  ///
  StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  ListAppConnections(std::string const& parent, Options opts = {});

  ///
  /// Lists AppConnections in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L134}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.ListAppConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L134}
  ///
  StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  ListAppConnections(
      google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
          request,
      Options opts = {});

  ///
  /// Gets details of a single AppConnection.
  ///
  /// @param name  Required. BeyondCorp AppConnection name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appConnections/{app_connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.GetAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L180}
  ///
  StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  GetAppConnection(std::string const& name, Options opts = {});

  ///
  /// Gets details of a single AppConnection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::GetAppConnectionRequest,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L180}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.GetAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L180}
  ///
  StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  GetAppConnection(google::cloud::beyondcorp::appconnections::v1::
                       GetAppConnectionRequest const& request,
                   Options opts = {});

  ///
  /// Creates a new AppConnection in a given project and location.
  ///
  /// @param parent  Required. The resource project name of the AppConnection
  /// location using the
  ///  form: `projects/{project_id}/locations/{location_id}`
  /// @param app_connection  Required. A BeyondCorp AppConnection resource.
  /// @param app_connection_id  Optional. User-settable AppConnection resource
  /// ID.
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.CreateAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L192}
  ///
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  CreateAppConnection(
      std::string const& parent,
      google::cloud::beyondcorp::appconnections::v1::AppConnection const&
          app_connection,
      std::string const& app_connection_id, Options opts = {});

  ///
  /// Creates a new AppConnection in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::CreateAppConnectionRequest,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L192}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.CreateAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L192}
  ///
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  CreateAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          CreateAppConnectionRequest const& request,
                      Options opts = {});

  ///
  /// Updates the parameters of a single AppConnection.
  ///
  /// @param app_connection  Required. AppConnection message with updated
  /// fields. Only supported fields
  ///  specified in update_mask are updated.
  /// @param update_mask  Required. Mask of fields to update. At least one path
  /// must be supplied in
  ///  this field. The elements of the repeated paths field may only include
  ///  these fields from [BeyondCorp.AppConnection]:
  ///  * `labels`
  ///  * `display_name`
  ///  * `application_endpoint`
  ///  * `connectors`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.UpdateAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L232}
  ///
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  UpdateAppConnection(
      google::cloud::beyondcorp::appconnections::v1::AppConnection const&
          app_connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the parameters of a single AppConnection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::UpdateAppConnectionRequest,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L232}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnection,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnection]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L362}
  /// [google.cloud.beyondcorp.appconnections.v1.UpdateAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L232}
  ///
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  UpdateAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          UpdateAppConnectionRequest const& request,
                      Options opts = {});

  ///
  /// Deletes a single AppConnection.
  ///
  /// @param name  Required. BeyondCorp Connector name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appConnections/{app_connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnectionOperationMetadata,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L485}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnectionOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L485}
  /// [google.cloud.beyondcorp.appconnections.v1.DeleteAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L271}
  ///
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                      AppConnectionOperationMetadata>>
  DeleteAppConnection(std::string const& name, Options opts = {});

  ///
  /// Deletes a single AppConnection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::DeleteAppConnectionRequest,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L271}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::AppConnectionOperationMetadata,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L485}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.AppConnectionOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L485}
  /// [google.cloud.beyondcorp.appconnections.v1.DeleteAppConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L271}
  ///
  future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                      AppConnectionOperationMetadata>>
  DeleteAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          DeleteAppConnectionRequest const& request,
                      Options opts = {});

  ///
  /// Resolves AppConnections details for a given AppConnector.
  /// An internal method called by a connector to find AppConnections to connect
  /// to.
  ///
  /// @param parent  Required. The resource name of the AppConnection location
  /// using the form:
  ///  `projects/{project_id}/locations/{location_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsResponse::AppConnectionDetails,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L338}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L302}
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsResponse.AppConnectionDetails]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L338}
  ///
  StreamRange<google::cloud::beyondcorp::appconnections::v1::
                  ResolveAppConnectionsResponse::AppConnectionDetails>
  ResolveAppConnections(std::string const& parent, Options opts = {});

  ///
  /// Resolves AppConnections details for a given AppConnector.
  /// An internal method called by a connector to find AppConnections to connect
  /// to.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsRequest,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L302}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsResponse::AppConnectionDetails,google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L338}
  ///
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L302}
  /// [google.cloud.beyondcorp.appconnections.v1.ResolveAppConnectionsResponse.AppConnectionDetails]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto#L338}
  ///
  StreamRange<google::cloud::beyondcorp::appconnections::v1::
                  ResolveAppConnectionsResponse::AppConnectionDetails>
  ResolveAppConnections(google::cloud::beyondcorp::appconnections::v1::
                            ResolveAppConnectionsRequest request,
                        Options opts = {});

 private:
  std::shared_ptr<AppConnectionsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTIONS_CLIENT_H
