// take marks from user and print the result based on rules

#include<stdio.h>

int getGradeCategory();

void main()
{
	int grade = getGradeCategory();

	if(grade == 1)
		printf("Your result is distinction");
	else if(grade == 2)
		printf("Your result is first class");
	else if(grade == 3)
		printf("Your result is second class");
	else if(grade == 4)
		printf("Your result is pass class");
	else
		printf("Your result is fail");
}

int getGradeCategory()
{
	float marks;
	printf("Enter your marks obtained without %% symbol: ");
	scanf("%f", &marks);

	if(marks >= 75.00)
		return 1;
	else if(marks >= 65.00)
		return 2;
	else if(marks >= 55.00)
		return 3;
	else if(marks >= 40.00)
		return 4;
	else
		return 0;
}
