#include<stdio.h>
int main()
{
    int n,z;

    printf("Enter the size of array = ");
    scanf("%d",&n);
    
    int a[n];

    printf("\n Enter the Array = ");

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
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                z=a[j];
                a[j]=a[j+1];
                a[j+1]=z;
            }
        }
    }

    printf("\n Sorted Array = ");

    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}