#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int difference;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    difference = strcmp(s1, s2);

    if (difference == 0)
        printf("Strings are same.\n");
    else if (difference > 0)
        printf("First string is bigger than second string.\n");
    else
        printf("Second string is bigger than first string.\n");

    return 0;
}
