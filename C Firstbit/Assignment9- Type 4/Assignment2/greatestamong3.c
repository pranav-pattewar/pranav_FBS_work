// greatest amongst 3 digits
#include<stdio.h>
int findGreatest(int,int,int);
void main(){
	int a,b,c;
	printf("Enter any 3 digits to compare: ");
	scanf("%d%d%d",&a,&b,&c);
	findGreatest(a,b,c);
	if (findGreatest(a,b,c)==1)
		printf("a is greatest");
	else if (findGreatest(a,b,c)==2)
		printf("c is greatest");
	else 
		printf("b is greatest");	
	
}
int findGreatest(int a, int b, int c)
{
	if (a>b)
	{
		if(a>c)
		{
			return 1;	
		}
		else
		{
			return 2;
		}
	}
	else
	{
		if(b>c)
		{
			return 3;
		}
			else
			{
				return 2;
			}
	}
}