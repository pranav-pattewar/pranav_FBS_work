//check if number is strong or not 
#include<stdio.h>
void checkStrong(int*);
void main()
{
	int no;
	printf("Enter a number to check if it is a Strong number: ");
    scanf("%d", &no);
    checkStrong(&no);
}
void checkStrong(int* no)
{
	int org, r, sum = 0, i, fact;
    
    org = *no;

    while(*no > 0)
    {
        r = *no % 10;
        fact = 1;
        for(i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        *no = *no / 10;
    }

    if(sum == org)
        printf("Number %d is a Strong number", org);
    else
        printf("Number %d is not a Strong number", org);
}
