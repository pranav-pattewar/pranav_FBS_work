//swaping of two numbers 
#include<stdio.h>
void main()
{
	int a,b,temp;
	a=11;
	b=22;
	printf("Numbers before swaping are a=%d and b=%d \n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Numbers after swpaing are a=%d and b=%d",a,b);
}
