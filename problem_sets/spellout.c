#include <stdio.h>
//program to print out numbers in words

int main (void)
{
	//string array
	char *arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	
	int x = 0;
	int y = 0;
	int z = 0;
	
	printf("input your number: ");
	
	scanf("%i %i %i", &x, &y, &z);
	
	printf ("%s %s %s\n", arr[x], arr[y], arr[z]);
	
	
	return 0;

}
