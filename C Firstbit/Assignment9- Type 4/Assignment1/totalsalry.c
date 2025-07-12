//calculate total salary from basic salary 
#include<stdio.h>
float findTotalSalary(float);
void main()
{
    float basic;

    printf("Enter your basic salary: ");
    scanf("%f", &basic);
	findTotalSalary(basic);
    
    printf("Total Salary = %.2f\n",findTotalSalary(basic));
}
float findTotalSalary(float basic)
{
	float da, ta, hra, total;
	if(basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total = basic + da + ta + hra;
    return total;
}