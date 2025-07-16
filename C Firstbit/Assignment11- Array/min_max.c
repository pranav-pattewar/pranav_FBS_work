//que1- find maximum and minimun number in array 
#include<stdio.h>
void main()
{
	int arr[10]; //array of size 10
	printf("Enter 10 numbers in array:");
	//loop for scanning 
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	//loop for printing 
	printf("\nNumbers in array are:");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	//find max 
	int max= arr[0];
	int min= arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nMaximum number in array is: %d",max);
	//find min
	for (int i=0;i<10;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nMinimun number in the array is: %d",min);
}