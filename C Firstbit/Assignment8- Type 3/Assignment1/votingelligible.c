//check if age is elegible for voting or not 
#include<stdio.h>
void checkVotingEligiblity(int);
void main()
{
	int age;
	printf("Enter your age to check elligiblity for voting: ");
	scanf("%d",&age);
	checkVotingEligiblity(age);
}
void checkVotingEligiblity(int age)
{
	
	if(age>= 18){
		printf("you are elligible for voting");
	}
	else{ printf("not elligible for voting");
	}
}
