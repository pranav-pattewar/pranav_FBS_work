//check if number is perfect or not 
#include<stdio.h>
void perfectNo();
void main()
{
    perfectNo();
}
void perfectNo()
{
	int no, i, sum = 0;
    printf("Enter a number to check if it is a Perfect number: ");
    scanf("%d", &no);

    for(i = 1; i < no; i++)
    {
        if(no % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == no)
        printf("Number %d is a Perfect number", no);
    else
        printf("Number %d is not a Perfect number", no);
}
