//memcpy()
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied: %s\n", dest);
    return 0;
}
