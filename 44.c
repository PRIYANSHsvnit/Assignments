#include<stdio.h>
int main()
{
    float a,b,c;

    printf("Units consumed ( Always positive value ) = ");
    scanf("%f",&a);

    if(a>0&&a<=200)
    {
        c=(0.5)*a;
    }
    
    else if(a>=201&&a<=400)
    {
        c= 100 + (0.65)*(a-200) ;
    }

    else if(a>=401&&a<=600)
    {
        c= 230 + (0.80)*(a-400) ;
    }

    else if(a>600)
    {
        c= 145 + (1.25)*(a-600) ;
    }

    else
    printf("\n No charge issued");

    printf("\n Charge issued for customer to pay in Rupees = %f",c);
    
}