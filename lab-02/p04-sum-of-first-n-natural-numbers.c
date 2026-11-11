/*
 * Lab 2.4 - Sum of first N natural numbers
 * FOCP Lab 2 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 25
 * Sample output: The sum of first 25 natural numbers is 325
 */
#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter N: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("The sum of first %d natural numbers is %d", n, sum);
    return 0;
}
