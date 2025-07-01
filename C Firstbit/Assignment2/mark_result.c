// take marks from user and print the result based on rules

#include<stdio.h>
void main()
{
	float marks;
	printf("Enter your marks obtained without %% symbol:");
	scanf("%f",&marks);
	if ( marks>=75.00)
	{
		printf("Your result is distinction");
	}
	else if ( marks>=65.00)
	{
		printf("Your result is first class");
	}
	else if ( marks>=55.00)
	{
		printf("Your result is second class");
	}
	else if ( marks>=40.00)
	{
		printf("Your result is pass class");
	}
	else
	{
		printf("Your result is fail");
	}
}
