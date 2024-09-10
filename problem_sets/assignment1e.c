#include <stdio.h>
//function to use structures containing pointers
int main (void)
{
	struct  intptrs
	{
		int *p1;
		int *p2;
			
	};
	
	struct intptrs pointers;
	
	int i1 = 100, i2;
	
	pointers.p1 = &i1;
	pointers.p2 = &i2;
	*pointers.p2 = -97;
	
	
	printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
	printf("i1 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
	return 0;

}
