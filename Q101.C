#include <stdio.h>
#include <stdlib.h>

static int find_first(int *a, int n, int target) {
    int l = 0, r = n - 1, res = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == target) { res = m; r = m - 1; }
        else if (a[m] < target) l = m + 1;
        else r = m - 1;
    }
    return res;
}

static int find_last(int *a, int n, int target) {
    int l = 0, r = n - 1, res = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == target) { res = m; l = m + 1; }
        else if (a[m] < target) l = m + 1;
        else r = m - 1;
    }
    return res;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("-1, -1\n"); return 0; }

    int *nums = malloc (sizeof(int) * n);
    if (!nums) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &nums[i]);

    int target;
    if (scanf("%d", &target) != 1) { free(nums); return 0; }

    int first = find_first(nums, n, target);
    int last = (first == -1) ? -1 : find_last(nums, n, target);

    if (first == -1) printf("-1, -1\n");
    else printf("%d, %d\n", first, last);

    free(nums);
    return 0;
}