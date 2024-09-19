#include<Stdio.h>
int main()
{
    int a[10],b[10],temp;

    printf("Enter the values for Array a = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the values for Array b = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i=0;i<10;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }

    printf("\n Modified Array a = ");

    for(int i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }

    printf("\n Modified Array b = ");

    for(int i=0;i<10;i++)
    {
        printf("\n%d",b[i]);
    }
}