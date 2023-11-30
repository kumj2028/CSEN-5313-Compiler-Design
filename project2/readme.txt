To create the parser first run:

    flex mini_l.lex

This creates the lexical analyzer called lex.yy.c from the previous project

Then run:

    bison -v -d --file-prefix=y mini_l.y

This creates the parser called y.tab.c, header file called y.tab.h, and informative output file called y.output

Then you need to compile the parser into an executable:

    gcc -o parser y.tab.c lex.yy.c -lfl

This creates a program parser that prints the list of productions for a program

To run this program on the example mytest.min:

    cat mytest.min | ./parser