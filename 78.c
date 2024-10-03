#include<stdio.h>
#include<math.h>

void armstrong(int a);
int main()
{
    int a;
    printf("Enter the Number = ");
    scanf("%d",&a);
    
    armstrong(a);
    
}

void armstrong(int a)
{
    int temp=a,b,c=0;
   while(a>0)
   {
       b=a%10;
       c= c + pow(b,3);
       a=a/10;
   }
   
  if(c==temp)
   {
       printf("\n Number is  Armstrong ");
   }
   else
   {
       printf("\n Number is not Armstrong ");
   }
}
