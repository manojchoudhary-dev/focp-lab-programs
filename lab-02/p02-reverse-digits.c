/*
 * Lab 2.2 - Reverse the digits
 * FOCP Lab 2 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 56231
 * Sample output: Reversed number: 13265
 */
#include <stdio.h>

int main() {
    int n, rev = 0, r;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("Reversed number: %d", rev);
    return 0;
}
