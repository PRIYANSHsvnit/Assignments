#include<stdio.h>
int main()
{
    int max,min;
    int a[3][3];

    printf("Enter Matrix Elements = ");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    max=min=a[0][0];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        if(a[i][j]>max)
        {
            max=a[i][j];
        }

        if(a[i][j]<min)
        {
            min=a[i][j];
        }
    }

    }

    printf("\n Maximum = %d",max);
    printf("\n Minimum = %d",min);


}