#include<stdio.h>
int main()
{
    int z;
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf(" ");
        }  

        for(z=i;z>0;z--)
        {
            printf("%d",z);
        }
        printf("\n");
    }
}