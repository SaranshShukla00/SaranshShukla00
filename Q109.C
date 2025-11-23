#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return -1;
    }

    // Compute sum of first window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // Add next element, remove first element of previous window
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int result = maxSubarraySum(arr, n, k);
    if (result != -1) {
        printf("Maximum sum of subarrays of size %d is: %d\n", k, result);
    }

    return 0;
}
