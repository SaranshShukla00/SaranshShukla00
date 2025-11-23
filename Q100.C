#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof s, stdin) == NULL) return 0;

    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[--len] = '\0';

    char sub[1024];
    for (size_t i = 0; i < len; ++i) {
        for (size_t j = i; j < len; ++j) {
            size_t l = j - i + 1;
            if (l >= sizeof sub) l = sizeof sub - 1;
            memcpy(sub, &s[i], l);
            sub[l] = '\0';
            puts(sub);
        }
    }

    return 0;
}