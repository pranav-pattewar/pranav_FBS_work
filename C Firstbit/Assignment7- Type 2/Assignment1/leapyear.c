// check if year is leap or not

#include<stdio.h>

int isLeapYear();

void main()
{
	if(isLeapYear())
		printf("Year is a leap year");
	else
		printf("Year is not a leap year");
}

int isLeapYear()
{
	int year;
	printf("Enter year to check if it is leap or not: ");
	scanf("%d", &year); 
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

