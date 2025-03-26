### a k transpiler
c uses shakti's k.edu core for primitives
### get, build and run
```
$ git clone --recursive https://github.com/effbiae/c.git   #recursive to get the k.edu submodule
$ cd c
# make
$ ./c
 !3
0 1 2
 @'9(+\|:)\2#1
1 1 2 3 5 8 13 21 34 55
 f::(0,x)+x,0;5f\1
(1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1)
```
### limitations
```
in the parser, numbers are single digits, tokens are single characters except for monadic verbs
implemented adverbs:
  iterate  nf\x     3%:\3
  each     f'x      !:'!3
  scan     F\x      +\!3
  over     F/x      +/!3
functions are monadic (only mention x)
no variables other than functions
doesn't remember previous lines' functions
```
### source
```
c      the transpiler
c.c    print and adverbs
k.edu  submodule -- kept up to date with shakti
p.py   the parser
g.c    this will be generated after running c (it's the transpilation)
```
