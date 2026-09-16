//Q75: Add two matrices.
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, columns, i, j;
    scanf("%d%d", &rows, &columns);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &rows, &columns);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}