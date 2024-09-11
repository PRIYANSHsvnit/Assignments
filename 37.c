#include<stdio.h>
int main()
{
	int a,s,n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	for(a=2;a<=n;a=a+2)
	{
	   printf("\tValue = %d",a);
	}
}
