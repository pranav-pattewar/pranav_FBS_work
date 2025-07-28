// que 1- WAP to accept array and exchange data of Xth position to Yth position
#include<stdio.h>
void exchangeData(int* ,int ,int );
void main()
{
	int arr[10];
	int x,y;
	printf("Enter 10 elements in an array:");
	for(int i=0; i<10;i++)
		scanf("%d",&arr[i]);
		
	printf("\nArray before exchange:");
	for(int i=0; i<10;i++)
		printf("%d ",arr[i]);
		
	printf("\nEnter position X and Y to exchange data: ");
	scanf("%d%d",&x,&y);
	
	exchangeData(arr,x,y); // call
	printf("\nArray after exchange:");
	for(int i=0; i<10;i++)
		printf("%d ",arr[i]);
		
} //main ends here
void exchangeData(int* arr,int x,int y)
{
	int temp= arr[x-1];
	arr[x-1]=arr[y-1];
	arr[y-1]=temp; 
}