#include <string.h>
char *compquiz(){
	char * arr2[10] = {"1. who is regarded as the father of computer? ", "2. what is the  name of base 16? ", "3. what is the name of base 2? ", "4. what is the name of base 8? ", "5. convert 10 to binary ", "6. which part of computer is an input device a.speaker b.printer c.mouse d.monitor  ", "7. convert 101 to base 10 ", "8. the monitor is an ___ a.input device b.output device c.all of the above d.none of the above", "9.which of these is an output device a.mouse b.keyboard c.scanner d.monitor ", "10. which of these is used to collect audio input __ a.microphone b.keyboard c.speaker d.gamepad"};

		
		//first question
		printf("%s", arr2[0]);
		char * v;
		scanf("%s", &v);
		if (v == "charles babbage"){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
		}
				
			
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[0]);
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
		printf("%s", arr2[1]);
		char * c;
		scanf("%s", &c);
		if (c == "hexadecimal"){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[1]);
			char * br;
			scanf("%s", &br);
				if (br == "hexadecimal"){
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
		printf("%s", arr2[2]);
		char *d;
		scanf("%s", &d);
		if (d == "binary"){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[2]);
			char * e;
			scanf("%s", &e);
				if (e == "binary"){
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
		//Fourth question
		printf("%s", arr2[3]);
		char * e;
		scanf("%s", &e);
		if (e == "octadecimal"){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[3]);
			char * e;
			scanf("%s", &e);
				if (e == "octadecimal"){
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
			
			
		//Fifth question
		printf("%s", arr2[4]);
		int f;
		scanf("%i", &f);
		if (f == 1010){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[4]);
			int e;
			scanf("%i", &e);
				if (e == 1010){
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
				
				
		//Sixth question
		printf("%s", arr2[5]);
		char g;
		scanf("%c", &g);
		if (g == 'c'){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[5]);
			char e;
			scanf("%c", &e);
				if (e == 'c'){
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
			
			
				
				
				
		//Seventh question
		printf("%s", arr2[6]);
		int h;
		scanf("%i", &h);
		if (h == 101){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[6]);
			int e;
			scanf("%i", &e);
				if (e == 101){
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
				
				
				
		//Eighth question
		printf("%s", arr2[7]);
		char i;
		scanf("%c", &i);
		if (i == 'b'){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[7]);
			char e;
			scanf("%c", &e);
				if (e == 'b'){
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
				
				
		//Ninth question
		printf("%s", arr2[8]);
		char j;
		scanf("%c", &j);
		if (j == 'd'){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("score = %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[8]);
			char e;
			scanf("%c", &e);
				if (e == 'd'){
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
				
				
				
		//Tenth question
		printf("%s", arr2[9]);
		char k;
		scanf("%i", &k);
		if (k == 'a'){
			printf("correct!!\n");
			score += 10;
			printf ("\n");
			printf("Final score is %i\n", score);
			
				
		}
		else{
			printf("wrong, try again\n");
			printf("%s", arr2[9]);
			char e;
			scanf("%c", &e);
				if (e == 'a'){
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
	return 0;
}
