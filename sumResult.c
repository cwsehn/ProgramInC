/*		**********
	This Program sums the digits
	of an integer entered by the user....
		   *****		*/

#include <stdio.h>

int main (void)
{
	int input, result;

	printf("Please enter an integer: \n");
	scanf("%i", &input);

	result = 0;	

	do
	{
		result += input % 10;
		input = input / 10;
			
	}
	while (input != 0);

	printf("The final result is %i\n", result);

		return 0;
}
