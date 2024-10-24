#include <stdio.h>
#include<stdlib.h>


void encrypt(FILE *in, FILE *out){
	char c;
	while ((c=fgetc(in))!=EOF){
	
		c = c+2;
		fputc(c, out);
	
	}
	
			
}




int main ()
{	
	
	FILE *infile = fopen("complete_computers", "r");
	FILE *outfile = fopen("new_complete_computers", "w");
	encrypt(infile, outfile);
	FILE *ans = fopen("new_complete_computers", "r");
	char g;
	
	printf("complete_computers successfully encrypted😁️\n");
	/*while ((g = fgetc(ans)) != EOF)
		printf("%c", g);
	printf("\n");

	fclose(ans);*/
	
	return 0;
}
