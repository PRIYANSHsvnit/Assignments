#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *p;
    char a;
    int count=0;

    p=fopen("C:\\Users\\cubes\\Downloads\\FH1.txt","r");

    while ((a = getc(p)) != EOF)
    {
        printf("%c",a);
        switch(a)
        {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
                      count++;
                      break;
        }
        
    }

    fclose(p);

    printf("\n Number Of Vowels in the File opened = %d",count);

    return 0;

}