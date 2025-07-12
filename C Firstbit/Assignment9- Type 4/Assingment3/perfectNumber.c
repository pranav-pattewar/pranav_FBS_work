//check if number is perfect or not (test cases 6,28,496)
#include<stdio.h>
int isPerfect(int); //func declaration
void main()
{
    int no;
    printf("Enter a number to check if it is a Perfect number: ");
    scanf("%d", &no);
	isPerfect(no); //func call
    if(isPerfect(no))
        printf("Number %d is a Perfect number", no);
    else
        printf("Number %d is not a Perfect number", no);
} // main ends here
int isPerfect(int no) //func defination
{
	int  i, sum = 0;
	for(i = 1; i < no; i++)
    {
        if(no % i == 0)
        {
            sum = sum + i;
        }
    }
	return (sum == no);
}


