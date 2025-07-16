//que 4- find even and odd numbers in array
#include<stdio.h>
void main()
{
	int arr[8];
	int err[8];
	int orr[8];
	printf("Enter 8 numbers in array:");
	for(int i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nNumbers in array:");
	for(int i=0;i<8;i++)
	{
		printf(" %d",arr[i]);
	}
	
	//logic for even 
	printf("\nEven numbers in array are:");
	for(int i=0;i<8;i++)
	{
		if((arr[i])%2==0)
		{
			printf(" %d",arr[i]);
		}
	}
	//logic for odd 
	printf("\nOdd numbers in array are:");
	for(int i=0;i<8;i++)
	{
		if((arr[i])%2!=0)
		{
			printf(" %d",arr[i]);
		}
	}
}