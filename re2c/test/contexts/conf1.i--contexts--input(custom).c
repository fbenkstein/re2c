/* Generated by re2c */
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
    
{
	char yych;
	long zz_0p1;
	long zz_0p2;
	long zz_0p3;
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
	{ printf("error\n"); return; }
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	zz_0p1 = ZZ_DIST();
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
	zz_0p1 = ZZ_DIST();
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
	zz_0p2 = ZZ_DIST();
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
	zz_0p1 = ZZ_DIST();
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
	zz_0p2 = ZZ_DIST();
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
	zz_0p3 = ZZ_DIST();
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
	zz_0p2 = ZZ_DIST();
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
	zz_0p3 = ZZ_DIST();
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
	{
            printf("%u.%u.%u.%u\n",
                parse_oct(basectx, ZZ_CTX(zz_0p1)),
                parse_oct(ZZ_CTX(zz_0p1) + 1, ZZ_CTX(zz_0p2)),
                parse_oct(ZZ_CTX(zz_0p2) + 1, ZZ_CTX(zz_0p3)),
                parse_oct(ZZ_CTX(zz_0p3) + 1, s));
            return;
        }
yy18:
	YYSKIP ();
	yych = YYPEEK ();
	zz_0p3 = ZZ_DIST();
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

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
