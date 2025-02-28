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
// source: google/cloud/dataplex/v1/metadata.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_METADATA_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_METADATA_CONNECTION_H

#include "google/cloud/dataplex/v1/metadata_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataplex_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `MetadataServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `MetadataServiceClient`. To do so,
 * construct an object of type `MetadataServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockMetadataServiceConnection
    : public dataplex_v1::MetadataServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entity>, CreateEntity,
              (google::cloud::dataplex::v1::CreateEntityRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entity>, UpdateEntity,
              (google::cloud::dataplex::v1::UpdateEntityRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteEntity,
              (google::cloud::dataplex::v1::DeleteEntityRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entity>, GetEntity,
              (google::cloud::dataplex::v1::GetEntityRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Entity>, ListEntities,
              (google::cloud::dataplex::v1::ListEntitiesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::Partition>, CreatePartition,
      (google::cloud::dataplex::v1::CreatePartitionRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeletePartition,
      (google::cloud::dataplex::v1::DeletePartitionRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Partition>, GetPartition,
              (google::cloud::dataplex::v1::GetPartitionRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Partition>,
              ListPartitions,
              (google::cloud::dataplex::v1::ListPartitionsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_METADATA_CONNECTION_H
