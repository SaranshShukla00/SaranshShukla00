#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1024];

    /* Read a line from stdin */
    if (fgets(s, sizeof s, stdin) == NULL) return 0;

    /* remove trailing newline if present */
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[len-1] = '\0';

    /* Remove vowels (both upper- and lower-case) in-place */
    size_t j = 0;
    for (size_t i = 0; s[i]; ++i) {
        char c = s[i];
        char lc = (char)tolower((unsigned char)c);
        if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') {
            continue;
        }
        s[j++] = c;
    }
    s[j] = '\0';

    puts(s);
    return 0;
}