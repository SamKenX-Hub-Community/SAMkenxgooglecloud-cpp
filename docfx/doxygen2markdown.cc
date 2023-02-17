// Copyright 2023 Google LLC
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

#include "docfx/doxygen2markdown.h"
#include <iostream>
#include <sstream>
#include <string_view>

namespace {

[[noreturn]] void UnknownChildType(std::string_view where,
                                   pugi::xml_node const& child) {
  std::ostringstream os;
  os << "Unknown child in " << where << "(): node=";
  child.print(os, /*indent=*/"", /*flags=*/pugi::format_raw);
  throw std::runtime_error(std::move(os).str());
}

}  // namespace

bool AppendIfPlainText(std::ostream& os, MarkdownContext const& /*ctx*/,
                       pugi::xml_node const& node) {
  if (!std::string_view{node.name()}.empty() || !node.attributes().empty()) {
    return false;
  }
  os << node.value();
  return true;
}

bool AppendIfBold(std::ostream& os, MarkdownContext const& /*ctx*/,
                  pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "bold") return false;
  os << "**" << node.child_value() << "**";
  return true;
}

bool AppendIfStrike(std::ostream& os, MarkdownContext const& /*ctx*/,
                    pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "strike") return false;
  os << '~' << node.child_value() << '~';
  return true;
}

bool AppendIfEmphasis(std::ostream& os, MarkdownContext const& /*ctx*/,
                      pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "emphasis") return false;
  os << '*' << node.child_value() << '*';
  return true;
}

bool AppendIfComputerOutput(std::ostream& os, MarkdownContext const& /*ctx*/,
                            pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "computeroutput") return false;
  os << '`' << node.child_value() << '`';
  return true;
}

// The `docTitleCmdGroup` element type in Doxygen is defined as below.
//
// Only one is possible. We will ignore most of them because they do not
// appear in our documents, but we record them here in case they become
// relevant.
//
// <xsd:group name="docTitleCmdGroup">
//   <xsd:choice>
//     <xsd:element name="ulink" type="docURLLink" />
//     <xsd:element name="bold" type="docMarkupType" />
//     <xsd:element name="s" type="docMarkupType" />
//     <xsd:element name="strike" type="docMarkupType" />
//     <xsd:element name="underline" type="docMarkupType" />
//     <xsd:element name="emphasis" type="docMarkupType" />
//     <xsd:element name="computeroutput" type="docMarkupType" />
//     <xsd:element name="subscript" type="docMarkupType" />
//     <xsd:element name="superscript" type="docMarkupType" />
//     <xsd:element name="center" type="docMarkupType" />
//     <xsd:element name="small" type="docMarkupType" />
//     <xsd:element name="del" type="docMarkupType" />
//     <xsd:element name="ins" type="docMarkupType" />
//     <xsd:element name="htmlonly" type="docHtmlOnlyType" />
//     <xsd:element name="manonly" type="xsd:string" />
//     <xsd:element name="xmlonly" type="xsd:string" />
//     <xsd:element name="rtfonly" type="xsd:string" />
//     <xsd:element name="latexonly" type="xsd:string" />
//     <xsd:element name="docbookonly" type="xsd:string" />
//     <xsd:element name="image" type="docImageType" />
//     <xsd:element name="dot" type="docImageType" />
//     <xsd:element name="msc" type="docImageType" />
//     <xsd:element name="plantuml" type="docImageType" />
//     <xsd:element name="anchor" type="docAnchorType" />
//     <xsd:element name="formula" type="docFormulaType" />
//     <xsd:element name="ref" type="docRefTextType" />
//     <xsd:element name="emoji" type="docEmojiType" />
//     <xsd:element name="linebreak" type="docEmptyType" />
//     <xsd:element name="nonbreakablespace" type="docEmptyType" />
//     <xsd:element name="iexcl" type="docEmptyType" />
// ... other "symbols", such as currency, math formulas, accents, etc. ...
// ... upper case greek letters ...
// ... lower case greek letters ...
//   </xsd:choice>
// </xsd:group>
bool AppendIfDocTitleCmdGroup(std::ostream& os, MarkdownContext const& ctx,
                              pugi::xml_node const& node) {
  // Unexpected: ulink
  if (AppendIfBold(os, ctx, node)) return true;
  // Unexpected: s
  if (AppendIfStrike(os, ctx, node)) return true;
  // Unexpected: underline
  if (AppendIfEmphasis(os, ctx, node)) return true;
  if (AppendIfComputerOutput(os, ctx, node)) return true;
  // Unexpected: subscript, superscript, center, small, del, ins
  // Unexpected: htmlonly, manonly, rtfonly, latexonly, docbookonly
  // Unexpected: image, dot, msc, plantuml
  // Unexpected: anchor
  // Unexpected: formula
  // Unexpected: ref
  // Unexpected: emoji
  // Unexpected: linebreak
  // Unexpected: nonbreakablespace
  // Unexpected: many many symbols
  return false;
}

// The `docCmdGroup` element type in Doxygen is defined as below.
//
// The use of `xsd:choice` signifies that only one of the options is allowed.
//   <xsd:group name="docCmdGroup">
//   <xsd:choice>
//     <xsd:group ref="docTitleCmdGroup"/>
//     <xsd:element name="hruler" type="docEmptyType" />
//     <xsd:element name="preformatted" type="docMarkupType" />
//     <xsd:element name="programlisting" type="listingType" />
//     <xsd:element name="verbatim" type="xsd:string" />
//     <xsd:element name="indexentry" type="docIndexEntryType" />
//     <xsd:element name="orderedlist" type="docListType" />
//     <xsd:element name="itemizedlist" type="docListType" />
//     <xsd:element name="simplesect" type="docSimpleSectType" />
//     <xsd:element name="title" type="docTitleType" />
//     <xsd:element name="variablelist" type="docVariableListType" />
//     <xsd:element name="table" type="docTableType" />
//     <xsd:element name="heading" type="docHeadingType" />
//     <xsd:element name="dotfile" type="docImageType" />
//     <xsd:element name="mscfile" type="docImageType" />
//     <xsd:element name="diafile" type="docImageType" />
//     <xsd:element name="toclist" type="docTocListType" />
//     <xsd:element name="language" type="docLanguageType" />
//     <xsd:element name="parameterlist" type="docParamListType" />
//     <xsd:element name="xrefsect" type="docXRefSectType" />
//     <xsd:element name="copydoc" type="docCopyType" />
//     <xsd:element name="blockquote" type="docBlockQuoteType" />
//     <xsd:element name="parblock" type="docParBlockType" />
//   </xsd:choice>
// </xsd:group>
bool AppendIfDocCmdGroup(std::ostream& os, MarkdownContext const& ctx,
                         pugi::xml_node const& node) {
  if (AppendIfDocTitleCmdGroup(os, ctx, node)) return true;
  // Unexpected: hruler, preformatted, programlisting, verbatim, indexentry
  // Unexpected: orderedlist
  if (AppendIfItemizedList(os, ctx, node)) return true;
  // Unexpected: simplesect, title, variablelist, table, header
  // Unexpected: dotfile, mscfile,diafile, toclist, language, parameterlist
  // Unexpected: xrefsect, copydoc, blockquote, parblock
  return false;
}

// A `para` element is defined by the `docParaType` in Doxygen, which is defined
// as:
//
// <xsd:complexType name="docParaType" mixed="true">
//   <xsd:group ref="docCmdGroup" minOccurs="0" maxOccurs="unbounded" />
// </xsd:complexType>
//
// The `mixed="true"` signifies that there may be plain text between the
// child elements.
//
// The `<xsd:group>` signifies that there may be 0 or more (unbounded) number of
// `docCmdGroup` child elements.
//
bool AppendIfParagraph(std::ostream& os, MarkdownContext const& ctx,
                       pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "para") return false;
  os << ctx.paragraph_start << ctx.paragraph_indent;
  for (auto const& child : node) {
    if (AppendIfPlainText(os, ctx, child)) continue;
    if (AppendIfDocCmdGroup(os, ctx, child)) continue;
    UnknownChildType(__func__, child);
  }
  return true;
}

bool AppendIfItemizedList(std::ostream& os, MarkdownContext const& ctx,
                          pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "itemizedlist") return false;
  auto nested = ctx;
  nested.paragraph_indent = std::string(ctx.paragraph_indent.size(), ' ');
  for (auto const& child : node) {
    if (AppendIfListItem(os, nested, child)) continue;
    UnknownChildType(__func__, child);
  }
  return true;
}

bool AppendIfListItem(std::ostream& os, MarkdownContext const& ctx,
                      pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "listitem") return false;
  // The first paragraph is the list item is indented as needed, and starts
  // with a "- "
  auto nested = ctx;
  nested.paragraph_start = "\n";
  nested.paragraph_indent = ctx.paragraph_indent + "- ";
  for (auto const& child : node) {
    if (AppendIfParagraph(os, nested, child)) {
      // Subsequence paragraphs within the same list item require a blank line
      nested.paragraph_start = "\n\n";
      nested.paragraph_indent = ctx.paragraph_indent + "  ";
      continue;
    }
    UnknownChildType(__func__, child);
  }
  return true;
}
