#include <string.h>
char *compquiz(){
	char *arr[10] = {"1. who is regarded as the father of computer? ", "2. what is the  name of base 16? ", "3. what is the name of base 2? ", "4. what is the name of base 8? ", "5. convert 10 to binary ", "6. which part of computer is an input device a.speaker b.printer c.mouse d.monitor  ", "7. convert 101 to base 10 "};

		
		//first question
		printf("%s", arr[0]);
		char * v;
		scanf("%s", &v);
		if (v == "charlesbabbage"){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
			}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[0]);
			char *b;
			scanf("%s", &b);
				if (b == "charles babbage"){
					printf("correct!!\n");
					score += 10;
					printf ("\n");
					printf("score = %i\n", score);
					}
				
				else{
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					
					}
				
				
		}
				
		
		//second question
		printf("%s", arr[1]);
		char * c;
		scanf("%s", &c);
		if (c = "charlesbabbage"){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[1]);
			char * br;
			scanf("%s", &br);
				if (br == "charles"){
					printf("correct!!\n");
					score += 10;
					printf ("\n");
					printf("score = %i\n", score);
					
					
				}
								
				else{
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					
				}
					}
		//Third question
		printf("%s", arr[2]);
		int d;
		scanf("%i", &d);
		if (d == 100){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[2]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 100:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					break;
					printf("\n");
					printf("score = %i\n", score);
					}
				}		
				
				
		//Fourth question
		printf("%s", arr[3]);
		int e;
		scanf("%i", &e);
		if (e == 350){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[3]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 350:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					break;
					}
				}		
			
			
		//Fifth question
		printf("%s", arr[4]);
		int f;
		scanf("%i", &f);
		if (f == 4){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[4]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 4:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					break;
					}
				}	
				
				
		//Sixth question
		printf("%s", arr[5]);
		int g;
		scanf("%i", &g);
		if (g == 8){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[5]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 8:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					break;
					}
				}
				
				
				
		//Seventh question
		printf("%s", arr[6]);
		int h;
		scanf("%i", &h);
		if (h == 360){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[6]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 360:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					break;
					}
				}
				
				
				
		//Eighth question
		printf("%s", arr[7]);
		int i;
		scanf("%i", &i);
		if (i == 75){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[7]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 75:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					break;
					}
				}
				
				
		//Ninth question
		printf("%s", arr[8]);
		int j;
		scanf("%i", &j);
		if (j == 2500){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[8]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 2500:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("score = %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("score = %i\n", score);
					break;
					}
				}
				
				
				
		//Tenth question
		printf("%s", arr[9]);
		int k;
		scanf("%i", &k);
		if (k == 4){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("Final score is %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr[9]);
			int e;
			scanf("%i", &e);
				switch (e)
				{
					case 4:
						printf("correct!!\n");
						score += 5;
						printf ("\n");
						printf("Final score is %i\n", score);
					break;
					
					default :
					printf("question failed\n");
					printf("\n");
					printf("Final score is %i\n", score);
					break;
					}
				}
	return 0;																																		
}
