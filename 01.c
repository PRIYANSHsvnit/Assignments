#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the amount = ");
scanf("%d",&a);
printf("enter the rate = ");
scanf("%d",&b);
printf("enter the time = ");
scanf("%d",&c);
d=(a*b*c)/100;
printf("simple interest is = %d",d);
}