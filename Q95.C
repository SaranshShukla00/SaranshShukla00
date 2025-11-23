#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1024], s2[1024];
    if (fgets(s1, sizeof s1, stdin) == NULL) return 0;
    if (fgets(s2, sizeof s2, stdin) == NULL) return 0;

    size_t len1 = strlen(s1);
    if (len1 && s1[len1-1] == '\n') s1[--len1] = '\0';
    size_t len2 = strlen(s2);
    if (len2 && s2[len2-1] == '\n') s2[--len2] = '\0';

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char cat[2048];
    if (len1 * 2 + 1 > sizeof cat) {
        /* safety: input too large for static buffer */
        printf("Not rotation\n");
        return 0;
    }

    memcpy(cat, s1, len1);
    memcpy(cat + len1, s1, len1);
    cat[len1 * 2] = '\0';

    if (strstr(cat, s2) != NULL) printf("Rotation\n");
    else printf("Not rotation\n");

    return 0;
}