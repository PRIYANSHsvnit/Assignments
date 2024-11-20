#include<stdio.h>
struct student
{
	char name[100]; // name of Student
	int rn; // roll number of the student
	float marks; // Total marks of The Student
};
int function( struct student *st);
int main()
{
	struct student st[10];
	int i;
	
	printf("\n Enter Name , Roll Number and Marks of the Student = ");
	
	for( i=0;i<10;i++)
	{
		scanf("%s",st[i].name);
		scanf("%d%f",&st[i].rn,&st[i].marks);
	}

	function(st);
	
}
int function( struct student *st)
{
	int i;
	
	printf("\n Information of that Students who got Marks Greater than 500 ");
	
	for( i=0;i<10;i++)
	{
		if(st[i].marks>500)
		{
			printf("\n Name = %s",st[i].name);
			printf("\n Roll Number = %d",st[i].rn);
			printf("\n Marks = %f",st[i].marks);
		}
	}
	
}