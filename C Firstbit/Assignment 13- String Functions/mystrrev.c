//myStrRev
#include<stdio.h>
#include<string.h>
char* myStrRev(char*); //declaration
void main()
{
	char str[]="Hello";
	myStrRev(str); //function call
	printf("Reversed string is: %s",str);
} //main ends here

// function defination
char* myStrRev(char* str)
{
	int len=strlen(str);
	int i=0;
	while( i<= ((len/2)-1))
	{
		char temp= str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
		i++;
	}
	return str;
}