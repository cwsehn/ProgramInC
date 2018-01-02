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

	float squareRoot(float x, float epsilon)
	   {
	    	/*  a long double guess variable seems to be the secret to 
	   			allowing for large floats as function input since it needs 
	   			to be able to square itself in the formula....Precision is then 
	   			reduced by output of float and final printf.... */
	    	long double guess = 1.0;

	    	if (x < 0)
	    		{
	    			printf ("Negative argument to squareRoot\n");
	    			return -1;
	    		}
	    	/*  In this version of the function a ratio between guess^2/x : 1
	    	    is employed...rather than the difference of the values...
	    	    The result is finer precision for very large or very small inputs of x. */
	        while (absoluteValue((guess * guess / x) - 1) >= epsilon)
	        {
				guess = (((x / guess) + guess) / 2);
				printf ("guess is : %Lf\n", guess);
	        }
	        	
	
	            return guess;
	    }

int main (void)
{
	float entry = 1; 
	float result;
	float epsilon = 1;
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

	do 
	{
		printf ("Enter a positive floating point value less than 1 to represent the Precision of the result...\n");

		if (scanf("%f%c", &epsilon, &badInput) != 2 || badInput != '\n')
		{
			printf ("Your entry needs to be a positive floating point value....RESTART PROGRAM!!\n");
			break;
		}
		if (epsilon <= 0 || epsilon > 1)
		{
			printf ("Your epsilon value must be greater than 0 and less than 1...try again...");
		}
	}
	while (epsilon <= 0 || epsilon > 1);

	result = squareRoot(entry, epsilon);
	printf ("The Square Root of %.6f is %f\n", entry, result); 
	

		return 0;
}	
