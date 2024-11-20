#include<stdio.h>
int main()
{
    char a[30];
    char *p;

    p=a;

    printf("Enter the String = ");
    gets(a);

    int count=0;

    while((*p)!='\0')
    {
        switch(*p)
        {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' : count++;
        }
        p++;
    }

    printf("\n Number of vowels in String Entered = %d",count);

    return 0;

}