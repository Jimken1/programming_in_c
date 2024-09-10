#include <stdio.h>

int main(void)
{
 
	struct date
	{
		int month;
		int day;
		int year;
	
	};
	struct date james, *dateptr;
	
	dateptr = &james;
	
	(*dateptr).day = 5;
	dateptr->month = 9;
	dateptr->year = 2024;
	
	printf("Today's date is %.2i/%.2i/%.2i\n", dateptr->day, dateptr->month, dateptr->year);
	return 0;

}



