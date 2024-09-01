#include <stdio.h>

int main (void)
{
	int i;
	int j;
	int answer;
	
	for (int i = 1; i <=12; ++i){
	
		printf("%i\n", i);
	}
	for (int j = 1; j <=12; ++j){
		printf(" %i ", j);
		printf("\n");
	}
		answer = i * j;
		printf("%i x %i = %i", i, j, answer);
		

	printf ("\n");


}
