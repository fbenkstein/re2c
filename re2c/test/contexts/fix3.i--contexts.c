/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER;
    const char *YYCTXMARKER;
    
{
	char yych;
	long yyctx0p1;
	long yyctx0p2;
	long yyctx0p3;
	long yyctx0p4;
	YYCTXMARKER = YYCURSOR;
	yych = *YYCURSOR;
	yyctx0p4 = yyctx0p3 = yyctx0p2 = yyctx0p1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '0':	goto yy5;
	case '1':	goto yy7;
	case '2':	goto yy9;
	case '3':	goto yy11;
	case '4':	goto yy13;
	default:	goto yy3;
	}
yy2:
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%.*s'\n",
                (YYCTXMARKER + yyctx0p1) - YYCTXMARKER, YYCTXMARKER,
                (YYCTXMARKER + yyctx0p2) - (YYCTXMARKER + yyctx0p1), (YYCTXMARKER + yyctx0p1),
                (YYCTXMARKER + yyctx0p3) - (YYCTXMARKER + yyctx0p2), (YYCTXMARKER + yyctx0p2),
                (YYCTXMARKER + yyctx0p4) - (YYCTXMARKER + yyctx0p3), (YYCTXMARKER + yyctx0p3),
                YYCURSOR - (YYCTXMARKER + yyctx0p4), (YYCTXMARKER + yyctx0p4));
                return;
        }
yy3:
	++YYCURSOR;
	{ printf("error\n"); return; }
yy5:
	++YYCURSOR;
	yych = *YYCURSOR;
	yyctx0p4 = yyctx0p3 = yyctx0p2 = yyctx0p1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '0':	goto yy5;
	case '1':	goto yy7;
	case '2':	goto yy9;
	case '3':	goto yy11;
	case '4':	goto yy13;
	default:	goto yy2;
	}
yy7:
	++YYCURSOR;
	yych = *YYCURSOR;
	yyctx0p4 = yyctx0p3 = yyctx0p2 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '1':	goto yy7;
	case '2':	goto yy9;
	case '3':	goto yy11;
	case '4':	goto yy13;
	default:	goto yy2;
	}
yy9:
	++YYCURSOR;
	yych = *YYCURSOR;
	yyctx0p4 = yyctx0p3 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '2':	goto yy9;
	case '3':	goto yy11;
	case '4':	goto yy13;
	default:	goto yy2;
	}
yy11:
	++YYCURSOR;
	yych = *YYCURSOR;
	yyctx0p4 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '3':	goto yy11;
	case '4':	goto yy13;
	default:	goto yy2;
	}
yy13:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '4':	goto yy13;
	default:	goto yy2;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
re2c: warning: line 17: rule matches empty string [-Wmatch-empty-string]
