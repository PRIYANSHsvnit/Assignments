#include<stdio.h>
int main()
{
    char st[100];

    printf("Enter the String ST = ");
    gets(st);

    char *q = &st[0];
    int j=0, word =0;

    while((*(q+j))!='\0')
    {
        if((*(q+j)) == ' ')
        {
            word++;
        }
        j++;
    }

    printf("\n Number of words in the String Entered = %d",(word + 1));

    return 0;

}