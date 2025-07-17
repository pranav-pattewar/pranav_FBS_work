// que 1- WAP to print factors of a number in range 
#include<stdio.h>
void main()
{
	int start,end;
	printf("Enter start and end of a range");
	scanf("%d",&start);
	scanf("%d",&end);
	for(int i=start;i<=end;i++)
	{
		printf("%d:",i);
		for(int j=1;j<=end;j++)
		{
			if(i%j==0)
			{
				printf("%d ,",j);
			}
		}
		printf("\n");
	}
}