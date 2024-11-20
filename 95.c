#include<stdio.h>
int main()
{
    struct employee
    {
        int empn;
        char name[30];
        int salary;
    } emp[5],(*p);

    p=emp;

    printf("Enter Employee Number , Name , Salary of the Employee = ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&((p+i)->empn));
        scanf("%s",((p+i)->name));
        scanf("%d",&((p+i)->salary));
    }

    printf("\n Enployes Details = \n");

    for(int i=0;i<5;i++)
    {
        printf("\n Employee Number = %d",((p+i)->empn));
        printf("\t Employee Name = %s",((p+i)->name));
        printf("\t Employee salary = %d",((p+i)->salary));
    }

    return 0;

}