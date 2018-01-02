/*  **********
	Appendix B - Programming in C
	Standard C Library
		***	*/

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main (void)
{

	unsigned int bigInt = UINT_MAX;
	unsigned long long int giantInt = ULLONG_MAX;

	float bigFloat = FLT_MAX;
	long double bigDub = LDBL_MAX;

	//printf("This is the maximum size of an unsigned int %u\n", bigInt);
	printf("This is the maximum size of an unsigned long long int %llu\n", giantInt);
	//printf("This is the maximum size of a float %f\n", bigFloat);
	// The following is a true eye-opener.....!!!
	//printf("This is the maximum size of a long double %Lf\n", bigDub);
	//printf("This is the maximum size of a long double %Le\n", bigDub);

	 return 0;

}