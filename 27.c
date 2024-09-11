#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the  number = ");
    scanf("%d",&a);

    for(b=2;b<a;b++)
    {
        if(a%b==0)
        {
            printf("\nNumber is Not prime");
            break;
        }

    }

    if(b==a)
    {
        printf("Number is prime");
    }

}