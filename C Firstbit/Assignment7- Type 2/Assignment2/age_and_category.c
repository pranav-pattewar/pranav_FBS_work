//Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
 
#include<stdio.h>

int getAgeCategory();

void main()
{
	int category = getAgeCategory();

	if(category == -1)
		printf("Age entered is invalid");
	else if(category == 0)
		printf("You are child");
	else if(category == 1)
		printf("You are teenager");
	else if(category == 2)
		printf("You are adult");
	else
		printf("You are senior citizen");
}

int getAgeCategory()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);

	if(age <= 0)
		return -1;
	else if(age < 12)
		return 0;
	else if(age <= 19)
		return 1;
	else if(age <= 59)
		return 2;
	else
		return 3;
}
