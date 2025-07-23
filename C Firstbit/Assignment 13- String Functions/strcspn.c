// strcspn()
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abc123";
    char str2[] = "123";
    size_t len = strcspn(str1, str2);
    printf("Initial non-matching length: %zu\n", len);
    return 0;
}
