/*		**********
	exercise 2 - chapter 8 - Programming in C
	Triangular Number function
		   *****	*/
#include <stdio.h>

int num, triNum;


int main (void)
{
	void calculateTriangularNumber(void);
	void getTriangularNumber (void);
	void displayTriangularNumber(void);

	getTriangularNumber();
	calculateTriangularNumber();
	displayTriangularNumber();

		return 0;
}

	void getTriangularNumber (void)
	{

		char badInput;

		do
		{
			printf ("What triangular number would you like? \n");
			if (scanf ("%i%c", &num, &badInput) != 2 || badInput != '\n')
			{
				printf ("POSITIVE INTEGERS ONLY!!!.....RE-START\n");
				break;
			}
			if (num < 1)
			{
				printf ("POSTITIVE INTEGERS ONLY, PLEASE....try again\n");
			}

		}
		while (num < 1);	 

	}

	void calculateTriangularNumber(void)
	{
	    triNum = num*(num+1)/2;
	}


	void displayTriangularNumber(void)
	{
		printf ("number: %i    Triangular number: %i\n", num, triNum);
	}
		

