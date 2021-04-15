#ifndef CHESSLIB
#define CHESSLIB
#include "chessman.h"
class Alfil: virtual public Figure
{
public:
	Alfil(char* p) : Figure(p) {};
	Alfil() {};
	char isa() { return 'A'; };
	int attack( char*);
};
class King : virtual public Figure
{
public:
	King( char* p) : Figure(p) {};
	King() {};
	char isa() { return 'K'; };
	int attack( char*);
};
class Sultan: public Alfil, public King
{
public:
	Sultan( char* p) : Figure(p) {};
	Sultan() {};
	char isa() { return 'S'; };
	int attack( char*);
};
#endif
