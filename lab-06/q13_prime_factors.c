#include <stdio.h>

int main() {
    int n, temp, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    printf("Prime factors of %d: ", n);
    while (temp > 1) {
        if (temp % i == 0) {
            printf("%d ", i);
            temp = temp / i;
        } else {
            i++;
        }
    }
    printf("\n");

    return 0;
}
