#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
       int u=i-1;
        for(int j=5;j>i;j--)
        {
            printf("\t");   
        }

        for(int z=i;z>0;z--)
        {
            for(int t=1;t<=i;t++)
            {
                printf("%d\t",t);
            }
            break;
        }

        for(int x=i-1;x>0;x--)
        {
            printf("%d\t",x);
        }

        

        printf("\n");
        
    }
}