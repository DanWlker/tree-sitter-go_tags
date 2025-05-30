/**
 * @file GoTags grammar for tree-sitter
 * @author DanWlker <danielhee2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "go_tags",

  rules: {
    document: ($) => repeat($._tag_definition),

    _tag_definition: ($) => seq($.identifier, ":", $.statement, optional(" ")),

    statement: ($) => seq('"', $.statement_content, '"'),

    identifier: ($) => /[^:\s"]+/,

    // don't parse escape quotes
    // https://stackoverflow.com/questions/5695240/php-regex-to-ignore-escaped-quotes-within-quotes
    statement_content: ($) => /[^"\\]*(?:\\.[^"\\]*)*/,
  },
});
