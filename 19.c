#include<stdio.h>
void main()
{
    char z;
    printf("Enter any character =\n");
    scanf("%c",&z);
    (z>=97&&z<=122)?
    printf("Character is in lowercase\n"):
    printf("character is not in lowercase\n");
}