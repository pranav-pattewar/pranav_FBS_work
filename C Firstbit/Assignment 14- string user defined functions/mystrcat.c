//mystrcat()
#include <stdio.h>
char* mystrcat(char* destination, const char* source); //declaration
void main() 
{
    
    char str1[100];
    char str2[50];

    printf("Enter the destination string: ");
    scanf("%s",str1);
    printf("\nEnter the source string you want to concatenate: ");
    scanf("%s",str2);
    printf("\nBefore concatenation:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    mystrcat(str1, str2); //call

    printf("\nAfter concatenation:\n");
    printf("String 1 is now: %s\n", str1);
}//main end here

char* mystrcat(char* destination, const char* source) //def
{
    int i = 0, j = 0;
    while (destination[i] != '\0') 
	{
        i++;
    }
    
    while (source[j] != '\0') 
	{
        destination[i] = source[j];
        i++;
        j++;
    }
    destination[i] = '\0';

    return destination;
}
