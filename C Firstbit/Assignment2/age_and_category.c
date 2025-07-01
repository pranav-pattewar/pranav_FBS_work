//Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
void main()
{
	int age=0;
	printf("Enter your age:");
	scanf("%d",&age);
	if( age<=0 )
	printf("Age entered is invalid");
	else if(age<12 && age>0)
	printf("You are child");
	else if ( age>=12 && age<=19 )
	printf("You are teenager");
	else if ( age>=20 && age<=59 )
	printf("You are adult");
	else
	printf("You are senior citizen");	
}
