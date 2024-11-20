#include<stdio.h>
int length(char *string);
int main()
{
	char st[100];
	
	printf("Enter Text line = ");
	gets(st);
	
	int len = length(st);
	
	printf("Length of String = %d",len);
	
	return 0;
}

int length(char *string)
{
	int t=0;
	
	while(string[t]!='\0')
	{
		t++;
	}
	
	return t;
}