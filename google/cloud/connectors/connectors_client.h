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
// source: google/cloud/connectors/v1/connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_CONNECTORS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_CONNECTORS_CLIENT_H

#include "google/cloud/connectors/connectors_connection.h"
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
namespace connectors {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Connectors is the interface for managing Connectors.
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
class ConnectorsClient {
 public:
  explicit ConnectorsClient(std::shared_ptr<ConnectorsConnection> connection,
                            Options opts = {});
  ~ConnectorsClient();

  ///@{
  /// @name Copy and move support
  ConnectorsClient(ConnectorsClient const&) = default;
  ConnectorsClient& operator=(ConnectorsClient const&) = default;
  ConnectorsClient(ConnectorsClient&&) = default;
  ConnectorsClient& operator=(ConnectorsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConnectorsClient const& a, ConnectorsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConnectorsClient const& a, ConnectorsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists Connections in a given project and location.
  ///
  /// @param parent  Required. Parent resource of the Connection, of the form:
  ///  `projects/*/locations/*`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.ListConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L222}
  ///
  StreamRange<google::cloud::connectors::v1::Connection> ListConnections(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Connections in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::ListConnectionsRequest,google/cloud/connectors/v1/connection.proto#L222}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.ListConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L222}
  ///
  StreamRange<google::cloud::connectors::v1::Connection> ListConnections(
      google::cloud::connectors::v1::ListConnectionsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single Connection.
  ///
  /// @param name  Required. Resource name of the form:
  ///  `projects/*/locations/*/connections/*`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.GetConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L262}
  ///
  StatusOr<google::cloud::connectors::v1::Connection> GetConnection(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single Connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::GetConnectionRequest,google/cloud/connectors/v1/connection.proto#L262}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.GetConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L262}
  ///
  StatusOr<google::cloud::connectors::v1::Connection> GetConnection(
      google::cloud::connectors::v1::GetConnectionRequest const& request,
      Options opts = {});

  ///
  /// Creates a new Connection in a given project and location.
  ///
  /// @param parent  Required. Parent resource of the Connection, of the form:
  ///  `projects/*/locations/*`
  /// @param connection  Required. Connection resource.
  /// @param connection_id  Required. Identifier to assign to the Connection.
  /// Must be unique within scope of
  ///  the parent resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.CreateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L278}
  ///
  future<StatusOr<google::cloud::connectors::v1::Connection>> CreateConnection(
      std::string const& parent,
      google::cloud::connectors::v1::Connection const& connection,
      std::string const& connection_id, Options opts = {});

  ///
  /// Creates a new Connection in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::CreateConnectionRequest,google/cloud/connectors/v1/connection.proto#L278}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.CreateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L278}
  ///
  future<StatusOr<google::cloud::connectors::v1::Connection>> CreateConnection(
      google::cloud::connectors::v1::CreateConnectionRequest const& request,
      Options opts = {});

  ///
  /// Updates the parameters of a single Connection.
  ///
  /// @param connection  Required. Connection resource.
  /// @param update_mask  Required. Field mask is used to specify the fields to
  /// be overwritten in the
  ///  Connection resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If
  ///  the user does not provide a mask then all fields will be overwritten.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.UpdateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L297}
  ///
  future<StatusOr<google::cloud::connectors::v1::Connection>> UpdateConnection(
      google::cloud::connectors::v1::Connection const& connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the parameters of a single Connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::UpdateConnectionRequest,google/cloud/connectors/v1/connection.proto#L297}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connection,google/cloud/connectors/v1/connection.proto#L34}
  ///
  /// [google.cloud.connectors.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L34}
  /// [google.cloud.connectors.v1.UpdateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L297}
  ///
  future<StatusOr<google::cloud::connectors::v1::Connection>> UpdateConnection(
      google::cloud::connectors::v1::UpdateConnectionRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single Connection.
  ///
  /// @param name  Required. Resource name of the form:
  ///  `projects/*/locations/*/connections/*`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::OperationMetadata,google/cloud/connectors/v1/common.proto#L28}
  ///
  /// [google.cloud.connectors.v1.DeleteConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L310}
  /// [google.cloud.connectors.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/common.proto#L28}
  ///
  future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
  DeleteConnection(std::string const& name, Options opts = {});

  ///
  /// Deletes a single Connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::DeleteConnectionRequest,google/cloud/connectors/v1/connection.proto#L310}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::OperationMetadata,google/cloud/connectors/v1/common.proto#L28}
  ///
  /// [google.cloud.connectors.v1.DeleteConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L310}
  /// [google.cloud.connectors.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/common.proto#L28}
  ///
  future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
  DeleteConnection(
      google::cloud::connectors::v1::DeleteConnectionRequest const& request,
      Options opts = {});

  ///
  /// Lists Providers in a given project and location.
  ///
  /// @param parent  Required. Parent resource of the API, of the form:
  ///  `projects/*/locations/*`
  ///  Only global location is supported for Provider resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Provider,google/cloud/connectors/v1/provider.proto#L30}
  ///
  /// [google.cloud.connectors.v1.ListProvidersRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L85}
  /// [google.cloud.connectors.v1.Provider]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L30}
  ///
  StreamRange<google::cloud::connectors::v1::Provider> ListProviders(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Providers in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::ListProvidersRequest,google/cloud/connectors/v1/provider.proto#L85}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Provider,google/cloud/connectors/v1/provider.proto#L30}
  ///
  /// [google.cloud.connectors.v1.ListProvidersRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L85}
  /// [google.cloud.connectors.v1.Provider]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L30}
  ///
  StreamRange<google::cloud::connectors::v1::Provider> ListProviders(
      google::cloud::connectors::v1::ListProvidersRequest request,
      Options opts = {});

  ///
  /// Gets details of a provider.
  ///
  /// @param name  Required. Resource name of the form:
  ///  `projects/*/locations/*/providers/*`
  ///  Only global location is supported for Provider resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Provider,google/cloud/connectors/v1/provider.proto#L30}
  ///
  /// [google.cloud.connectors.v1.GetProviderRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L72}
  /// [google.cloud.connectors.v1.Provider]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L30}
  ///
  StatusOr<google::cloud::connectors::v1::Provider> GetProvider(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a provider.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::GetProviderRequest,google/cloud/connectors/v1/provider.proto#L72}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Provider,google/cloud/connectors/v1/provider.proto#L30}
  ///
  /// [google.cloud.connectors.v1.GetProviderRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L72}
  /// [google.cloud.connectors.v1.Provider]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/provider.proto#L30}
  ///
  StatusOr<google::cloud::connectors::v1::Provider> GetProvider(
      google::cloud::connectors::v1::GetProviderRequest const& request,
      Options opts = {});

  ///
  /// Lists Connectors in a given project and location.
  ///
  /// @param parent  Required. Parent resource of the connectors, of the form:
  ///  `projects/*/locations/*/providers/*`
  ///  Only global location is supported for Connector resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connector,google/cloud/connectors/v1/connector.proto#L30}
  ///
  /// [google.cloud.connectors.v1.Connector]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L30}
  /// [google.cloud.connectors.v1.ListConnectorsRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L86}
  ///
  StreamRange<google::cloud::connectors::v1::Connector> ListConnectors(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Connectors in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::ListConnectorsRequest,google/cloud/connectors/v1/connector.proto#L86}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connector,google/cloud/connectors/v1/connector.proto#L30}
  ///
  /// [google.cloud.connectors.v1.Connector]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L30}
  /// [google.cloud.connectors.v1.ListConnectorsRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L86}
  ///
  StreamRange<google::cloud::connectors::v1::Connector> ListConnectors(
      google::cloud::connectors::v1::ListConnectorsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single Connector.
  ///
  /// @param name  Required. Resource name of the form:
  ///  `projects/*/locations/*/providers/*/connectors/*`
  ///  Only global location is supported for Connector resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connector,google/cloud/connectors/v1/connector.proto#L30}
  ///
  /// [google.cloud.connectors.v1.Connector]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L30}
  /// [google.cloud.connectors.v1.GetConnectorRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L73}
  ///
  StatusOr<google::cloud::connectors::v1::Connector> GetConnector(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single Connector.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::GetConnectorRequest,google/cloud/connectors/v1/connector.proto#L73}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::Connector,google/cloud/connectors/v1/connector.proto#L30}
  ///
  /// [google.cloud.connectors.v1.Connector]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L30}
  /// [google.cloud.connectors.v1.GetConnectorRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector.proto#L73}
  ///
  StatusOr<google::cloud::connectors::v1::Connector> GetConnector(
      google::cloud::connectors::v1::GetConnectorRequest const& request,
      Options opts = {});

  ///
  /// Lists Connector Versions in a given project and location.
  ///
  /// @param parent  Required. Parent resource of the connectors, of the form:
  ///  `projects/*/locations/*/providers/*/connectors/*`
  ///  Only global location is supported for ConnectorVersion resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::ConnectorVersion,google/cloud/connectors/v1/connector_version.proto#L31}
  ///
  /// [google.cloud.connectors.v1.ConnectorVersion]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L31}
  /// [google.cloud.connectors.v1.ListConnectorVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L101}
  ///
  StreamRange<google::cloud::connectors::v1::ConnectorVersion>
  ListConnectorVersions(std::string const& parent, Options opts = {});

  ///
  /// Lists Connector Versions in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::ListConnectorVersionsRequest,google/cloud/connectors/v1/connector_version.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::ConnectorVersion,google/cloud/connectors/v1/connector_version.proto#L31}
  ///
  /// [google.cloud.connectors.v1.ConnectorVersion]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L31}
  /// [google.cloud.connectors.v1.ListConnectorVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L101}
  ///
  StreamRange<google::cloud::connectors::v1::ConnectorVersion>
  ListConnectorVersions(
      google::cloud::connectors::v1::ListConnectorVersionsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single connector version.
  ///
  /// @param name  Required. Resource name of the form:
  ///  `projects/*/locations/*/providers/*/connectors/*/versions/*`
  ///  Only global location is supported for ConnectorVersion resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::ConnectorVersion,google/cloud/connectors/v1/connector_version.proto#L31}
  ///
  /// [google.cloud.connectors.v1.ConnectorVersion]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L31}
  /// [google.cloud.connectors.v1.GetConnectorVersionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L84}
  ///
  StatusOr<google::cloud::connectors::v1::ConnectorVersion> GetConnectorVersion(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single connector version.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::GetConnectorVersionRequest,google/cloud/connectors/v1/connector_version.proto#L84}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::ConnectorVersion,google/cloud/connectors/v1/connector_version.proto#L31}
  ///
  /// [google.cloud.connectors.v1.ConnectorVersion]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L31}
  /// [google.cloud.connectors.v1.GetConnectorVersionRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connector_version.proto#L84}
  ///
  StatusOr<google::cloud::connectors::v1::ConnectorVersion> GetConnectorVersion(
      google::cloud::connectors::v1::GetConnectorVersionRequest const& request,
      Options opts = {});

  ///
  /// Gets schema metadata of a connection.
  /// SchemaMetadata is a singleton resource for each connection.
  ///
  /// @param name  Required. Connection name
  ///  Format:
  ///  projects/{project}/locations/{location}/connections/{connection}/connectionSchemaMetadata
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::ConnectionSchemaMetadata,google/cloud/connectors/v1/connection.proto#L120}
  ///
  /// [google.cloud.connectors.v1.ConnectionSchemaMetadata]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L120}
  /// [google.cloud.connectors.v1.GetConnectionSchemaMetadataRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L322}
  ///
  StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
  GetConnectionSchemaMetadata(std::string const& name, Options opts = {});

  ///
  /// Gets schema metadata of a connection.
  /// SchemaMetadata is a singleton resource for each connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest,google/cloud/connectors/v1/connection.proto#L322}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::ConnectionSchemaMetadata,google/cloud/connectors/v1/connection.proto#L120}
  ///
  /// [google.cloud.connectors.v1.ConnectionSchemaMetadata]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L120}
  /// [google.cloud.connectors.v1.GetConnectionSchemaMetadataRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L322}
  ///
  StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
  GetConnectionSchemaMetadata(
      google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
          request,
      Options opts = {});

  ///
  /// List schema of a runtime entities filtered by entity name.
  ///
  /// @param parent  Required. Parent resource of RuntimeEntitySchema
  ///  Format:
  ///  projects/{project}/locations/{location}/connections/{connection}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::RuntimeEntitySchema,google/cloud/connectors/v1/connection.proto#L129}
  ///
  /// [google.cloud.connectors.v1.ListRuntimeEntitySchemasRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L338}
  /// [google.cloud.connectors.v1.RuntimeEntitySchema]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L129}
  ///
  StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
  ListRuntimeEntitySchemas(std::string const& parent, Options opts = {});

  ///
  /// List schema of a runtime entities filtered by entity name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest,google/cloud/connectors/v1/connection.proto#L338}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::RuntimeEntitySchema,google/cloud/connectors/v1/connection.proto#L129}
  ///
  /// [google.cloud.connectors.v1.ListRuntimeEntitySchemasRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L338}
  /// [google.cloud.connectors.v1.RuntimeEntitySchema]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L129}
  ///
  StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
  ListRuntimeEntitySchemas(
      google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request,
      Options opts = {});

  ///
  /// List schema of a runtime actions filtered by action name.
  ///
  /// @param parent  Required. Parent resource of RuntimeActionSchema
  ///  Format:
  ///  projects/{project}/locations/{location}/connections/{connection}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::RuntimeActionSchema,google/cloud/connectors/v1/connection.proto#L169}
  ///
  /// [google.cloud.connectors.v1.ListRuntimeActionSchemasRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L377}
  /// [google.cloud.connectors.v1.RuntimeActionSchema]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L169}
  ///
  StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
  ListRuntimeActionSchemas(std::string const& parent, Options opts = {});

  ///
  /// List schema of a runtime actions filtered by action name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::ListRuntimeActionSchemasRequest,google/cloud/connectors/v1/connection.proto#L377}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::RuntimeActionSchema,google/cloud/connectors/v1/connection.proto#L169}
  ///
  /// [google.cloud.connectors.v1.ListRuntimeActionSchemasRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L377}
  /// [google.cloud.connectors.v1.RuntimeActionSchema]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/connection.proto#L169}
  ///
  StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
  ListRuntimeActionSchemas(
      google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request,
      Options opts = {});

  ///
  /// Gets the runtimeConfig of a location.
  /// RuntimeConfig is a singleton resource for each location.
  ///
  /// @param name  Required. Resource name of the form:
  ///  `projects/*/locations/*/runtimeConfig`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::RuntimeConfig,google/cloud/connectors/v1/runtime.proto#L43}
  ///
  /// [google.cloud.connectors.v1.GetRuntimeConfigRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/runtime.proto#L28}
  /// [google.cloud.connectors.v1.RuntimeConfig]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/runtime.proto#L43}
  ///
  StatusOr<google::cloud::connectors::v1::RuntimeConfig> GetRuntimeConfig(
      std::string const& name, Options opts = {});

  ///
  /// Gets the runtimeConfig of a location.
  /// RuntimeConfig is a singleton resource for each location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::connectors::v1::GetRuntimeConfigRequest,google/cloud/connectors/v1/runtime.proto#L28}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::connectors::v1::RuntimeConfig,google/cloud/connectors/v1/runtime.proto#L43}
  ///
  /// [google.cloud.connectors.v1.GetRuntimeConfigRequest]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/runtime.proto#L28}
  /// [google.cloud.connectors.v1.RuntimeConfig]:
  /// @googleapis_reference_link{google/cloud/connectors/v1/runtime.proto#L43}
  ///
  StatusOr<google::cloud::connectors::v1::RuntimeConfig> GetRuntimeConfig(
      google::cloud::connectors::v1::GetRuntimeConfigRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ConnectorsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_CONNECTORS_CLIENT_H
