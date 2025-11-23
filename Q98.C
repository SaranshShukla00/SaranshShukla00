#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof s, stdin) == NULL) return 0;

    /* trim trailing newline */
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[--len] = '\0';

    /* split into words in-place */
    char *words[100];
    int n = 0;
    char *p = s;
    while (*p) {
        while (*p && isspace((unsigned char)*p)) ++p;
        if (!*p) break;
        words[n++] = p;
        while (*p && !isspace((unsigned char)*p)) ++p;
        if (*p) { *p++ = '\0'; }
        if (n >= (int)(sizeof(words)/sizeof(words[0]))) break;
    }

    if (n == 0) return 0;

    if (n == 1) {
        /* single name: print capitalized */
        char *name = words[0];
        if (name[0]) putchar(toupper((unsigned char)name[0]));
        for (int i = 1; name[i]; ++i) putchar(tolower((unsigned char)name[i]));
        putchar('\n');
        return 0;
    }

    /* print initials for all except last (surname), each followed by a dot, no spaces between initials */
    for (int i = 0; i < n - 1; ++i) {
        if (words[i][0]) {
            putchar(toupper((unsigned char)words[i][0]));
            putchar('.');
        }
    }
    putchar(' ');

    /* print surname with capitalization */
    char *surname = words[n-1];
    if (surname[0]) putchar(toupper((unsigned char)surname[0]));
    for (int i = 1; surname[i]; ++i) putchar(tolower((unsigned char)surname[i]));
    putchar('\n');

    return 0;
}