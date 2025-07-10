//print 1 to 10 using while loop
#include<stdio.h>
void print1to10();
void main()
{
	print1to10();
}
void print1to10()
{
	int i=1;
	/*while(i<=10)
	{
		printf(" %d",i);
		i++;
	}*/
	for(i=1;i<=10;i++)
	{
		printf(" %d",i);
	}
}