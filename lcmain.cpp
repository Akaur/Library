# include <iostream>
# include <stdlib.h>
# include "lc.h" 

using namespace std;

	int main()
	{

		line l ;
		int x = 45, y = 23, z = 13, a = 46 ;
		l.set ( x, y, z, a ) ;
		l.draw () ;
		circle c ;
		c.set ( 0, 0, 0 ) ;
		c.draw () ;
		return 0 ;
	
	}
