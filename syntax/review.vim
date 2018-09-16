" Vim syntax file
" Language: Re:VIEW
" Maintainer: Yuta Tokoro <tokorom@gmail.com>

if exists("b:current_syntax")
    finish
endif

" ----------

syn case match

syn match reviewHeading
      \ "^=\+\%(\s\+\|{\|\[\).*"

syn match reviewInlineCommand
      \ "@<\w\+>{[^}]*}"

syn region reviewBlockCommand
      \ start="^//\w\+\[\?.*{\s*$" end="^//}\s*$"
syn match reviewBlockCommandWithoutContent
      \ "^//\w\+\[.*[^{]\s*$"
syn match reviewControlCommand
      \ "^//\%\(noindent\|blankline\|linebreak\|pagebreak\)\s*$"

syn match reviewItemize
      \ "^\s\+\*\+\s\+.*"
syn match reviewOrderedItemize
      \ "^\s\+[0-9]\+\.\s\+.*"
syn match reviewDefinitionList
      \ "^\s\+\:\s\+\S\+.*"

syn match reviewComment
      \ "^#@.*"
syn region reviewCommentBlock start="^//comment{" end="^//}"
      \ start="^//comment\[\?.*{\s*" end="^//}\s*$"

syn match reviewPreProcCommand
      \ "^#@\%\(require\|provide\)\s\+.*"
syn region reviewPreProcBlockCommand
      \ start="^#@\%\(mapfile\|maprange\|mapoutput\)(.*).*" end="^#@end\s*$"
syn match reviewWarning
      \ "^#@warn([^(]*).*"

" ----------

hi def link reviewHeading Conditional
hi def link reviewInlineCommand Identifier
hi def link reviewBlockCommand Identifier
hi def link reviewBlockCommandWithoutContent Identifier
hi def link reviewControlCommand Identifier
hi def link reviewItemize Special
hi def link reviewOrderedItemize Special
hi def link reviewDefinitionList Special
hi def link reviewComment Comment
hi def link reviewCommentBlock Comment
hi def link reviewPreProcCommand PreProc
hi def link reviewPreProcBlockCommand PreProc
hi def link reviewWarning PreProc

" ----------

let b:current_syntax = "review"
