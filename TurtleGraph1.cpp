#include "stdafx.h"
#include "TurtleGraph.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//create a user input to select the command and values to be performed
	//there is no input for; pen up/down
	TurtleGraph t1;//this is the object that stores your current "1" or "0" values for asterisk or not
	int move=5;//integer for how many spaces to move
	int dir=0;//"0" is one direction, and "1" is the other
	t1.setTurtle(move,dir);//t1 is the object your modifying, then the other two values declare direction and number of spaces
	t1.printTurtle();//this prints out the array, "1" means asterisk, "0" means underscore
	
	//testing another movement
	dir=1;
	move=6;
	t1.setTurtle(move,dir);
	t1.printTurtle();
}
