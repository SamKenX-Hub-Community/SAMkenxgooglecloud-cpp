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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/v1/internal/cloud_scheduler_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace scheduler_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudSchedulerTracingConnection::CloudSchedulerTracingConnection(
    std::shared_ptr<scheduler_v1::CloudSchedulerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::ListJobs(
    google::cloud::scheduler::v1::ListJobsRequest request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::ListJobs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::scheduler::v1::Job>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::GetJob(
    google::cloud::scheduler::v1::GetJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJob(request));
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::CreateJob(
    google::cloud::scheduler::v1::CreateJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::CreateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateJob(request));
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::UpdateJob(
    google::cloud::scheduler::v1::UpdateJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::UpdateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateJob(request));
}

Status CloudSchedulerTracingConnection::DeleteJob(
    google::cloud::scheduler::v1::DeleteJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::DeleteJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteJob(request));
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::PauseJob(
    google::cloud::scheduler::v1::PauseJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::PauseJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PauseJob(request));
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::ResumeJob(
    google::cloud::scheduler::v1::ResumeJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::ResumeJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ResumeJob(request));
}

StatusOr<google::cloud::scheduler::v1::Job>
CloudSchedulerTracingConnection::RunJob(
    google::cloud::scheduler::v1::RunJobRequest const& request) {
  auto span =
      internal::MakeSpan("scheduler_v1::CloudSchedulerConnection::RunJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RunJob(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<scheduler_v1::CloudSchedulerConnection>
MakeCloudSchedulerTracingConnection(
    std::shared_ptr<scheduler_v1::CloudSchedulerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudSchedulerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_v1_internal
}  // namespace cloud
}  // namespace google
