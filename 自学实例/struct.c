#include <stdio.h>

struct date{
	int year;
	int month;
	int day;
};

int main(int argc, char const *argv[])
{
	struct date today = { 2021, 3, 8 };
	struct date thisMonth = { .month=3, .year=2021 };
	
//	today.year = 2021;
//	today.month = 3;
//	today.day = 8;
	struct date *pDate = &today;
	
	printf("Address of today is %p.\n", pDate);
	
	printf("Today's date is %i-%i-%i.\n", today.year, 
					today.month, today.day);
	
	printf("This month is %i-%i-%i.\n", thisMonth.year, 
					thisMonth.month, thisMonth.day);
	
	return 0;
} 
