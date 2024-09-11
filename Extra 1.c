#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d=0;

    printf("Enter the number in binary form = ");
    scanf("%d",&a);

    for(c=0;a>0;c++)
    {
        b=a%10;
        d=d+(pow(2,c))*b;
        a=a/10;
    }
    printf("\nNumber in binary form = %d",d);
}