#include <stdio.h>

// Define an enum with some values
enum Status {
    SUCCESS = 1,
    FAILURE = 5,
    TIMEOUT = 10
};

int main() {
    // Print enum names with their integer values
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
