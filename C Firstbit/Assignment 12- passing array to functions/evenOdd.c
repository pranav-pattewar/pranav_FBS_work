//find even and odd numbers in array using functions
#include<stdio.h>

void printEvenNumbers(int arr[], int size);
void printOddNumbers(int arr[], int size);

void main()
{
	int arr[8];
	int size = 8;

	printf("Enter %d numbers in array:", size);
	for(int i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\nNumbers in array:");
	for(int i=0; i<size; i++)
	{
		printf(" %d", arr[i]);
	}

	printEvenNumbers(arr, size);
	printOddNumbers(arr, size);
}

void printEvenNumbers(int arr[], int size)
{
	printf("\nEven numbers in array are:");
	for(int i=0; i<size; i++)
	{
		if((arr[i]) % 2 == 0)
		{
			printf(" %d", arr[i]);
		}
	}
}

void printOddNumbers(int arr[], int size)
{
	printf("\nOdd numbers in array are:");
	for(int i=0; i<size; i++)
	{
		if((arr[i]) % 2 != 0)
		{
			printf(" %d", arr[i]);
		}
	}
}
