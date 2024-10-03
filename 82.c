#include<Stdio.h>
int factorial(int n);
int main()
{
    int n,r,output;

    printf("Enter N and R = ");
    scanf("%d%d",&n,&r);

    output=factorial(n)/(factorial(r)*factorial(n-r));

    printf("\nNCR of N = %d",output);
}

int factorial(int n)
{
    int q=1;
    for(int i=n;i>0;i--)
    {
        q=q*i;
    }

    return q;
}