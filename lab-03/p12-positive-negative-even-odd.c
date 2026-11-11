/*
 * Lab 3.12 - Positive/negative, even/odd
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: -42
 * Sample output: The number is negative even.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) {
        if (n % 2 == 0)
            printf("The number is positive even.");
        else
            printf("The number is positive odd.");
    } else if (n < 0) {
        if (n % 2 == 0)
            printf("The number is negative even.");
        else
            printf("The number is negative odd.");
    } else {
        printf("The number is zero.");
    }
    return 0;
}
