/*
 * Lab 3.10 - Palindrome (3-digit number)
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 323
 * Sample output: 323 is a palindrome.
 */
#include <stdio.h>

int main() {
    int n, rev;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    rev = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    if (n == rev)
        printf("%d is a palindrome.", n);
    else
        printf("%d is not a palindrome.", n);
    return 0;
}
