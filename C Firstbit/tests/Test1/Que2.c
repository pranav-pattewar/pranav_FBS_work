// WAP to check if the year is leap or not 
#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year to check if leap or not: ");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	printf("Year is leap");
	else 
	printf("Year is not leap");
}
