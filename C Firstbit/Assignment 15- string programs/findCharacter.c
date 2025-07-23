// ques 1- Write a program to scan string from user then scan a single character and search it in a accepted string.
#include<stdio.h>
void main()
{
	char str[11];
	char ch;
	int pos;
	printf("Enter a string: \n");
	scanf("%s",str);
	
	printf("Enter a character to find in the string: \n");
	fflush(stdin);
	scanf("%c",&ch);
	
	for(int i=0;i<11;i++)
	{
		if(str[i]==ch)
		{
			pos=i;	
		}
		else
		pos=-1;
	}
	
	if(pos<0)
	{
		printf("character not found in string\n");
	}
	else
	{
		printf("Character found at position:%d",pos);
	}
}