#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Sale Amount = ");
    scanf("%f",&a);

    if(a<=500)
    {
        c=5*a/100;
    }

    else if(a>500&&a<=2000)
    {
        c=35 + 10*(a)/100;
    }
    else if(a>2000&&a<=5000)
    {
        c=185 + 12*(a)/100;
    }
    else
    {
        c=12.5*(a)/100;
    }

    printf("\nCommission = %f",c);

    return 0;
}