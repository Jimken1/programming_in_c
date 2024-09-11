#include <string.h>
#include <stdio.h>
int main(void)
{

	struct date
	{
		string month;
		string day;
		string year;
	
	};
	struct date james, *dateptr;
	
	dateptr = &james;
	
	(*dateptr).day = "thursday";
	dateptr->month = "september";
	dateptr->year = "teew";
	
	printf("Today's date is %s/%s/%s\n", dateptr->day, dateptr->month, dateptr->year);
	return 0;

}

