// student discount with conditions 

#include<stdio.h>

float calculateStudDis();

void main()
{
	float finalAmount = calculateStudDis();
	printf("Final price after discount is Rs.%.2f", finalAmount);
}

float calculateStudDis()
{
	float price, dis = 0;
	char stud;
	printf("Enter the price of your purchase: ");
	scanf("%f", &price);
	printf("Are you student or not (only y/n): ");
	scanf(" %c", &stud);

	if(stud == 'y' || stud == 'Y')
	{
		dis = (price > 500) ? 0.20 * price : 0.10 * price;
	}
	else
	{
		dis = (price > 600) ? 0.15 * price : 0;
	}

	printf("Your discount is Rs.%.2f\n", dis);
	return price - dis;
}
