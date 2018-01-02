/*			**********
		This is program 6.8 from Programming in C
			Evaluating Simple Expressions
			   *****	*/
#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;

	printf ("\n type in a simple mathmatical expression:\n");
	scanf ("%f %c %f", &value1, &operator, &value2);

	if (operator == '+')
	{
		printf ("%.2f\n", value1 + value2);
	}
	else if (operator == '-')
	{
		printf ("%.2f\n", value1 - value2);
	}
	else if (operator == '*')
	{
		printf ("%.2f\n", value1 * value2);
	}
	else if (operator == '/')
	{
		if (value2 == 0)
		{printf ("That expression is UNDEFINED...\n");}
		else
		{printf ("%.2f\n", value1 / value2);}
	}
	else
		printf ("That input was not simple enough...\n");
		
		return 0;
}

		
		
