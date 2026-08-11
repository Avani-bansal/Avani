//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include stdio.h
int main()
{
    int a;int b;int c;
    printf("enter your first no");
    scanf("%d"&a);
    printf("enter your sec no");
    scanf("%d",b);
    c=a+b;
    printf("your sum is %d\n",c);
    c=a-b;
    printf("your diff is %d\n",c);
    c=a*b;
    printf("your product is %d\n",c);
    c=a/b;
    printf("your divident is %d\n",c);
    return 0;
}