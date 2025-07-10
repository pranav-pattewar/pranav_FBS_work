//calculate total salary from basic salary 
#include<stdio.h>

float findTotalSalary();

void main()
{
	printf("Total Salary = %.2f\n", findTotalSalary());
}

float findTotalSalary()
{
	float basic;
	printf("Enter your basic salary: ");
	scanf("%f", &basic);

	float da = (basic <= 5000) ? 0.10 * basic : 0.15 * basic;
	float ta = (basic <= 5000) ? 0.20 * basic : 0.25 * basic;
	float hra = (basic <= 5000) ? 0.25 * basic : 0.30 * basic;

	return (basic + da + ta + hra);
}


