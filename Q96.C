#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void reverse_range(char *s, int a, int b) {
    while (a < b) {
        char t = s[a];
        s[a++] = s[b];
        s[b--] = t;
    }
}

int main(void) {
    char s[2048];
    if (fgets(s, sizeof s, stdin) == NULL) return 0;
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[--len] = '\0';

    int start = -1;
    for (int i = 0; s[i]; ++i) {
        if (!isspace((unsigned char)s[i])) {
            if (start == -1) start = i;
        } else {
            if (start != -1) {
                reverse_range(s, start, i - 1);
                start = -1;
            }
        }
    }
    if (start != -1) reverse_range(s, start, (int)strlen(s) - 1);

    puts(s);
    return 0;
}