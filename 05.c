#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of variable a =");
    scanf("%d",&a);
    printf("Enter the value of variable b =");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("New value of a = %d New value of b = %d",a,b);
}
