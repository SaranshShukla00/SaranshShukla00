#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("-1\n"); return 0; }

    long long *a = malloc(sizeof *a * n);
    if (!a) return 0;
    for (int i = 0; i < n; ++i) {
        if (scanf("%lld", &a[i]) != 1) { free(a); return 0; }
    }

    long long total = 0;
    for (int i = 0; i < n; ++i) total += a[i];

    long long left = 0;
    for (int i = 0; i < n; ++i) {
        if (left == total - left - a[i]) {
            printf("%d\n", i);
            free(a);
            return 0;
        }
        left += a[i];
    }

    printf("-1\n");
    free(a);
    return 0;
}