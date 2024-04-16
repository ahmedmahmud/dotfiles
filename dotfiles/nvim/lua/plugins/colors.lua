return {
  {
    'folke/tokyonight.nvim',
    lazy = false, -- make sure we load this during startup if it is your main colorscheme
    priority = 1000, -- make sure to load this before all the other start plugins
    config = function()
      -- vim.cmd.colorscheme 'tokyonight-night'
      -- vim.cmd.hi 'Comment gui=none'
    end,
  },

  {
    'AlexvZyl/nordic.nvim',
    lazy = false,
    priority = 1000,
    config = function()
      vim.cmd.colorscheme 'nordic'
    end,
  },
}
