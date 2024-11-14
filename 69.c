#include<stdio.h>
int main()
{
    int a[10],s,i;
    printf("Enter the array = ");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the element to search = ");
    scanf("%d",&s);
    
    for( i=0;i<10;i++)
    {
         s;
        if(a[i]==s)
        {
            printf("\n The number = %d is found and have place in array = %d",a[i],i);
            break;
        }
    }
    
    return 0;
}
