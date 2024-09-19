#include<stdio.h>
int main()
{
    int fmax,smax;
    int a[10];

    fmax=smax=a[0];

    printf("Enter Integers = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]>fmax)
        {
            fmax=a[i];
        }

        if(a[i]>smax&&a[i]<fmax)
        {
            smax=a[i];
        }

    }

    printf("\n First MAX = %d",fmax);
    printf("\n Second MAX = %d",smax);


}