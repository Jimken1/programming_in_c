#include <stdio.h>


int main(){
	
	char *s = "jqwug";
	
	while(*s != \0'){
	
		printf("%c", *s - 2);
		s++;
	
	}

	printf("\n");
	
	return 0;
}
