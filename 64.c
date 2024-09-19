#include<stdio.h>
int main()
{
    int a[3][3],sum=0;

     printf("Enter matrix elements = ");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }

    for(int i=0;i<3;i++)
    {
        int j=0,sum=0;
        for(j;j<3;j++)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of elements of row  %d = %d\n",(i+1),sum);
    }
}