//mystrlower()

#include<stdio.h>
char* mystrlower(char* ); //declaration
void main()
{
	char str[13];
	printf("Enter a string in uppercase letters: ");
	scanf("%s",str);
	mystrlower(str); //call
	printf("String in lowercase letters:%s",str);
	
}// main ends here
char* mystrlower(char* str) //defination
{
	for(int i=0;i<12;i++)
	{
		str[i]=str[i]+('a'-'A');
	}
	return str;
}