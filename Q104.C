#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned long long n;
    if (scanf("%llu", &n) != 1) return 0;
    if (n == 0) { printf("-1\n"); return 0; }

    /* total = n*(n+1)/2 computed in 128-bit to avoid overflow */
    unsigned __int128 total = (unsigned __int128)n * (n + 1) / 2;

    /* approximate integer square root using long double then adjust */
    unsigned long long r = (unsigned long long) floor(sqrt((long double) total));
    while ((unsigned __int128)r * r < total) ++r;
    while ((unsigned __int128)r * r > total) --r;

    if ((unsigned __int128)r * r == total && r >= 1 && r <= n) printf("%llu\n", r);
    else printf("-1\n");

    return 0;
}