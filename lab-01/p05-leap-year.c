/*
 * Lab 1.5 - Leap year or not
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: (a leap year, e.g. 2024)
 * Sample output: It is a leap year.
 */
#include <stdio.h>

int main() {
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        printf("It is a leap year.");
    else
        printf("It is not a leap year.");
    return 0;
}
