#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("-1\n"); return 0; }

    int *nums = malloc(n * sizeof(int));
    
    if (!nums) return 0;
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &nums[i]) != 1) { free(nums); return 0; }
    }

    /* Boyer-Moore majority vote to find candidate */
    int candidate = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        if (count == 0) { candidate = nums[i]; count = 1; }
        else if (nums[i] == candidate) ++count;
        else --count;
    }

    /* verify candidate */
    int occ = 0;
    for (int i = 0; i < n; ++i) if (nums[i] == candidate) ++occ;

    if (occ > n / 2) printf("%d\n", candidate);
    else printf("-1\n");

    free(nums);
    return 0;
}