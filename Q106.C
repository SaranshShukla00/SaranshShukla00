#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { putchar('\n'); return 0; }

    int *arr = malloc(sizeof *arr * n);
    if (!arr) return 0;
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) { free(arr); return 0; }
    }

    for (int i = 0; i < n; ++i) {
        int nge = -1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[i]) { nge = arr[j]; break; }
        }
        printf("%d", nge);
        if (i + 1 < n) putchar(',');
    }
    putchar('\n');

    free(arr);
    return 0;
}