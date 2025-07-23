// ques 4- WAP to Form a New String where the First Character and the Last Character have been Exchanged
#include<stdio.h>
void main()
{
	char str[6];
	char org[6];
	char temp;
	printf("Enter a string:");
	scanf("%s",str);
	
	for(int i=0;i<6;i++)
	{
		org[i]=str[i];
	}
	printf("\nOriginal string is: %s",org);
	
	temp=str[0];
	str[0]=str[4];
	str[4]=temp;
	printf("\nUpdated string is: %s",str);
}