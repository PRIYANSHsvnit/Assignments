#include<stdio.h>
int main()
{
    int h,m,s,ts;
    printf("Enter time in HR MIN SEC respectively = ");
    scanf("%d%d%d",&h,&m,&s);
    printf("HR= %d MIN= %d SEC= %d",h,m,s);
    
    ts=(h)*3600 + (m)*60 + s;
    printf("Time in total seconds= %d",ts);
}