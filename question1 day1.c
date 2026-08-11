//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int a;int b; int c;
int main()
 {
    printf("enter your first no: ");
    scanf("%d", &a);
    printf("enter your second no: ");
    scanf("%d", &b);
    c=a+b;
    printf("the sum of two no is: %d", c);
    return 0;
}