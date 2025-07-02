//print table of given number
#include<stdio.h>
void main()
{
	int no, i=1, tab;
	printf("Enter no you want table of:");
	scanf("%d",&no);
	while( i<= 10 )
	{
		tab=no*i;
		printf("\n %d",tab);
		i++;
		}	
}
