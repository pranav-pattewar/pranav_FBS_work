// strupr()
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    strupr(str);  // Converts to uppercase
    printf("Uppercase: %s\n", str);
    return 0;
}
