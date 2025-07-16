//que 3- find sum of all numbers in array
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter 5 numbers in array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nNumbers in array are:");
	for(int i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	// code to get sum
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nSum of all numbers in array is: %d",sum);
}