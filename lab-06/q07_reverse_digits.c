#include <stdio.h>

int main() {
    int n, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
