//print table of given number
#include<stdio.h>
void table(int);
void main()
{
	int no;
	printf("Enter no you want table of:");
	scanf("%d",&no);
	table(no);
			
}
void table(int no)
{
	int i=1, tab;
	
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