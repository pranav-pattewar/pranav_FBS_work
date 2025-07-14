//check if number is perfect or not 
#include<stdio.h>
void perfectNo(int*);
void main()
{
	int no;
	printf("Enter a number to check if it is a Perfect number: ");
    scanf("%d", &no);
    perfectNo(&no);
}
void perfectNo(int* no)
{
	int i, sum = 0;
    

    for(i = 1; i < *no; i++)
    {
        if(*no % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == *no)
        printf("Number %d is a Perfect number", *no);
    else
        printf("Number %d is not a Perfect number", *no);
}
