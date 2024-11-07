#include<stdio.h>
int main()
{

    int k[50],l[50],q[50],c[50];
    int a,b,max,min,sum=0,n,m;

    printf("Enter Number of Jars = ");
    scanf("%d",&n);

    printf("\n Enter Number of operations to be perform = ");
    scanf("%d",&m);

    for( int j=1;j<=50;j++)
    {
        l[j]=0;
    }

    for(int i=1;i<=m;i++)
    {
        printf("\n Enter a and b = ");
        scanf("%d%d",&a,&b);

        q[i]=a;

        if(a>b)
        {
            c[i]=0;
        }

        else
        {
            c[i]=b;

            printf("\n Number of candies = ");
            scanf("%d",&k[i]);
        
            for(int j=a;j<=b;j++)
            {
                l[j]+=k[i];
            }

        }

    }

    max=c[1];
    min=q[1];

    for(int i=1;i<=m;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
    }

    for(int i=1;i<=m;i++)
    {
        if(q[i]<min)
        {
            min=q[i];
        }
    }

    for(int i=1;i<=n;i++)
    {
        sum = sum + l[i] ;
    }

    printf("\n Average Number of Candies after %d operations = %d",m,(sum/(max-min+1)));

    return 0;

}