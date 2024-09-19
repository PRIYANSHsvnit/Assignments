#include<Stdio.h>
int main()
{
    int m[10],pos=0,neg=0,zero=0;

    printf("Enter Integers = ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&m[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(m[i]>0)
        {
            pos++;
        }

         if(m[i]<0)
        {
            neg++;
        }

        if(m[i]==0)
        {
            zero++;
        }
    }

    printf("Number of Positive Integers Entered = %d\n",pos);
    printf("Number of Negetive Integers Entered = %d\n",neg);
    printf("Number of Zeroes Entered = %d\n",zero);
    
}