#include<stdio.h>
int main()
{
int a,b,c,s,Ar2;
printf("Enter the lenght of sides in metre:");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
printf("Semi perimetre = %d",s);
Ar2=s*(s-a)*(s-b)*(s-c);
printf("Area's Square in sq. metre = %d", Ar2);
}