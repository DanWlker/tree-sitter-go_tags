package tree_sitter_go_tags_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_go_tags "github.com/danwlker/tree-sitter-go_tags/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_go_tags.Language())
	if language == nil {
		t.Errorf("Error loading GoTags grammar")
	}
}
