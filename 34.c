#include<stdio.h>
int main()
{
    int a,n,b,s;
    printf("Enter the value of N = ");
    scanf("%d",&n);

    for(a=1,b=0;a<=n;)
    {
        s=a+b;
        printf("%d",s);
        b=a;
        a=s;
    }
}