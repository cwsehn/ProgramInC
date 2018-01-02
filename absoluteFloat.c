/*		**********
	Program 8.7 Programming in C
		Absolute Function
		   *****	*/
#include <stdio.h>

	float absoluteFloat(float num)
	{
	    if (num < 0)
		{
		    num = -num;
		}
		
		return num;
	}

int main (void)
{
	float floater = 0;
	char badInput;
	

	printf ("\n\t\tAbsolute Floating Values\n\n");
	
	do
	{
	    printf ("Enter a floating point value: ");

	    if (scanf ("%f%c", &floater, &badInput) != 2 || badInput != '\n')
	        {  
		    printf("I need a floating point value...nothing else...you will need to restart...\n");
		    break;
	        }

	    if (floater == 0)
		{
		    printf("Zero really.....some 'floater' you turn out to be....\n");
		    printf("The Absolute value of Zero is Zero....profound....\n");
		}
	}
	while (floater == 0);

	printf ("The absolute value of %g is %g\n", floater, absoluteFloat(floater));

		return 0;
} 
