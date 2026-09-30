#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int total = 0;
    int leftSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (leftSum == total - leftSum - arr[i])
        {
            printf("%d\n", i);
            return 0;
        }

        leftSum = leftSum + arr[i];
    }

    printf("-1\n");

    return 0;
}
