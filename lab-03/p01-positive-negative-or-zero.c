/*
 * Lab 3.1 - Positive, negative or zero
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: -18
 * Sample output: The number is negative.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        printf("The number is positive.");
    else if (n < 0)
        printf("The number is negative.");
    else
        printf("The number is zero.");
    return 0;
}
