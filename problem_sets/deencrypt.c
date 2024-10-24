#include <stdio.h>
#include<stdlib.h>


void deencrypt(FILE *in, FILE *out){
	char c;
	while ((c=fgetc(in))!=EOF){
	
		c = c-2;
		fputc(c, out);
	
	}
	
			
}




int main ()
{	
	
	FILE *infile = fopen("new_complete_computers", "r");
	FILE *outfile = fopen("complete_computers", "w");
	deencrypt(infile, outfile);
	FILE *ans = fopen("complete_computers", "r");
	char g;
	
	printf("new_complete_computers successfully deencrypted😁️\n");
	/*while ((g = fgetc(ans)) != EOF)
		printf("%c", g);
	printf("\n");

	fclose(ans);*/
	
	return 0;
}
