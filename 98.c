#include<Stdio.h>
#include<stdlib.h>
int main()
{
    int *a[3],*b[3],*c[3],sum;

    for(int i=0;i<3;i++)
    {
        a[i]=(int*)malloc(3*sizeof(int));
    }

    for(int i=0;i<3;i++)
    {
        b[i]=(int*)malloc(3*sizeof(int));
    }

    for(int i=0;i<3;i++)
    {
        c[i]=(int*)malloc(3*sizeof(int));
    }

    printf("\nEnter Matrix A = \n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(a+i) + j));
        }
    }

    printf("\nEnter Matrix B = \n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(b+i) + j));
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=0;
            
            for(int k=0;k<3;k++)
            {
                sum += (*(*(a+i) + k)) * (*(*(b+k) + j)) ; 
            }
            (*(*(c+i) + j)) = sum ;
        }
    }

    printf("\nMultiplied Matrix of A and B = \n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(c+i) + j));
        }

        printf("\n");

    }

    return 0;

}