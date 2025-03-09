# tree-sitter-go_tags

Go tags grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter), should match <https://cs.opensource.google/go/go/+/refs/tags/go1.24.1:src/reflect/type.go;l=1036>

## Installation instructions

Reference: <https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers>

1. Put this in your `nvim-treesitter` `config` function

```
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.go_tags = {
  install_info = {
    url = 'https://github.com/DanWlker/tree-sitter-go_tags',
    files = { 'src/parser.c' },
    branch = 'main',
  },
}
```

2. run `TSInstall go_tags`

## Highlighting setup

1. Copy the contents of [`queries/highlights.scm`](/queries/highlights.scm) from this repo into `<your nvim config folder>/queries/go_tags/highlights.scm` to enable syntax highlighting (if anyone knows a better way do let me know)

2. To allow for injections into go struct tags, Add this to your `queries/go/injections.scm`

```
(field_declaration
  name: (field_identifier)
  type: (type_identifier)
  tag: (raw_string_literal
    (raw_string_literal_content) @injection.content
    (#set! injection.language "go_tags")
  ))
```

## Showcase for treesitter injection

![image](https://github.com/user-attachments/assets/01e03699-5b97-469b-ae5f-9e3c7c4c601d)
