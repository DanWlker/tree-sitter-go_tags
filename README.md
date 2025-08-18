# tree-sitter-go_tags

Go tags grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter), should match <https://cs.opensource.google/go/go/+/refs/tags/go1.24.1:src/reflect/type.go;l=1036>

As an alternative (if you only would like to have syntax highlighting and do not care about the tree structure), you could do this inside `queries/go/injections.scm`. Note that this method does not need require using this repo:

```
(field_declaration
  tag: (raw_string_literal
    (raw_string_literal_content) @injection.content
    (#set! injection.self)
  ))
```

## Installation instructions

Reference: <https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers>

1. Setup `nvim-treesitter`

    If you're using the `master` branch of `nvim-treesitter`, put this in your `config` function
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

   If you're using the `main` branch of `nvim-treesitter`:

   ```
   vim.api.nvim_create_autocmd('User', {
    pattern = 'TSUpdate',
    group = vim.api.nvim_create_augroup('nvim-treesitter-parser', { clear = true }),
    callback = function()
      require('nvim-treesitter.parsers').go_tags = {
        install_info = {
          url = 'https://github.com/DanWlker/tree-sitter-go_tags',
          branch = 'tree-sitter-1.25.5',
        },
      }
    end,
   })
   ```

1. Run `TSInstall go_tags` or include it in `ensure_installed` to have it be installed automatically

1. Copy the contents of [`queries/highlights.scm`](/queries/highlights.scm) from this repo into `<your nvim config folder>/queries/go_tags/highlights.scm` to enable syntax highlighting (if anyone knows a better way do let me know)

1. Add this to your `queries/go/injections.scm` to inject it into go tags

  ```
  (field_declaration
    tag: (raw_string_literal
      (raw_string_literal_content) @injection.content
      (#set! injection.language "go_tags")
    ))
  ```

## Showcase for treesitter injection

![image](https://github.com/user-attachments/assets/01e03699-5b97-469b-ae5f-9e3c7c4c601d)
