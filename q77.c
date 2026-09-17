//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main()
{
    int a[10][10], rows, columns, i, j;
    int distinct = 1;
    scanf("%d %d", &rows, &columns);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }  
    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0)
            break;
    }
    if(distinct == 1)
        printf("True");
    else
        printf("False");
    return 0;
}