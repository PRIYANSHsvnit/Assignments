#include<stdio.h>
int main()
{
    int a,b,c=0;

    printf("Enter the number = ");
    scanf("%d",&a);

    while(a>0)
    {
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    printf("\nReverse of given number = %d",c);
}