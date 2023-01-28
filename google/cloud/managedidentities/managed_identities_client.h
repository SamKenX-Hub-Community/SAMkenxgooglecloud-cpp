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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CLIENT_H

#include "google/cloud/managedidentities/managed_identities_connection.h"
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
namespace managedidentities {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview
///
/// The `managedidentites.googleapis.com` service implements the Google Cloud
/// Managed Identites API for identity services
/// (e.g. Microsoft Active Directory).
///
/// The Managed Identities service provides methods to manage
/// (create/read/update/delete) domains, reset managed identities admin
/// password, add/remove domain controllers in GCP regions and add/remove VPC
/// peering.
///
/// Data Model
///
/// The Managed Identities service exposes the following resources:
///
/// * Locations as global, named as follows:
///   `projects/{project_id}/locations/global`.
///
/// * Domains, named as follows:
///   `/projects/{project_id}/locations/global/domain/{domain_name}`.
///
/// The `{domain_name}` refers to fully qualified domain name in the customer
/// project e.g. mydomain.myorganization.com, with the following restrictions:
///
///  * Must contain only lowercase letters, numbers, periods and hyphens.
///  * Must start with a letter.
///  * Must contain between 2-64 characters.
///  * Must end with a number or a letter.
///  * Must not start with period.
///  * First segement length (mydomain form example above) shouldn't exceed
///    15 chars.
///  * The last segment cannot be fully numeric.
///  * Must be unique within the customer project.
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
class ManagedIdentitiesServiceClient {
 public:
  explicit ManagedIdentitiesServiceClient(
      std::shared_ptr<ManagedIdentitiesServiceConnection> connection,
      Options opts = {});
  ~ManagedIdentitiesServiceClient();

  ///@{
  /// @name Copy and move support
  ManagedIdentitiesServiceClient(ManagedIdentitiesServiceClient const&) =
      default;
  ManagedIdentitiesServiceClient& operator=(
      ManagedIdentitiesServiceClient const&) = default;
  ManagedIdentitiesServiceClient(ManagedIdentitiesServiceClient&&) = default;
  ManagedIdentitiesServiceClient& operator=(ManagedIdentitiesServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ManagedIdentitiesServiceClient const& a,
                         ManagedIdentitiesServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ManagedIdentitiesServiceClient const& a,
                         ManagedIdentitiesServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a Microsoft AD domain.
  ///
  /// @param parent  Required. The resource project name and location using the
  /// form:
  ///  `projects/{project_id}/locations/global`
  /// @param domain_name  Required. The fully qualified domain name.
  ///  e.g. mydomain.myorganization.com, with the following restrictions:
  ///   * Must contain only lowercase letters, numbers, periods and hyphens.
  ///   * Must start with a letter.
  ///   * Must contain between 2-64 characters.
  ///   * Must end with a number or a letter.
  ///   * Must not start with period.
  ///   * First segement length (mydomain form example above) shouldn't exceed
  ///     15 chars.
  ///   * The last segment cannot be fully numeric.
  ///   * Must be unique within the customer project.
  /// @param domain  Required. A Managed Identity domain resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.CreateMicrosoftAdDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L217}
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  CreateMicrosoftAdDomain(
      std::string const& parent, std::string const& domain_name,
      google::cloud::managedidentities::v1::Domain const& domain,
      Options opts = {});

  ///
  /// Creates a Microsoft AD domain.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L217}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.CreateMicrosoftAdDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L217}
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  CreateMicrosoftAdDomain(google::cloud::managedidentities::v1::
                              CreateMicrosoftAdDomainRequest const& request,
                          Options opts = {});

  ///
  /// Resets a domain's administrator password.
  ///
  /// @param name  Required. The domain resource name using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::ResetAdminPasswordResponse,google/cloud/managedidentities/v1/managed_identities_service.proto#L260}
  ///
  /// [google.cloud.managedidentities.v1.ResetAdminPasswordRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L247}
  /// [google.cloud.managedidentities.v1.ResetAdminPasswordResponse]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L260}
  ///
  StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(std::string const& name, Options opts = {});

  ///
  /// Resets a domain's administrator password.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::ResetAdminPasswordRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L247}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::ResetAdminPasswordResponse,google/cloud/managedidentities/v1/managed_identities_service.proto#L260}
  ///
  /// [google.cloud.managedidentities.v1.ResetAdminPasswordRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L247}
  /// [google.cloud.managedidentities.v1.ResetAdminPasswordResponse]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L260}
  ///
  StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request,
      Options opts = {});

  ///
  /// Lists domains in a project.
  ///
  /// @param parent  Required. The resource name of the domain location using
  /// the form:
  ///  `projects/{project_id}/locations/global`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.ListDomainsRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L267}
  ///
  StreamRange<google::cloud::managedidentities::v1::Domain> ListDomains(
      std::string const& parent, Options opts = {});

  ///
  /// Lists domains in a project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::ListDomainsRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L267}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.ListDomainsRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L267}
  ///
  StreamRange<google::cloud::managedidentities::v1::Domain> ListDomains(
      google::cloud::managedidentities::v1::ListDomainsRequest request,
      Options opts = {});

  ///
  /// Gets information about a domain.
  ///
  /// @param name  Required. The domain resource name using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.GetDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L315}
  ///
  StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      std::string const& name, Options opts = {});

  ///
  /// Gets information about a domain.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::GetDomainRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L315}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.GetDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L315}
  ///
  StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      google::cloud::managedidentities::v1::GetDomainRequest const& request,
      Options opts = {});

  ///
  /// Updates the metadata and configuration of a domain.
  ///
  /// @param domain  Required. Domain message with updated fields. Only
  /// supported fields specified in
  ///  update_mask are updated.
  /// @param update_mask  Required. Mask of fields to update. At least one path
  /// must be supplied in this
  ///  field. The elements of the repeated paths field may only include
  ///  fields from [Domain][google.cloud.managedidentities.v1.Domain]:
  ///   * `labels`
  ///   * `locations`
  ///   * `authorized_networks`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.UpdateDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L328}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> UpdateDomain(
      google::cloud::managedidentities::v1::Domain const& domain,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the metadata and configuration of a domain.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::UpdateDomainRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L328}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.UpdateDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L328}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> UpdateDomain(
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request,
      Options opts = {});

  ///
  /// Deletes a domain.
  ///
  /// @param name  Required. The domain resource name using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::OpMetadata,google/cloud/managedidentities/v1/managed_identities_service.proto#L192}
  ///
  /// [google.cloud.managedidentities.v1.DeleteDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L344}
  /// [google.cloud.managedidentities.v1.OpMetadata]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L192}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
  DeleteDomain(std::string const& name, Options opts = {});

  ///
  /// Deletes a domain.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::DeleteDomainRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L344}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::OpMetadata,google/cloud/managedidentities/v1/managed_identities_service.proto#L192}
  ///
  /// [google.cloud.managedidentities.v1.DeleteDomainRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L344}
  /// [google.cloud.managedidentities.v1.OpMetadata]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L192}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
  DeleteDomain(
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request,
      Options opts = {});

  ///
  /// Adds an AD trust to a domain.
  ///
  /// @param name  Required. The resource domain name, project name and location
  /// using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param trust  Required. The domain trust resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.AttachTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L357}
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> AttachTrust(
      std::string const& name,
      google::cloud::managedidentities::v1::Trust const& trust,
      Options opts = {});

  ///
  /// Adds an AD trust to a domain.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::AttachTrustRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L357}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.AttachTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L357}
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> AttachTrust(
      google::cloud::managedidentities::v1::AttachTrustRequest const& request,
      Options opts = {});

  ///
  /// Updates the DNS conditional forwarder.
  ///
  /// @param name  Required. The resource domain name, project name and location
  /// using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param target_domain_name  Required. The fully-qualified target domain
  /// name which will be in trust with current
  ///  domain.
  /// @param target_dns_ip_addresses  Required. The target DNS server IP
  /// addresses to resolve the remote domain involved
  ///  in the trust.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.ReconfigureTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L373}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  ReconfigureTrust(std::string const& name,
                   std::string const& target_domain_name,
                   std::vector<std::string> const& target_dns_ip_addresses,
                   Options opts = {});

  ///
  /// Updates the DNS conditional forwarder.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::ReconfigureTrustRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L373}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.ReconfigureTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L373}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  ReconfigureTrust(
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request,
      Options opts = {});

  ///
  /// Removes an AD trust.
  ///
  /// @param name  Required. The resource domain name, project name, and
  /// location using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param trust  Required. The domain trust resource to removed.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.DetachTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L394}
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> DetachTrust(
      std::string const& name,
      google::cloud::managedidentities::v1::Trust const& trust,
      Options opts = {});

  ///
  /// Removes an AD trust.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::DetachTrustRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L394}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.DetachTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L394}
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> DetachTrust(
      google::cloud::managedidentities::v1::DetachTrustRequest const& request,
      Options opts = {});

  ///
  /// Validates a trust state, that the target domain is reachable, and that the
  /// target domain is able to accept incoming trust requests.
  ///
  /// @param name  Required. The resource domain name, project name, and
  /// location using the form:
  ///  `projects/{project_id}/locations/global/domains/{domain_name}`
  /// @param trust  Required. The domain trust to validate trust state for.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.ValidateTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L410}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> ValidateTrust(
      std::string const& name,
      google::cloud::managedidentities::v1::Trust const& trust,
      Options opts = {});

  ///
  /// Validates a trust state, that the target domain is reachable, and that the
  /// target domain is able to accept incoming trust requests.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::managedidentities::v1::ValidateTrustRequest,google/cloud/managedidentities/v1/managed_identities_service.proto#L410}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::managedidentities::v1::Domain,google/cloud/managedidentities/v1/resource.proto#L33}
  ///
  /// [google.cloud.managedidentities.v1.Domain]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/resource.proto#L33}
  /// [google.cloud.managedidentities.v1.ValidateTrustRequest]:
  /// @googleapis_reference_link{google/cloud/managedidentities/v1/managed_identities_service.proto#L410}
  ///
  future<StatusOr<google::cloud::managedidentities::v1::Domain>> ValidateTrust(
      google::cloud::managedidentities::v1::ValidateTrustRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ManagedIdentitiesServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CLIENT_H
