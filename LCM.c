/*		*********
	Exercise 9 Lesson 8 Programming in C
	 	Least Common Multiple
		     ***	*/
#include <stdio.h>

int main (void)

{
	
	int u, v, result;
	int lcm (int u, int v);
	char BadInput;

	printf ("\t\t\nThe Least Common Multiple Function\n\n");
	
	do
	{
	    printf ("First Integer: \n");
	    if (scanf("%i%c", &u, &BadInput) != 2 || BadInput != '\n')
	    {
	        printf ("....your input MUST be a positive integer....RESTART PROGRAM....\n");
	        u = 1; v = 1;
	        break;
	    }
	    printf ("Second Integer: \n");
	    if (scanf("%i%c", &v, &BadInput) != 2 || BadInput != '\n')
            {
                printf ("....your input MUST be a positive integer....RESTART PROGRAM....\n");
                u = 1; v = 1;
                break;
            }
	    if (u < 1 || v < 1)
	    {
		printf("Both entries must be positive integers ...try again...\n");	
	    } 
	}
	while ((u < 1) || (v < 1));

	
	result = lcm(u, v);
	
	printf ("The Least Common Multiple of %i and %i is %i: \n", u, v, result);

		return 0;
}

	
	int lcm (int u, int v)	
	{
		int gcd (int u, int v);
		int LCM;

		LCM = ( (u * v) / gcd (u, v));

			return LCM;
	}


	int gcd (int u, int v)
	{
		int temp;

		while (v != 0)
		{
		    temp = u % v;
		    u = v;
		    v = temp;
		}	
		
		return u;
	}

		




	


