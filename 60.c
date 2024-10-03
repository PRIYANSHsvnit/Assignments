#include<stdio.h>
#include<limits.h>
int main()
{
    int n,b;

    printf("Enter the size of array = ");
    scanf("%d",&n);

     int a[n];

    printf("\nEnter Array = ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Unsorted Array = ");

    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }


    for(int i=0;i<n-1;i++)
    {
        int idx=-1;
        int min= INT_MAX;

        for(int j=i;j<=n-1;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                idx=j;
            }
        }

        int t=a[idx];
        a[idx]=a[i];
        a[i]=t;

    }

    printf("\n Sorted Array = ");

    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
    
}