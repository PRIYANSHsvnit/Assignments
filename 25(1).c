#include<stdio.h>
int main()
{
    int a=1,b=1,c;

    do
    {
        b=1;
        do
        {
            printf("\t%d",(a*b));
            b++;
        } while (b<=10);

        printf("\n");

        a++;
    }while(a<=10);
}