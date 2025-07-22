//strcat()
#include <stdio.h>
#include <string.h>

void main() 
{
    char dest[20] = "Hello ";
    printf("String 1: %s\n",dest);
    char src[] = "World";
    printf("String 2:%s\n",src);
    strcat(dest, src);
    printf("Concatenated: %s\n", dest);

}
