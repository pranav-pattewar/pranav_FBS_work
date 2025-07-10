//print table of given number
#include<stdio.h>
void table();
void main()
{
	table();
			
}
void table()
{
	int no, i=1, tab;
	printf("Enter no you want table of:");
	scanf("%d",&no);
	printf("Table of %d is:\n",no);
	/*while( i<= 10 )
	{
		tab=no*i;
		printf("\n %d",tab);
		i++;
		}*/
	for(i=1;i<=10;i++)
	{
		tab=no*i;
		printf("\n%d",tab);
	}
}