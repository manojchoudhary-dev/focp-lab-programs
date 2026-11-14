#include <stdio.h>

void printFactors(int n)
{
    int i;
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printFactors(num);

    return 0;
}
