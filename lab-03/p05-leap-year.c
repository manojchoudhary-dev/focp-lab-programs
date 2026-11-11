/*
 * Lab 3.5 - Leap year or not
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 1900
 * Sample output: 1900 is not a leap year.
 */
#include <stdio.h>

int main() {
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        printf("%d is a leap year.", y);
    else
        printf("%d is not a leap year.", y);
    return 0;
}
