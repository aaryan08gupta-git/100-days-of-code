#include <stdio.h>

int main()
{
    int a[100];
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
