setl commentstring=#@#\ %s

if !exists('g:vim_review#include_filetypes')
  let g:vim_review#include_filetypes = []
endif

if !exists('g:vim_review#include_grouplists')
  let g:vim_review#include_grouplists = {}
  for ft in g:vim_review#include_filetypes
    let g:vim_review#include_grouplists[ft] = 'syntax/' . ft . '.vim'
  endfor
endif
