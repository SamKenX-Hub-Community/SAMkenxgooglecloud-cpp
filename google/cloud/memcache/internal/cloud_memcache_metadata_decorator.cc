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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#include "google/cloud/memcache/internal/cloud_memcache_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/memcache/v1/cloud_memcache.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace memcache_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudMemcacheMetadata::CloudMemcacheMetadata(
    std::shared_ptr<CloudMemcacheStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::memcache::v1::ListInstancesResponse>
CloudMemcacheMetadata::ListInstances(
    grpc::ClientContext& context,
    google::cloud::memcache::v1::ListInstancesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListInstances(context, request);
}

StatusOr<google::cloud::memcache::v1::Instance>
CloudMemcacheMetadata::GetInstance(
    grpc::ClientContext& context,
    google::cloud::memcache::v1::GetInstanceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheMetadata::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::memcache::v1::CreateInstanceRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheMetadata::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::memcache::v1::UpdateInstanceRequest const& request) {
  SetMetadata(*context, "instance.name=" + request.instance().name());
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheMetadata::AsyncUpdateParameters(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::memcache::v1::UpdateParametersRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateParameters(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheMetadata::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::memcache::v1::DeleteInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheMetadata::AsyncApplyParameters(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::memcache::v1::ApplyParametersRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncApplyParameters(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudMemcacheMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudMemcacheMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudMemcacheMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_internal
}  // namespace cloud
}  // namespace google
