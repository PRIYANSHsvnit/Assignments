#include<stdio.h>
int main()
{
    FILE *p;
    char a;
    int n,rn,marks;
    char name[10];

    p=fopen("C:\\Users\\cubes\\Downloads\\LNMIITSTUDENT.java","w");
    
    printf("Enter Number Of Students = ");
    scanf("%d",&n);

    printf("\n Enter Students Name , Roll No. , Total Marks = \n");

    for(int i=1;i<=n;i++)
    {
        fscanf(stdin,"%s %d %d",name,&rn,&marks);
        fprintf(p,"%s %d %d\n",name,rn,marks);
    }

    fclose(p);

    return 0;

}