#include<stdio.h>
int main()
{
    int d,h,m,s;
    printf("Time in seconds");
    scanf("%d",&s);
    m=(s)/60;
    h=(m)/60;
    d=(h)/24;
    printf("Time in minutes= %d Time in hours= %d Time in Days= %d",m,h,d);
}