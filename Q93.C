#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s1[1024], s2[1024];
    if (fgets(s1, sizeof s1, stdin) == NULL) return 0;
    if (fgets(s2, sizeof s2, stdin) == NULL) return 0;

    /* remove trailing newlines */
    size_t len = strlen(s1); if (len && s1[len-1] == '\n') s1[len-1] = '\0';
    len = strlen(s2); if (len && s2[len-1] == '\n') s2[len-1] = '\0';

    int freq[256] = {0};

    /* Count characters from first string (ignore whitespace, case-insensitive) */
    for (size_t i = 0; s1[i]; ++i) {
        unsigned char c = (unsigned char)s1[i];
        if (isspace(c)) continue;
        freq[tolower(c)]++;
    }

    /* Subtract counts for second string */
    for (size_t i = 0; s2[i]; ++i) {
        unsigned char c = (unsigned char)s2[i];
        if (isspace(c)) continue;
        freq[tolower(c)]--;
    }

    for (int i = 0; i < 256; ++i) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}