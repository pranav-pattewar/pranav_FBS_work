//strdup()

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
    char *str = "Hello";
    printf("Original: %s\n",str);
    char *dup = strdup(str);
    printf("Duplicated: %s\n", dup);
    free(dup);
}
