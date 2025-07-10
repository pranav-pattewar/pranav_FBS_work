//find if number is armstrong number
#include<stdio.h>

int isArmstrong();

void main()
{
	if(isArmstrong())
		printf("Number is an Armstrong number");
	else
		printf("Number is not an Armstrong number");
}

int isArmstrong()
{
	int no, org, r1, sum = 0;
	printf("Enter any 3 digit number to check if it is Armstrong number: ");
	scanf("%d", &no);
	org = no;

	while(no > 0)
	{
		r1 = no % 10;
		sum = sum + r1 * r1 * r1;
		no = no / 10;
	}

	return (sum == org);
}
