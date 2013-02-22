// First read UserGuide to understand this program.

#include<iostream>
#include<stdlib.h>
#include"lc.h"

using namespace std;

int main()
{
	int x1=10,y1=20,x2=30,y2=40;
	int radius=15;	
	line l;
	l.set(x1,y1,x2,y2);
	l.draw();
	circle c;
	c.set(x1,y1,radius);
	c.draw();
	return 0;
}
