//programvto find the sum of values in an array
#include <stdio.h>

int arraysum (int array [], int const n)
{

	int sum = 0, *ptr;
	int const *arrayend = array + n;
	
	for (ptr = array; ptr < arrayend; ++ptr)
		sum += *ptr;
		
		return (sum);
}

int main (void)
{

	int arraysum (int array [], int const n);
	
	int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
	
	printf ("the sum is %i\n", arraysum(values, 10));
	
	return 0;
}
