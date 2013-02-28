# include <iostream>
# include <fstream>
# include <cstring>
# include "lc.h"

using namespace std ;

	library :: library ()
	{
		
		xStart = yStart = xEnd = yEnd = radius = 0 ;

	}


	void library :: set ( double x1, double y1, double x2, double y2 )
	{ 

		xStart = x1 ;
		yStart = y1;
		xEnd   = x2 ;
		yEnd   = y2 ;

	}


	void library :: set ( double x1, double y1, double rad )
	{

		xStart = x1 ;
		yStart = y1 ;
		radius = rad ;

	}


	line :: line () : library ()
	{

	}


	void line :: set ( double x1,double y1,double x2,double y2 )
	{

		library	:: set ( x1, y1, x2, y2 ) ;
		ofstream writeLine ( "line.txt" ) ;
		if ( writeLine.is_open () )
		{	

			writeLine << " LINE \n 5 \n 43 \n 100 \n AcDbEntity \n 100 \n AcDbLine \n 8 "
				     " \n 0 \n 62 \n 0 \n 256 \n 370 \n -1 \n 6 \n ByLayer \n 10 \n " 
				     << xStart << " \n 20 \n " << yStart << " \n 30 \n 0.0 \n 11 \n " 
				     << xEnd << " \n 21 \n " << yEnd << " \n 31 \n 0.0 \n 0 " ;
			writeLine.close();

		}

	}


	circle :: circle () : library ()
	{
		
	}


	void circle :: set ( double x1, double y1, double rad )
	{

		library :: set ( x1, y1, rad ) ;
		ofstream writeCircle ( "circle.txt" ) ;
		if ( writeCircle.is_open () )
		{

			writeCircle << " CIRCLE \n 5 \n 43 \n 100 \n AcDbEntity \n 100 \n AcDbCircle  "
				       " \n 8 \n 0 \n 62 \n 256 \n 370 \n -1 \n 6 \n ByLayer \n 10 \n "
				       << xStart << " \n 20 \n " << yStart << " \n 30 \n 0.0 \n 40 \n "
				       << radius << "\n  0 " ;
			writeCircle.close () ;

		}

	}
	

	void line :: draw ()
	{
		
		ifstream readHeader ( "header.txt" ) ;
		ifstream readFooter ( "footer.txt" ) ;
		ifstream readLine ( "line.txt" ) ;
		ofstream writeOutput ( "line.dxf" ) ;
		while ( getline ( readHeader, writeHeaderFile, '\n' ) )
		{

			writeOutput << writeHeaderFile << endl ;

		}
		while ( getline ( readLine, writeEntityFile, '\n' ) )
		{ 

			writeOutput << writeEntityFile << endl ;

		}
		while ( getline ( readFooter, writeFooterFile, '\n' ) )
		{  

			writeOutput << writeFooterFile << endl ;

		}  	
		readHeader.close () ;        
		readLine.close () ;
		readFooter.close () ;
		writeOutput.close () ;

	}


	void circle :: draw ()
	{
		
		ifstream readHeader("header.txt");
		ifstream readFooter("footer.txt");
		ifstream readCircle("circle.txt");
		ofstream writeOutput("circle.dxf");
		while ( getline ( readHeader, writeHeaderFile, '\n' ) )
		{

			writeOutput << writeHeaderFile << endl ;

		}
		while ( getline ( readCircle, writeEntityFile, '\n' ) )
		{ 

			writeOutput << writeEntityFile << endl ;

		}
		while ( getline ( readFooter, writeFooterFile, '\n' ) )
		{  

			writeOutput << writeFooterFile << endl ;

		}  	
		readHeader.close () ;        
		readCircle.close () ;
		readFooter.close () ;
		writeOutput.close () ;
	}



