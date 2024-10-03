#include<stdio.h>
int fibonacci(int a)
{
    int j=1,b,h=0;
    for(int i=1;i<=a;i++)
    {
        b=h+j;
        printf("\t%d",b);

        h=j;
        j=b;
    }
}

int main()
{
    int a;
    printf("Number of terms = ");
    scanf("%d",&a);

    fibonacci(a);
}