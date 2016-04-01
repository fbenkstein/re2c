/* Generated by re2c */
#line 1 "contexts/conf6.--contexts.re"
#include <stddef.h>
#include <stdio.h>

static inline unsigned parse_oct(const char *s, const char *e)
{
    unsigned oct = 0;
    for (; s != e; ++s) {
        oct = oct * 10 + *s - '0';
    }
    return oct;
}

struct contexts_t
{
    long zz_0p1;long zz_0p2;long zz_0p3;

    contexts_t();
    void push(long arg_zz_0p1,long arg_zz_0p2,long arg_zz_0p3);
    void pop(long &arg_zz_0p1,long &arg_zz_0p2,long &arg_zz_0p3);
};

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER;
    const char *YYCTXMARKER;
    contexts_t ctxs;
    
#line 31 "contexts/conf6.--contexts.c"
{
	char yych;
	YYCTXMARKER = YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 45 "contexts/conf6.--contexts.re"
	{ printf("error\n"); return; }
#line 54 "contexts/conf6.--contexts.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	ctxs.zz_0p1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy5;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy7;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy8;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	ctxs.zz_0p1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy5;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy9;
	default:	goto yy6;
	}
yy8:
	yych = *++YYCURSOR;
	ctxs.zz_0p2 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy10;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy11;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	ctxs.zz_0p1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy5;
	default:	goto yy6;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy12;
	default:	goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	ctxs.zz_0p2 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy10;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy13;
	default:	goto yy6;
	}
yy12:
	yych = *++YYCURSOR;
	ctxs.zz_0p3 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy14;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy15;
	default:	goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	ctxs.zz_0p2 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy10;
	default:	goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy16;
	default:	goto yy6;
	}
yy15:
	yych = *++YYCURSOR;
	ctxs.zz_0p3 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy14;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy18;
	default:	goto yy6;
	}
yy16:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy19;
	default:	goto yy17;
	}
yy17:
#line 50 "contexts/conf6.--contexts.re"
	{
            printf("%u.%u.%u.%u\n",
                parse_oct(YYCTXMARKER, (YYCTXMARKER + ctxs.zz_0p1)),
                parse_oct((YYCTXMARKER + ctxs.zz_0p1) + 1, (YYCTXMARKER + ctxs.zz_0p2)),
                parse_oct((YYCTXMARKER + ctxs.zz_0p2) + 1, (YYCTXMARKER + ctxs.zz_0p3)),
                parse_oct((YYCTXMARKER + ctxs.zz_0p3) + 1, YYCURSOR));
            return;
        }
#line 244 "contexts/conf6.--contexts.c"
yy18:
	yych = *++YYCURSOR;
	ctxs.zz_0p3 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '.':	goto yy14;
	default:	goto yy6;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy20;
	default:	goto yy17;
	}
yy20:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy17;
}
#line 58 "contexts/conf6.--contexts.re"

}

contexts_t::contexts_t(): zz_0p1(0),zz_0p2(0),zz_0p3(0) {}

void contexts_t::push(long arg_zz_0p1,long arg_zz_0p2,long arg_zz_0p3)
{zz_0p1 = arg_zz_0p1;zz_0p2 = arg_zz_0p2;zz_0p3 = arg_zz_0p3;}

void contexts_t::pop(long &arg_zz_0p1,long &arg_zz_0p2,long &arg_zz_0p3)
{arg_zz_0p1 = zz_0p1;arg_zz_0p2 = zz_0p2;arg_zz_0p3 = zz_0p3;}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
