#include <stdio.h>
int main()
{
    long int t, u, v;
    int k[100000], l[100000];
    long int a, b, max, min, sum = 0, n, m;

    printf("Enter Number of Jars = ");
    scanf("%ld", &n);

    printf("\n Enter Number of operations to be perform = ");
    scanf("%ld", &m);

    for (long int j = 1; j <= n; j++)
    {
        l[j] = 0;
    }

    for (long int i = 1; i <= m; i++)
    {
        printf("\n Enter a and b = ");
        scanf("%ld%ld", &a, &b);

        printf("\n Number of candies = ");
        scanf("%d", &k[i]);

        for (long int j = a; j <= b; j++)
        {
            l[j] += k[i];
        }
    }

    for (long int i = 1; i <= n; i++)
    {
        sum = sum + l[i];
    }

    printf("\n Average Number of Candies after %d operations = %ld",m,(sum/n));

    return 0;

}