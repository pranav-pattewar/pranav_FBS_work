// greatest amongst 3 digits

#include<stdio.h>

int getGreatestOfThree();
void main()
{
	int greatest = getGreatestOfThree();
	printf("%d is greatest", greatest);
}

int getGreatestOfThree()
{
	int a, b, c;
	printf("Enter any 3 digits to compare: ");
	scanf("%d%d%d", &a, &b, &c);

	if(a > b)
	{
		if(a > c)
			return a;
		else
			return c;
	}
	else
	{
		if(b > c)
			return b;
		else
			return c;
	}
}
