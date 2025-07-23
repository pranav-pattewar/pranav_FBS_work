//changeToUpr
#include<stdio.h>
char* changeToUpr(char* ); //declaration
void main()
{
	char str[11];
	printf("Enter a string in lowercase letters: ");
	scanf("%s",str);
	changeToUpr(str); //call
	printf("String in Uppercase letters:%s",str);
	
}// main ends here
char* changeToUpr(char* str) //defination
{
	for(int i=0;i<10;i++)
	{
		str[i]=str[i]-('a'-'A');
	}
	return str;
}