#include<stdio.h>
int main()
{
float a,b,c,s,Ar2;
printf("Enter the lenght of sides in metre:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
printf("\nSemi perimetre = %f",s);
Ar2=s*(s-a)*(s-b)*(s-c);
printf("\nArea's Square in sq. metre = %f", Ar2);
}
