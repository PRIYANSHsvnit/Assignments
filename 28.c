#include<stdio.h>
int main()
{
	int a,s=0,q,z,t;
	printf("Enter the number = ");
	scanf("%d",&a);
	t=a;
	while(a>0)
	{
		q=a%10;
		z=(q*q*q);
		s=s+z;
		a=a/10;
	}
	if(s==t)
	{printf("Number is armstrong");}

    else
   {printf("Number is not armstrong");}
}
