#include "stdafx.h"

class TurtleGraph{

public:
  TurtleGraph();//build array at default 0 for each location, and default row=0 and column=0
	void setTurtle(int set,int dir);//initialize the array based on movement of turtle
	void printTurtle();
private:
	int turtle[20][20];//20x20 array
	int row;//stores current row for your turtle
	int column;//stores current column for your turtle
};
