#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the number = ");
    scanf("%d",&a);

    while(a>0)
    {
        b=a%10;
        c+=b;
        a=a/10;
    }
    printf("\n Sum = %d",c);
}