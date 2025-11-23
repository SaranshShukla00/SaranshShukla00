#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("-1\n"); return 0; }

    int *arr = malloc(sizeof *arr * n);
    if (!arr) return 0;
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) { free(arr); return 0; }
    }

    int x;
    if (scanf("%d", &x) != 1) { free(arr); return 0; }

    int l = 0, r = n - 1, res = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] >= x) { res = m; r = m - 1; } /* possible ceil, search left for first */
        else l = m + 1;
    }

    if (res == -1) printf("-1\n");
    else printf("%d\n", res);

    free(arr);
    return 0;
}