/*
 * Lab 3.3 - Divisible by 5 and 11
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 110
 * Sample output: The number is divisible by 5 and 11.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
        printf("The number is divisible by 5 and 11.");
    else
        printf("The number is not divisible by both 5 and 11.");
    return 0;
}
