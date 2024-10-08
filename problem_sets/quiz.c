#include <stdio.h>
#include <string.h>
int score = 0;


#include "mathquiz.h"
#include "compquiz.h"
	


int menu(){

	printf("welcome to game quiz, please select your quiz\n");
	
	printf("Note: each quiz contains ten questions\n");
	
	printf("1.maths quiz\n");
	printf("2.computer science Quiz\n");
	printf("3.CRS Quiz\n");
	printf("4.Politics Quiz\n");
	printf("5.Geography Quiz\n");
	printf("0.Quit\n");
	printf("\n");
	int i;
	printf("select your quiz: ");
	scanf("%i", &i);
	
	switch (i)
	{
		case 1 :
			Mathsquiz();
			int t;
			printf("would you like to try again(1/0) ");
			scanf("%i", &t);
			switch (t)
				{
				
					case 1: 
						menu();
					break;
					
					case 0 :
						printf("quitting thank you😁️");
					break;
					
					default :
						printf("invalid input program terminated exiting thank you\n");
					break;	
					
				}
			
			printf("\n");
			
			break;
		
		case 2 :
			compquiz();
			break;
		
		case 3 :
		
			break;
		
		case 4 :
		
			break;
		
		case 5 :
		
			break;
		
		case 0 :
		
			printf("Quitting, thank you😁️\n");
			break;
		default :
			printf("invalid input\n");
			}
		


}

int main (void)

{
	menu();
	return 0;
}


