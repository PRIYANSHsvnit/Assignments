#include<stdio.h>
int main()
{
    int a=1,b,n;
    printf("Till number = ");
    scanf("%d",&n);

    for(a;a<n;a++)
    {
        for(b=2;b<n;b++)
        {
            if(a%b==0)
            {
                break;
            }
        }

        if(b==a)
        {
            printf("\t%d",a);
        }
    }

}