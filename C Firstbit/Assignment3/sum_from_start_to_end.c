//sum of numbers from start to end
#include<stdio.h>
void main()
{
	int start=1,end=5,sum=0;
	while( start<= end )
	{
		sum= sum+start;
		start++;
	}
	printf("Sum of numbers from start to end is %d",sum);
}
