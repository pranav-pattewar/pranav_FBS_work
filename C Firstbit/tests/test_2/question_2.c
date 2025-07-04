//check number is positive negative or neutral(0)
#include<stdio.h>
void main ()
{
	int no;
	printf("Enter any number to check if +ve,-ve or 0:");
	scanf("%d",&no);
	if(no>0)
	{
		printf("Number %d is positive",no);
	}
	else if(no<0)
	{
		printf("Number %d is negative",no);
	}
	else if(no==0)
	printf("Number %d is neutral(0)",no);
	
}
