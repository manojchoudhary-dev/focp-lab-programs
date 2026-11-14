#include <stdio.h>

int main() {
    int n, original, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev == original)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
