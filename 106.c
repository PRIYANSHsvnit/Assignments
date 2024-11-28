#include<stdio.h>

struct item
{
    char itname[10];
    int quan;
    int price;
};

void item(struct item *st);

int main()
{
    struct item a[5];

    printf("Enter Details Of Items:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter Item Name = ");
        scanf("%s", a[i].itname);

        printf("Enter Item Quantity = ");
        scanf("%d", &a[i].quan);

        printf("Enter Item Price = ");
        scanf("%d", &a[i].price);
    }

    item(a);

    return 0;
}

void item(struct item *st)
{
    for(int i = 0; i < 5; i++)
    {
        int amo = (st[i].price) * (st[i].quan);
        
        printf("\nTotal Amount of Item %s = %d\n", st[i].itname, amo);
    }
}

