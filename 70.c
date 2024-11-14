#include<stdio.h>
int main()
{
    int a[10],s,occ=0;
    printf("Enter the array = ");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the element to search = ");
    scanf("%d",&s);
    
    for(int i=0;i<10;i++)
    {
        if(a[i]==s)
        {
            occ=occ+1;
        }
    }
    
    printf("\n Occurence of the element searching for = %d",occ);
    
    return 0;
}
