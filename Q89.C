#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];

    /* Read a line (the string) from stdin */
    if (fgets(s, sizeof s, stdin) == NULL) return 0;
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[len-1] = '\0';

    /* Read one character to count (allows space as a character) */
    int c = getchar();
    while (c == '\n') { /* skip leftover newlines */
        c = getchar();
        if (c == EOF) { printf("0\n"); return 0; }
    }
    char ch = (char)c;

    /* Count occurrences */
    int count = 0;
    for (size_t i = 0; s[i]; ++i) if (s[i] == ch) ++count;

    printf("%d\n", count);
    return 0;
}