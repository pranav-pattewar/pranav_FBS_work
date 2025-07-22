// myStrLen()
#include<stdio.h>
int mystrlen(char*);//declaration
void main() 
{
	char str[]="Hello";
	int len = mystrlen(str); //call
	printf("length of string is %d",len);
} //main ends here

// defination 
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