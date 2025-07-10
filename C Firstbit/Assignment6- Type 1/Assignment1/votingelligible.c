//check if age is elegible for voting or not 
#include<stdio.h>
void checkVotingEligiblity();
void main()
{
	checkVotingEligiblity();
}
void checkVotingEligiblity()
{
	int age;
	printf("Enter your age to check elligiblity for voting: ");
	scanf("%d",&age);
	if(age>= 18){
		printf("you are elligible for voting");
	}
	else{ printf("not elligible for voting");
	}
}
