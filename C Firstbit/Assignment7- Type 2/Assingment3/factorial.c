// factorial
#include<stdio.h>

int checkFactorial();

void main()
{
	int result = checkFactorial();
	printf("Factorial is %d", result);
}

int checkFactorial()
{
	int no, fact = 1, i = 1;

	printf("Enter a number to find its factorial: ");
	scanf("%d", &no);

	while(i <= no)
	{
		fact = fact * i;
		i++;
	}

	return fact;
}
