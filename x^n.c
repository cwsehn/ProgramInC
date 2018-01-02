/*		**********
	exercise 7 - chapter 8 - Programming in C
		x_to_the_n function
		    ******	*/
#include <stdio.h>

int main (void)
{
	int x, n;
	long int x_to_the_n (int x, int n);
	char BadInput;

	do
	{
	    printf ("Choose an integer for x: \n");
	    if (scanf("%i%c", &x, &BadInput) != 2 || BadInput != '\n')
	    {
	        printf("Your input must be an integer...ReStart...\n");
	        break;
	    }
	    printf ("Choose an integer for your exponent n: \n");	
	    if (scanf("%i%c", &n, &BadInput) != 2 || BadInput != '\n')
	    {
		printf("Your input must be an integer...ReStart...\n");
		break;
	    }
	}
	while (!x && !n);
	
		
	if (n < 0)
	{
		printf ("%d to the %d is 1/%ld\n", x, n, x_to_the_n(x, n));
	}
	else
		printf ("%d to the %d is %ld\n", x, n, x_to_the_n(x, n));

}

	long int x_to_the_n (int x, int n)
	{
	    int i;
	    long int result = 1;
	   
	    if (n == 0)
		{
		    return result;
		}

	    if (n < 0)
		{
		    n = -n;
		}

	    for (i = 0; i < n; i++)
		result *= x;

		return result;

	}
