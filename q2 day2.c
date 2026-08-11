//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int r;float ar;float p;
int main()
{
   printf("enter your radius");
   scanf("%d",&r);
   ar=3.14*r*r;
   printf("area of circle is %f\n",ar);
   p=2*3.14*r;
   printf("circumference of circle is %f\n",p);
   return 0;
}