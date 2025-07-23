//take 2 array and save sum of their elememts in a new array using a function
#include<stdio.h>

void addArrays(int arr1[], int arr2[], int sum[], int size);

void main()
{
	int arr[5];
	int brr[5];
	int sum[5];
	int size = 5;

	printf("Enter %d numbers in array 1:", size);
	for(int i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("\nEnter %d numbers in array 2:", size);
	for(int i = 0; i < size; i++)
	{
        scanf("%d", &brr[i]);
    }

    addArrays(arr, brr, sum, size);

	printf("\nNumbers in array 1:");
	for(int i=0; i<size; i++)
	{
		printf(" %d", arr[i]);
	}

	printf("\nNumbers in array 2:");
	for(int i=0; i<size; i++)
	{
		printf(" %d", brr[i]);
	}

	printf("\nArray of sum of 2 arrays:");
	for(int i=0; i<size; i++)
	{
		printf(" %d", sum[i]);
	}
}

void addArrays(int arr1[], int arr2[], int sum[], int size)
{
    for(int i=0; i<size; i++)
    {
    	sum[i] = arr1[i] + brr[i];
	}
}
