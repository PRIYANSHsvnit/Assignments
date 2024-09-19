#include<Stdio.h>
int main()
{
    int a[10],b[10],c[10];

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
        c[i]= a[i] + b[i] ;
        
        printf("\n Sum of array a and b %d = %d",i,c[i]);
    }

}