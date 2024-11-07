#include<stdio.h>
int main()
{
   int  t=15,i,z=0;

   long long int n;

   long long int temp=n;

   int a[t];

   printf("Enter the number N = ");
   scanf("%lld",&n);

   for( i=0;i<t&&n>0;i++)
   {
    a[i]=n%10;
    n=n/10;
   }

   for(int j=0;j<i;j++)
   {

    if(temp%(a[j])==0)
    {
        printf("\n Position %d have Element %d divides N perfectly",(i-j),a[j]);

        z++;
    }

   }

   printf("\n Total number of positions dividing N perfectly = %d",z);

   return 0;

}