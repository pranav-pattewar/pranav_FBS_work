// print last 2 digits of number 
#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	printf("Last 2 digits of %d are %d",no,no%100);
}
