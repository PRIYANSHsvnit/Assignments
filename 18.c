#include<stdio.h>
int main()
{
    int a,b,c,result;
    printf("Enter numbers a,b and c respectively");
    scanf("%d%d%d",&a,&b,&c);
    printf(" Value of a= %d b= %d c= %d",a,b,c);
    result=(a>c?a:c)>b?(a>c?a:c):b;
    printf(" \n Number which have max value is= %d",result);
}