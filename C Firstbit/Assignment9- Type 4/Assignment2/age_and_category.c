//Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
int findAgeCategory(int);
void main()
{
	int age=0;
	printf("Enter your age:");
	scanf("%d",&age);
	findAgeCategory(age );
	if( findAgeCategory(age )==1 )
	printf("Age entered is invalid");
	else if(findAgeCategory(age )==2)
	printf("You are child");
	else if ( findAgeCategory(age )==3 )
	printf("You are teenager");
	else if ( findAgeCategory(age )==4 )
	printf("You are adult");
	else
	printf("You are senior citizen");	
}
int findAgeCategory(int age )
{
	if( age<=0 )
	return 1;
	else if(age<12 && age>0)
	return 2;
	else if ( age>=12 && age<=19 )
	return 3;
	else if ( age>=20 && age<=59 )
	return 4;
	else
	return 5;
}