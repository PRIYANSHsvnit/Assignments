#include<stdio.h>
#include<string.h>
int main()
{
	char w[101],z[101];
	printf("Enter the Word = ");
	gets(w);
	
	strcpy(z,w);
	
    long int t=strlen(w);
	
	for(long int i=t-1;i>=0;i++)
	{
		if(w[i]>w[i-1])
		{
			int temp=w[i];
			w[i]=w[i-1];
			w[i-1]=temp;
		
			break;
		}
		
		else
		{
			continue;
		}
	}
	
	int u=strcmp(z,w);
	
	if(u==0)
	{
		printf("\n No Answer ");
	}
	
	else
	{
		printf("\n The Lexographically Word is = ");
		puts(w);
	}
	
	return 0;
	
}
