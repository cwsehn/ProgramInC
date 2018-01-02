/*		**********
	Exercise 8 Chapter 8 Programming in C
		Quadradic Equation Function
		   *****	*/
#include <stdio.h>

int main (void)
{
	float a, b, c;
	void quadFormula(float a, float b, float c);
	char BadInput;


	printf ("\t\t\nQuadratic Equation Solver\n");
		printf("\t\t\n y = ax^2 + bx + c is called a Quadradic Equation....it creates a parabola...\n");
		printf("\t\t\n When y = 0...the parabola intersects the x-axis, these are the 'roots' of the equation...\n");
		printf("\t\t\n The value of b^2 - 4ac is called the 'the discriminant' \n");
		printf("\t\t\n If b^2 - 4ac < 0 the 'roots' are imaginary numbers....the parabola never intersects the x-axis\n");


		printf ("\nEnter floating point values for a, b and c\n ");

		do 
		{
			printf ("\na = ");
			if (scanf("%f%c", &a, &BadInput) != 2 || BadInput != '\n')
			{
				printf("Input must be a floating point value.....ReStart Program\n");
				break;
			}
			printf ("\nb = ");
			if (scanf("%f%c", &b, &BadInput) != 2 || BadInput != '\n')
			{
				printf("Input must be a floating point value.....ReStart Program\n");
				break;
			}
			printf ("\nc = ");
			if (scanf("%f%c", &c, &BadInput) != 2 || BadInput != '\n')
			{
				printf("Input must be a floating point value.....ReStart Program\n");
				break;
			}
			if (a == 0)
			{
				printf("When a = 0, we have line....not a parabola...");
			}

		}
		//  not sure this is the proper condition....it works for now...
		while (!a);

		if (c == 0)
		{
			printf("\nWhen c = 0, one of the roots will be zero... \n\n");
		}
		quadFormula(a, b, c);




			return 0;
}



	void quadFormula(float a, float b, float c)
	{
		float discriminant, rootx1, rootx2;
		float squareRoot(float x);


		discriminant = (b * b) - (4 * a * c);

		if (discriminant < 0)
		{
			printf("The roots of this equation are imaginary numbers...\n");
		}
		else
		{
			rootx1 = ((-b + squareRoot(discriminant))/ (2 * a));

			rootx2 = ((-b - squareRoot(discriminant))/ (2 * a));
		}

		printf ("root1 is %f\n", rootx1);
		printf ("root2 is %f\n", rootx2);

			

	}


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
	   			reduced by output of float and final printf.... */
	    	long double guess = 1.0;
	    	float absoluteValue(float x);

	    	if (x < 0)
	    		{
	    			printf ("Negative argument to squareRoot\n");
	    			return -1;
	    		}
	    	/*  In this version of the function a ratio between guess^2/x : 1
	    	    is employed...rather than the difference of the values...
	    	    The result is finer precision for very large or very small inputs of x. */
	        while (absoluteValue((guess * guess / x) - 1) >= 0.0001)
	        {
				guess = (((x / guess) + guess) / 2);
				//printf ("guess is : %Lf\n", guess);
	        }
	        	
	
	            return guess;
	    }

	
