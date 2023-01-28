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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_CLOUD_SHELL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_CLOUD_SHELL_CLIENT_H

#include "google/cloud/shell/cloud_shell_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace shell {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API for interacting with Google Cloud Shell. Each user of Cloud Shell has at
/// least one environment, which has the ID "default". Environment consists of a
/// Docker image defining what is installed on the environment and a home
/// directory containing the user's data that will remain across sessions.
/// Clients use this API to start and fetch information about their environment,
/// which can then be used to connect to that environment via a separate SSH
/// client.
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
class CloudShellServiceClient {
 public:
  explicit CloudShellServiceClient(
      std::shared_ptr<CloudShellServiceConnection> connection,
      Options opts = {});
  ~CloudShellServiceClient();

  ///@{
  /// @name Copy and move support
  CloudShellServiceClient(CloudShellServiceClient const&) = default;
  CloudShellServiceClient& operator=(CloudShellServiceClient const&) = default;
  CloudShellServiceClient(CloudShellServiceClient&&) = default;
  CloudShellServiceClient& operator=(CloudShellServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudShellServiceClient const& a,
                         CloudShellServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudShellServiceClient const& a,
                         CloudShellServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Gets an environment. Returns NOT_FOUND if the environment does not exist.
  ///
  /// @param name  Required. Name of the requested resource, for example
  /// `users/me/environments/default`
  ///  or `users/someone@example.com/environments/default`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::shell::v1::Environment,google/cloud/shell/v1/cloudshell.proto#L116}
  ///
  /// [google.cloud.shell.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L116}
  /// [google.cloud.shell.v1.GetEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L191}
  ///
  StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      std::string const& name, Options opts = {});

  ///
  /// Gets an environment. Returns NOT_FOUND if the environment does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::shell::v1::GetEnvironmentRequest,google/cloud/shell/v1/cloudshell.proto#L191}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::shell::v1::Environment,google/cloud/shell/v1/cloudshell.proto#L116}
  ///
  /// [google.cloud.shell.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L116}
  /// [google.cloud.shell.v1.GetEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L191}
  ///
  StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      google::cloud::shell::v1::GetEnvironmentRequest const& request,
      Options opts = {});

  ///
  /// Starts an existing environment, allowing clients to connect to it. The
  /// returned operation will contain an instance of StartEnvironmentMetadata in
  /// its metadata field. Users can wait for the environment to start by polling
  /// this operation via GetOperation. Once the environment has finished
  /// starting and is ready to accept connections, the operation will contain a
  /// StartEnvironmentResponse in its response field.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::shell::v1::StartEnvironmentRequest,google/cloud/shell/v1/cloudshell.proto#L216}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::shell::v1::StartEnvironmentResponse,google/cloud/shell/v1/cloudshell.proto#L303}
  ///
  /// [google.cloud.shell.v1.StartEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L216}
  /// [google.cloud.shell.v1.StartEnvironmentResponse]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L303}
  ///
  future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
  StartEnvironment(
      google::cloud::shell::v1::StartEnvironmentRequest const& request,
      Options opts = {});

  ///
  /// Sends OAuth credentials to a running environment on behalf of a user. When
  /// this completes, the environment will be authorized to run various Google
  /// Cloud command line tools without requiring the user to manually
  /// authenticate.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::shell::v1::AuthorizeEnvironmentRequest,google/cloud/shell/v1/cloudshell.proto#L234}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::shell::v1::AuthorizeEnvironmentResponse,google/cloud/shell/v1/cloudshell.proto#L253}
  ///
  /// [google.cloud.shell.v1.AuthorizeEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L234}
  /// [google.cloud.shell.v1.AuthorizeEnvironmentResponse]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L253}
  ///
  future<StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
  AuthorizeEnvironment(
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request,
      Options opts = {});

  ///
  /// Adds a public SSH key to an environment, allowing clients with the
  /// corresponding private key to connect to that environment via SSH. If a key
  /// with the same content already exists, this will error with ALREADY_EXISTS.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::shell::v1::AddPublicKeyRequest,google/cloud/shell/v1/cloudshell.proto#L310}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::shell::v1::AddPublicKeyResponse,google/cloud/shell/v1/cloudshell.proto#L326}
  ///
  /// [google.cloud.shell.v1.AddPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L310}
  /// [google.cloud.shell.v1.AddPublicKeyResponse]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L326}
  ///
  future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>> AddPublicKey(
      google::cloud::shell::v1::AddPublicKeyRequest const& request,
      Options opts = {});

  ///
  /// Removes a public SSH key from an environment. Clients will no longer be
  /// able to connect to the environment using the corresponding private key.
  /// If a key with the same content is not present, this will error with
  /// NOT_FOUND.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::shell::v1::RemovePublicKeyRequest,google/cloud/shell/v1/cloudshell.proto#L339}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::shell::v1::RemovePublicKeyResponse,google/cloud/shell/v1/cloudshell.proto#L350}
  ///
  /// [google.cloud.shell.v1.RemovePublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L339}
  /// [google.cloud.shell.v1.RemovePublicKeyResponse]:
  /// @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L350}
  ///
  future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
  RemovePublicKey(
      google::cloud::shell::v1::RemovePublicKeyRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudShellServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_CLOUD_SHELL_CLIENT_H
