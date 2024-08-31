#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("Marks of Bhautik Vigyan = ");
scanf("%d",&a);
printf("Marks of Rasaynik Vigyan = ");
scanf("%d",&b);
printf("Marks of samajik Vigyan = ");
scanf("%d",&c);
printf("Marks of Ganit = ");
scanf("%d",&d);
printf("Marks of History Of Maharanas = ");
scanf("%d",&e);
f=(a+b+c+d+e);
printf("Total marks of five subjects = %d", f);
g=(f)/5;
printf("Percentage got = %d", g);
}