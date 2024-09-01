#include <stdio.h>

int main (void)
{	int answer;
	
	printf ("guess a number betweem 1 and 30\n");
	scanf ("%i", &answer);
	
	if (answer== 20){
		printf("correct\n");}
	
	else if (answer == 23){
	
		printf("close\n");}
	
	else 
	printf("wrong\n");

}
