#@# This is Re:VIEW sample

= Documents

 * @<href>{https://github.com/kmuto/review/blob/v2-stable/doc/format.md}

= Sample

Hello, @<kw>{Re:VIEW} :)

//list[hello][Hello, World][swift]{
class Hello {
  func say(_ message: String) {
    print(message)
  }
}
//}

Hello, footnote@<fn>{footnote_sample}.

//footnote[footnote_sample][This is a footnote]

= Chapter, Section, Subsection (headings)

= 1st level (chapter)
== 2nd level (section)
=== 3rd level (subsection)
==== 4th level
===== 5th level

={1st} 1st level (chapter)
=={2nd} 2nd level (section)
==={3rd} 3rd level (subsection)
===={4th} 4th level
====={5th} 5th level

= Paragraph

This is a paragraph, paragraph,
and paragraph.

Next paragraph here is ...

= Column

==[column] Compiler-compiler

Compiler-compiler is ...

==[/column]

blah, blah, blah (this is paragraphs outside of the column)

= Itemize

 * 1st item
 ** nested 1st item
 * 2nd item
 ** nested 2nd item
 * 3rd item

= Ordered Itemize

 1. 1st condition
 2. 2nd condition
 3. 3rd condition

= Definition List

 : Alpha
    RISC CPU made by DEC.
 : POWER
    RSIC CPU made by IBM and Motolora.
    POWER PC is delivered from this.
 : SPARC
    RISC CPU made by SUN.

= Block Commands and Inline Commands

//command[option1][option2]...{
(content lines, sometimes separated by empty lines)
  ...
//}

//command[option1][option2]...

@<command>{content}

@<command>$content$
@<command>|content|

@<m>$\Delta = \frac{\partial^2}{\partial x_1^2}+\frac{\partial^2}{\partial x_2^2} + \cdots + \frac{\partial^2}{\partial x_n^2}$
@<tt>|if (exp) then { ... } else { ... }|
@<b>|\|

= Code List

//list[main][main()][c]{    ←ID is `main`, caption is `main()`
int
main(int argc, char **argv)
{
    puts("OK");
    return 0;
}
//}

//listnum[hello][hello world][ruby]{
puts "hello world!"
//}

//emlist[][c]{
printf("hello");
//}

//emlistnum[][ruby]{
puts "hello world!"
//}

== define line number of first line in code block

//firstlinenum[100]
//listnum[hello][helloworld][ruby]{
puts "hello world!"
//}

== Quoting Source Code

//source[/hello/world.rb]{
puts "hello world!"
//}

When you ..., see @<list>{hello}.

= Inline Source Code

@<code>{p = obj.ref_cnt}

= Shell Session

//cmd{
$ @<b>{ls /}
//}

= Figure

//image[unixhistory][a brief history of UNIX-like OS]{
          System V
            +----------- SVr4 --> Commercial UNIX（Solaris, AIX, HP-UX, ...）
V1 --> V6 --|
            +--------- 4.4BSD --> FreeBSD, NetBSD, OpenBSD, ...
          BSD

            --------------> Linux
//}

= Images without caption counter

//indepimage[unixhistory2]

= Figures with graph tools

//graph[sin_x][gnuplot]{
plot sin(x)
//}

= Tables

//table[envvars][Important environment varialbes]{
Name						Comment
-------------------------------------------------------------
PATH						Directories where commands exist
TERM						Terminal. ex: linux, kterm, vt100
LANG						default local of users. ja_JP.eucJP and ja_JP.utf8 are popular in Japan
LOGNAME					login name of the user
TEMP						temporary directory. ex: /tmp
PAGER						text viewer on man command. ex: less, more
EDITOR					default editor. ex: vi, emacs
MANPATH					Directories where sources of man exist
DISPLAY					default display of X Window System
//}

//table{
...
//}

//emtable[caption]{
...
//}

== Column width of table

//tsize[|builder|width-of-column1,width-of-column2,...]

== Complex Table

//imgtable[complexmatrix][very complex table]{
to use image "complexmatrix".
The rule of finding images is same as image command.
//}

= Quoting Text

//quote{
Seeing is believing.
//}

= Short column

//note[caption]{
... 
//}

//note{
[caption] is optional.
//}

//memo[caption]{
... 
//}

//tip[caption]{
... 
//}

//info[caption]{
... 
//}

//warning[caption]{
... 
//}

//important[caption]{
... 
//}

//caution[caption]{
... 
//}

//notice[caption]{
... 
//}

= Footnotes

You can get the packages from support site for the book.@<fn>{site}
You should get and install it before reading the book.
//footnote[site][support site of the book: http://i.loveruby.net/ja/stdcompiler ]

= Bibliography

//bibpaper[cite][caption]

//bibpaper[lins][Lins, 1991]{
Refael D. Lins. A shared memory architecture for parallel study of
algorithums for cyclic reference_counting. Technical Report 92,
Computing Laboratory, The University of Kent at Canterbury , August
1991
//}

… is the well-known project.(@<bib>{lins})

= Lead Sentences

//lead{
In the chapter, I introduce brief summary of the book,
and I show the way how to write a program in Linux.
//}

= TeX Equations

//texequation{
\sum_{i=1}^nf_n(x)
//}

= Spacing

//noindent is a tag for spacing.

= Blank line

Insert one blank line below.

//blankline

Insert two blank line below.

//blankline
//blankline

= Referring headings

@<hd>{intro|first section}

@<hd>{first section}

@<hd>{preface|Introduction|first section}

== Heading of columns

@<column>{The usage of Re:VIEW}

===[column]{review-application} The application of Re:VIEW

Re:VIEW :)

= Links

@<href>{http://github.com/, GitHub}
@<href>{http://www.google.com/}
@<href>{#point1, point1 in document}
@<href>{chap1.html#point1, point1 in document}
//label[point1]

= Comments

#@# Must one empty line

#@warn(TBD)

@<comment>{TODO}

//comment{
TODO
//}

= Raw Data Block

== //raw block

//raw[|html|<div class="special">\nthis is a special line.\n</div>]

== //embed block

//embed{
<div class="special">
this is a special line.
</div>
//}

//embed[html,markdown]{
<div class="special">
this is a special line.
</div>
//}

= Inline Commands

== Styles

@<kw>{Credential, credential}:: keyword.
@<bou>{appropriate}:: bou-ten.
@<ami>{point}:: ami-kake (shaded text)
@<u>{AB}:: underline
@<b>{Please}:: bold
@<i>{Please}:: italic
@<strong>{Please}:: strong(emphasis)
@<em>{Please}:: another emphasis
@<tt>{foo($bar)}:: teletype (monospaced font)
@<tti>{FooClass}:: teletype (monospaced font) and italic
@<ttb>{BarClass}:: teletype (monospaced font) and bold
@<code>{a.foo(bar)}:: teletype (monospaced font) for fragments of code
@<tcy>{}:: short horizontal text in vertical text

== References

@<chap>{advanced}:: chapter number like `Chapter 17`
@<title>{advanced}:: title of the chapter
@<chapref>{advanced}:: a chapter number and chapter title like `Chapter 17. advanced topic`
@<list>{program}:: `List 1.5`
@<img>{unixhistory}:: `Figure 1.3`
@<table>{ascii}:: `Table 1.2`
@<hd>{advanced|Other Topics}:: `7-3. Other Topics`
@<column>{another-column}:: reference of column.

== Other inline commands

@<ruby>{Matsumoto, Matz}:: ruby markups
@<br>{}::  linebreak in paragraph
@<uchar>{2460}:: Unicode code point
@<href>{http://www.google.com/, google}:: hyper link(URL)
@<icon>{samplephoto}:: inline image
@<m>{a + \alpha}:: TeX inline equation
@<raw>{|html|<span>ABC</span>}:: inline raw data inline. `\}` is `}`, `\\` is `\`, and `\n` is newline.
@<embed>{|html|<span>ABC</span>}:: inline raw data inline. `\}` is `}` and `\\` is `\`.
@<idx>{string}:: output a string and register it as an index. See makeindex.md.
@<hidx>{string}:: register a string as an index. A leveled index is expressed like `parent<<>>child`

= Commands for Authors (pre-processor commands)

#@#:: Comments. All texts in this line are ignored.

#@warn(...):: Warning messages. The messages are showed when pre-process.

#@require Require
#@provide Provide

#@mapfile(filename)
...
#@end

#@maprange(filename, range name)
...
#@end

#@mapoutput(command)
...
#@end

= Other Syntax

//foo{
A
B
C
//}
