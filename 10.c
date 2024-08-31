#include<stdio.h>
int main()
{
    int m,p,c,e,cm;
    printf("Marks of Maths(out of 200)=");
    scanf("%d",&m);
    printf("Marks of Physics(out of 200)=");
    scanf("%d",&p);
    printf("Marks of Chemistry(out of 200)=");
    scanf("%d",&c);
    printf("Marks of Entrance Exam(out of 100)=");
    scanf("%d",&e);
    cm=(m+p+c)/2 + e;
    printf(" Cutoff Marks = %d",cm);
}