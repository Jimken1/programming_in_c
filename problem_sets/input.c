
//program to accept input
#include <stdio.h>

int main(void)
{
	int number, guess;
	
	number = 67;
	
	printf("Guess a number");
	scanf("%i", &guess);
	
	if (guess == number)
		printf("correct!\n");
	else	
		printf("wrong!\n");
		


}
