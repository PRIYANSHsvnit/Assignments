#include<stdio.h>
int main()
{
    int n,m,z,y;

    printf("Enter Number N = ");
    scanf("%d",&n);
    
    for(m=1;m<=n;m++)
    {
        if(n%m==0)
        {
            printf("\t%d",(n/m));
        }
    }
}