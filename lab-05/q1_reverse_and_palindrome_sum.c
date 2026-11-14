#include <stdio.h>

int main() {
    int n, original, rev = 0, temp, sum, t, revsum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    temp = n;
    while (temp != 0) {              /* reverse using while loop */
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    printf("Reversed number = %d\n", rev);

    sum = original + rev;
    printf("%d + %d = %d\n", original, rev, sum);

    t = sum;                          /* reverse the sum to test palindrome */
    while (t != 0) {
        revsum = revsum * 10 + t % 10;
        t = t / 10;
    }
    if (revsum == sum)
        printf("%d is a palindrome.\n", sum);
    else
        printf("%d is not a palindrome.\n", sum);

    return 0;
}
