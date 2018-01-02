/*		**********
	Exersice 6 chapter 7 Programming in C
		Fibonacci sans array
		  *****		*/
#include <stdio.h>

int main (void)
{
	int quantity, i;
	unsigned long long int fibNum1, fibNum2, newFib;
	char badInput;	
	do
	{   printf ("\n\nThe first two numbers of the Fibonacci sequence are 0 and 1 by definition.\n");
	    printf ("How many more fibonacci numbers would you like to see? (limit 75): \n");
	    
	    if (scanf ("%i%c", &quantity, &badInput) !=2 || badInput != '\n')
	    {    printf ("INTEGERS ONLY PLEASE!.....you'll need to re-start the program...\n");
	         break;
	    }
 	    if (quantity < 1 || quantity > 75)
	    {    
	        printf ("Please limit your input value to an integer between 1 and 75\n");
	    }
   
	}
    	while (quantity < 1 || quantity > 75);
	
	fibNum1 = 0;
	fibNum2 = 1;
	
	printf ("%llu %llu", fibNum1, fibNum2);

	for (i = 1; i <= quantity; i++)
	{
	     newFib = fibNum1 + fibNum2;
	     printf (" %llu", newFib);
	
	     fibNum1 = fibNum2;
	     fibNum2 = newFib;
	}
	printf ("\n");
		return 0;
}
	   

	
