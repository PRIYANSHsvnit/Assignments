#include<stdio.h>
int main()
{
    int a,b,c;
    int flag=1;
    printf("Enter the number = ");
    scanf("%d",&a);
    
    for(b=2;b<a&&(flag!=0);b++)
    {
        if(a%b==0)
        {
            printf("\nNumber is not prime");
            flag=0;
        }

    }

    if(b==a)
    {
        printf("Number is prime");
    }

}