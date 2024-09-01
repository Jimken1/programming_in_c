//program to reverse numbers

#include <stdio.h>

int main (void)
{

	int number, right_digit;
	
	number = 12345;
	
	do {
		right_digit = number%10;
		printf("%i", right_digit);
		number = number / 10;
		
	}while (number != 0);
	
	printf("\n");



}
