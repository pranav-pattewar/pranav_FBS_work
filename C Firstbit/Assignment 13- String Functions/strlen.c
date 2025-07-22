// strlen()
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Hello";
    size_t len = strlen(str);
    printf("string: %s\n",str);
    printf("Length: %zu\n", len);
}
