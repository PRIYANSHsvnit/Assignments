#include<stdio.h>
int main()
{
char c;
printf("Enter the character");
scanf("%c",&c);
if(c>='A' && c<='Z')
{ printf("\n Letter is capital");}
else if(c>='a' && c<='z')
{ printf("\n Letter is small");}
else if(c>='0' && c<='9')
{ printf("\n Letter is numeric");}
else
{ printf("\n special character");}
}