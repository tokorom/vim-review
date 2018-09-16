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
      \ matchgroup=reviewBlockDeclaration start="^//\w\+\[\?.*{\s*$" end="^//}\s*$"

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

syn match reviewComment contains=reviewTodo
      \ "^#@.*"
syn region reviewCommentBlock contains=reviewTodo
      \ start="^//comment\[\?.*{\s*" end="^//}\s*$"
syn match reviewCommentInline contains=reviewTodo
      \ "@<comment>{[^}]*}"

syn match reviewPreProcCommand
      \ "^#@\%\(require\|provide\)\s\+.*"
syn region reviewPreProcBlockCommand
      \ start="^#@\%\(mapfile\|maprange\|mapoutput\)(.*).*" end="^#@end\s*$"

syn region reviewWarning oneline
      \ matchgroup=reviewPreProcCommand start="^#@warn(" end=").*$"

syn case ignore
syn keyword reviewTodo MARK TODO FIXME contained
syn case match

" ----------

hi def link reviewHeading Conditional
hi def link reviewInlineCommand Identifier
hi def link reviewBlockCommand Normal
hi def link reviewBlockDeclaration Identifier
hi def link reviewBlockCommandWithoutContent Identifier
hi def link reviewControlCommand Identifier
hi def link reviewItemize Special
hi def link reviewOrderedItemize Special
hi def link reviewDefinitionList Special
hi def link reviewComment Comment
hi def link reviewCommentBlock Comment
hi def link reviewCommentInline Comment
hi def link reviewPreProcCommand PreProc
hi def link reviewPreProcBlockCommand PreProc
hi def link reviewWarning Underlined
hi def link reviewTodo Todo

" ----------

let b:current_syntax = "review"
