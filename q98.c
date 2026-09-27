//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, lastSpace = 0;
    scanf("%[^\n]", str);
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            lastSpace = i;
        i++;
    }
    for(i = 0; i < lastSpace; i++)
    {
        if(i == 0 || str[i - 1] == ' ')
            printf("%c.", str[i]);
    }
    printf(" ");
    for(i = lastSpace + 1; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}