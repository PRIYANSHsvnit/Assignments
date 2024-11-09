#include<stdio.h>
#include<math.h>
int main()
{
    long long int t;
    
    t=pow(10,5);
    
   long long int a[t],i,j;
    
   long long int x=0,y=1,s;
    
    for( j=1;j<t;j++)
    {
        a[j]=x;
        s=x+y;
        x=y;
        y=s;
    }
    
    long long int n;
    printf("\n Enter N = ");
    scanf("%lld",&n);
    
    for( i=0;i<t;i++)
    {
        if(a[i]==n)
        {
            printf("\n %lld isFibo",n);
            break;
        }
    }
    
    if(i==t)
    {
        printf("\n %lld isNotFibo",n);
    }

    return 0;
}