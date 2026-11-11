/*
 * Lab 1.2 - Even or odd
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 87
 * Sample output: The number is odd.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("The number is even.");
    else
        printf("The number is odd.");
    return 0;
}
