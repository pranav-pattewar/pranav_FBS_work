//strncat()
#include <stdio.h>
#include <string.h>

void main() 
{
    char dest[20] = "Hello ";
    char src[] = "World!";
    strncat(dest, src, 3);
    printf("Result: %s\n", dest);
}
