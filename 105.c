#include<stdio.h>
#include<string.h>

void per(char *s, int x, int y);
void swap(char *s1, char *s2);

int main()
{
    char a[10];

    printf("Enter the String: ");
    fgets(a, 10, stdin);

   
    a[strcspn(a, "\n")] = '\0';

    int b = strlen(a);

    printf("\nAll Possible Permutations for entered string:\n");

    per(a, 0, b - 1);

    return 0;
}

void per(char *s, int x, int y)
{
    if(x == y)
    {
        printf("\n%s", s);  
    }
    else
    {
        for(int i = x; i <= y; i++)
        {
            swap((s + x), (s + i));  
            per(s, x + 1, y);  
            swap((s + x), (s + i));  
        }
    }
}

void swap(char *s1, char *s2)
{
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
