/* Generated by re2c */

{
	YYCTYPE yych;
	long yyctx0;
	long yyctx2;
	YYBACKUPCTX ();
	if (YYLESSTHAN (3)) YYFILL(3);
	yych = YYPEEK ();
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
	yyctx0 = YYDIST();
	yych = YYPEEK ();
	goto yy7;
yy3:
	YYRESTORECTX (yyctx0);
	{}
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	yyctx0 = YYDIST();
	switch (yych) {
	case 'a':	goto yy8;
	default:	goto yy11;
	}
yy5:
	YYRESTORECTX (yyctx0);
	{}
yy6:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
yy7:
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy3;
	}
yy8:
	YYSKIP ();
	yych = YYPEEK ();
	yyctx2 = YYDIST();
	switch (yych) {
	case 'b':	goto yy12;
	case 'c':	goto yy15;
	default:	goto yy9;
	}
yy9:
	YYRESTORE ();
	goto yy5;
yy10:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
yy11:
	switch (yych) {
	case 'b':	goto yy10;
	default:	goto yy5;
	}
yy12:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy12;
	default:	goto yy14;
	}
yy14:
	YYRESTORECTX (yyctx2);
	{}
yy15:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'c':	goto yy15;
	default:	goto yy17;
	}
yy17:
	YYRESTORECTX (yyctx2);
	{}
}

