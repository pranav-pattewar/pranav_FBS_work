//print 1 to 10 using while loop
#include<stdio.h>
void print1toN(int*);
void main()
{
	int n;
	printf("Enter upper limit");
	scanf("%d",&n);
	print1toN(&n);
}
void print1toN(int* n)
{
	int i=1;
	/*while(i<=10)
	{
		printf(" %d",i);
		i++;
	}*/
	for(i=1;i<=*n;i++)
	{
		printf(" %d",i);
	}
}