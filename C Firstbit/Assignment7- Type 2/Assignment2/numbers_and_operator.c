//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>

int performOperations();

void main()
{
	int result = performOperations();
	printf("Result is %d", result);
}

int performOperations()
{
	int a, b;
	char op;
	printf("Enter two numbers a and b and operator: ");
	scanf("%d%d %c", &a, &b, &op);

	if(op == '+')
		return a + b;
	else if(op == '-')
		return a - b;
	else if(op == '/')
		return a / b;
	else if(op == '*')
		return a * b;
	else if(op == '%')
		return a % b;
	else
		return 0;
}
