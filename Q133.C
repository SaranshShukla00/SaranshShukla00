#include <stdio.h>

// Define enum for months
enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    // Array of days for each month (non-leap year)
    int daysInMonth[] = {
        31, // January
        28, // February
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };

    // Print each month with its days
    printf("JANUARY = %d days\n", daysInMonth[JANUARY]);
    printf("FEBRUARY = %d days\n", daysInMonth[FEBRUARY]);
    printf("MARCH = %d days\n", daysInMonth[MARCH]);
    printf("APRIL = %d days\n", daysInMonth[APRIL]);
    printf("MAY = %d days\n", daysInMonth[MAY]);
    printf("JUNE = %d days\n", daysInMonth[JUNE]);
    printf("JULY = %d days\n", daysInMonth[JULY]);
    printf("AUGUST = %d days\n", daysInMonth[AUGUST]);
    printf("SEPTEMBER = %d days\n", daysInMonth[SEPTEMBER]);
    printf("OCTOBER = %d days\n", daysInMonth[OCTOBER]);
    printf("NOVEMBER = %d days\n", daysInMonth[NOVEMBER]);
    printf("DECEMBER = %d days\n", daysInMonth[DECEMBER]);

    return 0;
}
