#include<stdio.h>
int main()
{
    int a,b,n,max,min;
    

    printf("Numbers Till = ");
    scanf("%d",&n);

    printf("Enter Numbers = ");
    scanf("%d",&a);

    max=min=a;

    for(int i=0;i<(n-1);i++)
    {
        scanf("%d",&a);

        if(a>max)
        {
            max=a;
        }

        if(a<min)
        {
            min=a;
        }


    }

    printf("\n MAX = %d",max);
    printf("\n MIN = %d",min);


}