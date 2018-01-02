#include <stdio.h>

int Next_multiple(int x, int y);

int main(void)
{
	int first, second, third, fourth;
	
	first = Next_multiple(256, 7);
	second = Next_multiple(365, 7);
	third = Next_multiple(12258, 23);
	fourth = Next_multiple(996, 4);

	printf("The next multiple of 7 greater than 256 is %d\n", first);
	printf("The next multiple of 7 greater than 365 is %d\n", second);
	printf("The next multiple of 23 greater than 12,258 is %d\n", third);
	printf("The next multiple of 4 greater than 996 is %d\n", fourth);

	return 0;
} 	
	
	int Next_multiple(int x, int y)
		{
		    return x + y - (x % y);
		}
			
