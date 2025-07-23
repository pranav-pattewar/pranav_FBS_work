//strspn()
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde123";
    char str2[] = "abcde";
    size_t span = strspn(str1, str2);
    printf("Initial matching length: %zu\n", span);
    return 0;
}
