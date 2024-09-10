//program toreturn pointer from a function
#include <stdio.h>

struct entry {
	
	int value;
	struct entry  *next;
};

struct entry *findEntry(struct entry  *listptr, int match){

	while(listptr != (struct entry *) 0 )
	
	if (listptr->value == match)
	return(listptr);
	
	else
	listptr == listptr->next;
	
	return (struct entry *) 0;
}

int main (void)
{

	struct entry *findEntry(struct entry  *listptr, int match);
	struct entry n1, n2, n3;
	struct entry *listptr, *liststart = &n1;
	
	
	int search;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = 0;
	
	printf("choose value to find\n");
	scanf("%i\n", &search);
	
	listptr = findEntry (liststart, search);
	
	if (liststart != (struct entry *) 0 )
	printf("found %i", listptr->value);
	
	else 
	printf("not found\n");
	
	return 0;
}
