/*  ***********************

	This is a simple table layout to demonstrate
		two column design with simple mathmatical squares...

					********************************/

#include <stdio.h>

int main (void)
{
	int i;

		printf("\n	Table of Squares\n\n");
		printf("	n		n^2\n");
		printf("  ____________	     ______________\n");

	for (i = 1; i <= 10; i++)
	{
		printf("	%2i		 %i\n", i, i * i);
	}

		return 0;
}	
		 	

 
