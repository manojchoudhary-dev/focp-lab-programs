/*
 * Lab 2.1 - Prime or not
 * FOCP Lab 2 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 47
 * Sample output: The number is Prime.
 */
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("The number is Prime.");
    else
        printf("The number is not Prime.");
    return 0;
}
