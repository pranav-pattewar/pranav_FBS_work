//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
void performOperations(int*,int*,char*);
void main()
{
	int a,b;
	char op;
	printf("Enter two numbers a and b and operator :");
	scanf("%d%d %c",&a,&b,&op);
	performOperations(&a,&b,&op);
}
void performOperations(int* a,int* b, char* op)
{
	int res;
	if ( *op== '+' )
	{
		res= *a+ *b;
		printf("Result is %d",res);
	}
	else if (*op== '-')
	{
		res= *a- *b;
		printf("Result is %d",res);
	}
	else if (*op== '/')
	{
		res= *a/ *b;
		printf("Result is %d",res);
	}
	else if (*op== '*')
	{
		res= *a* *b;
		printf("Result is %d",res);
	}
	else if (*op== '%')
	{
		res= *a% *b;
		printf("Result is %d",res);
	}
}