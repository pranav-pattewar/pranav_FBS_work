//strchr
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Hello World";
    char *ptr = strchr(str, 'o');
    if(ptr) printf("Found at: %s\n", ptr);
}
