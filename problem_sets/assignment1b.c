#include <stdio.h>
//program on character pointers
char main (void)
{
	char c;
	c = 'Q';
	//pointer to c
	char *char_pointer = &c;
	printf("%c %c\n", c, *char_pointer);
	
	c = '/';
	printf("%c %c\n", c, *char_pointer);
	
	c = '(';
	printf("%c %c\n", c, *char_pointer);
	

}


