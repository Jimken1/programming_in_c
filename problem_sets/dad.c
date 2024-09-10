//program to perform 3^2 * 2^1/2 + 0.5
#include <stdio.h>

float main (void)
{

	int i = 3;
	int j = 2;
	
	int first = i*i;
	
	float x;
	x = 1.142;
	
	float second = first*x;
	char ans;
	float answer = second + 0.5;
	
	printf("the answer to 3^2 * 2^1/2 +0.5 is %f\n", answer);
	printf("\n");
	printf("do you want to see the explanation ?");
	scanf("%c", &ans);
	if (ans == 'y'){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("this is because %i multiplied by %i is %i\n", i, i, first);
	printf("\n");
	printf("and the square root of two is %.4f\n", x);
	printf("\n");
	printf("and %i multiplied by %.4f is equals to %.4f\n", first, x, second);
	printf("\n");
	printf("and finally %.3f plus 0.5 is %.4f\n", second, answer);	
	}
	else if (ans == 'n'){
	printf("the answer is equals to %f\n", answer);
	}
	else 
	printf("not a valid input\n");
	return 0;  
}
