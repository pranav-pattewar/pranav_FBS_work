//check if number is divisible by 3,5 or both 
#include<stdio.h>
void checkDivisibilty(int*);
void main()
{
	int no=0;
	printf("Enter any number:");
	scanf("%d",&no);
	checkDivisibilty(&no);
}
void checkDivisibilty(int* no)
{
	
	if(*no%3 == 0 && *no%5 != 0)
	{
		printf("Number is divisible by 3 but not by 5");
	}
	else if ( *no%5==0 && *no% 3!= 0)
	{
		printf("Number is divisible by 5 but not by 3");
	}
	else if (*no%5==0 && *no%3 ==0)
	{
		printf("Number is divisible by both 3 and 5");
	}
	else 
	{
		printf("Number is not divisible by both 3 and 5");
	}
}