#include<stdio.h>
void vowel(char ch);
int main()
{
    char ch;

    printf("Enter the Character = ");
    scanf("%c",&ch);

    vowel(ch);

}

void vowel(char ch)
{
   // char a,e,i,o,u;

    if(ch =='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("\n Entered Character is Vowel");
    }

    else
    {
        printf("\n Entered Character is Not Vowel");
    }
    
}