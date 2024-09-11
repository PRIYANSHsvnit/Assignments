#include<stdio.h>
int main()
{
	int a=1,s=1,n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	for(a=1;(a*a)<=n;a=a+1,s=(a*a))
	{
	   printf("\tValue = %d",s);
	}
}
