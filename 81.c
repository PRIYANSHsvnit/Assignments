#include<stdio.h>
int prime(int a);

int main()
{
    int a,output;

    printf("Enter the number = ");
    scanf("%d",&a);

    output = prime(a);

    if(output==1)
    {
        printf("\n Entered Number is Prime");
    }

    else if(output==0)
    {
        printf("\n Entered Number is Not Prime");
    }

}

int prime(int a)
{
    int i;

    for( i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;

            break;
        }

    }

    if(i==a)
    {
        return 1;
    }
    
}