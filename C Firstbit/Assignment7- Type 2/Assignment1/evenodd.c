//check if number is even or odd
#include<stdio.h>

int isEven();  

void main()
{
	if(isEven())
		printf("Number is even");
	else
		printf("Number is odd");
}

int isEven()
{
	int no;
	printf("Enter any number to check if even or odd: ");
	scanf("%d", &no);
	return (no % 2 == 0);  // returns 1 for even, 0 for odd
}
