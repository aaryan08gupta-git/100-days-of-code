#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
