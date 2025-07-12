//check if number is even or odd
#include<stdio.h>
int checkEvenOdd(int);
void main()
{
	int no;
	printf("Enter any number to check if even or odd: ");
	scanf("%d",&no);
	checkEvenOdd(no);
	if(checkEvenOdd(no))
	{
		printf("no is even");
	}
	else
	{
		printf("no is odd");
	}
}
int checkEvenOdd(int no)
{
	return (no%2==0);
}
