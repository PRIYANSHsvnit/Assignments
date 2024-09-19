#include<stdio.h>
int main()
{
    int m[10],s;
    printf("Enter Integers = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&m[i]);
    }

    for( int s=0,i=0;i<10;i++)
    {
        s= s+ m[i];
    }

    printf("Sum of Integers entered = %d",s);
}