#include<stdio.h>
#include<string.h>
int count[26];
int main()
{
    int n,t,c=0,j=1;

    printf("Enter number of rocks = ");
    scanf("%d",&n);

    t=n;

    char s[101];

    printf("Enter elements = ");

    while(t>0)
    {
        scanf("%s",&s);

        for(int i=0;i<strlen(s);i++)
        {
            if(count[s[i]-97]==j-1)
            {
                count[s[i]-97]=j;
            }
        }

        j++;
        t--;

    }

    for(int i=0;i<26;i++)
    {
        if(count[i]==n)
        {
            c++;
        }
    }

    printf("\n%d",c);

    return 0;
    
}