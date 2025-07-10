// check if number is prime or not 

#include <stdio.h>

int isPrimeNumber();

void main() 
{
	if(isPrimeNumber())
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
}

int isPrimeNumber()
{
	int num, i;
	int isPrime = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	if (num <= 1) {
		return 0;
	}

	for(i = 2; i <= num / 2; i++) {
		if (num % i == 0)
			return 0;
	}

	return 1;
}
