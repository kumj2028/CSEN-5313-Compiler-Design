%{
int currLine = 1;
int currPos = 1;
%}

DIGITS [0-9]

%%

"+" {printf("ADD\n"); currPos += yyleng;}
"-" {printf("SUB\n"); currPos += yyleng;}
"*" {printf("MULT\n"); currPos += yyleng;}
"/" {printf("DIV\n"); currPos += yyleng;}
"(" {printf("L_PAREN\n"); currPos += yyleng;}
")" {printf("R_PAREN\n"); currPos += yyleng;}

":=" {printf("ASSIGN\n"); currPos += yyleng;}
":" {printf("COLON\n"); currPos += yyleng;}
";" {printf("SEMICOLON\n"); currPos += yyleng;}
"[" {printf("L_SQUARE_BRACKET\n"); currPos += yyleng;}
"]" {printf("R_SQUARE_BRACKET\n"); currPos += yyleng;}
"," {printf("COMMA\n"); currPos += yyleng;}
"<" {printf("LT\n"); currPos += yyleng;}
"<=" {printf("LTE\n"); currPos += yyleng;}
">" {printf("GT\n"); currPos += yyleng;}
">=" {printf("GTE\n"); currPos += yyleng;}
"==" {printf("EQ\n"); currPos += yyleng;}
"<>" {printf("NEQ\n"); currPos += yyleng;}
"%" {printf("MOD\n"); currPos += yyleng;}

program {printf("PROGRAM\n"); currPos += yyleng;}
beginprogram {printf("BEGIN_PROGRAM\n"); currPos += yyleng;}
endprogram {printf("END_PROGRAM\n"); currPos += yyleng;}
integer {printf("INTEGER\n"); currPos += yyleng;}
array {printf("ARRAY\n"); currPos += yyleng;}
of {printf("OF\n"); currPos += yyleng;}
if {printf("IF\n"); currPos += yyleng;}
then {printf("THEN\n"); currPos += yyleng;}
endif {printf("ENDIF\n"); currPos += yyleng;}
else {printf("ELSE\n"); currPos += yyleng;}
while {printf("WHILE\n"); currPos += yyleng;}
loop {printf("LOOP\n"); currPos += yyleng;}
endloop {printf("ENDLOOP\n"); currPos += yyleng;}
read {printf("READ\n"); currPos += yyleng;}
write {printf("WRITE\n"); currPos += yyleng;}
and {printf("AND\n"); currPos += yyleng;}
or {printf("OR\n"); currPos += yyleng;}
not {printf("NOT\n"); currPos += yyleng;}
true {printf("TRUE\n"); currPos += yyleng;}
false {printf("FALSE\n"); currPos += yyleng;}

[##].* {currLine++; currPos = 1;}

(\.{DIGITS}+)|({DIGITS}+(\.{DIGITS}*)?([eE][+-}?[0-9]+)?) {printf("NUMBER %s\n", yytext); currPos += yyleng;}

[0-9_][a-zA-Z0-9_]*[a-zA-Z0-9_] {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currPos, currLine, yytext); exit(0);}
[a-zA-Z0-9_]*[_] {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currPos, currLine, yytext); exit(0);}

[a-zA-Z0-9_]*[a-zA-Z0-9]* {printf("IDENT %s\n", yytext); currPos += yyleng;}

[ ] {currPos += yyleng;}
[\t] {currPos += yyleng;}
"\n" {currLine++; currPos = 1;}
. {printf("Error at line %d. column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%

int main (int argc, char** argv) {
	if (argc >= 2) {
		if (yyin == NULL) {
			yyin = stdin;
		}
	}
	else {
		yyin = stdin;
	}
	yylex();
	return 0;
}