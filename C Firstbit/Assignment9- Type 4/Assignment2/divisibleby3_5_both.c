//check if number is divisible by 3,5 or both 
#include<stdio.h>
int checkDivisiblity(int);
void main()
{
	int no=0;
	printf("Enter any number:");
	scanf("%d",&no);
	checkDivisiblity(no);
	if(checkDivisiblity(no)==1)
	{
		printf("Number is divisible by 3 but not by 5");
	}
	else if ( checkDivisiblity(no)==2)
	{
		printf("Number is divisible by 5 but not by 3");
	}
	else if (checkDivisiblity(no)==3)
	{
		printf("Number is divisible by both 3 and 5");
	}
	else 
	{
		printf("Number is not divisible by both 3 and 5");
	}
}
int checkDivisiblity(int no)
{
	if(no%3 == 0 && no%5 != 0)
	{
		return 1;
	}
	else if ( no%5==0 && no% 3!= 0)
	{
		return 2;
	}
	else if (no%5==0 && no%3 ==0)
	{
		return 3;
	}
	else 
	{
		return 4;
	}
}
