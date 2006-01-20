/* Generated by re2c 0.10.0.dev on Thu Jan 19 23:45:52 2006 */
#line 1 "scanner.re"
/* $Id$ */
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "scanner.h"
#include "parser.h"
#include "y.tab.h"
#include "globals.h"

extern YYSTYPE yylval;

#ifndef MAX
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif

#define	BSIZE	8192

#define	YYCTYPE		char
#define	YYCURSOR	cursor
#define	YYLIMIT		lim
#define	YYMARKER	ptr
#define	YYFILL(n)	{cursor = fill(cursor);}

#define	RETURN(i)	{cur = cursor; return i;}

namespace re2c
{

Scanner::Scanner(std::istream& i) : in(i),
	bot(NULL), tok(NULL), ptr(NULL), cur(NULL), pos(NULL), lim(NULL),
	top(NULL), eof(NULL), tchar(0), tline(0), cline(1), iscfg(0)
{
    ;
}

char *Scanner::fill(char *cursor)
{
	if(!eof)
	{
		uint cnt = tok - bot;
		if(cnt)
		{
			memcpy(bot, tok, lim - tok);
			tok = bot;
			ptr -= cnt;
			cursor -= cnt;
			pos -= cnt;
			lim -= cnt;
		}
		if((top - lim) < BSIZE)
		{
			char *buf = new char[(lim - bot) + BSIZE];
			memcpy(buf, tok, lim - tok);
			tok = buf;
			ptr = &buf[ptr - bot];
			cursor = &buf[cursor - bot];
			pos = &buf[pos - bot];
			lim = &buf[lim - bot];
			top = &lim[BSIZE];
			delete [] bot;
			bot = buf;
		}
		in.read(lim, BSIZE);
		if ((cnt = in.gcount()) != BSIZE )
		{
			eof = &lim[cnt]; *eof++ = '\0';
		}
		lim += cnt;
	}
	return cursor;
}

#line 91 "scanner.re"


int Scanner::echo(std::ostream &out){
    char *cursor = cur;
    bool ignore_eoc = false;

    // Catch EOF
    if (eof && cursor == eof)
	{
    	return 0;
	}

    tok = cursor;
echo:

#line 92 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	if(yych <= ')') {
		if(yych <= 0x00) goto yy7;
		if(yych == 0x0A) goto yy5;
		goto yy9;
	} else {
		if(yych <= '*') goto yy4;
		if(yych != '/') goto yy9;
	}
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == '*') goto yy12;
yy3:
#line 137 "scanner.re"
	{
					goto echo;
				}
#line 114 "scanner.cc"
yy4:
	yych = *++YYCURSOR;
	if(yych == '/') goto yy10;
	goto yy3;
yy5:
	++YYCURSOR;
#line 126 "scanner.re"
	{
					out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok));
					tok = pos = cursor; cline++; oline++;
				  	goto echo;
				}
#line 127 "scanner.cc"
yy7:
	++YYCURSOR;
#line 131 "scanner.re"
	{
					out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok) - 1); // -1 so we don't write out the \0
					if(cursor == eof) {
						RETURN(0);
					}
				}
#line 137 "scanner.cc"
yy9:
	yych = *++YYCURSOR;
	goto yy3;
yy10:
	++YYCURSOR;
#line 117 "scanner.re"
	{
					if (ignore_eoc) {
						ignore_eoc = false;
					} else {
						out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok));
					}
					tok = pos = cursor;
					goto echo;
				}
#line 153 "scanner.cc"
yy12:
	yych = *++YYCURSOR;
	if(yych == '!') goto yy14;
yy13:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy3;
	}
yy14:
	yych = *++YYCURSOR;
	if(yych == 'm') goto yy15;
	if(yych == 'r') goto yy16;
	goto yy13;
yy15:
	yych = *++YYCURSOR;
	if(yych == 'a') goto yy21;
	goto yy13;
yy16:
	yych = *++YYCURSOR;
	if(yych != 'e') goto yy13;
	yych = *++YYCURSOR;
	if(yych != '2') goto yy13;
	yych = *++YYCURSOR;
	if(yych != 'c') goto yy13;
	++YYCURSOR;
#line 106 "scanner.re"
	{ 
					out.write((const char*)(tok), (const char*)(&cursor[-7]) - (const char*)(tok));
					tok = cursor;
					RETURN(1);
				}
#line 185 "scanner.cc"
yy21:
	yych = *++YYCURSOR;
	if(yych != 'x') goto yy13;
	yych = *++YYCURSOR;
	if(yych != ':') goto yy13;
	yych = *++YYCURSOR;
	if(yych != 'r') goto yy13;
	yych = *++YYCURSOR;
	if(yych != 'e') goto yy13;
	yych = *++YYCURSOR;
	if(yych != '2') goto yy13;
	yych = *++YYCURSOR;
	if(yych != 'c') goto yy13;
	++YYCURSOR;
#line 111 "scanner.re"
	{
					out << "#define YYMAXFILL " << maxFill << std::endl;
					tok = pos = cursor;
					ignore_eoc = true;
					goto echo;
				}
#line 207 "scanner.cc"
}
#line 140 "scanner.re"

}


int Scanner::scan()
{
    char *cursor = cur;
    uint depth;

scan:
    tchar = cursor - pos;
    tline = cline;
    tok = cursor;
	if (iscfg == 1)
	{
		goto config;
	}
	else if (iscfg == 2)
	{
   		goto value;
    }

#line 232 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	if(yych <= '/') {
		if(yych <= '!') {
			if(yych <= 0x0C) {
				if(yych <= 0x08) goto yy56;
				if(yych <= 0x09) goto yy50;
				if(yych <= 0x0A) goto yy52;
				goto yy56;
			} else {
				if(yych <= 0x0D) goto yy54;
				if(yych == ' ') goto yy50;
				goto yy56;
			}
		} else {
			if(yych <= ')') {
				if(yych <= '"') goto yy37;
				if(yych <= '&') goto yy56;
				if(yych <= '\'') goto yy39;
				goto yy43;
			} else {
				if(yych <= '+') {
					if(yych <= '*') goto yy35;
					goto yy44;
				} else {
					if(yych <= '-') goto yy56;
					if(yych <= '.') goto yy48;
					goto yy33;
				}
			}
		}
	} else {
		if(yych <= 'Z') {
			if(yych <= '=') {
				if(yych == ';') goto yy43;
				if(yych <= '<') goto yy56;
				goto yy43;
			} else {
				if(yych == '?') goto yy44;
				if(yych <= '@') goto yy56;
				goto yy47;
			}
		} else {
			if(yych <= 'q') {
				if(yych <= '[') goto yy41;
				if(yych <= '\\') goto yy43;
				if(yych <= '`') goto yy56;
				goto yy47;
			} else {
				if(yych <= 'z') {
					if(yych <= 'r') goto yy45;
					goto yy47;
				} else {
					if(yych <= '{') goto yy31;
					if(yych <= '|') goto yy43;
					goto yy56;
				}
			}
		}
	}
yy31:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= '/') {
		if(yych == ',') goto yy97;
	} else {
		if(yych <= '0') goto yy94;
		if(yych <= '9') goto yy95;
	}
yy32:
#line 162 "scanner.re"
	{ depth = 1;
				  goto code;
				}
#line 310 "scanner.cc"
yy33:
	++YYCURSOR;
	if((yych = *YYCURSOR) == '*') goto yy92;
yy34:
#line 192 "scanner.re"
	{ RETURN(*tok); }
#line 317 "scanner.cc"
yy35:
	++YYCURSOR;
	if((yych = *YYCURSOR) == '/') goto yy90;
yy36:
#line 194 "scanner.re"
	{ yylval.op = *tok;
				  RETURN(CLOSE); }
#line 325 "scanner.cc"
yy37:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych != 0x0A) goto yy86;
yy38:
#line 179 "scanner.re"
	{ fatal("unterminated string constant (missing \")"); }
#line 333 "scanner.cc"
yy39:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych != 0x0A) goto yy81;
yy40:
#line 180 "scanner.re"
	{ fatal("unterminated string constant (missing ')"); }
#line 341 "scanner.cc"
yy41:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 0x0A) goto yy42;
	if(yych == '^') goto yy72;
	goto yy71;
yy42:
#line 190 "scanner.re"
	{ fatal("unterminated range (missing ])"); }
#line 351 "scanner.cc"
yy43:
	yych = *++YYCURSOR;
	goto yy34;
yy44:
	yych = *++YYCURSOR;
	goto yy36;
yy45:
	++YYCURSOR;
	if((yych = *YYCURSOR) == 'e') goto yy62;
	goto yy61;
yy46:
#line 221 "scanner.re"
	{ cur = cursor;
				  yylval.symbol = Symbol::find(token());
				  return ID; }
#line 367 "scanner.cc"
yy47:
	yych = *++YYCURSOR;
	goto yy61;
yy48:
	++YYCURSOR;
#line 225 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = mkDot();
				  return RANGE;
				}
#line 378 "scanner.cc"
yy50:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy59;
yy51:
#line 230 "scanner.re"
	{ goto scan; }
#line 386 "scanner.cc"
yy52:
	++YYCURSOR;
yy53:
#line 232 "scanner.re"
	{ if(cursor == eof) RETURN(0);
				  pos = cursor; cline++;
				  goto scan;
	    			}
#line 395 "scanner.cc"
yy54:
	++YYCURSOR;
	if((yych = *YYCURSOR) == 0x0A) goto yy57;
yy55:
#line 237 "scanner.re"
	{ std::cerr << "line " << tline << ", column " << (tchar + 1) 
						<< ": unexpected character: ";
				  if (isprint(*tok))
				  {
				  	std::cerr << *tok << std::endl;
				  }
				  else
				  {
					std::cerr << "0x" << hexCh(*tok >> 4) << hexCh(*tok) << std::endl;
				  }
				  goto scan;
				}
#line 413 "scanner.cc"
yy56:
	yych = *++YYCURSOR;
	goto yy55;
yy57:
	yych = *++YYCURSOR;
	goto yy53;
yy58:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy59:
	if(yych == 0x09) goto yy58;
	if(yych == ' ') goto yy58;
	goto yy51;
yy60:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy61:
	if(yych <= '@') {
		if(yych <= '/') goto yy46;
		if(yych <= '9') goto yy60;
		goto yy46;
	} else {
		if(yych <= 'Z') goto yy60;
		if(yych <= '`') goto yy46;
		if(yych <= 'z') goto yy60;
		goto yy46;
	}
yy62:
	yych = *++YYCURSOR;
	if(yych != '2') goto yy61;
	yych = *++YYCURSOR;
	if(yych != 'c') goto yy61;
	yyaccept = 4;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych != ':') goto yy61;
yy65:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '@') goto yy66;
	if(yych <= 'Z') goto yy67;
	if(yych <= '`') goto yy66;
	if(yych <= 'z') goto yy67;
yy66:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy32;
	case 1:	goto yy38;
	case 2:	goto yy40;
	case 3:	goto yy42;
	case 6:	goto yy98;
	case 5:	goto yy69;
	case 4:	goto yy46;
	}
yy67:
	yyaccept = 5;
	YYMARKER = ++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= 'Z') {
		if(yych <= '9') {
			if(yych >= '0') goto yy67;
		} else {
			if(yych <= ':') goto yy65;
			if(yych >= 'A') goto yy67;
		}
	} else {
		if(yych <= '_') {
			if(yych >= '_') goto yy67;
		} else {
			if(yych <= '`') goto yy69;
			if(yych <= 'z') goto yy67;
		}
	}
yy69:
#line 214 "scanner.re"
	{ cur = cursor;
				  tok+= 5; /* skip "re2c:" */
				  iscfg = 1;
				  yylval.str = new Str(token());
				  return CONFIG;
				}
#line 498 "scanner.cc"
yy70:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy71:
	if(yych <= '[') {
		if(yych == 0x0A) goto yy66;
		goto yy70;
	} else {
		if(yych <= '\\') goto yy74;
		if(yych <= ']') goto yy75;
		goto yy70;
	}
yy72:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '[') {
		if(yych == 0x0A) goto yy66;
		goto yy72;
	} else {
		if(yych <= '\\') goto yy77;
		if(yych <= ']') goto yy78;
		goto yy72;
	}
yy74:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy66;
	goto yy70;
yy75:
	++YYCURSOR;
#line 186 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = ranToRE(token());
				  return RANGE; }
#line 536 "scanner.cc"
yy77:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy66;
	goto yy72;
yy78:
	++YYCURSOR;
#line 182 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = invToRE(token());
				  return RANGE; }
#line 549 "scanner.cc"
yy80:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy81:
	if(yych <= '&') {
		if(yych == 0x0A) goto yy66;
		goto yy80;
	} else {
		if(yych <= '\'') goto yy83;
		if(yych != '\\') goto yy80;
	}
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy66;
	goto yy80;
yy83:
	++YYCURSOR;
#line 175 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = strToCaseInsensitiveRE(token());
				  return STRING; }
#line 573 "scanner.cc"
yy85:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy86:
	if(yych <= '!') {
		if(yych == 0x0A) goto yy66;
		goto yy85;
	} else {
		if(yych <= '"') goto yy88;
		if(yych != '\\') goto yy85;
	}
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy66;
	goto yy85;
yy88:
	++YYCURSOR;
#line 171 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = strToRE(token());
				  return STRING; }
#line 597 "scanner.cc"
yy90:
	++YYCURSOR;
#line 168 "scanner.re"
	{ tok = cursor;
				  RETURN(0); }
#line 603 "scanner.cc"
yy92:
	++YYCURSOR;
#line 165 "scanner.re"
	{ depth = 1;
				  goto comment; }
#line 609 "scanner.cc"
yy94:
	yych = *++YYCURSOR;
	if(yych == ',') goto yy108;
	goto yy96;
yy95:
	++YYCURSOR;
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy96:
	if(yych <= '/') {
		if(yych == ',') goto yy101;
		goto yy66;
	} else {
		if(yych <= '9') goto yy95;
		if(yych == '}') goto yy99;
		goto yy66;
	}
yy97:
	++YYCURSOR;
yy98:
#line 212 "scanner.re"
	{ fatal("illegal closure form, use '{n}', '{n,}', '{n,m}' where n and m are numbers"); }
#line 632 "scanner.cc"
yy99:
	++YYCURSOR;
#line 200 "scanner.re"
	{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = atoi((char *)tok+1);
				  RETURN(CLOSESIZE); }
#line 639 "scanner.cc"
yy101:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= '/') goto yy98;
	if(yych <= '9') goto yy104;
	if(yych != '}') goto yy98;
	++YYCURSOR;
#line 208 "scanner.re"
	{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = -1;
				  RETURN(CLOSESIZE); }
#line 651 "scanner.cc"
yy104:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '/') goto yy66;
	if(yych <= '9') goto yy104;
	if(yych != '}') goto yy66;
	++YYCURSOR;
#line 204 "scanner.re"
	{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = MAX(yylval.extop.minsize,atoi(strchr((char *)tok, ',')+1));
				  RETURN(CLOSESIZE); }
#line 664 "scanner.cc"
yy108:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= '/') goto yy98;
	if(yych <= '9') goto yy104;
	if(yych != '}') goto yy98;
	++YYCURSOR;
#line 197 "scanner.re"
	{ yylval.op = '*';
				  RETURN(CLOSE); }
#line 675 "scanner.cc"
}
#line 249 "scanner.re"


code:

#line 682 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= '&') {
		if(yych <= 0x0A) {
			if(yych <= 0x09) goto yy119;
			goto yy117;
		} else {
			if(yych == '"') goto yy121;
			goto yy119;
		}
	} else {
		if(yych <= '{') {
			if(yych <= '\'') goto yy122;
			if(yych <= 'z') goto yy119;
			goto yy115;
		} else {
			if(yych != '}') goto yy119;
		}
	}
	++YYCURSOR;
#line 253 "scanner.re"
	{ if(--depth == 0){
					cur = cursor;
					yylval.token = new Token(token(), tline);
					return CODE;
				  }
				  goto code; }
#line 713 "scanner.cc"
yy115:
	++YYCURSOR;
#line 259 "scanner.re"
	{ ++depth;
				  goto code; }
#line 719 "scanner.cc"
yy117:
	++YYCURSOR;
#line 261 "scanner.re"
	{ if(cursor == eof) fatal("missing '}'");
				  pos = cursor; cline++;
				  goto code;
				}
#line 727 "scanner.cc"
yy119:
	++YYCURSOR;
yy120:
#line 265 "scanner.re"
	{ goto code; }
#line 733 "scanner.cc"
yy121:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 0x0A) goto yy120;
	goto yy128;
yy122:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 0x0A) goto yy120;
	goto yy124;
yy123:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy124:
	if(yych <= '&') {
		if(yych != 0x0A) goto yy123;
	} else {
		if(yych <= '\'') goto yy119;
		if(yych == '\\') goto yy126;
		goto yy123;
	}
yy125:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy120;
	}
yy126:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy125;
	goto yy123;
yy127:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy128:
	if(yych <= '!') {
		if(yych == 0x0A) goto yy125;
		goto yy127;
	} else {
		if(yych <= '"') goto yy119;
		if(yych != '\\') goto yy127;
	}
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy125;
	goto yy127;
}
#line 266 "scanner.re"


comment:

#line 790 "scanner.cc"
{
	YYCTYPE yych;
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= ')') {
		if(yych == 0x0A) goto yy135;
		goto yy137;
	} else {
		if(yych <= '*') goto yy132;
		if(yych == '/') goto yy134;
		goto yy137;
	}
yy132:
	++YYCURSOR;
	if((yych = *YYCURSOR) == '/') goto yy140;
yy133:
#line 281 "scanner.re"
	{ goto comment; }
#line 809 "scanner.cc"
yy134:
	yych = *++YYCURSOR;
	if(yych == '*') goto yy138;
	goto yy133;
yy135:
	++YYCURSOR;
#line 277 "scanner.re"
	{ if(cursor == eof) RETURN(0);
				  tok = pos = cursor; cline++;
				  goto comment;
				}
#line 821 "scanner.cc"
yy137:
	yych = *++YYCURSOR;
	goto yy133;
yy138:
	++YYCURSOR;
#line 274 "scanner.re"
	{ ++depth;
				  fatal("ambiguous /* found");
				  goto comment; }
#line 831 "scanner.cc"
yy140:
	++YYCURSOR;
#line 270 "scanner.re"
	{ if(--depth == 0)
					goto scan;
				    else
					goto comment; }
#line 839 "scanner.cc"
}
#line 282 "scanner.re"


config:

#line 846 "scanner.cc"
{
	YYCTYPE yych;
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= 0x1F) {
		if(yych != 0x09) goto yy148;
	} else {
		if(yych <= ' ') goto yy144;
		if(yych == '=') goto yy146;
		goto yy148;
	}
yy144:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy153;
yy145:
#line 286 "scanner.re"
	{ goto config; }
#line 865 "scanner.cc"
yy146:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy151;
yy147:
#line 287 "scanner.re"
	{ iscfg = 2;
				  cur = cursor;
				  RETURN('='); 
				}
#line 876 "scanner.cc"
yy148:
	++YYCURSOR;
#line 291 "scanner.re"
	{ fatal("missing '='"); }
#line 881 "scanner.cc"
yy150:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy151:
	if(yych == 0x09) goto yy150;
	if(yych == ' ') goto yy150;
	goto yy147;
yy152:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy153:
	if(yych == 0x09) goto yy152;
	if(yych == ' ') goto yy152;
	goto yy145;
}
#line 292 "scanner.re"


value:

#line 904 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= '&') {
		if(yych <= 0x0D) {
			if(yych <= 0x08) goto yy162;
			if(yych <= 0x0A) goto yy156;
			if(yych <= 0x0C) goto yy162;
		} else {
			if(yych <= ' ') {
				if(yych <= 0x1F) goto yy162;
			} else {
				if(yych == '"') goto yy164;
				goto yy162;
			}
		}
	} else {
		if(yych <= '/') {
			if(yych <= '\'') goto yy166;
			if(yych == '-') goto yy159;
			goto yy162;
		} else {
			if(yych <= '9') {
				if(yych <= '0') goto yy157;
				goto yy160;
			} else {
				if(yych != ';') goto yy162;
			}
		}
	}
yy156:
#line 301 "scanner.re"
	{ cur = cursor;
				  yylval.str = new Str(token());
				  iscfg = 0;
				  return VALUE;
				}
#line 944 "scanner.cc"
yy157:
	++YYCURSOR;
	if((yych = *YYCURSOR) <= 0x0D) {
		if(yych <= 0x08) goto yy162;
		if(yych <= 0x0A) goto yy158;
		if(yych <= 0x0C) goto yy162;
	} else {
		if(yych <= ' ') {
			if(yych <= 0x1F) goto yy162;
		} else {
			if(yych != ';') goto yy162;
		}
	}
yy158:
#line 296 "scanner.re"
	{ cur = cursor;
				  yylval.number = atoi(token().to_string().c_str());
				  iscfg = 0;
				  return NUMBER;
				}
#line 965 "scanner.cc"
yy159:
	yych = *++YYCURSOR;
	if(yych <= '0') goto yy163;
	if(yych >= ':') goto yy163;
yy160:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= 0x1F) {
		if(yych <= 0x0A) {
			if(yych >= 0x09) goto yy158;
		} else {
			if(yych == 0x0D) goto yy158;
		}
	} else {
		if(yych <= '9') {
			if(yych <= ' ') goto yy158;
			if(yych >= '0') goto yy160;
		} else {
			if(yych == ';') goto yy158;
		}
	}
yy162:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy163:
	if(yych <= 0x0D) {
		if(yych <= 0x08) goto yy162;
		if(yych <= 0x0A) goto yy156;
		if(yych <= 0x0C) goto yy162;
		goto yy156;
	} else {
		if(yych <= ' ') {
			if(yych <= 0x1F) goto yy162;
			goto yy156;
		} else {
			if(yych == ';') goto yy156;
			goto yy162;
		}
	}
yy164:
	yyaccept = 0;
	YYMARKER = ++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= ' ') {
		if(yych <= 0x0A) {
			if(yych <= 0x08) goto yy164;
			if(yych <= 0x09) goto yy174;
			goto yy156;
		} else {
			if(yych == 0x0D) goto yy174;
			if(yych <= 0x1F) goto yy164;
			goto yy174;
		}
	} else {
		if(yych <= ':') {
			if(yych == '"') goto yy162;
			goto yy164;
		} else {
			if(yych <= ';') goto yy174;
			if(yych == '\\') goto yy176;
			goto yy164;
		}
	}
yy166:
	yyaccept = 0;
	YYMARKER = ++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= ' ') {
		if(yych <= 0x0A) {
			if(yych <= 0x08) goto yy166;
			if(yych >= 0x0A) goto yy156;
		} else {
			if(yych == 0x0D) goto yy168;
			if(yych <= 0x1F) goto yy166;
		}
	} else {
		if(yych <= ':') {
			if(yych == '\'') goto yy162;
			goto yy166;
		} else {
			if(yych <= ';') goto yy168;
			if(yych == '\\') goto yy171;
			goto yy166;
		}
	}
yy168:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '&') {
		if(yych != 0x0A) goto yy168;
	} else {
		if(yych <= '\'') goto yy172;
		if(yych == '\\') goto yy173;
		goto yy168;
	}
yy170:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy156;
	}
yy171:
	yyaccept = 0;
	YYMARKER = ++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= 0x0D) {
		if(yych <= 0x09) {
			if(yych <= 0x08) goto yy166;
			goto yy168;
		} else {
			if(yych <= 0x0A) goto yy156;
			if(yych <= 0x0C) goto yy166;
			goto yy168;
		}
	} else {
		if(yych <= ' ') {
			if(yych <= 0x1F) goto yy166;
			goto yy168;
		} else {
			if(yych == ';') goto yy168;
			goto yy166;
		}
	}
yy172:
	yych = *++YYCURSOR;
	goto yy156;
yy173:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy170;
	goto yy168;
yy174:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '!') {
		if(yych == 0x0A) goto yy170;
		goto yy174;
	} else {
		if(yych <= '"') goto yy172;
		if(yych == '\\') goto yy177;
		goto yy174;
	}
yy176:
	yyaccept = 0;
	YYMARKER = ++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= 0x0D) {
		if(yych <= 0x09) {
			if(yych <= 0x08) goto yy164;
			goto yy174;
		} else {
			if(yych <= 0x0A) goto yy156;
			if(yych <= 0x0C) goto yy164;
			goto yy174;
		}
	} else {
		if(yych <= ' ') {
			if(yych <= 0x1F) goto yy164;
			goto yy174;
		} else {
			if(yych == ';') goto yy174;
			goto yy164;
		}
	}
yy177:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == 0x0A) goto yy170;
	goto yy174;
}
#line 306 "scanner.re"

}

void Scanner::fatal(uint ofs, const char *msg) const
{
    std::cerr << "line " << tline << ", column " << (tchar + ofs + 1) << ": "
		<< msg << std::endl;
    exit(1);
}

void Scanner::fatal(const char *msg) const
{
    fatal(0, msg);
}

} // end namespace re2c
