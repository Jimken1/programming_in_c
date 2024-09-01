#include <stdio.h>

//program for the addition subtraction division and multiplication of two numbers

int main (void)
{
	//inputs
	float value1, value2;
	//sign
	char operator;
	float answer;
	
	printf("input your expression.\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	if (operator== '+'){
	
		printf ("%.2f\n", value1 +value2);
	}
	else if (operator == '-'){
		
		printf("%.2f\n", value1 - value2);
	}
	else if (operator == '*'){
	
		printf("%.2f\n", value1 * value2);
	}
	else if (operator == '/'){
	
		printf("%.2f\n", value1 / value2);
	}
	else
		printf("sign or operator unknown");
}
