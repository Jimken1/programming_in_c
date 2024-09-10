#include <stdio.h>
// program to find max among three numbers
int main (void)
{	// first digit
	int a = 24;
	
	//second digit
	int b = 312;
	
	//third digit
	int c = 402;
	
	
	if (a > b && a > c){
		
		printf("the largest number is: %i\n", a);
	}
	
	else if (b > a && b > c){
		
		printf("the largest number is: %i\n", b);
	}
	else if (c > a && c > b){
		
		printf("the largest number is: %i\n", c);
	}
}
