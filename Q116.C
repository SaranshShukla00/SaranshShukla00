#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int found = 0;
    int iIndex = -1, jIndex = -1;

    // Brute force approach: check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                iIndex = i;
                jIndex = j;
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        printf("%d %d\n", iIndex, jIndex);
    } else {
        printf("-1 -1\n");
    }

    return 0;
}
