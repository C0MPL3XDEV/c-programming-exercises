#include <stdio.h>

/** ------------ Exercise 1 - Enums Days ---------------
 *  Write a C program that:
 *  - Enum the days of the week
 *  - Read a day
 *  - Print if is weekend or not
 */

enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Days today;

    printf("Enter a day: ");
    scanf("%d", &today);

    if (today == SATURDAY || today == SUNDAY) {
        printf("It's weekend!");
    } else {
        printf("It's weekday!");
    }

    return 0;
}