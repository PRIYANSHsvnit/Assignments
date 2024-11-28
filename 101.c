#include<stdio.h>
int main()
{
    FILE *p;
    char a;

    p=fopen("C:\\Users\\cubes\\Downloads\\LNMIITSTUDENT.dat","w");

    printf("\nEnter Information to enter in File = \n");

    while((a=getchar())!='\n')
    {
        putc(a,p);
    }

    fclose(p);

    return 0;

}