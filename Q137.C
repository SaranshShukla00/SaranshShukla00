#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    // Example: set role to ADMIN
    role = ADMIN;

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! Please sign up for more features.\n");
            break;
        default:
            printf("Invalid role.\n");
    }

    return 0;
}
