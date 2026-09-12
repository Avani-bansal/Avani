//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int a[100], n, i, position, element;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &position, &element);
    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }
    a[position - 1] = element;
    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}