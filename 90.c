#include<Stdio.h>
#include<String.h>
int main()
{
    char st[100];

    printf("Enter the String ST = ");
    gets(st);

    char *p = &st[0];

    int i=0;

    while((*(p+i))!='\0')
    {
        i++;
    }

    printf("\n Length of String ST including spaces between words = %d",i);

    int len=0,j=0;
    
    char *q = &st[0];
    
    while((*(q+j))!='\0')
    {
        if(*(q+j)!=' ')
        {
            len++;
        }

        j++;
    }

    printf("\n Length of String ST not including spaces between words = %d",len);

}