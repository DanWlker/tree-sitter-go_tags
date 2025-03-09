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
    source_file: ($) => repeat($.tag_definition),

    tag_definition: ($) => seq($.identifier, ":", $.block, optional(" ")),

    block: ($) => seq('"', repeat($.statement), '"'),

    statement: ($) =>
      choice($.identifier_expression_statement, $.expression_statement),

    identifier_expression_statement: ($) =>
      seq($.identifier, ":", $.expression, optional(";")),

    expression_statement: ($) => seq($.expression, optional(";")),

    expression: ($) =>
      seq($.expression_value, repeat(seq(",", $.expression_value))),

    identifier: ($) => /[^:;",]+/,

    expression_value: ($) => /[^:;",]+/,
  },
});
