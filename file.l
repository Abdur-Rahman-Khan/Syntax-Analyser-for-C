
alpha 		[A-Za-z_]
fl			(f|F|l|L)
ul			(u|U|l|L)*
digit 			[0-9]
space 			[ ]
hex			[a-fA-F0-9]
exp			[Ee][+-]?{digit}+

%{
//int yylineno = 1;
char datatype[100] = "dummy";
int tl;
char next;
#include <stdio.h>
#include <string.h> 
%}

%%	
\n   { yylineno++; }
"/*"					{ multicomment(); }
"//"					{ singlecomment();yylineno++; }

"#include<"({alpha})*".h>" {}
"#include <"({alpha})*".h>" {}
"#include \""({alpha})*".h\"" {}
"#include\""({alpha})*".h\"" {}

"#define"({space})""({alpha})""({alpha}|{digit})*""({space})""({digit})+"" 			{ return DEFINE;}
"#define"({space})""({alpha}({alpha}|{digit})*)""({space})""(({digit}+)\.({digit}+))"" 		{ return DEFINE;}
"#define"({space})""({alpha}({alpha}|{digit})*)""({space})""({alpha}({alpha}|{digit})*)"" 	{ return DEFINE;}

{digit}+    				{   return CONSTANT; }
({digit}+)\.({digit}+) 		{	 return CONSTANT; }
0[xX]{hex}+{ul}?			{   return CONSTANT; }
{digit}+{ul}?				{   return CONSTANT; }
'(\\.|[^\\'])+'				{   return CONSTANT; }
{digit}+{exp}{fl}?			{   return CONSTANT; }
{digit}*"."{digit}+({exp})?{fl}?	{   return CONSTANT; }
{digit}+"."{digit}*({exp})?{fl}?	{   return CONSTANT; }

{alpha}?\"(\\.|[^\\"])*\"		{   return STRING_LITERAL; } 


"<<<"		{return KERNEL_OPEN;}
">>>"		{return KERNEL_CLOSE;}
"->"			{  return PTR_OP; }
"++"			{  return INC_OP; }
"--"			{  return DEC_OP; }
"<<"			{  return LEFT_OP; }
">>"			{  return RIGHT_OP; }
"<="			{  return LE_OP; }
">="			{  return GE_OP; }
"=="			{  return EQ_OP; }
"!="			{  return NE_OP; }
"&&"			{  return AND_OP; }
"||"			{  return OR_OP; }
"*="			{  return MUL_ASSIGN; }
"/="			{  return DIV_ASSIGN; }
"%="			{  return MOD_ASSIGN; }
"+="			{  return ADD_ASSIGN; }
"-="			{  return SUB_ASSIGN; }
"<<="			{  return LEFT_ASSIGN; }
">>="			{  return RIGHT_ASSIGN; }
"&="			{  return AND_ASSIGN; }
"^="			{  return XOR_ASSIGN; }
"|="			{  return OR_ASSIGN; }

"auto"			{ return AUTO; }
"break"			{ return BREAK; }
"case"			{ return CASE; }
"char"			{ return CHAR; }
"const"			{ return CONST; }
"continue"		{ return CONTINUE; }
"default"		{ return DEFAULT; }
"do"			{ return DO; }
"double"		{ return DOUBLE; }
"else"			{ return ELSE; }
"enum"			{ return ENUM; }
"extern"		{ return EXTERN; }
"float"			{  return FLOAT; }
"for"			{ return FOR; }
"goto"			{ return GOTO; }
"if"			{ return IF; }
"int"			{  return INT; }
"long"			{ return LONG; }
"register"		{ return REGISTER; }
"return"		{ return RETURN; }
"short"			{ return SHORT; }
"signed"		{ return SIGNED; }
"sizeof" 		{ return SIZEOF; }
"static"		{ return STATIC; }
"struct"		{ return STRUCT; }
"switch"		{ return SWITCH; }
"typedef"		{ return TYPEDEF; }
"union"			{ return UNION; }
"unsigned"		{ return UNSIGNED; }
"void"			{ return VOID; }
"volatile"		{ return VOLATILE; }
"while"			{ return WHILE; }
"__global__"		{return GLOBAL;}

";"			{   return(';'); }
("{"|"<%")		{  return('{'); }
("}"|"%>")		{  return('}'); }
","			{  return(','); }
":"			{  return(':'); }
"="			{  return('='); }
"("			{  return('('); }
")"			{  return(')'); }
("["|"<:")		{  return('['); }
("]"|":>")		{  return(']'); }
"."			{  return('.'); }
"&"			{  return('&'); }
"!"			{  return('!'); }
"~"			{  return('~'); }
"-"			{  return('-'); }
"+"			{  return('+'); }
"*"			{  return('*'); }
"/"			{  return('/'); }
"%"			{  return('%'); }
"<"			{  return('<'); }
">"			{  return('>'); }
"^"			{  return('^'); }
"|"			{  return('|'); }
"?"			{  return('?'); }
"printf"|"scanf"	{  return IDENTIFIER; }
"main" 			{  return IDENTIFIER; }
{alpha}({alpha}|{digit})*    		{  return IDENTIFIER;}
[ \t\v\n\f]		{  }
.			{ /* ignore bad characters */ }
%%

yywrap()
{
	return(1);
}
multicomment()
{
	char c, c1;
	while ((c = input()) != '*' && c != 0){
		if(c=='\n')
			yylineno++;
	};
	c1=input();
	
	if(c=='*' && c1=='/')
	{
		c=0;
	}
	if (c != 0)
		putchar(c1);
}
singlecomment()
{
	char c;
	while(c=input()!='\n');
	if(c=='\n')
		{c=0;
		yylineno++;}
	if(c!=0)
		putchar(c);
}
