#include<stdio.h>
int main()
{
    int a,b,s;
    printf("Enter the number = ");
    scanf("%d",&a);

    while((a/10)>0)
    {
        s=0;
        while(a>0)
        {
            b=a%10;
            s=s+b;
            a=a/10;
        }
        a=s;
    }
    printf("SUM of the number till single digit = %d",s);
}