#include<stdio.h>
int main()
{
float a,b,c,s,Ar2;
printf("Enter the lenght of sides in metre:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
printf("Semi perimetre = %f",s);
Ar2=s*(s-a)*(s-b)*(s-c);
printf("Area's Square in sq. metre = %f", Ar2);
}
