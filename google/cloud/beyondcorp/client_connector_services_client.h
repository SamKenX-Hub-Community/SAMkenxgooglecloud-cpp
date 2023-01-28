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
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENT_CONNECTOR_SERVICES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENT_CONNECTOR_SERVICES_CLIENT_H

#include "google/cloud/beyondcorp/client_connector_services_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
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
/// The ClientConnectorServicesService exposes the following resources:
///
/// * Client Connector Services, named as follows:
///   `projects/{project_id}/locations/{location_id}/client_connector_services/{client_connector_service_id}`.
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
class ClientConnectorServicesServiceClient {
 public:
  explicit ClientConnectorServicesServiceClient(
      std::shared_ptr<ClientConnectorServicesServiceConnection> connection,
      Options opts = {});
  ~ClientConnectorServicesServiceClient();

  ///@{
  /// @name Copy and move support
  ClientConnectorServicesServiceClient(
      ClientConnectorServicesServiceClient const&) = default;
  ClientConnectorServicesServiceClient& operator=(
      ClientConnectorServicesServiceClient const&) = default;
  ClientConnectorServicesServiceClient(ClientConnectorServicesServiceClient&&) =
      default;
  ClientConnectorServicesServiceClient& operator=(
      ClientConnectorServicesServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ClientConnectorServicesServiceClient const& a,
                         ClientConnectorServicesServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ClientConnectorServicesServiceClient const& a,
                         ClientConnectorServicesServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists ClientConnectorServices in a given project and location.
  ///
  /// @param parent  Required. Parent value for
  /// ListClientConnectorServicesRequest.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ListClientConnectorServicesRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L234}
  ///
  StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                  ClientConnectorService>
  ListClientConnectorServices(std::string const& parent, Options opts = {});

  ///
  /// Lists ClientConnectorServices in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ListClientConnectorServicesRequest,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L234}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ListClientConnectorServicesRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L234}
  ///
  StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                  ClientConnectorService>
  ListClientConnectorServices(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ListClientConnectorServicesRequest request,
      Options opts = {});

  ///
  /// Gets details of a single ClientConnectorService.
  ///
  /// @param name  Required. Name of the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.GetClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L270}
  ///
  StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
               ClientConnectorService>
  GetClientConnectorService(std::string const& name, Options opts = {});

  ///
  /// Gets details of a single ClientConnectorService.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::GetClientConnectorServiceRequest,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L270}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.GetClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L270}
  ///
  StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
               ClientConnectorService>
  GetClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          GetClientConnectorServiceRequest const& request,
      Options opts = {});

  ///
  /// Creates a new ClientConnectorService in a given project and location.
  ///
  /// @param parent  Required. Value for parent.
  /// @param client_connector_service  Required. The resource being created.
  /// @param client_connector_service_id  Optional. User-settable client
  /// connector service resource ID.
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  ///  A random system generated name will be assigned
  ///  if not specified by the user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.CreateClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L281}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  CreateClientConnectorService(
      std::string const& parent,
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorService const& client_connector_service,
      std::string const& client_connector_service_id, Options opts = {});

  ///
  /// Creates a new ClientConnectorService in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::CreateClientConnectorServiceRequest,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L281}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.CreateClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L281}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  CreateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          CreateClientConnectorServiceRequest const& request,
      Options opts = {});

  ///
  /// Updates the parameters of a single ClientConnectorService.
  ///
  /// @param client_connector_service  Required. The resource being updated.
  /// @param update_mask  Required. Field mask is used to specify the fields to
  /// be overwritten in the
  ///  ClientConnectorService resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If
  ///  the user does not provide a mask then all fields will be overwritten.
  ///  Mutable fields: display_name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.UpdateClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L325}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorService const& client_connector_service,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the parameters of a single ClientConnectorService.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::UpdateClientConnectorServiceRequest,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L325}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorService,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.UpdateClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L325}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          UpdateClientConnectorServiceRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single ClientConnectorService.
  ///
  /// @param name  Required. Name of the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorServiceOperationMetadata,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L394}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorServiceOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L394}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.DeleteClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L364}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorServiceOperationMetadata>>
  DeleteClientConnectorService(std::string const& name, Options opts = {});

  ///
  /// Deletes a single ClientConnectorService.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::DeleteClientConnectorServiceRequest,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L364}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientconnectorservices::v1::ClientConnectorServiceOperationMetadata,google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L394}
  ///
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorServiceOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L394}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.DeleteClientConnectorServiceRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L364}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorServiceOperationMetadata>>
  DeleteClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          DeleteClientConnectorServiceRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ClientConnectorServicesServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENT_CONNECTOR_SERVICES_CLIENT_H
