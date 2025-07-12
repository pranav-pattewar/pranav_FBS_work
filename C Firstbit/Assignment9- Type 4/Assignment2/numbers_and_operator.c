//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
void main()
{
	int a,b,res;
	char op;
	printf("Enter two numbers a and b and operator :");
	scanf("%d%d %c",&a,&b,&op);
	if ( op== '+' )
	{
		res= a+b;
		printf("Result is %d",res);
	}
	else if (op== '-')
	{
		res= a-b;
		printf("Result is %d",res);
	}
	else if (op== '/')
	{
		res= a/b;
		printf("Result is %d",res);
	}
	else if (op== '*')
	{
		res= a*b;
		printf("Result is %d",res);
	}
	else if (op== '%')
	{
		res= a%b;
		printf("Result is %d",res);
	}
}
