/* 		*********
	This is program 6.7 from Programming in C
		characters ...else if...
		   *****	*/
#include <stdio.h>

int main (void)
{
	char c;

	printf ("\nPlease enter a single character:\n");
	scanf ("%c", &c);

	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		{
			printf ("\nAlphabet Soup!\n");
		}
		else if (c >= '0' && c <= '9')
			{
				printf ("\nGot your number...\n");
			}
			else
				{
					printf ("/nThat's Special!!!\n");
				}
		return 0;
}
