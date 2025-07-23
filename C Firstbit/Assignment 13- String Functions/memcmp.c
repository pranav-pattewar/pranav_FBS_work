//memcmp()
#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "abc";
    char b[] = "abd";
    int result = memcmp(a, b, 3);
    printf("Compare result: %d\n", result);
    return 0;
}
