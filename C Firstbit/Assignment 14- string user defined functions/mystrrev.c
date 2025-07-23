//myStrRev
#include<stdio.h>
int mystrlen(char*);
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
	int len=mystrlen(str);
	int i=0;
	while( i<= ((len/2)-1))
	{
		char temp= str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
		i++;
	}
	return str;
}// main ends here

int mystrlen(char* str)
{
	int i=0,count=0;
	if(str[0]=='\0')
	printf("String does not exist");
	
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}