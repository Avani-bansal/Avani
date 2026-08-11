//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int l;int b;int ar;int p;
int main()
{
  printf("enter your length");
  scanf("%d",&l);
  printf("enter your breadth");
  scanf("%d",&b);
  ar=l*b;
  printf("your area is %d\n",ar);
  p=2*(l+b);
  printf("your perimeter is %d\n",p);
  return 0;
}