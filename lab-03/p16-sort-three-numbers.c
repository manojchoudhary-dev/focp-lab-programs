/*
 * Lab 3.16 - Sort three numbers in ascending order
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 81 23 57
 * Sample output: Ascending order: 23 57 81
 */
#include <stdio.h>

int main() {
    int a, b, c, t;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) { t = a; a = b; b = t; }
    if (a > c) { t = a; a = c; c = t; }
    if (b > c) { t = b; b = c; c = t; }
    printf("Ascending order: %d %d %d", a, b, c);
    return 0;
}
