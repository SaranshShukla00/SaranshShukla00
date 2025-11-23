#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (with exactly one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming elements are in range [0, n-1] or similar
    int visited[n+1];  // extra space for safety
    for (int i = 0; i <= n; i++) {
        visited[i] = 0;
    }

    // Single iteration to find duplicate
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0;
        } else {
            visited[arr[i]] = 1;
        }
    }

        return 0;
}