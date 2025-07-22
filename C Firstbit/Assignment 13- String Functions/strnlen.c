//strlen()
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Hello";
    size_t len = strnlen(str, 3);
    printf("Length up to 3: %zu\n", len);

}
