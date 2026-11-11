/*
 * Lab 3.6 - Largest among three numbers
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 72 45 90
 * Sample output: 90 is the largest.
 */
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is the largest.", a);
    else if (b >= a && b >= c)
        printf("%d is the largest.", b);
    else
        printf("%d is the largest.", c);
    return 0;
}
