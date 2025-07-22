//strrchr()
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Hello World";
    char *ptr = strrchr(str, 'o');
    if(ptr) printf("Last occurrence: %s\n", ptr);

}
