// sum and reverse of any number given by user 
#include<stdio.h>
void main()
{
	long int no, original, rem, sum, rev;
	sum=0,rev=0;
	//take number from user
	printf("Enter the number you want sum and reverse for:");
	scanf("%ld",&no);
	original=no;
	//loop for execution
	while(no>0){
		rem=no%10;
		sum=sum+rem;
		rev=rev*10+rem;
		no=no/10;	
	}
	printf("Sum of digits in %ld is %ld and reverse is %ld",original,sum,rev);
}
