#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Mathsquiz2(){
	char *arr[10] = {"1. 1 + 1 is ", "2. the square root of four is ", "3. the square of ten is ", "4. what is the product of 50 and 7: ", "5. How many prime numbers are there from one to ten: ", "6. the result when 64 is divided by 8 is ", "7. find the result of 6(20*3): ", "8. divide 100 into four parts then multiply by three: ", "9. if 10 people were to share 25,000 how much will each person get? ", "10. when a certain number is added to twelve the result is four times the original number, what is the number? "};
	char * ans[10] = {"2", "2", "100", "350", "4", "8", "360", "75", "2500", "16"};
	
	
	for (int i = 0; i <10; ++i){
	
		printf("%s", arr[i]);
		char *f;
		scanf("%s", f);
		float x = strcmp(f, ans[i]);
		if (x == 0){
		
			printf("correct\n");
			score+=10;
			printf("score = %i\n", score);
		}
		
		else{
			printf("wrong, try again\n");
			printf("%s", arr[1]);
			char *r;
			scanf("%s", r);
			int y = strcmp(r, ans[1]);
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
