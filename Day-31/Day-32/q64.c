#include <stdio.h>

int main()
{
    int num, digit;
    int count[10] = {0};
    int i, max = 0, answer = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            answer = i;
        }
    }

    printf("Most occurring digit = %d\n", answer);

    return 0;
}
