// check if year is leap or not
#include<stdio.h>
void checkLeapYear(int*);
void main()
{
	int year;
	printf("Enter year to check if it is leap or not: ");
	scanf("%d",&year); 
	checkLeapYear(&year);
}
void checkLeapYear(int* year)
{
	if(*year%4==0 && *year%100!=0 || *year%400==0){
		printf("year is leap year");
	}
	else{ printf ("year is not leap year");
	}
}
