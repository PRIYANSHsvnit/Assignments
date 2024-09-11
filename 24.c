#include<stdio.h>
int main()
{
	float x,n,fn,q=1;
	printf("Enter the value of x = ");
	scanf("%f",&x);
	printf("Enter the value of n = ");
	scanf("%f",&n);
	if(n==1)
	{
		fn=1+x;
	}
	else if(n==2)
	{
		fn=1+(x)/n;
	}
	else if(n==3)
	{
		for(int i=1;i<=n;i++)
		{
			q=(q)*x;
		}
		fn= 1 + q ;
	}
	else 
	{
		fn= 1+(x)*n;
	}
	printf("\nThe value of Function(x,y) = %f",fn);
}
