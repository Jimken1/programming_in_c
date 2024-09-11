#include <stdio.h>

int main(void)
{

	char *arr[] = {"geek", "geeks", "geeksfor"};
	
	printf("string array elementes are :\n");
	
	for (int i = 0; i < 3; i++)
	{
	
		printf("%s\n", arr[i]);
	}
	return 0;
}
