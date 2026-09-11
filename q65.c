//Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int a[100], n, i, search;
    int low, high, mid, found = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(a[mid] == search)
        {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        else if(search < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(found == 0)
    {
        printf("-1");
    }
    return 0;
}