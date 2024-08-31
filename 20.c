#include<stdio.h>
int main()
{
int a,b,c,o;
printf("Value of a=");
scanf("%d",&a);
printf("value of b=");
scanf("%d",&b);
printf("Operator");
scanf("%d",&o);
switch(o)
{
case 1 :
c=a+b;
printf("\n Result= %d",c);
break;

case 2 :
c=a-b;
printf("\n Result= %d",c);
break;

case 3 :
c=a*b;
printf("\n Result= %d",c);
break;

case 4 :
c=a/b;
printf("\n Result= %d",c);
break;

default:
printf("Invalid operation");
break;
}
}