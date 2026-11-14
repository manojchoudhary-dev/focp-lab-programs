#include <stdio.h>

int main() {
    int i, j;

    printf("a)\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\nb)\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\nc)\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }

    printf("\nd)\n");
    for (i = 1; i <= 5; i++) {
        for (j = 5; j >= i; j--)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
