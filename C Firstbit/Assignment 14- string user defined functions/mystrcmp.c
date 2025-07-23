//mystrcmp
#include<stdio.h>
int mystrlen(char*);//decl
int mystrcmp(char* , char* );//decl
void main()
{
	char str1[]="Hello123";
	printf("string 1 is: %s \n",str1);
	char str2[]="World";
	printf("string 2 is: %s \n",str2);
	int res= mystrcmp(str1,str2); //function call
	if(res==0)
	printf("String 1 equal to string 2");
	else if(res<0)
	printf("String 1 is smaller than string 2");
	else
	printf("String 1 is bigger than string 2");
	
	
} //main ends here

// function defination
int mystrcmp(char* str1, char* str2)
{
	if (mystrlen(str1)==mystrlen(str2))
	{
		return 0;
	}
	else if(mystrlen(str1)<mystrlen(str2))
	return -1;
	
	else 
	return 1;
	
}

// mystrlen function 
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