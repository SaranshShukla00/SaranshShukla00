#include <stdio.h>

// Define enum for status codes
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    // Example: set result to SUCCESS
    result = SUCCESS;

    // Print message based on status
    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
