#include <stdio.h>
//program on pointers
int main (void)
{

	int count = 10;
	int *int_pointer;
	
	int_pointer = &count;
	int x = *int_pointer;
	printf ("count = %i, x = %i\n", count, x);
	return 0;
}
