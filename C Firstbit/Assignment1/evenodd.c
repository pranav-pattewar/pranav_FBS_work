//check if number is even or odd
#include<stdio.h>
void main()
{
	int no;
	printf("Enter any number to check if even or odd: ");
	scanf("%d",&no);
	if(no%2==0){
		printf("no is even");
	}
	else{
		printf("no is odd");
	}
}
