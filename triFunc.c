/*		**********
	Program 8.4 Programming in C
	Triangular Number function
		   *****	*/
#include <stdio.h>

int main (void)
{
	void calculateTriangularNumber(int n);

	calculateTriangularNumber(10);
	calculateTriangularNumber(20);
	calculateTriangularNumber(90);

		return 0;
}



	void calculateTriangularNumber(int n)
	{
	    int i, triNum = 0;
	    
	    
	    for (i = 1; i <= n; i++)
	    {
	        triNum += i;
	    }
	    
	    printf ("Triangular number %i is %i\n", n, triNum);
	
		return;
	}


