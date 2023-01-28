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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_APPLICATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_APPLICATIONS_CLIENT_H

#include "google/cloud/appengine/applications_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages App Engine applications.
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
class ApplicationsClient {
 public:
  explicit ApplicationsClient(
      std::shared_ptr<ApplicationsConnection> connection, Options opts = {});
  ~ApplicationsClient();

  ///@{
  /// @name Copy and move support
  ApplicationsClient(ApplicationsClient const&) = default;
  ApplicationsClient& operator=(ApplicationsClient const&) = default;
  ApplicationsClient(ApplicationsClient&&) = default;
  ApplicationsClient& operator=(ApplicationsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ApplicationsClient const& a,
                         ApplicationsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ApplicationsClient const& a,
                         ApplicationsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Gets information about an application.
  ///
  /// @param name  Name of the Application resource to get. Example:
  /// `apps/myapp`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::Application,google/appengine/v1/application.proto#L31}
  ///
  /// [google.appengine.v1.Application]:
  /// @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.GetApplicationRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L115}
  ///
  StatusOr<google::appengine::v1::Application> GetApplication(
      std::string const& name, Options opts = {});

  ///
  /// Gets information about an application.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::GetApplicationRequest,google/appengine/v1/appengine.proto#L115}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::Application,google/appengine/v1/application.proto#L31}
  ///
  /// [google.appengine.v1.Application]:
  /// @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.GetApplicationRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L115}
  ///
  StatusOr<google::appengine::v1::Application> GetApplication(
      google::appengine::v1::GetApplicationRequest const& request,
      Options opts = {});

  ///
  /// Creates an App Engine application for a Google Cloud Platform project.
  /// Required fields:
  ///
  /// * `id` - The ID of the target Cloud Platform project.
  /// * *location* - The
  /// [region](https://cloud.google.com/appengine/docs/locations) where you want
  /// the App Engine application located.
  ///
  /// For more information about App Engine applications, see [Managing
  /// Projects, Applications, and
  /// Billing](https://cloud.google.com/appengine/docs/standard/python/console/).
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::CreateApplicationRequest,google/appengine/v1/appengine.proto#L121}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::Application,google/appengine/v1/application.proto#L31}
  ///
  /// [google.appengine.v1.Application]:
  /// @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.CreateApplicationRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L121}
  ///
  future<StatusOr<google::appengine::v1::Application>> CreateApplication(
      google::appengine::v1::CreateApplicationRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified Application resource.
  /// You can update the following fields:
  ///
  /// * `auth_domain` - Google authentication domain for controlling user access
  /// to the application.
  /// * `default_cookie_expiration` - Cookie expiration policy for the
  /// application.
  /// * `iap` - Identity-Aware Proxy properties for the application.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::UpdateApplicationRequest,google/appengine/v1/appengine.proto#L127}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::Application,google/appengine/v1/application.proto#L31}
  ///
  /// [google.appengine.v1.Application]:
  /// @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.UpdateApplicationRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L127}
  ///
  future<StatusOr<google::appengine::v1::Application>> UpdateApplication(
      google::appengine::v1::UpdateApplicationRequest const& request,
      Options opts = {});

  ///
  /// Recreates the required App Engine features for the specified App Engine
  /// application, for example a Cloud Storage bucket or App Engine service
  /// account.
  /// Use this method if you receive an error message about a missing feature,
  /// for example, *Error retrieving the App Engine service account*.
  /// If you have deleted your App Engine service account, this will
  /// not be able to recreate it. Instead, you should attempt to use the
  /// IAM undelete API if possible at
  /// https://cloud.google.com/iam/reference/rest/v1/projects.serviceAccounts/undelete?apix_params=%7B"name"%3A"projects%2F-%2FserviceAccounts%2Funique_id"%2C"resource"%3A%7B%7D%7D
  /// . If the deletion was recent, the numeric ID can be found in the Cloud
  /// Console Activity Log.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::RepairApplicationRequest,google/appengine/v1/appengine.proto#L139}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::appengine::v1::Application,google/appengine/v1/application.proto#L31}
  ///
  /// [google.appengine.v1.Application]:
  /// @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.RepairApplicationRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L139}
  ///
  future<StatusOr<google::appengine::v1::Application>> RepairApplication(
      google::appengine::v1::RepairApplicationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ApplicationsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_APPLICATIONS_CLIENT_H
