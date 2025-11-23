#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof s, stdin) == NULL) return 0;
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[len-1] = '\0';

    int freq[26] = {0};
    for (size_t i = 0; s[i]; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') freq[s[i] - 'a']++;
    }

    for (size_t i = 0; s[i]; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 1) {
            putchar(s[i]);
            putchar('\n');
            return 0;
        }
    }

    printf("No repeating lowercase letter\n");
    return 0;
}