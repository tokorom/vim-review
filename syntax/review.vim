" Vim syntax file
" Language: Re:VIEW
" Maintainer: Yuta Tokoro <tokorom@gmail.com>

if exists("b:current_syntax")
    finish
endif

" ----------

syn case match

syn match reviewHeading contains=reviewInlineCommand,reviewInlineStyleCommand
      \ "^=\+\%(\s\+\|{\|\[\).*"

syn region reviewInlineCommand oneline
      \ start="@<\w\+>{" end="}"
syn region reviewInlineStyleCommand transparent oneline
      \ matchgroup=reviewInlineCommand
      \ start="@<\%\(kw\|bou\|ami\|u\|b\|i\|strong\|em\|tt\|tti\|ttb\|code\|tcy\)>{"
      \ end="}"

syn region reviewBlockCommand transparent
      \ matchgroup=reviewBlockDeclaration start="^//\w\+\[\?.*{\s*$" end="^//}\s*$"

syn match reviewBlockCommandWithoutContent
      \ "^//\w\+\[.*[^{]\s*$"
syn match reviewControlCommand
      \ "^//\%\(noindent\|blankline\|linebreak\|pagebreak\)\s*$"

syn region reviewItemize transparent oneline
      \ matchgroup=reviewItemizePrefix start="^\s\+\*\+\s\+" end="$"
syn region reviewOrderedItemize transparent oneline
      \ matchgroup=reviewItemizePrefix start="^\s\+[0-9]\+\.\s\+" end="$"
syn region reviewDefinitionList transparent oneline
      \ matchgroup=reviewItemizePrefix start="^\s\+\:\s\+" end="$"

syn match reviewComment contains=reviewTodo
      \ "^#@.*"
syn region reviewCommentBlock contains=reviewTodo
      \ start="^//comment\[\?.*{\s*" end="^//}\s*$"
syn region reviewCommentInline oneline contains=reviewTodo
      \ start="@<comment>{" end="}"

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
hi def link reviewInlineCommand Function
hi def link reviewBlockDeclaration Identifier
hi def link reviewBlockCommandWithoutContent Identifier
hi def link reviewControlCommand Identifier
hi def link reviewItemizePrefix Special
hi def link reviewComment Comment
hi def link reviewCommentBlock Comment
hi def link reviewCommentInline Comment
hi def link reviewPreProcCommand PreProc
hi def link reviewPreProcBlockCommand PreProc
hi def link reviewWarning Underlined
hi def link reviewTodo Todo

" ----------

let b:current_syntax = "review"
