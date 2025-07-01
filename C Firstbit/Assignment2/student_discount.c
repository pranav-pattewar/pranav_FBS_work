// student discount with conditions 
#include<stdio.h>
void main()
{
	float price,dis=0;
	char stud;
	printf("Enter the price of your purchase:");
	scanf("%f",&price);
	printf("Are you student or not (only y/n) :");
	scanf(" %c",&stud);
	if(stud=='y'|| stud=='Y')
	{
		if(price>500)
		{
			dis= .20*price;
		}
		else
		{
			dis=0.10*price;
		}	
	}
	else
	{
		if(price>600)
		{
			dis= 0.15*price;
		}
		else
		{
			dis=0;
		}
	}
	printf("Your discount is Rs.%f \n",dis);
	printf("Final price after discount is Rs.%f",price-dis);
}





