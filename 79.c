#include<stdio.h>

void interchange(int x, int y);
int main()
{
    int x,y;
    printf("Enter the Numbers = ");
    scanf("%d%d",&x,&y);

    printf("x = %d y = %d",x,y);
    
    interchange(x,y);
    
}

void interchange(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("\nAfter Interchange between Numbers");

    printf("\nX = %d",x);

    printf("\nY = %d",y);

}
