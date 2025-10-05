#include <stdio.h>

int main() {
    int i, j;
    int lines[] = {1, 3, 5, 3}; // Number of * in each group

    for (i = 0; i < 4; i++) {
        for (j = 0; j < lines[i]; j++) {
            printf("*\n");
        }
        if (i != 3) // Don't print extra blank line after last group
            printf("\n");
    }
    return 0;
}