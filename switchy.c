/*		**********
	Program 6.9 from Programming in C
		Switch
		   *****	*/

#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;

	printf ("\nEnter a simple mathematical expression.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);

	switch (operator)
	{
		case '+':
			printf ("%.2f\n", value1 + value2);
			break;
		case '-':
			printf ("%.2f\n", value1 - value2);
			break;
		case '*':
			printf ("%.2f\n", value1 * value2);
			break;
		case '/':
			if (value2 == 0)
				printf ("Undefined\n");
			else
				printf ("%.2f\n", value1 / value2);
				break;
		default:
			printf ("That expression is not simple enough...\n");
	}	
			return 0;
}
