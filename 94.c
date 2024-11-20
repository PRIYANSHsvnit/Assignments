#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];

    printf("Enter String A = ");
    gets(a);

    char *p= &a[0],*q=&b[0];
    int j;

    while((*(p+j))!='\0')
    {
        j++;               // Length of String A
    }

    for(int i=0;i<j;i++)
    {
        *(q+i) = *(p+j-i-1);
    }

    printf(" \nString B = ");

    puts(b);

    return 0;

}