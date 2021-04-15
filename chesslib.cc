#include "chesslib.h"

int King::attack(char* p)
{
	if(deskout(p) > 0)
		return(0);
	int x = p[0] - pos[0];
	int y = p[1] - pos[1];
	if(x < 0) x = -x;
	if(y < 0) y = -y;
	if((x <2) && (y<2))
		return(1);
	return(0);
};
int Alfil ::attack(char* p)
{
	if(deskout(p) > 0)
		return(0);
	int x = p[0] - pos[0];
	int y = p[1] - pos[1];
	if(x < 0) x = -x;
	if(y < 0) y = -y;
	if(((x + y) == 4) && ( x == y))
		return(2);
	return(0);
};
int Sultan::attack(char* s)
{
	if(Alfil::attack(s) > 0)
		return(2);
	if(King::attack(s) > 0)
		return(1);
	return(0);
};
