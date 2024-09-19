#include<stdio.h>
int main()
{
    int m[10],even=0,odd=0;

    printf("Enter Integers = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&m[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(m[i]%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }

    printf("Total number of even Integers = %d\n",even);
    printf("Total number of odd Integers = %d\n",odd);
}