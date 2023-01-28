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
// source: google/cloud/dialogflow/v2/fulfillment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_FULFILLMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_FULFILLMENTS_CLIENT_H

#include "google/cloud/dialogflow_es/fulfillments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Fulfillments][google.cloud.dialogflow.v2.Fulfillment].
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
class FulfillmentsClient {
 public:
  explicit FulfillmentsClient(
      std::shared_ptr<FulfillmentsConnection> connection, Options opts = {});
  ~FulfillmentsClient();

  ///@{
  /// @name Copy and move support
  FulfillmentsClient(FulfillmentsClient const&) = default;
  FulfillmentsClient& operator=(FulfillmentsClient const&) = default;
  FulfillmentsClient(FulfillmentsClient&&) = default;
  FulfillmentsClient& operator=(FulfillmentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(FulfillmentsClient const& a,
                         FulfillmentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(FulfillmentsClient const& a,
                         FulfillmentsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Retrieves the fulfillment.
  ///
  /// @param name  Required. The name of the fulfillment.
  ///  Format: `projects/<Project ID>/agent/fulfillment`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Fulfillment,google/cloud/dialogflow/v2/fulfillment.proto#L75}
  ///
  /// [google.cloud.dialogflow.v2.Fulfillment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L75}
  /// [google.cloud.dialogflow.v2.GetFulfillmentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L161}
  ///
  StatusOr<google::cloud::dialogflow::v2::Fulfillment> GetFulfillment(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the fulfillment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetFulfillmentRequest,google/cloud/dialogflow/v2/fulfillment.proto#L161}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Fulfillment,google/cloud/dialogflow/v2/fulfillment.proto#L75}
  ///
  /// [google.cloud.dialogflow.v2.Fulfillment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L75}
  /// [google.cloud.dialogflow.v2.GetFulfillmentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L161}
  ///
  StatusOr<google::cloud::dialogflow::v2::Fulfillment> GetFulfillment(
      google::cloud::dialogflow::v2::GetFulfillmentRequest const& request,
      Options opts = {});

  ///
  /// Updates the fulfillment.
  ///
  /// @param fulfillment  Required. The fulfillment to update.
  /// @param update_mask  Required. The mask to control which fields get
  /// updated. If the mask is not
  ///  present, all fields will be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Fulfillment,google/cloud/dialogflow/v2/fulfillment.proto#L75}
  ///
  /// [google.cloud.dialogflow.v2.Fulfillment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L75}
  /// [google.cloud.dialogflow.v2.UpdateFulfillmentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L174}
  ///
  StatusOr<google::cloud::dialogflow::v2::Fulfillment> UpdateFulfillment(
      google::cloud::dialogflow::v2::Fulfillment const& fulfillment,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the fulfillment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::UpdateFulfillmentRequest,google/cloud/dialogflow/v2/fulfillment.proto#L174}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Fulfillment,google/cloud/dialogflow/v2/fulfillment.proto#L75}
  ///
  /// [google.cloud.dialogflow.v2.Fulfillment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L75}
  /// [google.cloud.dialogflow.v2.UpdateFulfillmentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/fulfillment.proto#L174}
  ///
  StatusOr<google::cloud::dialogflow::v2::Fulfillment> UpdateFulfillment(
      google::cloud::dialogflow::v2::UpdateFulfillmentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<FulfillmentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_FULFILLMENTS_CLIENT_H
