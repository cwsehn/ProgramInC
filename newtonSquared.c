/*		**********
	Program 8.8 Programming in C
		Newton-Raphson Square Root
		   *****	*/
#include <stdio.h>
	
	float absoluteValue(float x)
	    {
		if (x < 0)
		    x = -x;
	    
		return x;
	    }

	float squareRoot(float x)
	   {
	    	/*  a long double guess variable seems to be the secret to 
	   			allowing for large floats as function input since it needs 
	   			to be able to square itself in the formula....Precision is then 
	   			reduced by outpuf of float and final printf.... */
	    	long double guess = 1.0;
	    	const float epsilon = 0.00001;

	    	if (x < 0)
	    		{
	    			printf ("Negative argument to squareRoot\n");
	    			return -1;
	    		}
	    
	        while (absoluteValue(guess * guess - x) >= epsilon)
	        {
				guess = (((x / guess) + guess) / 2);
	        }
	        	
	
	            return guess;
	    }

int main (void)
{
	float entry = 1, result;
	char badInput;
	
	printf ("\n\t\tNewton-Raphson Square Root Algorithm\n");

	do 
	{
	    printf ("Enter a positive floating point value: ");
	
	    if (scanf("%f%c", &entry, &badInput) != 2 || badInput != '\n')
		{
		    printf ("I can't get the square root of that...you will have to restart the program...\n");
		    entry = 1;
		    break;
		}
	
	    if (entry == 0)
		{
		    printf ("....c'mon maaaan....Zero is not positive....and you know this...try again...\n"); 
		}

	    if (entry < 0)
		{
		    printf ("Newton and Raphson won't be dealing with any imaginary numbers today....\n");
		}	
	}
	while (entry <= 0);

	result = squareRoot(entry);
	printf ("The Square Root of %.6f is %f\n", entry, result); 
	

		return 0;
}	
