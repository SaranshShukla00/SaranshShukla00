#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof s, stdin) == NULL) return 0;
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[--len] = '\0';

    int printed = 0;
    for (size_t i = 0; s[i]; ++i) {
        if (isalpha((unsigned char)s[i]) &&
            (i == 0 || isspace((unsigned char)s[i-1]))) {
            if (printed) putchar('.');
            putchar(toupper((unsigned char)s[i]));
            printed = 1;
        }
    }
    putchar('\n');
    return 0;
}