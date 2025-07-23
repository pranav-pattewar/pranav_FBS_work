// strlwr()
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO WORLD";
    strlwr(str);  // Converts to lowercase
    printf("Lowercase: %s\n", str);
    return 0;
}
