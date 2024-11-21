#include<stdio.h>
int main()
{
    int a=1,n,b=0,s;
    printf("Enter the value of N = ");
    scanf("%d",&n);

    for(int i;i<=n;i++)
    {
        printf("\t%d",b);
        s=a+b;
        b=a;
        a=s;
    }
}