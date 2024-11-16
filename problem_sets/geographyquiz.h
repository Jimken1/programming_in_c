#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char *geoquiz(){
	char * geo_arr[10] = {"1. How many geo-political zones are there in Nigeria ", "2. how many states are there in Nigeria", "3. how many types of rocks are there ", "4. which type of rock is formed from sedimentation ", "5. which type of rock is formed from cooled magma ", "6. how many types of rainfall are there ", "7. people who study rocks are called? ", "8. there are how many continents on earth? ", "9. there are how many local government areas in Nigeria? ", "10. what is Nigeria's official language? "};
	char * geo_ans[10] = {"6", "36", "3", "sedimentary rock", "igneous rock", "3", "geologists", "7", "774", "Pidgin English"};
	
		for (int e = 0; e <10; ++e){
	
			printf("%s", geo_arr[e]);
			char *y = malloc(19 * sizeof(char));
			
			scanf("%s", y);
			float l = strcmp(y, geo_arr[e]);
			if (l == 0){
			
				printf("correct\n");
				score+=10;
				printf("score = %i\n", score);
			}
			
			else{
				printf("wrong, try again\n");
				printf("%s", geo_arr[e]);
				char *q;
				scanf("%s", q);
				int y = strcmp(q, geo_arr[e]);
				if(y == 0){
				
					printf("correct\n");
					score+=5;
					printf("score = %i\n", score);
					}
				else{
				
					printf("wrong\n");
					printf("score = %i", score);
					}
			
			}
			
		}
			
	}
