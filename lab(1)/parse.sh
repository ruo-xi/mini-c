flex lex.l
bison -d parser.y
gcc -o parser hh.c parser.tab.c lex.yy.c