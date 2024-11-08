# Installation Guide for Astra Highlights Plugin for Neovim

Follow the steps below to install and configure the Astra highlights plugin for Neovim.

### Step 1: Add Filetype Association

First, add the `.astra` file extension to Neovim's filetype detection:

```lua
vim.filetype.add({ extension = { astra = "astra" } })

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.astra = {
  install_info = {
    url = "/User/Name/path/to/local/installation",
    files = { "src/parser.c" },
  },
  filetype = "astra",
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
