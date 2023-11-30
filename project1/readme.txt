To create the lexical analyzer first run:

    flex mini_l.lex

This creates a file called lex.yy.c

Then you need to compile the lexical analyzer into an executable:

    gcc -o lexer lex.yy.c -lfl

This creates a program lexer that converts a program into a list of tokens

To run this program on the example mytest.min:

    cat mytest.min | ./lexer