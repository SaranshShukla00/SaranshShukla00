#include <stdio.h>
#include <string.h>

int main(void) {
    char s[512];

    /* Read a line from stdin */
    if (fgets(s, sizeof s, stdin) == NULL) return 0;

    /* remove trailing newline if present */
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[len-1] = '\0';

    /* replace spaces with hyphens */
    for (size_t i = 0; s[i]; ++i) {
        if (s[i] == ' ') s[i] = '-';
    }

    puts(s);
    return 0;
}