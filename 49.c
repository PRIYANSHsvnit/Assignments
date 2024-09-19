#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf("\t");   
        }

        for(int z=i;z>0;z--)
        {
            printf("*\t");
        }

        for(int x=2;x<=i;x++)
        {
            printf("*\t");
        }

        printf("\n");
        
    }
}