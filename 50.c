#include<stdio.h>
int main()
{
    for(char i=65;i<=69;i++)
    {
        for(char j=65;j<=i;j++)
        {
          printf("%c",i);
        }
        printf("\n");
    }
}