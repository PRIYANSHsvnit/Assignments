#include<stdio.h>
int main()
{
    float d,h,m,s;
    printf("Time in seconds");
    scanf("%f",&s);
    m=(s)/60;
    h=(m)/60;
    d=(h)/24;
    printf("Time in minutes= %f Time in hours= %f Time in Days= %f",m,h,d);
}
