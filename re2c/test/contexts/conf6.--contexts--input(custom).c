/* Generated by re2c */
#line 1 "contexts/conf6.--contexts--input(custom).re"
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

static void lex(const char *s)
{
#define YYPEEK()           *s
#define YYSKIP()           ++s
#define YYBACKUP()         marker = s
#define YYRESTORE()        s = marker
#define YYBACKUPCTX()      basectx = s
#define YYRESTORECTX(dist) s = basectx + dist
#define ZZ_CTX(dist)       (basectx + dist)
#define ZZ_DIST()          (s - basectx)
    const char *marker;
    const char *basectx;
    contexts_t ctxs;
    
#line 39 "contexts/conf6.--contexts--input(custom).c"
{
	char yych;
	YYBACKUPCTX ();
	yych = YYPEEK ();
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
	YYSKIP ();
yy3:
#line 55 "contexts/conf6.--contexts--input(custom).re"
	{ printf("error\n"); return; }
#line 62 "contexts/conf6.--contexts--input(custom).c"
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	ctxs.zz_0p1 = ZZ_DIST();
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
	YYSKIP ();
	yych = YYPEEK ();
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
	YYRESTORE ();
	goto yy3;
yy7:
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p1 = ZZ_DIST();
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
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p2 = ZZ_DIST();
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
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p1 = ZZ_DIST();
	switch (yych) {
	case '.':	goto yy5;
	default:	goto yy6;
	}
yy10:
	YYSKIP ();
	yych = YYPEEK ();
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
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p2 = ZZ_DIST();
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
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p3 = ZZ_DIST();
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
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p2 = ZZ_DIST();
	switch (yych) {
	case '.':	goto yy10;
	default:	goto yy6;
	}
yy14:
	YYSKIP ();
	yych = YYPEEK ();
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
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p3 = ZZ_DIST();
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
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
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
#line 60 "contexts/conf6.--contexts--input(custom).re"
	{
            printf("%u.%u.%u.%u\n",
                parse_oct(basectx, ZZ_CTX(ctxs.zz_0p1)),
                parse_oct(ZZ_CTX(ctxs.zz_0p1) + 1, ZZ_CTX(ctxs.zz_0p2)),
                parse_oct(ZZ_CTX(ctxs.zz_0p2) + 1, ZZ_CTX(ctxs.zz_0p3)),
                parse_oct(ZZ_CTX(ctxs.zz_0p3) + 1, s));
            return;
        }
#line 264 "contexts/conf6.--contexts--input(custom).c"
yy18:
	YYSKIP ();
	yych = YYPEEK ();
	ctxs.zz_0p3 = ZZ_DIST();
	switch (yych) {
	case '.':	goto yy14;
	default:	goto yy6;
	}
yy19:
	YYSKIP ();
	yych = YYPEEK ();
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
	YYSKIP ();
	yych = YYPEEK ();
	goto yy17;
}
#line 68 "contexts/conf6.--contexts--input(custom).re"

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
