#include<stdio.h>
#include<time.h>
int main()
{
    int a,z,i;

    time_t now;
    time(&now);
    
    z=(int)now % 60;

    printf("%d",z);

    for(int i=0;;i++)
    {
        printf("\nEnter number = ");
        scanf("%d",&a);

        if(a==z)
        {
            printf("\n You gussed right , The no. is = %d",a);
            break;
        }

        else 
        {
            printf("\n You gussed wrong , try again ");
        }
    }
}