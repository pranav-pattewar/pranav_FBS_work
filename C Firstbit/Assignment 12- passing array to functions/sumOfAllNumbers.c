//find sum of all numbers in array using a function
#include<stdio.h>

int calculateSum(int arr[], int size);

void main()
{
	int arr[5];
	int size = 5;

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

	int sum = calculateSum(arr, size);
	printf("\nSum of all numbers in array is: %d", sum);
}

int calculateSum(int arr[], int size)
{
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
