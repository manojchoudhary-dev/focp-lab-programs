#include <stdio.h>

int main() {
    int a, b, x, y, r, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a; y = b;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    gcd = x;
    lcm = (a / gcd) * b;

    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
