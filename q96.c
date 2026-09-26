//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main()
{
    char str[200];
    int i = 0, start = 0, j;
    scanf("%[^\n]", str);
    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            for(j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }
            if(str[i] == ' ')
                printf(" ");
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
        i++;
    }
    return 0;
}