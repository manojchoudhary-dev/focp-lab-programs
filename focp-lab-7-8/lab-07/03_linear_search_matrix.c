#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j, key, found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == key)
            {
                printf("%d found at row %d, column %d\n", key, i + 1, j + 1);
                found = 1;
            }
        }
    }

    if (!found)
        printf("%d is not present in the matrix.\n", key);

    return 0;
}
