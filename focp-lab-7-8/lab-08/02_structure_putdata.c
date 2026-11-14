#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float percentage;
};

void putdata(int roll, char name[], float percentage)
{
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Percentage  : %.2f\n", percentage);
}

int main()
{
    struct Student s = {101, "Manoj Choudhary", 89.50};

    putdata(s.roll, s.name, s.percentage);

    return 0;
}
