#include <stdio.h>

int main (void)
{
	
	int arr[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
	
	for (int row= 0; row < 3; row++){
	
		for (int col = 0; col<5; col++){
		
			arr[row][col] +=3;
			int sum = arr[row][col];
		
		printf("%i", arr[row][col]);
		}
		printf("\n");
	}

	


	return 0;



}
