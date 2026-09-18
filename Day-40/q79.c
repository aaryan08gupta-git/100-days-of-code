#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j, sum;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (sum = 0; sum <= rows + cols - 2; sum++)
    {
        for (i = sum; i >= 0; i--)
        {
            j = sum - i;

            if (i < rows && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
