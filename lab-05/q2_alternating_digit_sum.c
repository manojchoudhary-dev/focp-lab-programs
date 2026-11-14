#include <stdio.h>

int main() {
    long n, temp;
    int digit, sign = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    temp = n;
    while (temp != 0) {              /* digits taken from the right, signs alternate + - + - ... */
        digit = temp % 10;
        sum = sum + sign * digit;
        sign = -sign;
        temp = temp / 10;
    }
    printf("Alternating sum of digits of %ld = %d\n", n, sum);

    return 0;
}
