/*		**********
	Program 13.1 Programming in C
		#define statements
		   *****	*/

#include <stdio.h>

#define YES 1
#define NO 0

int main (void)
{
	int isEven (int number);

	if (isEven (17) == YES)
		printf ("yes ");
	else 
		printf ("no ");

	if (isEven (20) == YES)
		printf ("yes\n");
	else 
		printf ("no\n");

		return 0;

}

	// function to determine if an integer is even

	int isEven (int number)
	{
		int answer;

		if (number % 2 == 0)
			answer = YES;
		else
			answer = NO;

			return answer;
	}
	
