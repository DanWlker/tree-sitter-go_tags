/**
 * @file This is a treesitter highlight syntax for go tags
 * @author DanWlker <danielhee2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "go_tags",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($._tag_definition),

    _tag_definition: ($) => seq($.tag_identifier, ":", $.block, optional(" ")),

    block: ($) => seq('"', $.expression_content, '"'),

    // The block below does not follow
    // https://cs.opensource.google/go/go/+/refs/tags/go1.24.1:src/reflect/type.go;l=1036
    // although, it is much more powerful. Feel free to re-enable it
    //
    // block: ($) => seq('"', repeat($._statement), '"'),
    //
    // _statement: ($) =>
    //   choice($.identifier_expression_statement, $.expression_statement),
    //
    // identifier_expression_statement: ($) =>
    //   seq($.identifier, ":", $.expression, optional(";")),
    //
    // expression_statement: ($) => seq($.expression, optional(";")),
    //
    // expression: ($) =>
    //   seq($.expression_content, repeat(seq(",", $.expression_content))),
    //
    // identifier: ($) => /[^:;",]+/,

    tag_identifier: ($) => /[^:]+/,

    expression_content: ($) => /[^"\\]*(?:\\.[^"\\]*)*/,
  },
});
