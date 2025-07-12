// check if year is leap or not
#include<stdio.h>
int checkLeapYear(int);
void main()
{
	int year;
	printf("Enter year to check if it is leap or not: ");
	scanf("%d",&year); 
	checkLeapYear(year);
	if(checkLeapYear(year))
	{
		printf("year is leap year");
	}
	else
	{ 
		printf ("year is not leap year");
	}
}
int checkLeapYear(int year)
{
	return(year%4==0 && year%100!=0 || year%400==0);
}
