/* Generated by re2c */
#line 1 "config2.s.re"
#define	NULL		((char*) 0)
#define	YYCTYPE		char
#define	YYCURSOR	p
#define	YYLIMIT		p
#define	YYMARKER	q
#define	YYFILL(n)

char *scan0(char *p)
{
	char *q;

#line 15 "<stdout>"
{
   YYCTYPE yych;
yy0:
   if(YYLIMIT == YYCURSOR) YYFILL(1);
   yych = *YYCURSOR;
   if(yych <= 'b') {
      if(yych <= '`') goto yy10;
      if(yych >= 'b') goto yy4;
   } else {
      if(yych <= 'c') goto yy6;
      if(yych <= 'd') goto yy8;
      goto yy10;
   }
   ++YYCURSOR;
#line 13 "config2.s.re"
   { return YYCURSOR; }
#line 32 "<stdout>"
yy4:
   ++YYCURSOR;
#line 14 "config2.s.re"
   { return YYCURSOR; }
#line 37 "<stdout>"
yy6:
   ++YYCURSOR;
#line 15 "config2.s.re"
   { return YYCURSOR; }
#line 42 "<stdout>"
yy8:
   ++YYCURSOR;
#line 16 "config2.s.re"
   { return YYCURSOR; }
#line 47 "<stdout>"
yy10:
   ++YYCURSOR;
#line 17 "config2.s.re"
   { return NULL; }
#line 52 "<stdout>"
}
#line 18 "config2.s.re"

}

char *scan1(char *p)
{
	char *q;

#line 62 "<stdout>"
{
	YYCTYPE yych;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= 'b') {
		if(yych <= '`') goto yy22;
		if(yych >= 'b') goto yy16;
	} else {
		if(yych <= 'c') goto yy18;
		if(yych <= 'd') goto yy20;
		goto yy22;
	}
	++YYCURSOR;
#line 26 "config2.s.re"
	{ return YYCURSOR; }
#line 78 "<stdout>"
yy16:
	++YYCURSOR;
#line 27 "config2.s.re"
	{ return YYCURSOR; }
#line 83 "<stdout>"
yy18:
	++YYCURSOR;
#line 28 "config2.s.re"
	{ return YYCURSOR; }
#line 88 "<stdout>"
yy20:
	++YYCURSOR;
#line 29 "config2.s.re"
	{ return YYCURSOR; }
#line 93 "<stdout>"
yy22:
	++YYCURSOR;
#line 30 "config2.s.re"
	{ return NULL; }
#line 98 "<stdout>"
}
#line 31 "config2.s.re"

}

char *scan(char *p)
{
	char *q;

#line 108 "<stdout>"
{
YYCTYPE yych;
if(YYLIMIT == YYCURSOR) YYFILL(1);
yych = *YYCURSOR;
if(yych <= 'b') {
if(yych <= '`') goto yy34;
if(yych >= 'b') goto yy28;
} else {
if(yych <= 'c') goto yy30;
if(yych <= 'd') goto yy32;
goto yy34;
}
++YYCURSOR;
#line 39 "config2.s.re"
{ return YYCURSOR; }
#line 124 "<stdout>"
yy28:
++YYCURSOR;
#line 40 "config2.s.re"
{ return YYCURSOR; }
#line 129 "<stdout>"
yy30:
++YYCURSOR;
#line 41 "config2.s.re"
{ return YYCURSOR; }
#line 134 "<stdout>"
yy32:
++YYCURSOR;
#line 42 "config2.s.re"
{ return YYCURSOR; }
#line 139 "<stdout>"
yy34:
++YYCURSOR;
#line 43 "config2.s.re"
{ return NULL; }
#line 144 "<stdout>"
}
#line 44 "config2.s.re"

}
