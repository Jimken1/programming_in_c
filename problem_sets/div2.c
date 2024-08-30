#include <stdio.h>

/*
	Author: Andrew
	Date created :30-8-2024
	Date last edited : 30-8-2024
	Program aim : to divide two numbers
*/

void main(void)
{

	float div_two(int num1, int num2);
	
	//numerator
	int num1 = 68;
	
	//denominator
	int num2 = 17;
	
	float result = div_two(num1, num2);
	
	printf("The Answer of %d divided by %d = %f\n", num1, num2, result);

}

//function to divide two numbers
float div_two (int num1, int num2)
{

	float result = num1/num2; 
	
	return result;
}
