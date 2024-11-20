#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *a[10];

    for(int i=0;i<5;i++)
    {
        a[i]=(char*)malloc(10*sizeof(char));
    }

    char temp[10];

    printf("Enter strings = ");

    for(int i=0;i<5;i++)
    {
        gets(a[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((strcmp(a[i],a[j])>0))
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }

    printf("\n Sorted Strings = \n");

    for(int i=0;i<5;i++)
    {
        printf("\n%s",a[i]);
    }

    return 0;

}