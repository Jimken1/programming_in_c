#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char *compquiz2(){
	char * comp_arr[10] = {"1. who is regarded as the father of computer? ", "2. what is the  name of base 16? ", "3. what is the name of base 2? ", "4. what is the name of base 8? ", "5. convert 10 to binary ", "6. which part of computer is an input device a.speaker b.printer c.mouse d.monitor  ", "7. convert 101 to base 10 ", "8. the monitor is an ___ a.input device b.output device c.all of the above d.none of the above", "9. which of these persons is not a computer professional a.computer scientists b.database manager c.network manager d.plumber", "10. which of these is used to collect audio input __ a.microphone b.keyboard c.speaker d.gamepad"};
	char *comp_ans[10] = {"charles babbage", "hexadecimal", "binary", "octadecimal", "10", "c", "101", "b", "d", "a"};
		
		for (int e = 0; e <10; ++e){
	
		printf("%s", comp_arr[e]);
		char *o = malloc(30 * sizeof(char));
		
		scanf("%s", o);
		float l = strcmp(o, comp_ans[e]);
		if (l == 0){
		
			printf("correct\n");
			score+=10;
			printf("score = %i\n", score);
		}
		
		else{
			printf("wrong, try again\n");
			printf("%s", comp_arr[e]);
			
			char *q = malloc(30 * sizeof(char));
			scanf("%s", q);
			int y = strcmp(q, comp_ans[e]);
			if(y == 0){
			
				printf("correct\n");
				score+=5;
				printf("score = %i\n", score);
			}
			else{
			
				printf("wrong\n");
				printf("score = %i\n", score);
				}
			
			}
			
		}
	}
