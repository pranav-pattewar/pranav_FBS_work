//check if age is elegible for voting or not 

#include<stdio.h>

int checkVotingEligibility();
void main()
{
	if(checkVotingEligibility())
		printf("You are eligible for voting");
	else
		printf("Not eligible for voting");
}

int checkVotingEligibility()
{
	int age;
	printf("Enter your age to check eligibility for voting: ");
	scanf("%d", &age);
	return (age >= 18);
}
