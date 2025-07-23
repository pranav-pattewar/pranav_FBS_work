//strcoll()
#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "abc";
    char *s2 = "xyz";
    int res = strcoll(s1, s2);
    printf("Locale compare result: %d\n", res);
    return 0;
}
