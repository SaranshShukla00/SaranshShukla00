#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[2048];
    if (fgets(s, sizeof s, stdin) == NULL) return 0;
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[len-1] = '\0';

    int best_start = -1, best_len = 0;
    int cur_start = -1, cur_len = 0;

    for (int i = 0; s[i]; ++i) {
        if (!isspace((unsigned char)s[i])) {
            if (cur_start == -1) cur_start = i;
            cur_len++;
        } else {
            if (cur_len > best_len) {
                best_len = cur_len;
                best_start = cur_start;
            }
            cur_start = -1;
            cur_len = 0;
        }
    }
    /* final word check */
    if (cur_len > best_len) { best_len = cur_len; best_start = cur_start; }

    if (best_start >= 0 && best_len > 0) {
        char word[1024];
        int copy_len = best_len < (int)sizeof(word)-1 ? best_len : (int)sizeof(word)-1;
        memcpy(word, &s[best_start], copy_len);
        word[copy_len] = '\0';
        printf("%s\n%d\n", word, best_len); /* prints longest word and its length */
    } else {
        printf("No words found\n");
    }

    return 0;
}