// greatest amongst 3 digits
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter any 3 digits to compare: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if(a>c)
		{
			printf("a is greatest");	
		}
		else
		{
			printf("c is greatest");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greatest");
		}
			else
			{
				printf("c is greatest");
			}
	}

}
