/*
 * Lab 1.3 - Largest of three numbers
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 41 96 53
 * Sample output: 96 is largest.
 */
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is largest.", a);
    else if (b >= a && b >= c)
        printf("%d is largest.", b);
    else
        printf("%d is largest.", c);
    return 0;
}
