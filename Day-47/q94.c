#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[100];
    char longest[100] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, 200, stdin);

    while (1)
    {
        if (sentence[i] != ' ' &&
            sentence[i] != '\n' &&
            sentence[i] != '\0')
        {
            word[j] = sentence[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (j > strlen(longest))
            {
                strcpy(longest, word);
            }

            j = 0;
        }

        if (sentence[i] == '\0')
        {
            break;
        }

        i++;
    }

    printf("Longest word = %s\n", longest);

    return 0;
}
