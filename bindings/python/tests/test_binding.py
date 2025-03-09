from unittest import TestCase

import tree_sitter
import tree_sitter_go_tags


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_go_tags.language())
        except Exception:
            self.fail("Error loading Go Tags grammar")
