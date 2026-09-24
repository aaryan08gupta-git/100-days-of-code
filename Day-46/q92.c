#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (count[str[i] - 'a'] == 1)
            {
                printf("%c\n", str[i]);
                return 0;
            }

            count[str[i] - 'a']++;
        }
    }

    printf("No repeating character\n");

    return 0;
}
