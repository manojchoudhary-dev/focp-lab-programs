/*
 * Lab 3.7 - Multiple of 3 or 7
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 49
 * Sample output: 49 is a multiple of 3 or 7.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 7 == 0)
        printf("%d is a multiple of 3 or 7.", n);
    else
        printf("%d is not a multiple of 3 or 7.", n);
    return 0;
}
