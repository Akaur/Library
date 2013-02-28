# include <iostream>
# include <cstring>

using namespace std ;

class library 						 
{

	protected :

		double xStart, yStart, xEnd, yEnd, radius ; 	
		string writeHeaderFile, writeEntityFile, writeFooterFile ;

	public :

		library ( ) ;
		void set (double, double, double, double ) ;
		void set ( double, double, double ) ;		

};


class line : public library
{

	public :

		line ( ) ;
		void set ( double, double, double, double ) ;
		void draw ( ) ;

};    						


class circle : public library
{

	public :

		circle ( ) ;
		void set ( double, double, double ) ;
		void draw ( ) ;


};
