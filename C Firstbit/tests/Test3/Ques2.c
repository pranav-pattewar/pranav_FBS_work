// question 2 - print sum of alternate numbers form given range 
#include<stdio.h>
void main()
{
	int start,end;
	int sum=0;
	printf("Enter range i.e. start and end: ");
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i+=2)
	{
		sum=sum+i;
	}
	printf("Sum of alternate numbers in range is: %d",sum);
}