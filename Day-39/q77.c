#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int flag = 1;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            if (a[i][i] == a[j][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
