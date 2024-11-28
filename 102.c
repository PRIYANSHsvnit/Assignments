#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *p;
    char a;
    int lines=0,count=0,word=0,l=0;

    p=fopen("C:\\Users\\cubes\\Downloads\\Assignment.txt","r");

    while((a = getc(p)) != EOF)
    {
         int b=0;

         if(a!=' '&&a!='\n')
        {
            if(l==0)
            {
                word++;
                l=1;
            }
        }

        else
        {
            l=0;
        }

        if(a=='\n')
        {
            lines++;
        }

        if(a!=' '&&a!='\n')
        {
            count++;
        }

    }

    printf("\nNumeber Of lines in text file = %d\n",(lines + 1));
    printf("\nNumeber Of characters in text file = %d\n",(count));
    printf("\nNumeber Of words in text file = %d\n",(word));

    return 0;

}