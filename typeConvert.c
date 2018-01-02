/*		**********	
	chapter 14, exercise 3 Programming in C
		data type conversion....
			*****	*/

#include <stdio.h>

int main (void)
{
	float     f = 1.00;
   	short int i = 100;
   	long int  l = 500L;
   	double    d = 15.00;


   	printf ("\t\nThe Rules of Conversion\n");

   	/* whenever different data types reside on either side of an operator
   		the data type of the least precision is converted to match the type
   		of the operand of greater precision....and the result is given in 
   		the type of greater precision....thus int becomes float....
   		float becomes double...
   		order of priority / precision
   				long double
   				double
   				float
   				long long int
   				long int
   				int
   				....operands of type _Bool, enum data, char, short int...
   				and bit field are converted to type int to begin with...  
   				*/

   	/*  ...remember the above results are not readily seen by printf since
   		the nature of the printf function requires the data format to be
   		specified.....   */

   	printf("%f + %i = %f\n", f, i, (f + i));
   	printf("%li / %f = %f\n", l, d, (l / d));


   		return 0;
}