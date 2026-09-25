//Q94: Find the longest word in a sentence.
#include <stdio.h>
int main()
{
    char str[200];
    char longest[100];
    int i = 0, j = 0;
    int length = 0, maxLength = 0;
    int start = 0;
    scanf("%[^\n]", str);
    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            length++;
        }
        else
        {
            if(length > maxLength)
            {
                maxLength = length;

                for(j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }
            length = 0;
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
        i++;
    }
    printf("%s", longest);
    return 0;
}