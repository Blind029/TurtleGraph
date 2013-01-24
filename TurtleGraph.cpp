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
	//create user input for pen up vs pen down
	//if pen up, move the turtle but don't change the values from 0 to 1
	//if direction=0 moving in one direction, and column stays constant
	if (dir==0)
	{
		row+=move;//add the number of moves to the row
		for(int i=row;i<row+move;i++)
			turtle[column][i]=1;
	}
	//if direction=1 row stays constant
	else
	{
		column+=move;//add the number of moves to the column
		for(int i=column;i<column+move;i++)
			turtle[i][row]=1;
	}
}
void TurtleGraph::printTurtle()
{
	//go through each row and column and print based on current value of the array
	for (int i=0;i<20;i++)
		for(int j=0;j<20;j++)
		{
			if(turtle[j][i]==1)
				cout<<"*";
			else
				cout<<"_";
		}
		cout<<endl;//next line whenever finishing a row
}
