#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers");
scanf("%d%d%d",&a,&b,&c);
printf("Value of a= %d b= %d c= %d",a,b,c);
if(a>b&&a>c)
printf("\nmax is a");
else if(b>a&&b>c)
printf("\nmax is b");
else
printf("\nmax is c");
}