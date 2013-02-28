// First read UserGuide to understand this program.

# include <iostream>
# include <stdlib.h>
# include "lc.h"

using namespace std ;

	int main ()
	{

		line l ;
		l.set ( 10, 15, 20, 25 ) ;
		l.draw () ;
		circle c ;
		c.set ( 10, 20, 5 ) ;
		c.draw () ;
		return 0 ;
	
	}
