
/*		**********
	Program 10.3 Programming in C
		Concatenation Function	
		   *****	*/

#include <stdio.h>

int main (void)
{
	/*  The following function points out that a char array can be initialized using double quotes...
			...and without the need for single quotes around each member of the array....
				...a null '\0' character will be added automatically ...
				...to the end of character arrays initialized in this way...  */
	void concat (char result[], const char str1[], const char str2[]);
	const char s1[] = { "Test "};
	const char s2[] = { "works." };
	char s3[20];

	concat (s3, s1, s2);

	printf ("%s\n", s3);

		return 0;
}

	void concat (char result[], const char str1[], const char str2[])
	{
		int i, j;

		for ( i = 0; str1[i] != '\0'; i++ )
		{
			result[i] = str1[i];
		}

		for ( j = 0; str2[j] != '\0'; j++ )
		{
			result[i + j] = str2[j];
		} 

		/* adding the null char '\0' to the end of the concatenated result[]...
			...allows the %s (format characters) in the calling function to recognize
			  ...the end of the character string despite the actual length of the array...
			  ...which was initialzed as... char s3[20]  ...to allow more than adequate space....*/

		result[i + j] = '\0';

	}
