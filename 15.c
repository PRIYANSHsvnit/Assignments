#include<stdio.h>
void main()
{
    int eco,eng,history,posc,hindi,marks;
    printf("Enter marks of economics/20= ");
    scanf("%d",&eco);

    printf("Enter marks of english/20= ");
    scanf("%d",&eng);

    printf("Enter marks of History/20= ");
    scanf("%d",&history);

    printf("Enter marks of Political Science/20= ");
    scanf("%d",&posc);

    printf("Enter marks of Hindi/20= ");
    scanf("%d",&hindi);

    marks=eco+eng+history+posc+hindi;

    printf("Total Marks= %d",marks);

    if(marks>=80 && marks<=100)
   { printf("Grade A");}

    else if(marks>=70 && marks<80)
    {printf("Grade B");}

    else if(marks>=60 && marks<70)
    {printf("Grade C");}

    else
    {printf("\nFail hai aap");}

    
}