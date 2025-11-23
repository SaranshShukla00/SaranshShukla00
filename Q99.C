#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char in[4096];
    char out[8192];

    while (fgets(in, sizeof in, stdin)) {
        size_t n = strlen(in);
        size_t oi = 0;
        for (size_t i = 0; i < n; ++i) {
            /* match pattern dd/04/yyyy (total 10 chars) */
            if (i + 9 < n
                && isdigit((unsigned char)in[i]) && isdigit((unsigned char)in[i+1])
                && in[i+2] == '/' && in[i+3] == '0' && in[i+4] == '4' && in[i+5] == '/'
                && isdigit((unsigned char)in[i+6]) && isdigit((unsigned char)in[i+7])
                && isdigit((unsigned char)in[i+8]) && isdigit((unsigned char)in[i+9])) {

                /* copy day */
                if (oi + 11 >= sizeof out) break; /* safety */
                out[oi++] = in[i];
                out[oi++] = in[i+1];

                /* write -Apr- */
                out[oi++] = '-';
                out[oi++] = 'A';
                out[oi++] = 'p';
                out[oi++] = 'r';
                out[oi++] = '-';

                /* copy year */
                out[oi++] = in[i+6];
                out[oi++] = in[i+7];
                out[oi++] = in[i+8];
                out[oi++] = in[i+9];

                i = i + 9; /* advance past matched block */
            } else {
                if (oi + 1 >= sizeof out) break;
                out[oi++] = in[i];
            }
        }

        /* write result line */
        if (oi >= sizeof out) oi = sizeof out - 1;
        out[oi] = '\0';
        fputs(out, stdout);
    }

    return 0;
}