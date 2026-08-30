#include <stdio.h>

int main()
{
    int binary, digit;
    int complement = 0;
    int place = 1;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    while (binary != 0)
    {
        digit = binary % 10;

        if (digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's Complement = %d\n", complement);

    return 0;
}
