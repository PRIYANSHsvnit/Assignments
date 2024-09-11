#include<Stdio.h>
int main()
{
    float a=1,b,z,s=0,n;
    printf("Enter the value of N = ");
    scanf("%f",&n);

    for(a;a<=n;a++)
    {
        b=1;

        for(z=1;z<=a;z++)
        {
            b=b*z;
        }

        s= s + (a/b);
    }

    printf("\n Sum of series = %f",s);
}