//memset()
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    memset(buffer, '*', 9);
    buffer[9] = '\0';
    printf("Filled: %s\n", buffer);
    return 0;
}
