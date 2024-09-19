#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=7;j>i;j--)
        {
            printf("\t");   
        }

        for(int z=i;z>0;z--)
        {
            printf("%d\t",z);
        }

        for(int x=2;x<=i;x++)
        {
            printf("%d\t",x);
        }

        printf("\n");
        
    }
}