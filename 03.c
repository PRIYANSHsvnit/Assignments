#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Basic Salary = ");
scanf("%d",&a);
printf("House Rent Allowance = ");
scanf("%d",&b);
printf("Dearness allowance = ");
scanf("%d",&c);
printf("Medical allowance = ");
scanf("%d",&d);
e=(a+b+c+d);
printf("Gross Salary = %d", e);
}