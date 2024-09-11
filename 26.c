#include<stdio.h>
int main()
{
	int a=1,so=0,se=0,n;//se= sum of even numbers  so= sum of odd numbers
	printf("enter the value of N = ");
	scanf("%d",&n);
    while(a<=n)
    {
    	if(a%2==0)
    	{
    		se= (se) + a;
    		a=a+1;
		}
		else
		{
			so=(so)+a;
			a=a+1;
		}
		
	}
	printf("Sum of even numbers = %d",se);
	printf("\nSum of odd numbers = %d",so);
}
