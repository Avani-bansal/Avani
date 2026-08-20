//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cp, sp, profit, loss;
    float percentage;
    scanf("%d %d", &cp, &sp);
    if(sp > cp)
    {
        profit = sp - cp;
        percentage = (profit * 100.0) / cp;
        printf("Profit %.0f%%", percentage);
    }
    else if(cp > sp)
    {
        loss = cp - sp;
        percentage = (loss * 100.0) / cp;
        printf("Loss %.0f%%", percentage);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}