%{
#include <stdio.h>
int yywrap();
int yylex();

char plus = 0;
%}
%x SINGLE_LINE
%x SINGLE_LINE_PLUS
%x MULTI_LINE
%x STRING
WS [\t ]

%%

\"                                  {BEGIN(STRING); printf("\"");}
<STRING>\\\"                        {printf("\\\"");}
<STRING>\"                          {BEGIN(INITIAL); printf("\"");}

\/\*                                {BEGIN(MULTI_LINE);}
<MULTI_LINE>\*\/                    {BEGIN(INITIAL); }
<MULTI_LINE>(\n|.)
{WS}*"\/\/".*\\{WS}*\n              {BEGIN(SINGLE_LINE_PLUS);printf("\n");}
^{WS}*"\/\/".*\n                    ;
{WS}*"\/\/".*\n                     {printf("\n");}

<SINGLE_LINE_PLUS>{WS}*.*\\{WS}*\n   ;
<SINGLE_LINE_PLUS>.                 ;
<SINGLE_LINE_PLUS>\n                {BEGIN(INITIAL);}

%%

int yywrap() {
  return 1;
}

int main() {
  yylex();

  return 0;
}
