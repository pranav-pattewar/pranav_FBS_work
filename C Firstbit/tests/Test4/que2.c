//que 2- WAP to find power of given number 
#include<stdio.h>
void main()
{
	int base,index,no=1;
	printf("Enter base and index to find power");
	scanf("%d%d",&base,&index);
	for(int i=0;i<=index;i++)
	{
		no=no*base;
	}
	printf("%d to the base %d is %d",index,base,no);
}