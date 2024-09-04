#include<stdio.h>
int main()
{
    int a,b,fac;
    b=1;
    fac=1;
    printf("Enter the number = ");
    scanf("%d",&a);
    while(b<=a)
    {
        fac=(fac*b);
        b=b+1;
    }
    printf("Value of factorial of given number = %d",fac);
}