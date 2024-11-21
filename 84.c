#include<stdio.h>
struct book
{
    char bn[100];// book name
    int nop;// number of pages
    float price;
};
int main()
{
    struct book a ;
    printf("\n Enter Book Name = ");
    scanf("%[^\n]s",a.bn);
    
    printf("\n Enter Number of Pages in Book = ");
    scanf("%d",&a.nop);
    
    printf("\n Enter Price of the Book = ");
    scanf("%f",&a.price);
    
    printf("\n Entered Book Details = ");
    
    printf("\n\n Book's Name = %s ",a.bn);
    printf("\n Number of Pages in Book = %d ",a.nop);
    printf("\n Book's Price = %f ",a.price);
    
    return 0;
    
}
