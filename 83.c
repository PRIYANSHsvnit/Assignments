#include<Stdio.h>
int arraymax(int a[5]);
int main()
{
    int a[5],q;

    printf("Enter the array = ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Display of array entered = ");
    
    for(int i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }

    q=arraymax(a);

    printf("\nMAX from Array Entered = %d ",q);

}

int arraymax(int a[5])
{
    int max=a[0];

    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    return max;
}