// sum of first and last digit of number

#include<stdio.h>

int sumFL();

void main()
{
	int result = sumFL();
	printf("Sum of first and last digit is: %d", result);
}

int sumFL()
{
	int no, first, last;

	printf("Enter any number: ");
	scanf("%d", &no);

	last = no % 10;

	first = no;
	while(first >= 10)
	{
		first = first / 10;
	}

	return first + last;
}
