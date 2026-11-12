//Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    char g[20];

    printf("Gender=");
    scanf("%s", g);

    if (g[0] == 'M')
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}