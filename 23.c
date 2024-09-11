#include<stdio.h>
int main()
{
    int x,n,q=1;
    printf("Enter the Number = ");
    scanf("%d",&x);

    printf("Enter the value to be powerd = ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        q=q*x;
    }
    printf("\n Final value = %d",q);
}