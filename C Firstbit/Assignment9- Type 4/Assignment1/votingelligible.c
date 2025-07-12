//check if age is elegible for voting or not 
#include<stdio.h>
int votingEligiblity(int);
void main()
{
	int age;
	printf("Enter your age to check elligiblity for voting: ");
	scanf("%d",&age);
	votingEligiblity(age);
	if(votingEligiblity(age)==1)
	{
		printf("you are elligible for voting");
	}
	else
	{ 
		printf("not elligible for voting");
	}
}
int votingEligiblity(int age)
{
	return (age>= 18);
}
