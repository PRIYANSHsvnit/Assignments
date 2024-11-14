#include<stdio.h>
#include<string.h>
int main()
{
    char w[101];

    long int i,j; 

    printf("Enter the Word = ");
    gets(w);

    long int t = strlen(w);

    for(i=t-2;(w[i]>w[i+1])&& i>=0 ;i--)
    {
        continue;
    }

    if(i == -1)
    {
        printf("\n No Answer ");
    }

    else
    {
        for(j=t-1;(w[j]<=w[i]) && j>i ;j--)
        {
            continue;
        }
    }

    char temp = w[j];
    w[j]=w[i];
    w[i]=temp;

    for(long int k=i+1;k<= (i+t)/2 ;k++)
    {
        char u=w[k];
        w[k]=w[i+t-k];
        w[i+t-k]=u;
    }

    printf("\n The Lexographically word of given word is = ");
    puts(w);

    return 0;
    
}