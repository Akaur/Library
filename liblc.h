// This library is used for making line and circle that takes input from user and build linecircle.dxf file.You can open this file in
// Librecad.

#include<iostream>
#include<cstring>

using namespace std;

class library 						 // name of the class
{
	public:
	
		float point1,point2,point3,point4,radius; 	// variables for line and circle
		int style,color,choose; 
		string line,line1,line2;
	public:
		void user();				// function takes input and build .dxf file
		void newline();				//function for line
		void newcircle();			// function for circle
};
