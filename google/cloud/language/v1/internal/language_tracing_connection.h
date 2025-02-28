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
// source: google/cloud/language/v1/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_INTERNAL_LANGUAGE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_INTERNAL_LANGUAGE_TRACING_CONNECTION_H

#include "google/cloud/language/v1/language_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class LanguageServiceTracingConnection
    : public language_v1::LanguageServiceConnection {
 public:
  ~LanguageServiceTracingConnection() override = default;

  explicit LanguageServiceTracingConnection(
      std::shared_ptr<language_v1::LanguageServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(google::cloud::language::v1::AnalyzeSentimentRequest const&
                       request) override;

  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(google::cloud::language::v1::AnalyzeEntitiesRequest const&
                      request) override;

  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(
      google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request)
      override;

  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::AnalyzeSyntaxRequest const& request)
      override;

  StatusOr<google::cloud::language::v1::ClassifyTextResponse> ClassifyText(
      google::cloud::language::v1::ClassifyTextRequest const& request) override;

  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::AnnotateTextRequest const& request) override;

 private:
  std::shared_ptr<language_v1::LanguageServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<language_v1::LanguageServiceConnection>
MakeLanguageServiceTracingConnection(
    std::shared_ptr<language_v1::LanguageServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_INTERNAL_LANGUAGE_TRACING_CONNECTION_H
