//mystrncpy()
#include <stdio.h>

char* mystrncpy(char* destination, const char* source, int n); //declaration

void main() 
{
    char src[50];
    char dest[50];
    int n;

    printf("Enter the source string: ");
    scanf("%s", src);

    printf("\nEnter number of characters to copy: ");
    scanf("%d", &n);

    printf("\nBefore copy:\n");
    printf("Source: %s\n", src);
    
    mystrncpy(dest, src, n); //call

    printf("\nAfter copy:\n");
    printf("Copied string: %s\n", dest);
}//main ends here

char* mystrncpy(char* destination, const char* source, int n) //def
{
    int i;
    for(i = 0; i < n && source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }

    for(; i < n; i++)
    {
        destination[i] = '\0';
    }

    return destination;
}
