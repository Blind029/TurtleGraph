#include "stdafx.h"
#include "TurtleGraph.h"

int _tmain(int argc, _TCHAR* argv[])
{
  TurtleGraph t1;
	int move=5;
	int dir=0;
	t1.setTurtle(move,dir);
	t1.printTurtle();
	
	dir=1;
	move=6;
	t1.setTurtle(move,dir);
	t1.printTurtle();
}
