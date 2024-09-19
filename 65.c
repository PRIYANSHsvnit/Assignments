#include<stdio.h>
int main()
{
    int a[3][3],temp;

    printf("Enter Matrix Elements = ");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    printf("\nMatrix Before Its Transpose = \n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix after its Transpose = \n");

    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }  
    
     
}