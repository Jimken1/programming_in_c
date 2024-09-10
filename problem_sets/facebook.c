#include <stdio.h>

//program to find values in an array that sum to a certain digit k

int main (void)
{
	
	int k;
	
	int arr[5] = {1, 2, 3, 4, 5};
	
	printf("input the sum of the digits ");
	
	scanf("%i", &k);
	
		
	for (int x = 0; x < 5; x++)
	
	for (int y = 0; y < 5; y++)
	
	for (int z = 0; z < 5; z++)
	
	if (arr[x] + arr[y] + arr[z] == k){
	
		printf("%i + %i + %i\n", arr[x], arr[y], arr[z]);
	}
	
	else 
	 	printf("no matches found\n");
	 	
	return 0;

}
