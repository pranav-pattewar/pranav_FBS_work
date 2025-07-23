//memchr()
#include <stdio.h>
#include <string.h>

int main() {
    char data[] = "abcdef";
    char *ptr = memchr(data, 'd', strlen(data));
    if (ptr)
        printf("Found at: %s\n", ptr);
    else
        printf("Not found\n");
    return 0;
}
