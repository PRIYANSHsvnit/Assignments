#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers respectively");
    scanf("%d%d%d",&a,&b,&c);
    printf(" Value of a= %d b= %d c= %d",a,b,c);
    if(a>b)
    {
        if(a>c)
        printf("\n Max is %d",a);

        else
        printf("\n Max is %d",c);
    }

    else
    {
        if(b>c)
        printf("\n Max is %d",b);

        else 
        printf("\n Max is %d",c);
    }
    return 0;
}