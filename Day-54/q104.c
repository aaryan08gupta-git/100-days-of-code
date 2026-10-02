#include <stdio.h>

int main()
{
    int n, x, i;
    int leftSum, rightSum;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        for (i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        for (i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum)
        {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
