// TurtleGraph.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "TurtleGraph.h"
#include <iostream>
#include <iomanip>
using namespace std;

TurtleGraph::TurtleGraph()
{
  row=0;column=0;
	for (int i=0;i<20;i++)
		for(int j=0;j<20;j++)
			turtle[i][j]=0;
}
void TurtleGraph::setTurtle(int move,int dir)
{
	if (dir==0)
	{
		row+=move;
		for(int i=row;i<row+move;i++)
			turtle[column][i]=1;
	}

	else
	{
		column+=move;
		for(int i=column;i<column+move;i++)
			turtle[i][row]=1;
	}
}
void TurtleGraph::printTurtle()
{
	for (int i=0;i<20;i++)
		for(int j=0;j<20;j++)
		{
			if(turtle[j][i]==1)
				cout<<"*";
			else
				cout<<"_";
		}
		cout<<endl;
}
