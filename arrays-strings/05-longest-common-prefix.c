#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;

    int i = 0;

    while (strs[0][i] != '\0')
    {
        char current = strs[0][i];

        for (int j = 1; j < n; j++)
        {
            if (strs[j][i] != current)
            {
                printf("%.*s\n", i, strs[0]);
                return 0;
            }
        }

        i++;
    }

    printf("%s\n", strs[0]);

    return 0;
}