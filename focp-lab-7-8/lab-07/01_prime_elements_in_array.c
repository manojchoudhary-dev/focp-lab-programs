#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Prime elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
            printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
