#include<Stdio.h>
int main()
{
    int a[10],temp;

    printf("Enter values for array a = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }

    printf("\n Reversed Array a = ");

    for(int i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }

}