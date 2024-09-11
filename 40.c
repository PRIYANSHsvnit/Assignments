#include<Stdio.h>
int main()
{
    int a,b=0;
    
    do
    {
        printf("Enter the number = ");
        scanf("%d",&a);

        if(a>=0)
        {
            b=b+a;
        }
    }while(a>=0);
    printf("Sum of non negetive numbers = %d",b);
}