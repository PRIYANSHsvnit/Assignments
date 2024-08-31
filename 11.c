#include<stdio.h>
int main()
{
    int ts,h,m,s;
    printf("Enter time in total seconds=\n");
    scanf("%d",&ts);

    h=ts/3600;
    m=(ts-(h)*3600)/60;
    s=(ts- (h)*3600 - m*60);
    
    printf("HR= %d MIN= %d SEC= %d",h,m,s);
    printf("\nTIME= %d %d %d",h,m,s);
}