//This library is named as "lc.h" //for line and circle

#include<iostream>
#include<cstring>

using namespace std;

//base class 
class library 						 
{
	// declaring variables
	protected:
		float point1,point2,point3,point4,radius; 	
		string line3,line1,line2;
	public:
	// declaring functions	
		library();
		void set(float,float,float,float);
		void set(float,float,float);		
};

//derived class 'line' from 'library'
class line:public library
{
	public:
		line();
		void set(float,float,float,float);
		void draw();
};    						

//derived class 'circle' from 'library'
class circle:public library
{
	public:
		circle();
		void set(float,float,float);
		void draw();
};
