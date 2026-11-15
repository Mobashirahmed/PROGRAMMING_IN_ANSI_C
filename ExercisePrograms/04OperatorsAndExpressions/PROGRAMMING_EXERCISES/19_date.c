/* WAP to input a date value and determine whether the entered day, month, and year values are valid */
#include<stdio.h>

int main() {
    int day, month, year;

    printf("Enter the day, month, and year: ");
    scanf("%d %d %d", &day, &month, &year);

    // Check if the date is valid
    if (month==2) {
        // Check for February
        if (year % 4 == 0 ) {
            // Leap year
            if (day < 1 || day > 29) {
                printf("Invalid day for February in a leap year!\n");
            } else {
                printf("Valid date entered.\n");
            }
        } else {
            if (year % 4 == 0) {
                if(year % 100 == 0) {
                    // Not a leap year
                    if (day < 1 || day > 28) {
                        printf("Invalid day for February in a non-leap year!\n");
                    } else {
                        printf("Valid date entered.\n");
                    }
                } else {
                    // Leap year
                    if (day < 1 || day > 29) {
                        printf("Invalid day for February in a leap year!\n");
                    } else {
                        printf("Valid date entered.\n");
                    }
                }
            } else {
                // Not a leap year
                if (day < 1 || day > 28) {
                    printf("Invalid day for February in a non-leap year!\n");
                } else {
                    printf("Valid date entered.\n");
                }
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // Check for months with 30 days
        if (day < 1 || day > 30) {
            printf("Invalid day for the given month!\n");
        } else {
            printf("Valid date entered.\n");
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 12) {
        // Check for months with 31 days
        if (day < 1 || day > 31) {
            printf("Invalid day for the given month!\n");
        } else {
            printf("Valid date entered.\n");
        }
    } else {
        printf("Invalid date entered.\n");
    }

    return 0;
}