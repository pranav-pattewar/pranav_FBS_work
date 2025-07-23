// print only prime numbers in array using functions
#include<stdio.h>

int isPrime(int n);
void printPrimeNumbers(int arr[], int size);

void main()
{
	int arr[10];
	int size = 10;

	printf("Enter %d numbers in array:", size);
	for(int i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\nNumbers in array are:");
	for(int i=0; i<size; i++)
	{
		printf(" %d", arr[i]);
	}

	printPrimeNumbers(arr, size);
}

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void printPrimeNumbers(int arr[], int size)
{
    printf("\nPrime Numbers in array are:");
    for(int i = 0; i < size; i++)
    {
        if(isPrime(arr[i]))
        {
            printf(" %d", arr[i]);
        }
    }
}
