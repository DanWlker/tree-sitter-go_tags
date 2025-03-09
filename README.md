# tree-sitter-go_tags

Go tags grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Installation instructions

https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers

```
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.go_tags = {
  install_info = {
    url = '~/projects/tree-sitter-go_tags',
    files = { 'src/parser.c' },
  },
}
```

Note: For now, copy `queries/highlights.scm` file into your `.config/nvim/queries/go_tags/highlights.scm` to have syntax highlighting, if anyone knows a better way do let me know

To inject it into go tags, add this to your `queries/go/injections.scm`

```
(field_declaration
  name: (field_identifier)
  type: (type_identifier)
  tag: (raw_string_literal
    (raw_string_literal_content) @injection.content
    (#set! injection.language "go_tags")
  ))
```

![image](https://github.com/user-attachments/assets/8c6d4c93-191b-4bd0-82eb-7a2b6462012b)

