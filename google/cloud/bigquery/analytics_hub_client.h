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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICS_HUB_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICS_HUB_CLIENT_H

#include "google/cloud/bigquery/analytics_hub_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The `AnalyticsHubService` API facilitates data sharing within and across
/// organizations. It allows data providers to publish listings that reference
/// shared datasets. With Analytics Hub, users can discover and search for
/// listings that they have access to. Subscribers can view and subscribe to
/// listings. When you subscribe to a listing, Analytics Hub creates a linked
/// dataset in your project.
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
class AnalyticsHubServiceClient {
 public:
  explicit AnalyticsHubServiceClient(
      std::shared_ptr<AnalyticsHubServiceConnection> connection,
      Options opts = {});
  ~AnalyticsHubServiceClient();

  ///@{
  /// @name Copy and move support
  AnalyticsHubServiceClient(AnalyticsHubServiceClient const&) = default;
  AnalyticsHubServiceClient& operator=(AnalyticsHubServiceClient const&) =
      default;
  AnalyticsHubServiceClient(AnalyticsHubServiceClient&&) = default;
  AnalyticsHubServiceClient& operator=(AnalyticsHubServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AnalyticsHubServiceClient const& a,
                         AnalyticsHubServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AnalyticsHubServiceClient const& a,
                         AnalyticsHubServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists all data exchanges in a given project and location.
  ///
  /// @param parent  Required. The parent resource path of the data exchanges.
  ///  e.g. `projects/myproject/locations/US`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.ListDataExchangesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L433}
  ///
  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListDataExchanges(std::string const& parent, Options opts = {});

  ///
  /// Lists all data exchanges in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L433}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.ListDataExchangesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L433}
  ///
  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
          request,
      Options opts = {});

  ///
  /// Lists all data exchanges from projects in a given organization and
  /// location.
  ///
  /// @param organization  Required. The organization resource path of the
  /// projects containing DataExchanges.
  ///  e.g. `organizations/myorg/locations/US`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.ListOrgDataExchangesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L463}
  ///
  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListOrgDataExchanges(std::string const& organization, Options opts = {});

  ///
  /// Lists all data exchanges from projects in a given organization and
  /// location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L463}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.ListOrgDataExchangesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L463}
  ///
  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListOrgDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
          request,
      Options opts = {});

  ///
  /// Gets the details of a data exchange.
  ///
  /// @param name  Required. The resource name of the data exchange.
  ///  e.g. `projects/myproject/locations/US/dataExchanges/123`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.GetDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L488}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(std::string const& name, Options opts = {});

  ///
  /// Gets the details of a data exchange.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L488}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.GetDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L488}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new data exchange.
  ///
  /// @param parent  Required. The parent resource path of the data exchange.
  ///  e.g. `projects/myproject/locations/US`.
  /// @param data_exchange  Required. The data exchange to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.CreateDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L500}
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(
      std::string const& parent,
      google::cloud::bigquery::analyticshub::v1::DataExchange const&
          data_exchange,
      Options opts = {});

  ///
  /// Creates a new data exchange.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::CreateDataExchangeRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L500}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.CreateDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L500}
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request,
                     Options opts = {});

  ///
  /// Updates an existing data exchange.
  ///
  /// @param data_exchange  Required. The data exchange to update.
  /// @param update_mask  Required. Field mask specifies the fields to update in
  /// the data exchange
  ///  resource. The fields specified in the
  ///  `updateMask` are relative to the resource and are not a full request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.UpdateDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L522}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(
      google::cloud::bigquery::analyticshub::v1::DataExchange const&
          data_exchange,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an existing data exchange.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::UpdateDataExchangeRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L522}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DataExchange,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DataExchange]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L200}
  /// [google.cloud.bigquery.analyticshub.v1.UpdateDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L522}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request,
                     Options opts = {});

  ///
  /// Deletes an existing data exchange.
  ///
  /// @param name  Required. The full name of the data exchange resource that
  /// you want to delete.
  ///  For example, `projects/myproject/locations/US/dataExchanges/123`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DeleteDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L533}
  ///
  Status DeleteDataExchange(std::string const& name, Options opts = {});

  ///
  /// Deletes an existing data exchange.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DeleteDataExchangeRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L533}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DeleteDataExchangeRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L533}
  ///
  Status DeleteDataExchange(google::cloud::bigquery::analyticshub::v1::
                                DeleteDataExchangeRequest const& request,
                            Options opts = {});

  ///
  /// Lists all listings in a given project and location.
  ///
  /// @param parent  Required. The parent resource path of the listing.
  ///  e.g. `projects/myproject/locations/US/dataExchanges/123`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.ListListingsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L545}
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  StreamRange<google::cloud::bigquery::analyticshub::v1::Listing> ListListings(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all listings in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::ListListingsRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L545}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.ListListingsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L545}
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  StreamRange<google::cloud::bigquery::analyticshub::v1::Listing> ListListings(
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest request,
      Options opts = {});

  ///
  /// Gets the details of a listing.
  ///
  /// @param name  Required. The resource name of the listing.
  ///  e.g. `projects/myproject/locations/US/dataExchanges/123/listings/456`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.GetListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L574}
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> GetListing(
      std::string const& name, Options opts = {});

  ///
  /// Gets the details of a listing.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::GetListingRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L574}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.GetListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L574}
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> GetListing(
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new listing.
  ///
  /// @param parent  Required. The parent resource path of the listing.
  ///  e.g. `projects/myproject/locations/US/dataExchanges/123`.
  /// @param listing  Required. The listing to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.CreateListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L586}
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> CreateListing(
      std::string const& parent,
      google::cloud::bigquery::analyticshub::v1::Listing const& listing,
      Options opts = {});

  ///
  /// Creates a new listing.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::CreateListingRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L586}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.CreateListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L586}
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> CreateListing(
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request,
      Options opts = {});

  ///
  /// Updates an existing listing.
  ///
  /// @param listing  Required. The listing to update.
  /// @param update_mask  Required. Field mask specifies the fields to update in
  /// the listing resource. The
  ///  fields specified in the `updateMask` are relative to the resource and are
  ///  not a full request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  /// [google.cloud.bigquery.analyticshub.v1.UpdateListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L608}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> UpdateListing(
      google::cloud::bigquery::analyticshub::v1::Listing const& listing,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an existing listing.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::UpdateListingRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L608}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::Listing,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.Listing]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L301}
  /// [google.cloud.bigquery.analyticshub.v1.UpdateListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L608}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> UpdateListing(
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes a listing.
  ///
  /// @param name  Required. Resource name of the listing to delete.
  ///  e.g. `projects/myproject/locations/US/dataExchanges/123/listings/456`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DeleteListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L619}
  ///
  Status DeleteListing(std::string const& name, Options opts = {});

  ///
  /// Deletes a listing.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::DeleteListingRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L619}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.analyticshub.v1.DeleteListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L619}
  ///
  Status DeleteListing(
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request,
      Options opts = {});

  ///
  /// Subscribes to a listing.
  ///
  /// Currently, with Analytics Hub, you can create listings that
  /// reference only BigQuery datasets.
  /// Upon subscription to a listing for a BigQuery dataset, Analytics Hub
  /// creates a linked dataset in the subscriber's project.
  ///
  /// @param name  Required. Resource name of the listing that you want to
  /// subscribe to.
  ///  e.g. `projects/myproject/locations/US/dataExchanges/123/listings/456`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L649}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.SubscribeListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L631}
  /// [google.cloud.bigquery.analyticshub.v1.SubscribeListingResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L649}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(std::string const& name, Options opts = {});

  ///
  /// Subscribes to a listing.
  ///
  /// Currently, with Analytics Hub, you can create listings that
  /// reference only BigQuery datasets.
  /// Upon subscription to a listing for a BigQuery dataset, Analytics Hub
  /// creates a linked dataset in the subscriber's project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L631}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse,google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L649}
  ///
  /// [google.cloud.bigquery.analyticshub.v1.SubscribeListingRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L631}
  /// [google.cloud.bigquery.analyticshub.v1.SubscribeListingResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/analyticshub/v1/analyticshub.proto#L649}
  ///
  StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request,
      Options opts = {});

  ///
  /// Gets the IAM policy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the IAM policy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns the permissions that a caller has.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<AnalyticsHubServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICS_HUB_CLIENT_H
