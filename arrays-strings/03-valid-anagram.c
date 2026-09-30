#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "anagram";
    char t[] = "nagaram";

    int count[26] = {0};

    if (strlen(s) != strlen(t))
    {
        printf("false\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("false\n");
            return 0;
        }
    }

    printf("true\n");

    return 0;
}