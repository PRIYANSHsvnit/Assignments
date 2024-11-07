#include<stdio.h>
int main()
{
    int a[5],b[7],m[5+7],count=0;

    printf("Enter Arrray A = ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Arrray B = ");

    for(int i=0;i<7;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i=0,j=0,k=0;i<5 || j<7;k++)
    {
        if((a[i]<b[j]) && i<5 && j<7)
        {
            m[k]=a[i];
            i++;
        }

        else if(a[i]==b[j] && i<5 && j<7)
        {
            m[k]=a[i];
            i++;
            j++;
        }

        else 
        {
            m[k]=b[j];
            j++;
        }

        count++;

    }

    printf("\n New sorted Array = ");

    for(int k=0;k<count;k++)
    {
        printf("\n %d",m[k]);
    }

    return 0;
    
}