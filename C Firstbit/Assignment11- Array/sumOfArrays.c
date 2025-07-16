// que 7- take 2 array and save sum of their elememts in a new array
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int sum[5];
	printf("Enter 5 numbers in array 1:");
	for(int i = 0; i < 5; i++)
	{
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter 5 numbers in array 2:");
	for(int i = 0; i < 5; i++)
	{
        scanf("%d", &brr[i]);
    }
    
    for(int i=0;i<5;i++)
    {
    	sum[i]=arr[i]+brr[i];
	}
	printf("\nNumbers in array 1:");
	for(int i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\nNumbers in array 2: ");
	for(int i=0;i<5;i++)
	{
		printf(" %d",brr[i]);
	}
	printf("\nArray of sum of 2 arrays:");+
	
	for(int i=0;i<5;i++)
	{
		printf(" %d",sum[i]);
	}
}