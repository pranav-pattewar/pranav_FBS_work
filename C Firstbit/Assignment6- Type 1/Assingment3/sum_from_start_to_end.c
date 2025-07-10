//sum of numbers from start to end
#include<stdio.h>
void sumStoE();
void main()
{
	sumStoE();
}
void sumStoE()
{
	int start=1,end=5,sum=0,a,b;
	printf("Enter start no. and end no.");
	scanf("%d%d",&start,&end);
	
	/*while( start<= end )
	{
		sum= sum+start;
		start++;
	}
	printf("Sum of numbers from start to end is %d",sum);*/
	for(a=start,b=end;a<=b;a++)
	{
		sum=sum+a;
	}
	printf("Sum of numbers from start to end is %d",sum);
}