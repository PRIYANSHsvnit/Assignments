#include<stdio.h>
int main()
{
	int a,s=0,q,z;
	printf("Enter the value of Number = ");
	scanf("%d",&a);
	z=a;
	while(a>0)
	{
		q=a%10;
		s=(s*10)+q;
		a=a/10;
	}
	if(s==z)
	{
	  printf("\nThe number is palindrome ");	
	}
	else
	{
		printf("\nThe number is not palindrome ");
	}
	
}
