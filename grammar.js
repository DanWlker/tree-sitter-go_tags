/**
 * @file GoTags grammar for tree-sitter
 * @author DanWlker <danielhee2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "go_tags",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
