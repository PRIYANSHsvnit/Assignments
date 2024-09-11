#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the number = ");
    scanf("%d",&a);

    printf("\nTable till = ");
    scanf("%d",&c);

    for(a,b=1;b<=c;b++)
    {
        printf("\t%d",(a*b));
    }
}