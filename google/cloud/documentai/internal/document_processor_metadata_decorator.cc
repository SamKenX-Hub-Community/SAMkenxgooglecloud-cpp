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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/internal/document_processor_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/documentai/v1/document_processor_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace documentai_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceMetadata::DocumentProcessorServiceMetadata(
    std::shared_ptr<DocumentProcessorServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceMetadata::ProcessDocument(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ProcessDocument(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncBatchProcessDocuments(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  SetMetadata(*context, "human_review_config=" + request.human_review_config());
  return child_->AsyncReviewDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DocumentProcessorServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void DocumentProcessorServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DocumentProcessorServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_internal
}  // namespace cloud
}  // namespace google
