//find maximum and minimun number in array using functions
#include<stdio.h>
int findMax(int* , int ); //declaration
int findMin(int* , int ); //declaration 
void main() 
{
    int arr[10];
    int size = 10;

    printf("Enter %d numbers in array: ", size);
    for(int i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("\nNumbers in array are: ");
    for(int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }

    int max = findMax(arr, size); //function call 1
    printf("\nMaximum number in array is: %d", max);

    int min = findMin(arr, size); //function call 2
    printf("\nMinimum number in the array is: %d", min);
} //main ends here 

// Function to find the maximum 
int findMax(int arr[], int size) 
{
    int max = arr[0];
    for(int i = 1; i < size; i++) 
	{
        if(arr[i] > max) 
		{
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum 
int findMin(int arr[], int size) 
{
    int min = arr[0];
    for(int i = 1; i < size; i++) 
	{
        if(arr[i] < min) 
		{
            min = arr[i];
        }
    }
    return min;
}

