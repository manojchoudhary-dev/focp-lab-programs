/*
 * Lab 2.3 - Factorial
 * FOCP Lab 2 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 6
 * Sample output: The factorial of 6 is 720.
 */
#include <stdio.h>

int main() {
    int n, i = 1;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        fact = fact * i;
        i++;
    }
    printf("The factorial of %d is %lld.", n, fact);
    return 0;
}
