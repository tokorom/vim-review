# Vim Re:VIEW

Syntax highlighting, matching rules and mappings for [Re:VIEW](https://github.com/kmuto/review) and extensions.

## Supported Formats

https://github.com/kmuto/review/blob/v2-stable/doc/format.md

## Sample

![Sample](https://raw.githubusercontent.com/tokorom/vim-review/images/sample.png)

## Support syntax highlight in code block with filetype

### Usage

- You can include multiple filetypes

```vim
let g:vim_review#include_filetypes = ['swift']
```

### Supported operations

* `list`
* `listnum`
* `emlist`
* `emlistnum`

```swift
//list[sample][Sample][swift]{
class Sample {
  func say(message: String) {
    print(message)
  }
}
//}
```

### Other usage

- When explicitly specifying the syntax file

```vim
let g:vim_review#include_grouplists = {'swift': 'syntax/swift.vim'}
```


