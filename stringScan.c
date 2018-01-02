/*		**********
	Program 10.5 Programming in C
		Reading Strings with scanf
		   *****	*/

#include <stdio.h>

int main (void)
{
	char s1[81], s2[81], s3[81];
	
	printf ("Enter text:\n");

	/* using %80s will limit the scanf to 80 characters preventing unwanted glitches...
	 ... should the user enter more chars than allowed by the associated variable...
	 ....specifying one less than the variable calls for....in this case 80...
	 ... allows for scanf to add the null character '\0' to the end of the string ....*/
	scanf ("%80s%s%s", s1, s2, s3);

	printf ("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);

		return 0;
}
