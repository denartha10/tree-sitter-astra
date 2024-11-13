# Installation Guide for Astra Highlights Plugin for Neovim

Follow the steps below to install and configure the Astra highlights plugin for Neovim.

### Step 1: Add Filetype Association

First, add the `.astra` file extension to Neovim's filetype detection. In lazyvim you can add this as the config field in a lazvim plugin table. The reason I chose to include it here is it colocates the setup of astra with all tree-sitter community plugins (below is an example of my setup). I am eventually hoping to get submit the plugin to tree-sitter.

```lua
return { -- Highlight, edit, and navigate code
  'nvim-treesitter/nvim-treesitter',
  build = ':TSUpdate',
  main = 'nvim-treesitter.configs', -- Sets main module to use for opts

  -- [[ Configure Treesitter ]] See `:help nvim-treesitter`
  opts = {
    ensure_installed = { 'astra', 'bash', 'c', 'diff', 'html', 'lua', 'go', 'luadoc', 'markdown', 'markdown_inline', 'query', 'vim', 'vimdoc' },
    -- Autoinstall languages that are not installed
    auto_install = true,
    highlight = {
      enable = true,
      additional_vim_regex_highlighting = { 'ruby' },
    },
    indent = { enable = true, disable = { 'ruby' } },
  },

  config = function()
    vim.filetype.add { extension = { astra = 'astra' } }

    local parser_config = require('nvim-treesitter.parsers').get_parser_configs()

    parser_config['astra'] = {
      install_info = {
        url = '/User/Name/path/to/local/installation',
        files = { 'src/parser.c' },
      },
      filetype = 'astra',
    }

    -- Place this in your main configuration file outside of Treesitter setup
    vim.api.nvim_create_autocmd('FileType', {
      pattern = 'astra',
      callback = function()
        vim.cmd 'TSEnable highlight'
      end,
    })
  end,
}
```

### Step 2: Set Up the Tree-sitter Directory

Next, create a directory for Astra in your Tree-sitter configuration folder. In this example, I'm using LazyVim as the plugin manager, but you can adjust this path according to your own setup.

Create the directory and move the `highlights.scm` file into it:

```bash
mkdir -p /Users/Name/.local/share/nvim/lazy/nvim-treesitter/queries/astra
cp /User/Name/path/to/local/installation/queries/highlights.scm /Users/Name/.local/share/nvim/lazy/nvim-treesitter/queries/astra
```

### Step 3: Install the Astra Parser

Once you've set up the filetype and Tree-sitter queries, open Neovim and run the following command to install the Astra parser:

```bash
:TSInstall astra
```

### Enjoy the Highlights!

That's it! You should now see syntax highlighting for Astra files in Neovim. Happy coding!
